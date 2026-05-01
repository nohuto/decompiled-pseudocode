/*
 * XREFs of ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x1800E49C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004278 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::ShutdownServices(
        PenWorkspaceDiscoverBroker *this,
        struct IProfferService *a2)
{
  __int64 v2; // rbx
  const char *v3; // r9
  DWORD v4; // eax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 4);
  if ( !*(_BYTE *)(v2 + 200) )
  {
    *(_BYTE *)(v2 + 200) = 1;
    if ( !SetEvent(*(HANDLE *)(v2 + 152)) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x86E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v3);
      __debugbreak();
    }
    v4 = WaitForSingleObjectEx(*(HANDLE *)(v2 + 144), 0x1388u, 0);
    if ( v4 != 258 && v4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93C,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v5);
      JUMPOUT(0x1800E4A4DLL);
    }
    *(_QWORD *)(v2 + 144) = 0LL;
  }
  return 0LL;
}
