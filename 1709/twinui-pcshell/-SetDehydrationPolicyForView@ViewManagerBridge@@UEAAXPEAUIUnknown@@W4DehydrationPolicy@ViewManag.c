/*
 * XREFs of ?SetDehydrationPolicyForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180133420
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetDehydrationPolicyForView(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v4; // r8d
  unsigned int v5; // edi
  void (__fastcall **v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  const wchar_t *v8; // rax
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // [rsp+28h] [rbp-20h] BYREF
  const wchar_t *v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 153) )
    return;
  if ( a3 )
  {
    v4 = a3 - 1;
    if ( !v4 )
    {
      v5 = 1;
      goto LABEL_8;
    }
    if ( v4 == 1 )
    {
      v5 = 2;
      goto LABEL_8;
    }
  }
  v5 = 0;
LABEL_8:
  v15 = 0LL;
  v6 = *a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v15);
  (*v6)(a2, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, v7);
  v8 = L"DehydrationPolicy";
  v13 = L"DehydrationPolicy";
  v9 = 0;
  do
  {
    ++v8;
    ++v9;
  }
  while ( *v8 );
  v12 = v9 | 0x80000000;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v15 + 656LL))(v15, &v12, v5);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x127,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v10);
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
