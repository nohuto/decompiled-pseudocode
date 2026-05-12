/*
 * XREFs of RaidUnitGetDeviceId @ 0x1C0016234
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C00602F8 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     StorGetIdentityVendorId @ 0x1C00160DC (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C0016108 (StorGetIdentityProductId.c)
 *     RtlStringCchPrintfW @ 0x1C00161B8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1C005F364 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C006051C (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetDeviceId(__int64 a1, wchar_t **a2)
{
  unsigned int v4; // edi
  wchar_t *Pool; // rbx
  _QWORD *DeviceType; // rax
  _BYTE v8[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x80uLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    StorGetIdentityVendorId((_QWORD *)(a1 + 96), (__int64)v8);
    StorGetIdentityProductId((_QWORD *)(a1 + 96), (__int64)v9);
    if ( (*(_DWORD *)(a1 + 1568) & 1) != 0 )
    {
      RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\VMLUN&Ven_%hs&Prod_%hs", v8, v9);
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F);
      RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\%hs&Ven_%hs&Prod_%hs", *DeviceType, v8, v9);
    }
    RaFixupIds(Pool, 0LL);
  }
  else
  {
    v4 = -1073741801;
  }
  *a2 = Pool;
  return v4;
}
