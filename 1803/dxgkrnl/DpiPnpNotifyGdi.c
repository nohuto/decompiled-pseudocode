/*
 * XREFs of DpiPnpNotifyGdi @ 0x1C01FE050
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C01FA590 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpNotifyGdi(__int64 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  _QWORD v13[5]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v14[10]; // [rsp+60h] [rbp-39h] BYREF

  v5 = a3;
  memset(v13, 0, 0x20uLL);
  if ( a1
    && !a2
    && (v8 = *(_QWORD *)(a1 + 64), v13[1] = *(_QWORD *)(v8 + 152), *(_DWORD *)(v8 + 16) == 1953656900)
    && *(_DWORD *)(v8 + 20) == 2 )
  {
    BYTE4(v13[3]) = *(_BYTE *)(v8 + 3736) >> 7;
    BYTE6(v13[3]) = *(_DWORD *)(v8 + 3808) == 3;
    v9 = *(_QWORD *)(v8 + 2536);
  }
  else
  {
    v9 = 0LL;
  }
  v13[2] = a2;
  LODWORD(v13[0]) = 7;
  if ( !a1 || (BYTE5(v13[3]) = 1, qword_1C007A9D8 != a1) )
    BYTE5(v13[3]) = 0;
  memset(v14, 0, 0x48uLL);
  HIDWORD(v14[7]) = 0;
  memset(&v14[1], 0, 36);
  *(_QWORD *)((char *)&v14[6] + 4) = a2;
  v14[0] = 0x480000001ELL;
  LODWORD(v14[6]) = 47;
  v14[8] = v9;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14);
  LOBYTE(v10) = 1;
  LOBYTE(v11) = 1;
  return SMgrGdiCallout(
           v13,
           v11,
           v10,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v5 != 0),
           v5,
           a4);
}
