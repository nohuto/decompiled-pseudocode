/*
 * XREFs of DpiPnpEnableVga @ 0x1C012220C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C01C4520 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rdx
  _BYTE v31[16]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v32[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v33[8]; // [rsp+60h] [rbp-29h] BYREF

  v5 = a3;
  memset(v32, 0, sizeof(v32));
  v14 = *((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8, v10, v11) + 117);
  if ( *(_BYTE *)v14 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v15, v16) + 24) = 206LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, *(struct DXGFASTMUTEX *const *)(v14 + 8), v15, v16);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    v20 = (_BYTE *)(v14 + 16);
    v21 = 18LL;
    do
    {
      *v20 = 0;
      v20 += 48;
      --v21;
    }
    while ( v21 );
    ++*(_DWORD *)(v14 + 880);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v17, v18, v19) + 24) = 228LL;
    if ( v31[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31, v22, v23, v24);
  }
  v32[1] = 0LL;
  v32[2] = a1;
  LODWORD(v32[0]) = 7;
  if ( qword_1C006FC08 )
    v32[1] = *(_QWORD *)(*(_QWORD *)(qword_1C006FC08 + 64) + 152LL);
  memset(v33, 0, sizeof(v33));
  memset(&v33[1], 0, 36);
  HIDWORD(v33[6]) = a1;
  v33[7] = a2;
  v33[0] = 0x4000000006LL;
  LODWORD(v33[6]) = 48;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33, v25, v26, v27);
  LOBYTE(v28) = a2;
  LOBYTE(v29) = 1;
  return SMgrGdiCallout(
           v32,
           v29,
           v28,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v5 != 0),
           v5,
           a4);
}
