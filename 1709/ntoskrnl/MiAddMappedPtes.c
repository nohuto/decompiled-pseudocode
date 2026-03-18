/*
 * XREFs of MiAddMappedPtes @ 0x1404F7940
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x1404F5F10 (MiMapSystemImage.c)
 * Callees:
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     MiGetSubsectionDriverProtos @ 0x1400B6F28 (MiGetSubsectionDriverProtos.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5)
{
  unsigned __int64 v6; // r15
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned int v11; // r12d
  unsigned __int64 v12; // r14
  unsigned int v13; // r8d
  __int64 SubsectionDriverProtos; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned __int64)&a1[a2];
  v8 = a1;
  v9 = MiOffsetToProtos((_DWORD *)a3, *a4, &v21);
  if ( !v9 )
    return 3221225503LL;
  v11 = a5;
  v12 = v21;
  if ( (*(_DWORD *)(a3 + 56) & 0x420) != 0 )
    goto LABEL_8;
  v13 = 136;
  if ( a5 != -1 )
    v13 = 264;
  result = MiAddViewsForSection((__int64 *)v9, v21 + a2, v13);
  if ( (int)result >= 0 )
  {
LABEL_8:
    if ( (*(_BYTE *)(v9 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
      goto LABEL_17;
    if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
    {
      SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v9);
      if ( SubsectionDriverProtos )
        goto LABEL_20;
    }
    v15 = *(_QWORD *)(v9 + 8);
    v16 = v15 + 8 * v12;
    v17 = v15 + 8LL * *(unsigned int *)(v9 + 44);
    while ( 1 )
    {
      if ( (unsigned __int64)v8 >= v6 )
        return 0LL;
      if ( v16 >= v17 )
      {
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v9 )
        {
          if ( v16 < *(_QWORD *)(a3 + 136)
                   + 8
                   * (*(unsigned int *)(*(_QWORD *)a3 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a3 + 12LL) & 0x3FF) << 32)) )
          {
            do
            {
              *v8 = MiMakePrototypePteDirect(v16);
              if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow();
              if ( (unsigned __int64)++v8 >= v6 )
                break;
              v16 = v19 + 8;
            }
            while ( v16 < v20 );
          }
          return 0LL;
        }
        v16 = *(_QWORD *)(v9 + 8);
        if ( (*(_BYTE *)(v9 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
        {
LABEL_17:
          SubsectionDriverProtos = MiGetSharedProtos(a3, v11, v9);
LABEL_20:
          v16 = *(_QWORD *)(SubsectionDriverProtos + 32);
          goto LABEL_21;
        }
        if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
        {
          SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v9);
          if ( SubsectionDriverProtos )
            goto LABEL_20;
        }
      }
LABEL_21:
      *v8 = MiMakePrototypePteDirect(v16);
      if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      ++v8;
      v16 = v18 + 8;
    }
  }
  return result;
}
