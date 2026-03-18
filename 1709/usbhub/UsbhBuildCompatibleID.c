/*
 * XREFs of UsbhBuildCompatibleID @ 0x1C0023460
 * Callers:
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhBuildClassCompatibleID @ 0x1C0020C90 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C0029004 (UsbhBuildDeviceCompatibleID.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhBuildCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdx
  _OWORD *v11; // rax
  _OWORD *v12; // rbx

  Log(a1, 4096, 1667451204, a2, 0LL);
  if ( !a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1AuLL, 0x42554855u);
    v10 = PoolWithTag;
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
      *(_QWORD *)(a3 + 8) = v10;
      *(_DWORD *)(a3 + 4) = 26;
      return result;
    }
    return 3221225626LL;
  }
  v7 = (unsigned int)PdoExt(a2)[353];
  if ( (v7 & 0x40) != 0 )
  {
    v11 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x44uLL, 0x42554855u);
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, 0x44uLL);
      *v12 = xmmword_1C0060480;
      v12[1] = xmmword_1C0060490;
      v12[2] = xmmword_1C00604A0;
      v12[3] = xmmword_1C00604B0;
      *((_DWORD *)v12 + 16) = 0;
      result = 0LL;
      *(_QWORD *)(a3 + 8) = v12;
      *(_DWORD *)(a3 + 4) = 68;
      return result;
    }
    return 3221225626LL;
  }
  if ( (v7 & 0x20) != 0 )
    return UsbhBuildDeviceCompatibleID(v7, v6, a3);
  else
    return UsbhBuildClassCompatibleID(a1, a2, a3);
}
