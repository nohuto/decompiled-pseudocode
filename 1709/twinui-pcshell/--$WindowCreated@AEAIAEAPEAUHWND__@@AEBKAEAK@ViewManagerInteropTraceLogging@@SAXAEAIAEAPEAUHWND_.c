/*
 * XREFs of ??$WindowCreated@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x180143E6C
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18013DA90 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowCreated<unsigned int &,HWND__ * &,unsigned long const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  const struct _TlgProvider_t *v8; // rax
  int v10; // [rsp+38h] [rbp-29h] BYREF
  __int64 v11; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+Fh]
  __int64 *v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  __int64 v17; // [rsp+88h] [rbp+27h]
  __int64 v18; // [rsp+90h] [rbp+2Fh]
  __int64 v19; // [rsp+98h] [rbp+37h]
  __int64 v20; // [rsp+A0h] [rbp+3Fh]

  v8 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v10 = *a1;
    v13 = &v10;
    v11 = *a2;
    v15 = &v11;
    v14 = 4LL;
    v16 = 8LL;
    v17 = a3;
    v18 = 4LL;
    v19 = a4;
    v20 = 4LL;
    LODWORD(v8) = TlgWrite(v8, &unk_180263EC5, 0LL, 0LL, 6u, &pData);
  }
  return (int)v8;
}
