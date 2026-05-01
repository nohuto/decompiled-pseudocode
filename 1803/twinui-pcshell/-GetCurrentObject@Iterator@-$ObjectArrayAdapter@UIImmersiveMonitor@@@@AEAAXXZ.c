/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ @ 0x1801F83D4
 * Callers:
 *     ??0Iterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA@QEAV1@I@Z @ 0x1801F7728 (--0Iterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA@QEAV1@I@Z.c)
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1801F8A60 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18020A004 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ObjectArrayAdapter<IImmersiveMonitor>::Iterator::GetCurrentObject(__int64 *a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1 + 1;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1 + 1);
  v3 = a1[2];
  result = *(unsigned int *)(v3 + 8);
  if ( *(_DWORD *)a1 < (unsigned int)result )
  {
    do
    {
      v5 = *(_QWORD *)v3;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v1);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 32LL))(
                 v5,
                 *(unsigned int *)a1,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 v1);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        50LL,
        (__int64)"internal\\shell\\private\\inc\\objectarrayadapter.h",
        (const char *)(unsigned int)result);
      ++*(_DWORD *)a1;
      v3 = a1[2];
      result = *(unsigned int *)a1;
    }
    while ( (unsigned int)result < *(_DWORD *)(v3 + 8) );
  }
  return result;
}
