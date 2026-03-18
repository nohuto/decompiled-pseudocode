/*
 * XREFs of DpiFdoIsDevicePresent @ 0x1C01F8234
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01F60B0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DpiFdoIsDevicePresent(__int64 a1, char *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  char v6; // di
  __int64 v7; // rcx
  __int64 v8; // rax
  _WORD *v9; // rcx
  _WORD v11[32]; // [rsp+30h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  v4 = 0;
  *a2 = 0;
  v5 = *(_DWORD *)(a1 + 1104);
  v6 = 1;
  if ( v5 != 1 )
  {
    if ( (unsigned int)(v5 - 2) > 2 && !*(_BYTE *)(a1 + 1143) )
      return (unsigned int)-1073741637;
    goto LABEL_7;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _WORD *, _QWORD, int))(a1 + 616))(
         *(_QWORD *)(a1 + 568),
         0LL,
         v11,
         0LL,
         64) == 64 )
  {
    v9 = *(_WORD **)(a1 + 1096);
    if ( v11[0] != *v9 || v11[1] != v9[1] )
      v6 = 0;
LABEL_7:
    *a2 = v6;
    return v4;
  }
  v8 = WdLogNewEntry5_WdError(v7);
  v4 = -1073741823;
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(a1 + 616);
  *(_QWORD *)(v8 + 32) = -1073741823LL;
  WdLogEvent5_WdError(v8);
  return v4;
}
