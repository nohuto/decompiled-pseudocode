/*
 * XREFs of MiMapCfgBitMapSection @ 0x14044C9B0
 * Callers:
 *     MiCfgInitializeProcess @ 0x14049A54C (MiCfgInitializeProcess.c)
 * Callees:
 *     MmMapSecureViewOfSection @ 0x14047BC78 (MmMapSecureViewOfSection.c)
 */

__int64 __fastcall MiMapCfgBitMapSection(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  int v6; // r9d
  __int16 v8; // ax

  v4 = *(_QWORD *)(a1 + 1064);
  v6 = 0;
  if ( v4 )
  {
    v8 = *(_WORD *)(v4 + 8);
    if ( (v8 == 332 || v8 == 452) && a2 == qword_14036BFE0 )
      v6 = 1;
  }
  return MmMapSecureViewOfSection(a2, a1, a4, v6);
}
