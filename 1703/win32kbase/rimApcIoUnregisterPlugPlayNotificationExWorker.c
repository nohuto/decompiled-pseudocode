/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C008CE20
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C008CE10 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x1C0110B80 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0051E7C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C008CEFC (rimHandlePnpWaitersOnOwnedDevices.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]

  v1 = *(_QWORD *)(a1 + 88);
  v3 = *(unsigned int *)(a1 + 96);
  RIMLockExclusive(v1 + 96);
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v3);
  *(_QWORD *)(v1 + 104) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 96, 0LL);
  KeLeaveCriticalRegion();
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)(v1 + 8 * v3 + 360));
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v5, 1, 0);
  *(_QWORD *)(v1 + 8 * v3 + 360) = 0LL;
  *(_DWORD *)(v1 + 4 * v3 + 432) = 0;
  if ( *(_BYTE *)(v1 + 72) || *(_BYTE *)(v1 + 73) )
  {
    Win32FreePool(a1);
    *(_QWORD *)(v1 + 8 * v3 + 448) = 0LL;
  }
  if ( v5 && !v6 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  return ObfDereferenceObject((PVOID)v1);
}
