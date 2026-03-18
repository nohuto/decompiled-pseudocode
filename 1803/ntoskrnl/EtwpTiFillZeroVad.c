/*
 * XREFs of EtwpTiFillZeroVad @ 0x1407AE624
 * Callers:
 *     EtwTiLogQueueApcThread @ 0x1404D930C (EtwTiLogQueueApcThread.c)
 *     EtwTiLogSetContextThread @ 0x14056B5D8 (EtwTiLogSetContextThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillZeroVad(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = &unk_140319190;
  result = 7LL;
  a1[2] = &unk_140319190;
  a1[3] = 8LL;
  a1[4] = &unk_140319190;
  a1[5] = 4LL;
  a1[6] = &unk_140319190;
  a1[7] = 4LL;
  a1[8] = &unk_140319190;
  a1[9] = 8LL;
  a1[10] = &unk_140319190;
  a1[11] = 8LL;
  a1[12] = &unk_140319190;
  a1[13] = 2LL;
  return result;
}
