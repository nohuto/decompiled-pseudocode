/*
 * XREFs of PspChargeJobWakeCounter @ 0x14050F8C0
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x1404A2250 (PspChargeProcessWakeCounter.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x1405106D0 (PspLockRootJobShared.c)
 *     PspSendWakeNotification @ 0x1405108CC (PspSendWakeNotification.c)
 *     EtwTraceWakeCounter @ 0x1407464F4 (EtwTraceWakeCounter.c)
 */

void __fastcall PspChargeJobWakeCounter(
        char *Object,
        char *a2,
        int a3,
        signed __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // r13
  char *v8; // rbx
  int v10; // r14d
  int v12; // ebp
  int v13; // esi
  volatile signed __int64 *v14; // rax
  signed __int64 v15; // rdi
  bool v16; // bp
  int v17; // eax
  int v18; // [rsp+90h] [rbp+8h]
  unsigned int v19; // [rsp+98h] [rbp+10h]
  __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  v18 = (int)Object;
  CurrentThread = KeGetCurrentThread();
  v8 = Object;
  v21 = 0LL;
  v10 = a5 & 4;
  v19 = 1 << a3;
  v12 = a3;
  v13 = a5 & 1;
  if ( (a5 & 1) != 0 )
    PspLockRootJobShared(Object, CurrentThread, &v21);
  do
  {
    if ( v13 )
      ExAcquireResourceSharedLite((PERESOURCE)(v8 + 56), 1u);
    if ( v10 )
      v14 = (volatile signed __int64 *)(v8 + 944);
    else
      v14 = (volatile signed __int64 *)&v8[8 * v12 + 888];
    v15 = a4 + _InterlockedExchangeAdd64(v14, a4);
    if ( v10 )
    {
      if ( *((_DWORD *)v8 + 214) )
      {
        if ( (a5 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
          __int2c();
        if ( (xmmword_140401150 & 0x200) != 0 )
          EtwTraceWakeCounter(v18, v12, 0, a6, a7);
      }
      if ( v13 )
        ExReleaseResourceLite((PERESOURCE)(v8 + 56));
    }
    else
    {
      v16 = (*((_DWORD *)v8 + 326) & 0x800) != 0;
      if ( (*((_DWORD *)v8 + 326) & 0x800) != 0 && !v15 )
      {
        v16 = (*((_DWORD *)v8 + 326) & 0x800) != 0;
        if ( (HIDWORD(*((_QWORD *)v8 + 119)) & v19) == 0 )
        {
          v16 = 0;
          _InterlockedOr((volatile signed __int32 *)v8 + 240, v19);
        }
      }
      if ( v13 )
        ExReleaseResourceLite((PERESOURCE)(v8 + 56));
      if ( v16 )
      {
        v17 = 6;
        if ( a4 <= 0 )
          v17 = 0;
        if ( v13 )
          v17 |= 1u;
        v12 = a3;
        PspSendWakeNotification(v8, v17);
      }
      else
      {
        v12 = a3;
      }
    }
    v8 = (char *)*((_QWORD *)v8 + 134);
  }
  while ( v8 != a2 && (*((_DWORD *)v8 + 326) & 0x1000) != 0 );
  if ( v13 )
    PspUnlockJob(v21, CurrentThread);
}
