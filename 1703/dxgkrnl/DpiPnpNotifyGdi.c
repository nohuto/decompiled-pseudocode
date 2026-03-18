/*
 * XREFs of DpiPnpNotifyGdi @ 0x1C0122FF4
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpNotifyGdi(__int64 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v15; // rbx
  _QWORD v16[5]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v17[10]; // [rsp+60h] [rbp-39h] BYREF

  v5 = a3;
  memset(v16, 0, 0x20uLL);
  if ( a1
    && !a2
    && (v15 = *(_QWORD *)(a1 + 64), v16[1] = *(_QWORD *)(v15 + 152), *(_DWORD *)(v15 + 16) == 1953656900)
    && *(_DWORD *)(v15 + 20) == 2 )
  {
    BYTE4(v16[3]) = *(_BYTE *)(v15 + 3712) >> 7;
    BYTE6(v16[3]) = *(_DWORD *)(v15 + 3784) == 3;
    v8 = *(_QWORD *)(v15 + 2536);
  }
  else
  {
    v8 = 0LL;
  }
  v16[2] = a2;
  LODWORD(v16[0]) = 7;
  if ( !a1 || (BYTE5(v16[3]) = 1, qword_1C006FC00 != a1) )
    BYTE5(v16[3]) = 0;
  memset(v17, 0, 0x48uLL);
  HIDWORD(v17[7]) = 0;
  memset(&v17[1], 0, 36);
  *(_QWORD *)((char *)&v17[6] + 4) = a2;
  v17[0] = 0x480000001ELL;
  LODWORD(v17[6]) = 47;
  v17[8] = v8;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v17, v9, v10, v11);
  LOBYTE(v12) = 1;
  LOBYTE(v13) = 1;
  return SMgrGdiCallout(
           v16,
           v13,
           v12,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v5 != 0),
           v5,
           a4);
}
