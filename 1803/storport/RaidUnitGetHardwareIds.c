/*
 * XREFs of RaidUnitGetHardwareIds @ 0x1C0016470
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C00602F8 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RtlStringCchPrintfExW @ 0x1C0016720 (RtlStringCchPrintfExW.c)
 *     PortGetDeviceType @ 0x1C005F364 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C006051C (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetHardwareIds(__int64 a1, wchar_t **a2)
{
  wchar_t **v2; // r13
  wchar_t *Pool; // rax
  wchar_t *v5; // rdi
  int v6; // ecx
  _BYTE *v7; // rax
  _BYTE *v8; // r12
  _BYTE *v9; // r15
  _BYTE *v10; // r14
  _QWORD *DeviceType; // r13
  unsigned int v12; // r10d
  ULONG dwFlags; // edx
  NTSTATUS v14; // eax
  wchar_t *v15; // r10
  size_t v16; // rdx
  NTSTATUS v17; // ebx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  char v20; // al
  __int64 result; // rax
  NTSTATUS v22; // eax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+40h] BYREF
  wchar_t **v24; // [rsp+98h] [rbp+48h]
  size_t pcchRemaining; // [rsp+A0h] [rbp+50h] BYREF

  v24 = a2;
  v2 = a2;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x1BAuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  pcchRemaining = 221LL;
  v5 = Pool;
  if ( Pool )
  {
    v6 = *(_DWORD *)(a1 + 1568);
    ppszDestEnd = Pool;
    v7 = *(_BYTE **)(a1 + 96);
    v8 = v7 + 32;
    v9 = v7 + 16;
    v10 = v7 + 8;
    if ( (v6 & 1) != 0 )
    {
      v22 = RtlStringCchPrintfExW(
              v5,
              0xDDuLL,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
              v10,
              v9,
              v7 + 32);
      v15 = ppszDestEnd + 1;
      v16 = pcchRemaining - 1;
      ++ppszDestEnd;
      v17 = v22;
      if ( v22 >= 0 )
      {
        v17 = RtlStringCchPrintfExW(v15, v16, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
        v15 = ppszDestEnd + 1;
      }
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(*v7 & 0x1F);
      v14 = RtlStringCchPrintfExW(
              v5,
              v12,
              &ppszDestEnd,
              &pcchRemaining,
              dwFlags,
              L"SCSI\\%hs%8.8hs%16.16hs%4.4hs",
              *DeviceType,
              v10,
              v9,
              v8);
      v15 = ppszDestEnd + 1;
      v16 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      v17 = v14;
      if ( v14 >= 0 )
      {
        v17 = RtlStringCchPrintfExW(
                v15,
                v16,
                &ppszDestEnd,
                &pcchRemaining,
                0,
                L"SCSI\\%hs%8.8hs%16.16hs",
                *DeviceType,
                v10,
                v9);
        v15 = ppszDestEnd + 1;
        v16 = pcchRemaining - 1;
        ++ppszDestEnd;
        --pcchRemaining;
      }
      if ( v17 >= 0 )
      {
        v18 = RtlStringCchPrintfExW(v15, v16, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs", *DeviceType, v10);
        v16 = pcchRemaining;
        v17 = v18;
        if ( v18 < 0 )
        {
          v15 = ppszDestEnd;
        }
        else
        {
          ++ppszDestEnd;
          --pcchRemaining;
          v17 = RtlStringCchPrintfExW(
                  ppszDestEnd,
                  pcchRemaining,
                  &ppszDestEnd,
                  &pcchRemaining,
                  0,
                  L"SCSI\\%8.8hs%16.16hs%1.1hs",
                  v10,
                  v9,
                  v8);
          v15 = ppszDestEnd + 1;
          v16 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
        }
        if ( v17 >= 0 )
        {
          v19 = RtlStringCchPrintfExW(v15, v16, &ppszDestEnd, &pcchRemaining, 0, L"%8.8hs%16.16hs%1.1hs", v10, v9, v8);
          v15 = ppszDestEnd + 1;
          v16 = pcchRemaining - 1;
          ++ppszDestEnd;
          v17 = v19;
          if ( v19 >= 0 )
          {
            if ( (**(_BYTE **)(a1 + 96) & 0x1F) != 0x14
              || (v20 = 1, BYTE3(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink)) )
            {
              v20 = 0;
            }
            if ( v20 != 1 )
            {
              v17 = RtlStringCchPrintfExW(v15, v16, &ppszDestEnd, &pcchRemaining, 0, L"%hs", DeviceType[1]);
              v15 = ppszDestEnd + 1;
            }
          }
        }
      }
      v2 = v24;
    }
    LOBYTE(v16) = 1;
    *v15 = 0;
    RaFixupIds(v5, v16);
  }
  else
  {
    v17 = -1073741801;
  }
  result = (unsigned int)v17;
  *v2 = v5;
  return result;
}
