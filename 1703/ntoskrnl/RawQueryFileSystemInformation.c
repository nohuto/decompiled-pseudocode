/*
 * XREFs of RawQueryFileSystemInformation @ 0x14059ACD8
 * Callers:
 *     RawUserFsCtrl @ 0x140575564 (RawUserFsCtrl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopBuildSynchronousFsdRequest @ 0x1404DDEB0 (IopBuildSynchronousFsdRequest.c)
 *     RawPerformDevIoCtrl @ 0x14059AE74 (RawPerformDevIoCtrl.c)
 *     RawComputeFileSystemInformationChecksum @ 0x1406E54FC (RawComputeFileSystemInformationChecksum.c)
 */

__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r15
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  struct _KEVENT Event; // [rsp+50h] [rbp-29h] BYREF
  __int64 v10; // [rsp+68h] [rbp-11h]
  __int64 v11; // [rsp+70h] [rbp-9h]
  LARGE_INTEGER v12; // [rsp+78h] [rbp-1h]
  __int64 v13; // [rsp+80h] [rbp+7h]
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+Fh]

  v3 = *(void **)(a1 + 24);
  v10 = 0LL;
  v11 = 0LL;
  v12.QuadPart = 0LL;
  v13 = 0LL;
  NumberOfBytes = 0LL;
  v5 = *(_DWORD *)(a2 + 8);
  memset(&Event, 0, sizeof(Event));
  if ( v5 < 9 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memset(v3, 0, v5);
    v7 = RawPerformDevIoCtrl(v6, *(_QWORD *)(a3 + 176));
    if ( v7 >= 0 )
      return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
