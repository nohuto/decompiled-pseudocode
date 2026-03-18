/*
 * XREFs of InitLogQMsgEntry @ 0x1C01B2324
 * Callers:
 *     LogQMsg @ 0x1C01B2438 (LogQMsg.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

int __fastcall InitLogQMsgEntry(_OWORD *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rax

  *(_DWORD *)(a2 + 160) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_DWORD *)(a2 + 164) = (unsigned int)PsGetCurrentThreadId();
  *(_OWORD *)a2 = *a1;
  *(_OWORD *)(a2 + 16) = a1[1];
  *(_OWORD *)(a2 + 32) = a1[2];
  *(_OWORD *)(a2 + 48) = a1[3];
  *(_OWORD *)(a2 + 64) = a1[4];
  *(_OWORD *)(a2 + 80) = a1[5];
  *(_OWORD *)(a2 + 96) = a1[6];
  *(_OWORD *)(a2 + 112) = a1[7];
  *(_OWORD *)(a2 + 128) = a1[8];
  *(_OWORD *)(a2 + 144) = a1[9];
  memset((void *)(a2 + 176), 0, 8LL * Count);
  *(_DWORD *)(a2 + 168) = 0;
  v4 = dword_1C032A828;
  if ( (dword_1C032A828 & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)(a2 + 168) = RtlWalkFrameChain((PVOID *)(a2 + 176), Count, 0);
    v4 = dword_1C032A828;
  }
  LODWORD(v5) = v4 - 1;
  if ( (unsigned int)v5 <= 1 )
  {
    v5 = *(int *)(a2 + 168);
    if ( (int)v5 < (int)Count )
    {
      LODWORD(v5) = RtlWalkFrameChain((PVOID *)(a2 + 8 * (v5 + 22)), Count - v5, 1u);
      *(_DWORD *)(a2 + 168) += v5;
    }
  }
  return v5;
}
