/*
 * XREFs of ??0?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801AC1E8
 * Callers:
 *     ??0ApplicationViewBackedViewHostItem@@QEAA@XZ @ 0x1801AC518 (--0ApplicationViewBackedViewHostItem@@QEAA@XZ.c)
 *     ??0HolographicPositioner@@QEAA@XZ @ 0x1801AC6F8 (--0HolographicPositioner@@QEAA@XZ.c)
 *     ??0Win32BackedViewHostItem@@QEAA@XZ @ 0x1801ACA10 (--0Win32BackedViewHostItem@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 8));
  InitializeSRWLock((PSRWLOCK)(a1 + 16));
  *(_QWORD *)(a1 + 24) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
