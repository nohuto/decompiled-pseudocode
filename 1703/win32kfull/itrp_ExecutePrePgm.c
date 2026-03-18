/*
 * XREFs of itrp_ExecutePrePgm @ 0x1C02D1810
 * Callers:
 *     fsg_RunPreProgram @ 0x1C02C8584 (fsg_RunPreProgram.c)
 * Callees:
 *     itrp_Execute @ 0x1C02D1328 (itrp_Execute.c)
 */

__int64 __fastcall itrp_ExecutePrePgm(_OWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int128 v7; // xmm1
  unsigned int v8; // ecx
  __int128 v9; // xmm0
  __int64 v10; // r8
  __int128 v11; // xmm1
  __int128 v12; // xmm0

  v4 = *(_OWORD *)(a3 + 48);
  v7 = *(_OWORD *)(a3 + 64);
  *(_WORD *)(a3 + 332) = 1;
  v8 = 0;
  *(_OWORD *)(a3 + 104) = v4;
  v9 = *(_OWORD *)(a3 + 80);
  *(_OWORD *)(a3 + 120) = v7;
  *(_QWORD *)&v7 = *(_QWORD *)(a3 + 96);
  *(_OWORD *)(a3 + 136) = v9;
  *(_QWORD *)(a3 + 152) = v7;
  v10 = *(_QWORD *)(a3 + 200);
  if ( v10 )
    v8 = itrp_Execute(a1, a2, v10, v10 + *(unsigned int *)(a3 + 208), a3, a4);
  if ( (*(_DWORD *)(a3 + 120) & 2) == 0 )
  {
    v11 = *(_OWORD *)(a3 + 120);
    *(_OWORD *)(a3 + 48) = *(_OWORD *)(a3 + 104);
    v12 = *(_OWORD *)(a3 + 136);
    *(_OWORD *)(a3 + 64) = v11;
    *(_QWORD *)&v11 = *(_QWORD *)(a3 + 152);
    *(_OWORD *)(a3 + 80) = v12;
    *(_QWORD *)(a3 + 96) = v11;
  }
  return v8;
}
