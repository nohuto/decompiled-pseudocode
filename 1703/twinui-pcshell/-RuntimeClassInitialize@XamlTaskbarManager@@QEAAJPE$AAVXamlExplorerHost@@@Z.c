/*
 * XREFs of ?RuntimeClassInitialize@XamlTaskbarManager@@QEAAJPE$AAVXamlExplorerHost@@@Z @ 0x18012044C
 * Callers:
 *     ?XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x18012113C (-XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x1800DE390 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$Co.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlTaskbarManager::RuntimeClassInitialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  const char *v6; // r9
  unsigned int v7; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    if ( a2 != *(_QWORD *)(a1 + 48) )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *(_QWORD *)(a1 + 48);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *(_QWORD *)(a1 + 48) = a2;
    }
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher>((volatile signed __int32 **)(a1 + 136));
    v7 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v5);
    result = v7;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x38,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
                           v6);
  }
  return result;
}
