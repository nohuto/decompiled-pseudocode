/*
 * XREFs of PfHardFaultLog @ 0x14002A488
 * Callers:
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x140020870 (EtwTraceTimedEvent.c)
 *     PfLogEvent @ 0x14005F30C (PfLogEvent.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall PfHardFaultLog(_QWORD *a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int16 v7; // ax
  _QWORD v8[7]; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 || a1[1] )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v7 = 626;
        goto LABEL_13;
      }
      if ( a2 == 2 )
      {
        v7 = 627;
LABEL_13:
        EtwTraceTimedEvent(v7, 0x2000u, (__int64)(a1 + 3), 32, 4200450, (__int64)a1);
        goto LABEL_3;
      }
    }
    v7 = 544;
    goto LABEL_13;
  }
LABEL_3:
  if ( a1[7] )
  {
    if ( a2 != 2 )
    {
      v4 = MEMORY[0xFFFFF78000000320];
      a1[7] = MEMORY[0xFFFFF78000000320] - a1[7];
      memset(v8, 0, 0x28uLL);
      v5 = (2 * *((_DWORD *)a1 + 14)) | v8[0] & 1;
      v8[3] = a1[5];
      v8[1] = (unsigned int)(a1[3] >> 9);
      CurrentThread = KeGetCurrentThread();
      v8[0] = __PAIR64__(dword_140382C10, v5);
      v8[4] = ((__int64)CurrentThread->Process ^ (__int64)CurrentThread->Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL;
      v8[2] = a1[4];
      PfLogEvent(29LL, v4, v8);
    }
  }
}
