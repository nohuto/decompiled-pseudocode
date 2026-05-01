/*
 * XREFs of ?SetChromeOptions@CApplicationFrameWrapper@@UEAAJW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z @ 0x180016E40
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e838790a865a27ecf6fb8473ff15cc2___::Run @ 0x18008E610 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1e838790a865a27ecf6fb8473ff15cc2___--Run.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetChromeOptions(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 112LL))(*(_QWORD *)(a1 + 112));
}
