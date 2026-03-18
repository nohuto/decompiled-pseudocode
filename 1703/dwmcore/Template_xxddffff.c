/*
 * XREFs of Template_xxddffff @ 0x18013FD74
 * Callers:
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x180130F30 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_xxddffff(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, char a5, char a6, char a7, char a8, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-79h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-69h]
  __int64 v11; // [rsp+38h] [rbp-61h]
  char *v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  char *v14; // [rsp+50h] [rbp-49h]
  __int64 v15; // [rsp+58h] [rbp-41h]
  char *v16; // [rsp+60h] [rbp-39h]
  __int64 v17; // [rsp+68h] [rbp-31h]
  char *v18; // [rsp+70h] [rbp-29h]
  __int64 v19; // [rsp+78h] [rbp-21h]
  va_list v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  va_list v22; // [rsp+90h] [rbp-9h]
  __int64 v23; // [rsp+98h] [rbp-1h]
  __int64 v24; // [rsp+E0h] [rbp+47h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v26; // [rsp+110h] [rbp+77h] BYREF
  va_list va; // [rsp+110h] [rbp+77h]
  va_list va1; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v26 = va_arg(va1, _QWORD);
  v25 = a4;
  v24 = a3;
  UserData.Ptr = (ULONGLONG)&v24;
  v13 = 4LL;
  *(_QWORD *)&UserData.Size = 8LL;
  v10 = &v25;
  v11 = 8LL;
  v12 = &a5;
  v14 = &a6;
  v16 = &a7;
  v18 = &a8;
  va_copy(v20, va);
  va_copy(v22, va1);
  v15 = 4LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  return EventWrite(
           Microsoft_Windows_Dwm_CoreHandle,
           &EVTDESC_ETWGUID_METABITMAPRENDERTARGET_CAPTUREBITS_Start,
           8u,
           &UserData);
}
