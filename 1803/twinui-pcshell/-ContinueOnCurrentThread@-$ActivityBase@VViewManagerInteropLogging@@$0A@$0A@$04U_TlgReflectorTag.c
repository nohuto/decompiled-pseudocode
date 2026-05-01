/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800F67B4
 * Callers:
 *     _lambda_f5c3a3508d94124ca65af9e8c1942170_::operator() @ 0x180136824 (_lambda_f5c3a3508d94124ca65af9e8c1942170_--operator().c)
 *     _lambda_417362b0a1391b76000680eec230619f_::operator() @ 0x18017A760 (_lambda_417362b0a1391b76000680eec230619f_--operator().c)
 *     _lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::operator() @ 0x18017A8E8 (_lambda_f8d696b2e2b9ef5ca7bb243e22227a17_--operator().c)
 *     _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator() @ 0x1801C0DBC (_lambda_ebd42d67d4ed24c24d65003e6952ebf6_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6___::Run @ 0x1801C4630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6___--Run.c)
 *     _lambda_4e85baddd9af2aed2f97afae8fd139c5_::operator() @ 0x1801E479C (_lambda_4e85baddd9af2aed2f97afae8fd139c5_--operator().c)
 *     _lambda_6ec78f2e6dfd28b322b562580e584ea6_::operator() @ 0x1801E48D8 (_lambda_6ec78f2e6dfd28b322b562580e584ea6_--operator().c)
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x180210530 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180210980 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180072120 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  _DWORD *v2; // r8

  v2 = (_DWORD *)*((_QWORD *)a1 + 6);
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    memset_0(this, 0, 0x20uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  return this;
}
