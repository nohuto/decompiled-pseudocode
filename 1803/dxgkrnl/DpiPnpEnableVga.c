/*
 * XREFs of DpiPnpEnableVga @ 0x1C01FDF14
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C01F5E10 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThread @ 0x1C01FA590 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00C3DF8 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 */

__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD v16[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v17[8]; // [rsp+50h] [rbp-78h] BYREF

  v5 = a3;
  v6 = a1;
  memset(v16, 0, sizeof(v16));
  Global = DXGGLOBAL::GetGlobal(v8);
  QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 127), v10, v11, v12);
  v16[1] = 0LL;
  LODWORD(v16[0]) = 7;
  v16[2] = v6;
  if ( qword_1C007A9E0 )
    v16[1] = *(_QWORD *)(*(_QWORD *)(qword_1C007A9E0 + 64) + 152LL);
  memset(v17, 0, sizeof(v17));
  memset(&v17[1], 0, 36);
  HIDWORD(v17[6]) = (unsigned __int8)v6;
  v17[7] = a2;
  v17[0] = 0x4000000006LL;
  LODWORD(v17[6]) = 48;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v17);
  LOBYTE(v13) = a2;
  LOBYTE(v14) = 1;
  return SMgrGdiCallout(
           v16,
           v14,
           v13,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v5 != 0),
           v5,
           a4);
}
