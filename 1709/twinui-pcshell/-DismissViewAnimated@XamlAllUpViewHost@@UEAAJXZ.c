/*
 * XREFs of ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x180159230
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1801590C0 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x18015AD84 (-AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::DismissViewAnimated(XamlAllUpViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v4; // [rsp+30h] [rbp-18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  XamlAllUpViewHost::AnimateDismissFrames(this);
  if ( v4 >= 0 )
    LeaveCriticalSection(v2);
  return 0LL;
}
