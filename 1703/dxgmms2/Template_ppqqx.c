/*
 * XREFs of Template_ppqqx @ 0x1C0024100
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C000BEA0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111@Z @ 0x1C0012424 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

NTSTATUS Template_ppqqx(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-59h] BYREF
  int v5; // [rsp+38h] [rbp-51h] BYREF
  __int64 v6; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  va_list v8; // [rsp+60h] [rbp-29h]
  __int64 v9; // [rsp+68h] [rbp-21h]
  int *v10; // [rsp+70h] [rbp-19h]
  __int64 v11; // [rsp+78h] [rbp-11h]
  int *v12; // [rsp+80h] [rbp-9h]
  __int64 v13; // [rsp+88h] [rbp-1h]
  __int64 *v14; // [rsp+90h] [rbp+7h]
  __int64 v15; // [rsp+98h] [rbp+Fh]
  __int64 v16; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+5Fh]
  va_list va1; // [rsp+F0h] [rbp+67h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 0LL;
  va_copy(v8, va1);
  v5 = 0;
  v10 = &v4;
  v12 = &v5;
  v14 = &v6;
  v4 = 0;
  v9 = 8LL;
  v11 = 4LL;
  v13 = 4LL;
  v15 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventPropagatePresentHistory, 0LL, 5u, &UserData);
}
