/*
 * XREFs of NdisClNotifyCloseAddressFamilyComplete @ 0x1C0051C10
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C00521C0 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C0111F70 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1C0113720 (NdisCoRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceAf @ 0x1C01145D8 (ndisDereferenceAf.c)
 */

void __stdcall NdisClNotifyCloseAddressFamilyComplete(NDIS_HANDLE NdisAfHandle, NDIS_STATUS Status)
{
  __int64 v3; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
  {
    v3 = *((_QWORD *)NdisAfHandle + 50);
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 60) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)NdisAfHandle + 3) + 128LL))(
      (unsigned int)Status,
      *((_QWORD *)NdisAfHandle + 6),
      0LL,
      0LL,
      v3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)NdisAfHandle + 4) + 136LL))(*((_QWORD *)NdisAfHandle + 6));
  }
  ndisDereferenceAf(NdisAfHandle);
}
