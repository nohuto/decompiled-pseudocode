/*
 * XREFs of RaidUnitGetHardwareIds @ 0x1C00135C0
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0061564 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     RtlStringCchPrintfExW @ 0x1C0013874 (RtlStringCchPrintfExW.c)
 *     RaFixupIds @ 0x1C00617C4 (RaFixupIds.c)
 *     PortGetDeviceType @ 0x1C0061D44 (PortGetDeviceType.c)
 */

__int64 __fastcall RaidUnitGetHardwareIds(__int64 a1, wchar_t **a2)
{
  wchar_t **v2; // r14
  wchar_t *Pool; // rax
  wchar_t *v5; // rdi
  int v6; // ecx
  _BYTE *v7; // r8
  _QWORD *DeviceType; // rax
  __int64 v9; // r8
  __int64 v10; // r13
  _QWORD *v11; // r12
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int v14; // r10d
  ULONG dwFlags; // edx
  NTSTATUS v16; // ebx
  wchar_t *v17; // r10
  size_t v18; // rdx
  char v19; // al
  __int64 result; // rax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+40h] BYREF
  wchar_t **v22; // [rsp+98h] [rbp+48h]
  size_t pcchRemaining; // [rsp+A0h] [rbp+50h] BYREF

  v22 = a2;
  v2 = a2;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x1BAuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  pcchRemaining = 221LL;
  v5 = Pool;
  if ( !Pool )
  {
    v16 = -1073741801;
    goto LABEL_14;
  }
  v6 = *(_DWORD *)(a1 + 1568);
  v7 = *(_BYTE **)(a1 + 96);
  ppszDestEnd = Pool;
  if ( (v6 & 1) != 0 )
  {
    v16 = RtlStringCchPrintfExW(
            Pool,
            0xDDuLL,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
            v7 + 8,
            v7 + 16,
            v7 + 32);
    v17 = ppszDestEnd + 1;
    v18 = pcchRemaining - 1;
    ++ppszDestEnd;
    if ( v16 >= 0 )
    {
      v16 = RtlStringCchPrintfExW(v17, v18, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
      v17 = ppszDestEnd + 1;
    }
    goto LABEL_13;
  }
  DeviceType = (_QWORD *)PortGetDeviceType(*v7 & 0x1F);
  v10 = v9 + 32;
  v11 = DeviceType;
  v12 = v9 + 16;
  v13 = v9 + 8;
  v16 = RtlStringCchPrintfExW(
          v5,
          v14,
          &ppszDestEnd,
          &pcchRemaining,
          dwFlags,
          L"SCSI\\%hs%8.8hs%16.16hs%4.4hs",
          *DeviceType,
          v9 + 8,
          v9 + 16,
          v9 + 32);
  v17 = ppszDestEnd + 1;
  v18 = pcchRemaining - 1;
  ++ppszDestEnd;
  --pcchRemaining;
  if ( v16 < 0 )
    goto LABEL_20;
  v16 = RtlStringCchPrintfExW(v17, v18, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs%16.16hs", *v11, v13, v12);
  v17 = ppszDestEnd + 1;
  v18 = pcchRemaining - 1;
  ++ppszDestEnd;
  --pcchRemaining;
  if ( v16 < 0 )
    goto LABEL_20;
  v16 = RtlStringCchPrintfExW(v17, v18, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs", *v11, v13);
  if ( v16 >= 0 )
  {
    ++ppszDestEnd;
    --pcchRemaining;
    v16 = RtlStringCchPrintfExW(
            ppszDestEnd,
            pcchRemaining,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"SCSI\\%8.8hs%16.16hs%1.1hs",
            v13,
            v12,
            v10);
    v17 = ppszDestEnd + 1;
    v18 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v16 >= 0 )
    {
      v16 = RtlStringCchPrintfExW(v17, v18, &ppszDestEnd, &pcchRemaining, 0, L"%8.8hs%16.16hs%1.1hs", v13, v12, v10);
      v17 = ppszDestEnd + 1;
      v18 = pcchRemaining - 1;
      ++ppszDestEnd;
      if ( v16 >= 0 )
      {
        if ( (**(_BYTE **)(a1 + 96) & 0x1F) != 0x14 || (v19 = 1, IsSMREnabled) )
          v19 = 0;
        if ( v19 != 1 )
        {
          v16 = RtlStringCchPrintfExW(v17, v18, &ppszDestEnd, &pcchRemaining, 0, L"%hs", v11[1]);
          v17 = ppszDestEnd + 1;
        }
      }
      goto LABEL_12;
    }
LABEL_20:
    v2 = v22;
    goto LABEL_13;
  }
  v17 = ppszDestEnd;
LABEL_12:
  v2 = v22;
LABEL_13:
  LOBYTE(v18) = 1;
  *v17 = 0;
  RaFixupIds(v5, v18);
LABEL_14:
  result = (unsigned int)v16;
  *v2 = v5;
  return result;
}
