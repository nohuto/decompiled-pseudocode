/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C01028C0
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C00E9880 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00FF37C (RIMIDEProcessRemoveInjectionDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C001AEAC (rimDoRimDevChange.c)
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 */

__int64 __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v1 = *(_QWORD *)(a1 + 408);
  v3 = v1 + 96;
  RIMLockExclusive(v1 + 96);
  RIMLockExclusive(v1 + 696);
  if ( (*(_DWORD *)(a1 + 264) & 0x80u) != 0 )
    RIMEndAllActiveContacts(v1, *(_QWORD *)(a1 + 536), 0LL);
  *(_QWORD *)(v1 + 704) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 696, 0LL);
  KeLeaveCriticalRegion();
  if ( (*(_QWORD *)(v1 + 768) || *(_DWORD *)(v1 + 976)) && *(_QWORD *)(v1 + 32) != PsGetCurrentProcess(v5, v4) )
  {
    *(_DWORD *)(a1 + 248) |= 0x40000u;
    RIMLockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a1 + 264) |= 4u;
    qword_1C0193AE8 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    *(_DWORD *)(a1 + 248) |= 0x100000u;
    ZwSetEvent(*(HANDLE *)(v1 + 520), 0LL);
    v6 = 0;
  }
  else
  {
    rimDoRimDevChange(v1, a1 + 64, 3);
    if ( *(_BYTE *)(v1 + 73) || *(_BYTE *)(v1 + 75) )
    {
      v6 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x34u,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      v6 = RIMFreeDev(v1, a1 + 64);
    }
  }
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
