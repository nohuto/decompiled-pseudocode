/*
 * XREFs of ndisCreateThread @ 0x1C00B00C4
 * Callers:
 *     ndisThreadPoolTimerHandler @ 0x1C0022B20 (ndisThreadPoolTimerHandler.c)
 *     ndisPeriodicReceivesAddCpu @ 0x1C0050B8C (ndisPeriodicReceivesAddCpu.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00AFB50 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisInitializeThreadPool @ 0x1C0111ECC (ndisInitializeThreadPool.c)
 * Callees:
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 */

__int64 __fastcall ndisCreateThread(KSTART_ROUTINE *a1, void *a2, KPRIORITY a3, PVOID *a4)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  NTSTATUS v8; // eax
  struct _KTHREAD *v9; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES v13; // [rsp+50h] [rbp-38h] BYREF

  v13.RootDirectory = 0LL;
  v13.ObjectName = 0LL;
  v13.Length = 48;
  v13.Attributes = 512;
  *(_OWORD *)&v13.SecurityDescriptor = 0LL;
  v6 = PsCreateSystemThread(&Handle, 0x1FFFFFu, &v13, 0LL, 0LL, a1, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( (unsigned __int8)byte_1C0092613 >= 2u )
      WPP_SF_d(0x55u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v6);
  }
  else
  {
    v8 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v9 = (struct _KTHREAD *)Object;
    v7 = v8;
    *a4 = Object;
    if ( a3 )
      KeSetPriorityThread(v9, a3);
    ZwClose(Handle);
  }
  return v7;
}
