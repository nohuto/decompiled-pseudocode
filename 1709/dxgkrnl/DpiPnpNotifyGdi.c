/*
 * XREFs of DpiPnpNotifyGdi @ 0x1C011C004
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C011BC30 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpNotifyGdi(__int64 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v12; // rbx
  _QWORD v13[5]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v14[10]; // [rsp+60h] [rbp-39h] BYREF

  v5 = a3;
  memset(v13, 0, 0x20uLL);
  if ( a1
    && !a2
    && (v12 = *(_QWORD *)(a1 + 64), v13[1] = *(_QWORD *)(v12 + 152), *(_DWORD *)(v12 + 16) == 1953656900)
    && *(_DWORD *)(v12 + 20) == 2 )
  {
    BYTE4(v13[3]) = *(_BYTE *)(v12 + 3736) >> 7;
    BYTE6(v13[3]) = *(_DWORD *)(v12 + 3808) == 3;
    v8 = *(_QWORD *)(v12 + 2536);
  }
  else
  {
    v8 = 0LL;
  }
  v13[2] = a2;
  LODWORD(v13[0]) = 7;
  if ( !a1 || (BYTE5(v13[3]) = 1, qword_1C0060A80 != a1) )
    BYTE5(v13[3]) = 0;
  memset(v14, 0, 0x48uLL);
  HIDWORD(v14[7]) = 0;
  memset(&v14[1], 0, 36);
  *(_QWORD *)((char *)&v14[6] + 4) = a2;
  v14[0] = 0x480000001ELL;
  LODWORD(v14[6]) = 47;
  v14[8] = v8;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14);
  LOBYTE(v9) = 1;
  LOBYTE(v10) = 1;
  return SMgrGdiCallout(
           v13,
           v10,
           v9,
           (unsigned __int64)&DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v5 != 0),
           v5,
           a4,
           0LL);
}
