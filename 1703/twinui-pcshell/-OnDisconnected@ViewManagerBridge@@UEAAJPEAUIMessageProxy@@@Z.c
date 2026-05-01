/*
 * XREFs of ?OnDisconnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x18010B250
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800040CC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?IsShellInfraHostRunning@@YA_NXZ @ 0x180108220 (-IsShellInfraHostRunning@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewManagerBridge::OnDisconnected(ViewManagerBridge *this, struct IMessageProxy *a2)
{
  void *v3; // rdi
  DWORD v4; // eax
  const char *v5; // r9
  const struct _TlgProvider_t *v6; // rax
  HANDLE CurrentProcess; // rax
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // rax
  __int64 v10; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !(unsigned int)SHIsSameObject(
                        *((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11),
                        (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
    return 0LL;
  v3 = (void *)*((_QWORD *)this + 15);
  v4 = WaitForSingleObjectEx(v3, 0, 0);
  if ( v4 == 258 )
  {
    if ( !*((_BYTE *)this + 128) )
    {
      *((_BYTE *)this + 129) = 1;
      if ( IsShellInfraHostRunning() )
      {
        v6 = ViewManagerInteropLogging::Provider();
        if ( *(_DWORD *)v6 > 5u )
          TlgWrite(v6, &unk_180200343, 0LL, 0LL, 2u, &pData);
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0x8000FFFF);
      }
      else
      {
        v8 = ViewManagerInteropLogging::Provider();
        if ( *(_DWORD *)v8 > 5u )
          TlgWrite(v8, &unk_1802002E6, 0LL, 0LL, 2u, &pData);
      }
      goto LABEL_15;
    }
  }
  else if ( v4 || WaitForSingleObjectEx(v3, 0, 0) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x907,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v5);
    __debugbreak();
  }
  v9 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
    TlgWrite(v9, &unk_180200316, 0LL, 0LL, 2u, &pData);
LABEL_15:
  v10 = *((_QWORD *)this + 11);
  if ( v10 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
