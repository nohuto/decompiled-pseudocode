/*
 * XREFs of DpiPnpEnableVga @ 0x1C011CCDC
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C011BC30 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C01DDF40 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  _BYTE *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  char v19; // [rsp+38h] [rbp-51h]
  _QWORD v20[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v21[8]; // [rsp+60h] [rbp-29h] BYREF

  v5 = a3;
  memset(v20, 0, sizeof(v20));
  v11 = *((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 117);
  if ( *(_BYTE *)v11 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = 201LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v18, *(struct DXGFASTMUTEX *const *)(v11 + 8));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v18);
    v13 = (_BYTE *)(v11 + 16);
    v14 = 18LL;
    do
    {
      *v13 = 0;
      v13 += 32;
      --v14;
    }
    while ( v14 );
    ++*(_DWORD *)(v11 + 592);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v12) + 24) = 223LL;
    if ( v19 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v18);
  }
  v20[1] = 0LL;
  v20[2] = a1;
  LODWORD(v20[0]) = 7;
  if ( qword_1C0060A88 )
    v20[1] = *(_QWORD *)(*(_QWORD *)(qword_1C0060A88 + 64) + 152LL);
  memset(v21, 0, sizeof(v21));
  memset(&v21[1], 0, 36);
  HIDWORD(v21[6]) = a1;
  v21[7] = a2;
  v21[0] = 0x4000000006LL;
  LODWORD(v21[6]) = 48;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v21);
  LOBYTE(v15) = a2;
  LOBYTE(v16) = 1;
  return SMgrGdiCallout(
           v20,
           v16,
           v15,
           (unsigned __int64)&DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v5 != 0),
           v5,
           a4,
           v18);
}
