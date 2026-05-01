/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b4e5891bfe32cdf355ef1d0f41df519___::Run @ 0x18011AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@W4PopupClientPropertyChangedEventType@Popups@Shell@Internal@Windows@@@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJW4PopupClientPropertyChangedEventType@Popups@Shell@Internal@Windows@@@Z @ 0x18011972C (--$InvokeAll@W4PopupClientPropertyChangedEventType@Popups@Shell@Internal@Windows@@@-$EventSource.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b4e5891bfe32cdf355ef1d0f41df519___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<enum Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType>(
         (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 288LL),
         1u);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v1);
}
