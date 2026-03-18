/*
 * XREFs of ?Initialize@CInputConfig@@SAJXZ @ 0x1C0131CA8
 * Callers:
 *     InitializeInputComponents @ 0x1C012E614 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C0120EB0 (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 */

__int64 CInputConfig::Initialize(void)
{
  struct _SINGLE_LIST_ENTRY *v0; // rax
  __int64 v1; // rcx

  CInputConfig::slock = 0LL;
  qword_1C01A1678 = 0LL;
  v0 = (struct _SINGLE_LIST_ENTRY *)Win32AllocPoolZInit(0x30uLL, 0x6F436E49u);
  if ( v0 )
  {
    v0[4].Next = 0LL;
    v1 = 0LL;
    v0[2].Next = 0LL;
    LODWORD(v0[3].Next) = 1;
    v0->Next = 0LL;
    v0[1].Next = 0LL;
    LOBYTE(v0[5].Next) = 1;
  }
  gpInputConfig = v0;
  if ( !v0 )
    return 3221225495LL;
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    v1,
    7LL,
    0,
    1,
    0LL,
    (__int64)lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_);
  return 0LL;
}
