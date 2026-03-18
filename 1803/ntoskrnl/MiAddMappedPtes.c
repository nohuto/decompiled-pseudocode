/*
 * XREFs of MiAddMappedPtes @ 0x1404BC450
 * Callers:
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x1405FB30C (MiMapSystemImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
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
  __int64 PrototypePteDirect; // rax
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r10
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned __int64)&a1[a2];
  v8 = a1;
  v9 = MiOffsetToProtos((_DWORD *)a3, *a4, &v26);
  if ( !v9 )
    return 3221225503LL;
  v11 = a5;
  v12 = v26;
  if ( (*(_DWORD *)(a3 + 56) & 0x420) != 0 )
    goto LABEL_8;
  v13 = 136;
  if ( a5 != -1 )
    v13 = 264;
  result = MiAddViewsForSection((__int64 *)v9, v26 + a2, v13);
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
              if ( MiPteInShadowRange((unsigned __int64)v8) )
                MiWritePteShadow(v22, v21, v23);
              if ( (unsigned __int64)++v8 >= v6 )
                break;
              v16 = v24 + 8;
            }
            while ( v16 < v25 );
          }
          return 0LL;
        }
        v16 = *(_QWORD *)(v9 + 8);
        if ( (*(_BYTE *)(v9 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
        {
LABEL_17:
          SubsectionDriverProtos = MiGetSharedProtos(a3, v11, v9);
LABEL_20:
          v16 = *(_QWORD *)(SubsectionDriverProtos + 72);
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
      PrototypePteDirect = MiMakePrototypePteDirect(v16);
      *v8 = PrototypePteDirect;
      if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow((__int64)v8, PrototypePteDirect, v19);
      ++v8;
      v16 = v20 + 8;
    }
  }
  return result;
}
