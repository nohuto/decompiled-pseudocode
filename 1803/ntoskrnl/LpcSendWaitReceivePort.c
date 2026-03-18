/*
 * XREFs of LpcSendWaitReceivePort @ 0x140746F50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        char a5,
        char a6,
        __int64 *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r10d
  unsigned int v10; // edx
  unsigned int v11; // eax
  struct _KTHREAD *v12; // rcx
  unsigned int v13; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 1179650;
  if ( a5 != 1 )
    v9 = 131074;
  v10 = v9 | 0x200000;
  if ( !a6 )
    v10 = v9;
  v11 = AlpcpProcessSynchronousRequest(a1, v10, a2, 0LL, a3, a4, 0LL, a7, 0, a5);
  v12 = KeGetCurrentThread();
  v13 = v11;
  if ( v11 == -1073740029 )
    v13 = -1073741769;
  if ( v13 == -1073740031 )
    v13 = -1073741229;
  KeLeaveCriticalRegionThread((__int64)v12);
  return v13;
}
