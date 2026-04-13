/*
 * XREFs of ??_GCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAPEAXI@Z @ 0x180024170
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032AC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider *> *>'::`2'::CompletionDelegate::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(void **)(a1 + 56);
  if ( v4 && !CloseHandle(v4) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v5, v6);
    JUMPOUT(0x1800241EELL);
  }
  *(_DWORD *)(a1 + 44) = -1073741823;
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}
