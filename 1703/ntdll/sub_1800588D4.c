/*
 * XREFs of sub_1800588D4 @ 0x1800588D4
 * Callers:
 *     sub_1800072C4 @ 0x1800072C4 (sub_1800072C4.c)
 *     sub_180008414 @ 0x180008414 (sub_180008414.c)
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_1800211B0 @ 0x1800211B0 (sub_1800211B0.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180077230 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF7D0 (RtlSetUserFlagsHeap.c)
 *     sub_1801006CC @ 0x1801006CC (sub_1801006CC.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_180058A00 @ 0x180058A00 (sub_180058A00.c)
 *     sub_180058A20 @ 0x180058A20 (sub_180058A20.c)
 */

__int64 __fastcall sub_1800588D4(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // r13d
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  unsigned int v8; // edi
  unsigned __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int v13; // r9d
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  _DWORD *v16; // r8
  _DWORD *v17; // r10
  unsigned int v18; // edx

  v3 = *(_DWORD *)(a1 + 48);
  v6 = a2 % *(unsigned int *)(a1 + 56);
  v7 = a2 / *(unsigned int *)(a1 + 56);
  v8 = 1;
  sub_180058A00(a1, a1);
  if ( a3 )
  {
    while ( 1 )
    {
      v9 = (unsigned int)(*(_DWORD *)(a1 + 56) - v6);
      if ( a3 < v9 )
        LODWORD(v9) = a3;
      if ( !v3 )
      {
        v8 = *(_DWORD *)(a1 + 72) & 1;
        goto LABEL_6;
      }
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (unsigned __int8)sub_180058A20(a1, (unsigned int)v7) )
        {
          v11 = *(_QWORD *)(a1 + 8);
          v12 = *(_QWORD *)(v11 + 8LL * (unsigned int)v7);
          if ( v12 )
            break;
        }
      }
      if ( (*(_BYTE *)(a1 + 72) & 1) == 0 )
      {
        v8 = 0;
        goto LABEL_6;
      }
LABEL_19:
      LODWORD(v6) = 0;
      LODWORD(v7) = v7 + 1;
      a3 -= (unsigned int)v9;
      if ( !a3 )
        goto LABEL_6;
    }
    --v3;
    sub_180058A00(a1, *(_QWORD *)(v11 + 8LL * (unsigned int)v7));
    v13 = v9 + v6 - 1;
    if ( v13 < *(_DWORD *)(v12 + 8) )
    {
      if ( (unsigned int)v9 <= 1 )
      {
        if ( (_DWORD)v9 == 1 )
        {
          v14 = _bittest(*(const signed __int32 **)(v12 + 16), v6);
          goto LABEL_16;
        }
        goto LABEL_23;
      }
      v15 = *(_QWORD *)(v12 + 16);
      v16 = (_DWORD *)(v15 + 4 * ((unsigned __int64)(unsigned int)v6 >> 5));
      v17 = (_DWORD *)(v15 + 4 * ((unsigned __int64)v13 >> 5));
      if ( v16 == v17 )
      {
        v18 = 0xFFFFFFFF >> (32 - v9) << v6;
LABEL_31:
        v14 = (*v16 & v18) == v18;
LABEL_16:
        v8 &= -(v14 != 0);
        if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
          RtlReleaseSRWLockShared((volatile signed __int64 *)v12);
        if ( !v8 )
          goto LABEL_6;
        goto LABEL_19;
      }
      if ( (*v16 & (-1 << v6)) == -1 << v6 )
      {
        while ( ++v16 != v17 )
        {
          if ( *v16 != -1 )
            goto LABEL_23;
        }
        v18 = 0xFFFFFFFF >> ~(_BYTE)v13;
        goto LABEL_31;
      }
    }
LABEL_23:
    v14 = 0;
    goto LABEL_16;
  }
LABEL_6:
  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)a1);
  return v8;
}
