/*
 * XREFs of PfHardFaultLog @ 0x1400BEC70
 * Callers:
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 * Callees:
 *     PfLogEvent @ 0x14008B980 (PfLogEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwTraceSiloTimedEvent @ 0x1402AF354 (EtwTraceSiloTimedEvent.c)
 */

struct _KTHREAD *__fastcall PfHardFaultLog(_QWORD *a1, int a2, int a3)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbp
  int v7; // ebx
  __int64 v8; // rdi
  unsigned __int16 v9; // ax
  _QWORD v10[6]; // [rsp+40h] [rbp-38h] BYREF

  result = KeGetCurrentThread();
  Process = result->Process;
  if ( *a1 || a1[1] )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v9 = 626;
        goto LABEL_13;
      }
      if ( a2 == 2 )
      {
        v9 = 627;
LABEL_13:
        result = (struct _KTHREAD *)EtwTraceSiloTimedEvent(
                                      *(_QWORD *)&Process[2].ActiveProcessors.Count,
                                      v9,
                                      a3,
                                      (int)a1 + 32);
        goto LABEL_3;
      }
    }
    v9 = 544;
    goto LABEL_13;
  }
LABEL_3:
  if ( a1[8] )
  {
    if ( a2 != 2 )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      v8 = MEMORY[0xFFFFF78000000320] - a1[8];
      a1[8] = v8;
      memset(v10, 0, 0x28uLL);
      LODWORD(v10[0]) = 2 * v8;
      HIDWORD(v10[0]) = dword_1403E27D0;
      v10[3] = a1[6];
      v10[1] = (unsigned int)(a1[4] >> 9);
      v10[4] = ((unsigned __int64)Process ^ (unsigned __int64)Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL;
      v10[2] = a1[5];
      return (struct _KTHREAD *)PfLogEvent(29, v7, v10, 0x28u);
    }
  }
  return result;
}
