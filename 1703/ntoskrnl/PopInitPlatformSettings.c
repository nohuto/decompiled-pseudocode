/*
 * XREFs of PopInitPlatformSettings @ 0x140819EF8
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopLogSleepDisabled @ 0x1405C2380 (PopLogSleepDisabled.c)
 */

__int64 PopInitPlatformSettings()
{
  _BYTE *v0; // rdi
  NTSTATUS v1; // ebx
  _DWORD *PoolWithTag; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-38h] BYREF
  _DWORD SystemInformation[6]; // [rsp+38h] [rbp-30h] BYREF

  v0 = 0LL;
  SystemInformation[0] = 1094930505;
  SystemInformation[3] = 0;
  ReturnLength = 0;
  SystemInformation[1] = 1;
  SystemInformation[2] = 1346584902;
  v1 = ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength);
  if ( v1 != -1073741789 )
    goto LABEL_20;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x206D654Du);
  v0 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v1 = -1073741670;
    goto LABEL_20;
  }
  *PoolWithTag = 1094930505;
  PoolWithTag[1] = 1;
  PoolWithTag[2] = 1346584902;
  PoolWithTag[3] = ReturnLength - 16;
  v1 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, ReturnLength, &ReturnLength);
  if ( v1 < 0 )
    goto LABEL_20;
  if ( v0[24] >= 3u )
    PopFirmwarePlatformRole = (unsigned __int8)v0[61];
  if ( (unsigned __int8)off_14033B570[0]() )
    PopPlatformAoAc = 1;
  if ( PopPlatformRoleOverride != -1 )
    PopFirmwarePlatformRole = PopPlatformRoleOverride;
  if ( PopPlatformAoAcOverride != -1 )
    PopPlatformAoAc = PopPlatformAoAcOverride != 0;
  if ( (HvlpFlags & 2) != 0 )
    PopLogSleepDisabled(18, (HvlpEnlightenments & 0x10000) != 0 ? 16 : 31, 0LL, 0LL);
  if ( PopPlatformAoAc )
  {
    if ( !InitSafeBootMode && !InitIsWinPEMode && PopCsEnabledReg )
      goto LABEL_17;
  }
  else
  {
    PopLogSleepDisabled(19, 32, 0LL, 0LL);
  }
  PopPlatformAoAc = 0;
LABEL_17:
  if ( (unsigned int)PopFirmwarePlatformRole > 8 )
    PopFirmwarePlatformRole = 0;
  v1 = 0;
  PopPlatformRole = PopFirmwarePlatformRole;
LABEL_20:
  if ( v1 < 0 )
    KeBugCheckEx(0xA0u, 0xEuLL, v1, 0LL, 0LL);
  if ( v0 )
    ExFreePoolWithTag(v0, 0x206D654Du);
  return (unsigned int)v1;
}
