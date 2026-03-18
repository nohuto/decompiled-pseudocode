/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x1C008CEFC
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C008CE20 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00E6FE4 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, int a2)
{
  int v4; // edx
  __int64 *i; // rdi
  __int64 v6; // rbx
  int v7; // eax
  bool v8; // al

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    v7 = *(unsigned __int8 *)(((unsigned __int64)(i + 6) & -(__int64)(i != (__int64 *)16)) + 0x30);
    v8 = v7 == a2 || (_BYTE)v7 == 3 && a2 == 2;
    if ( v8
      && *(_QWORD *)(((unsigned __int64)(i + 6) & -(__int64)(i != (__int64 *)16)) + 0x158) == a1
      && (*(_DWORD *)(((unsigned __int64)(i + 6) & -(__int64)(i != (__int64 *)16)) + 0xB8) & 0x10) != 0 )
    {
      LOBYTE(v4) = 3;
      WPP_RECORDER_SF_qqq(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        20,
        53,
        (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
        a1,
        *(_QWORD *)(((unsigned __int64)(i + 6) & -(__int64)(i != (__int64 *)16)) + 0x20),
        *(_QWORD *)(((unsigned __int64)(i + 6) & -(__int64)(i != (__int64 *)16)) + 0x140));
      v6 = (unsigned __int64)(i + 6) & -(__int64)(i != (__int64 *)16);
      *(_DWORD *)(v6 + 184) &= ~0x10u;
      KeSetEvent(*(PRKEVENT *)(v6 + 0x168), 1, 0);
    }
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
