/*
 * XREFs of MiAddMappedPtes @ 0x1404976A0
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x1404B12D8 (MiMapSystemImage.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140097F34 (MiGetSubsectionDriverProtos.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5)
{
  unsigned __int64 v6; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned int v13; // r15d
  int v14; // r8d
  __int64 SubsectionDriverProtos; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  __int64 v19; // r10
  __int64 v20; // r10
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v6 = (unsigned __int64)&a1[a2];
  v8 = a1;
  v9 = MiOffsetToProtos((_DWORD *)a3, *a4, &v22);
  if ( !v9 )
    return 3221225503LL;
  v11 = v22;
  v12 = v22 + a2;
  v13 = a5;
  if ( (*(_DWORD *)(a3 + 56) & 0x420) != 0 )
    goto LABEL_8;
  v14 = 136;
  if ( a5 != -1 )
    v14 = 264;
  result = MiAddViewsForSection((volatile signed __int32 **)v9, v12, v14);
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
    v16 = *(_QWORD *)(v9 + 8);
    v17 = v16 + 8 * v11;
    v18 = v16 + 8LL * *(unsigned int *)(v9 + 44);
    while ( 1 )
    {
      if ( (unsigned __int64)v8 >= v6 )
        return 0LL;
      if ( v17 >= v18 )
      {
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v9 )
        {
          if ( v17 < *(_QWORD *)(a3 + 136)
                   + 8
                   * (*(unsigned int *)(*(_QWORD *)a3 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a3 + 12LL) & 0x3FF) << 32)) )
          {
            do
            {
              *v8 = MiMakePrototypePteDirect(v17);
              if ( MiPteInShadowRange((unsigned __int64)v8) )
                MiWritePteShadow();
              if ( (unsigned __int64)++v8 >= v6 )
                break;
              v17 = v20 + 8;
            }
            while ( v17 < v21 );
          }
          return 0LL;
        }
        v17 = *(_QWORD *)(v9 + 8);
        if ( (*(_BYTE *)(v9 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
        {
LABEL_17:
          SubsectionDriverProtos = MiGetSharedProtos(a3, v13, v9);
        }
        else
        {
          if ( (*(_DWORD *)(a3 + 56) & 0x20) == 0 )
            goto LABEL_21;
          SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v9);
          if ( !SubsectionDriverProtos )
            goto LABEL_21;
        }
LABEL_20:
        v17 = *(_QWORD *)(SubsectionDriverProtos + 32);
      }
LABEL_21:
      *v8 = MiMakePrototypePteDirect(v17);
      if ( MiPteInShadowRange((unsigned __int64)v8) )
        MiWritePteShadow();
      ++v8;
      v17 = v19 + 8;
    }
  }
  return result;
}
