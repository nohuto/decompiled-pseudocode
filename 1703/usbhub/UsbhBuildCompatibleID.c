/*
 * XREFs of UsbhBuildCompatibleID @ 0x1C001DC20
 * Callers:
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhBuildClassCompatibleID @ 0x1C001CAB0 (UsbhBuildClassCompatibleID.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C00529F8 (UsbhBuildDeviceCompatibleID.c)
 */

__int64 __fastcall UsbhBuildCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r9d
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _OWORD *v12; // rax
  _OWORD *v13; // rbx

  Log(a1, 4096, 1667451204, a2, 0LL);
  if ( !a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)(v6 + 26), 0x42554855u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *((_WORD *)PoolWithTag + 12) = 0;
      *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\UNKNOWN";
      *((_DWORD *)PoolWithTag + 4) = *(_DWORD *)L"OWN";
      *((_WORD *)PoolWithTag + 10) = aUsbUnknown[10];
      result = 0LL;
      *(_QWORD *)(a3 + 8) = v8;
      *(_DWORD *)(a3 + 4) = 26;
      return result;
    }
    return 3221225626LL;
  }
  v11 = (unsigned int)PdoExt(a2)[353];
  if ( (v11 & 0x40) != 0 )
  {
    v12 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x44uLL, 0x42554855u);
    v13 = v12;
    if ( !v12 )
      return 3221225626LL;
    memset(v12, 0, 0x44uLL);
    *v13 = xmmword_1C0060DA0;
    v13[1] = xmmword_1C0060DB0;
    v13[2] = xmmword_1C0060DC0;
    v13[3] = xmmword_1C0060DD0;
    *((_DWORD *)v13 + 16) = 0;
    result = 0LL;
    *(_QWORD *)(a3 + 8) = v13;
    *(_DWORD *)(a3 + 4) = 68;
  }
  else if ( (v11 & 0x20) != 0 )
  {
    return UsbhBuildDeviceCompatibleID(v11, v10, a3);
  }
  else
  {
    return UsbhBuildClassCompatibleID(a1, a2, a3);
  }
  return result;
}
