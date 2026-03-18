/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C01020DC
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C00E3270 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00FF064 (RIMIDEProcessRemoveInjectionDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C0051F54 (rimDoRimDevChange.c)
 *     RIMEndAllActiveContacts @ 0x1C0105DA0 (RIMEndAllActiveContacts.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 */

__int64 __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  int v9; // edx

  v1 = *(_QWORD *)(a1 + 408);
  v3 = v1 + 96;
  RIMLockExclusive(v1 + 96);
  RIMLockExclusive(v1 + 696);
  if ( (*(_DWORD *)(a1 + 264) & 0x80u) != 0 )
    RIMEndAllActiveContacts(v1, *(_QWORD *)(a1 + 536), 0LL);
  *(_QWORD *)(v1 + 704) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 696, 0LL);
  KeLeaveCriticalRegion();
  if ( (*(_QWORD *)(v1 + 768) || *(_DWORD *)(v1 + 976)) && *(_QWORD *)(v1 + 32) != PsGetCurrentProcess(v5, v4, v6, v7) )
  {
    *(_DWORD *)(a1 + 248) |= 0x40000u;
    RIMLockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a1 + 264) |= 4u;
    qword_1C018EC88 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    *(_DWORD *)(a1 + 248) |= 0x100000u;
    ZwSetEvent(*(HANDLE *)(v1 + 520), 0LL);
    v8 = 0;
  }
  else
  {
    rimDoRimDevChange(v1, a1 + 64, 3);
    if ( *(_BYTE *)(v1 + 73) || *(_BYTE *)(v1 + 75) )
    {
      v8 = -1073741637;
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        18,
        52,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      v8 = RIMFreeDev(v1, a1 + 64);
    }
  }
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
