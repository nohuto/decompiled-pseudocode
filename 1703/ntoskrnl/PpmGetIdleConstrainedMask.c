/*
 * XREFs of PpmGetIdleConstrainedMask @ 0x140227C58
 * Callers:
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     PpmIdlePrepare @ 0x1400F60C0 (PpmIdlePrepare.c)
 *     PpmEstimateIdleDuration @ 0x14015BDC0 (PpmEstimateIdleDuration.c)
 *     PoExecuteIdleCheck @ 0x1402275F0 (PoExecuteIdleCheck.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

char __fastcall PpmGetIdleConstrainedMask(_DWORD *a1)
{
  char v2; // di
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  unsigned __int16 v6; // cx
  __int64 v7; // r10

  a1[1] = 0;
  *a1 = 1310721;
  v2 = 0;
  memset(a1 + 2, 0, 0xA0uLL);
  if ( KeNumberNodes )
  {
    v3 = KeNodeBlock;
    v4 = (unsigned __int16)KeNumberNodes;
    do
    {
      v5 = *v3;
      v6 = *(_WORD *)(*v3 + 144);
      v7 = *(_QWORD *)(*v3 + 72);
      if ( *(_WORD *)a1 <= v6 )
        *(_WORD *)a1 = v6 + 1;
      *(_QWORD *)&a1[2 * v6 + 2] |= v7;
      if ( *(_QWORD *)(v5 + 72) )
        v2 = 1;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
