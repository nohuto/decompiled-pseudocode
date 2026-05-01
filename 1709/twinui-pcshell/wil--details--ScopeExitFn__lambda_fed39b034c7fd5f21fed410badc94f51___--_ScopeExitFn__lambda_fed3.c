/*
 * XREFs of wil::details::ScopeExitFn__lambda_fed39b034c7fd5f21fed410badc94f51___::_ScopeExitFn__lambda_fed39b034c7fd5f21fed410badc94f51___ @ 0x1801D36A0
 * Callers:
 *     _CSingleViewShellExperience::WaitForWindowReadyForPresentation_::_1_::dtor$1 @ 0x1801F7A90 (_CSingleViewShellExperience--WaitForWindowReadyForPresentation_--_1_--dtor$1.c)
 *     __lambda_05d91f74b5ede77de7d082105d7f406a_::operator()_::_1_::dtor$1 @ 0x1801F7AE4 (__lambda_05d91f74b5ede77de7d082105d7f406a_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1801D77DC (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_fed39b034c7fd5f21fed410badc94f51___::_ScopeExitFn__lambda_fed39b034c7fd5f21fed410badc94f51___(
        __int64 a1)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v3; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 8) + 16LL), 0LL);
    v3 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 8) + 8LL), 0LL);
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
      *(SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation **)a1,
      v3,
      StringRawBuffer);
  }
}
