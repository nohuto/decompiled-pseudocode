/*
 * XREFs of ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C01986E8
 * Callers:
 *     ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C0198978 (-SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall CTDR_GDI_RESET_THREAD::GdiCalloutLoop(
        CTDR_GDI_RESET_THREAD *this,
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // ebx
  LONG Status; // eax
  _NT_PRODUCT_TYPE ProductType[4]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v10[8]; // [rsp+40h] [rbp-9h] BYREF

  memset(v10, 0, sizeof(v10));
  v6 = 0;
  memset(&v10[1], 0, 36);
  HIDWORD(v10[6]) = a2->Param != 0;
  v10[0] = 0x4000000006LL;
  LODWORD(v10[6]) = 49;
  v10[7] = 0LL;
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
    Status = a2->Status;
    if ( Status != -1073741816 )
      break;
    ZwYieldExecution();
    Status = a2->Status;
  }
  while ( Status == -1073741816 );
  LODWORD(v10[7]) = Status;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v10);
  RtlGetNtProductType(ProductType);
  if ( ProductType[0] != NtProductServer )
    return (unsigned int)a2->Status;
  return v6;
}
