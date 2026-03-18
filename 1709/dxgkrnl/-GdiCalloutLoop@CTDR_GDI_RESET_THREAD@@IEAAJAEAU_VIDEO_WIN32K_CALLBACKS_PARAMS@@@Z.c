/*
 * XREFs of ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C01A5FA8
 * Callers:
 *     ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C01A623C (-SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall CTDR_GDI_RESET_THREAD::GdiCalloutLoop(
        CTDR_GDI_RESET_THREAD *this,
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // edi
  enum _NT_PRODUCT_TYPE ProductType[4]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v9[8]; // [rsp+40h] [rbp-9h] BYREF

  memset(v9, 0, sizeof(v9));
  v6 = 0;
  memset(&v9[1], 0, 36);
  HIDWORD(v9[6]) = a2->Param != 0;
  v9[0] = 0x4000000006LL;
  LODWORD(v9[6]) = 49;
  v9[7] = 0LL;
  do
  {
    LOBYTE(v5) = 1;
    LOBYTE(v4) = 1;
    SMgrGdiCallout(
      a2,
      v4,
      v5,
      &CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback,
      *((_QWORD *)this + 3),
      *(_QWORD *)(*((_QWORD *)this + 3) + 2888LL));
    if ( a2->Status != -1073741816 )
      break;
    ZwYieldExecution();
  }
  while ( a2->Status == -1073741816 );
  LODWORD(v9[7]) = a2->Status;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9);
  RtlGetNtProductType(ProductType);
  if ( ProductType[0] != NtProductServer )
    return (unsigned int)a2->Status;
  return v6;
}
