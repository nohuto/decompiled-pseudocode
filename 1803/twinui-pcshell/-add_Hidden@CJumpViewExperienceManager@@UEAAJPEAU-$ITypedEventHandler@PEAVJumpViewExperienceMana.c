/*
 * XREFs of ?add_Hidden@CJumpViewExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVJumpViewExperienceManager@Experience@Shell@Internal@Windows@@PEAVJumpViewExperienceEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18007B140
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180069034 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::add_Hidden(__int64 a1, struct IUnknown *a2, struct IUnknown **a3)
{
  int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = -2147024809;
    goto LABEL_5;
  }
  v3 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
         a1 + 96,
         a2,
         a2->lpVtbl[1].QueryInterface,
         a3);
  if ( v3 < 0 )
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x179,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      v5);
  return (unsigned int)v3;
}
