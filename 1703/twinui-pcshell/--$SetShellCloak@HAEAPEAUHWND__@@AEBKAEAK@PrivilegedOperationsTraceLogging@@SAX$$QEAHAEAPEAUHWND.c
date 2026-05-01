/*
 * XREFs of ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1800D2478
 * Callers:
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4_SET_SHELL_CLOAK@@@Z @ 0x1800CF4F0 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4_SET_SHELL_CLOAK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@PrivilegedOperationsTraceLogging@@KAPEAV1@XZ @ 0x1800CF074 (-Instance@PrivilegedOperationsTraceLogging@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  struct PrivilegedOperationsTraceLogging *v8; // rax
  const struct _TlgProvider_t *v9; // rcx
  int v11; // [rsp+38h] [rbp-39h] BYREF
  __int64 v12; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  int *v14; // [rsp+68h] [rbp-9h]
  __int64 v15; // [rsp+70h] [rbp-1h]
  __int64 *v16; // [rsp+78h] [rbp+7h]
  __int64 v17; // [rsp+80h] [rbp+Fh]
  __int64 v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+90h] [rbp+1Fh]
  __int64 v20; // [rsp+98h] [rbp+27h]
  __int64 v21; // [rsp+A0h] [rbp+2Fh]

  v8 = PrivilegedOperationsTraceLogging::Instance();
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v11 = *a1;
    v14 = &v11;
    v12 = *a2;
    v16 = &v12;
    v15 = 4LL;
    v17 = 8LL;
    v18 = a3;
    v19 = 4LL;
    v20 = a4;
    v21 = 4LL;
    LODWORD(v8) = TlgWrite(v9, &unk_1801FC5D3, 0LL, 0LL, 6u, &pData);
  }
  return (int)v8;
}
