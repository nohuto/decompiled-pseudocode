/*
 * XREFs of RaidUnitGetCompatibleIds @ 0x1C0016320
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C00602F8 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RtlStringCchPrintfExW @ 0x1C0016720 (RtlStringCchPrintfExW.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C0016A1C (RaidUnitGet1667DeviceRegistryValue.c)
 *     PortGetDeviceType @ 0x1C005F364 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C006051C (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  NTSTATUS v4; // edi
  wchar_t *Pool; // rax
  wchar_t *v6; // rsi
  wchar_t *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  char v10; // al
  _QWORD *DeviceType; // rax
  size_t v12; // rdx
  wchar_t *v13; // rcx
  size_t v14; // rdx
  size_t v15; // r15
  __int64 result; // rax
  NTSTATUS v17; // eax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+80h] [rbp+40h] BYREF
  size_t pcchRemaining; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x4CuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  v6 = Pool;
  if ( !Pool )
  {
    v4 = -1073741801;
    goto LABEL_11;
  }
  v7 = Pool;
  ppszDestEnd = Pool;
  v8 = *(_DWORD *)(a1 + 1568);
  v9 = 38LL;
  pcchRemaining = 38LL;
  if ( (v8 & 1) != 0 )
  {
    v17 = RtlStringCchPrintfExW(v6, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
    goto LABEL_16;
  }
  if ( (**(_BYTE **)(a1 + 96) & 0x1F) != 0x14 || (v10 = 1, BYTE3(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink)) )
    v10 = 0;
  if ( v10 == 1 )
    goto LABEL_10;
  DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F);
  v4 = RtlStringCchPrintfExW(v6, v12, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", *DeviceType);
  v13 = ppszDestEnd + 1;
  v14 = pcchRemaining - 1;
  ++ppszDestEnd;
  --pcchRemaining;
  if ( v4 >= 0 )
  {
    v4 = RtlStringCchPrintfExW(v13, v14, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\RAW");
    v15 = pcchRemaining;
    v7 = ++ppszDestEnd;
    if ( v4 >= 0 )
    {
      RaidUnitGet1667DeviceRegistryValue(a1);
      if ( !*(_BYTE *)(a1 + 120) )
        goto LABEL_9;
      v17 = RtlStringCchPrintfExW(v7, v15 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
LABEL_16:
      v4 = v17;
      v7 = ppszDestEnd + 1;
LABEL_9:
      if ( v4 >= 0 )
      {
LABEL_10:
        LOBYTE(v9) = 1;
        *v7 = 0;
        RaFixupIds(v6, v9);
      }
    }
  }
LABEL_11:
  result = (unsigned int)v4;
  *a2 = v6;
  return result;
}
