/*
 * XREFs of wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x180183C10
 * Callers:
 *     _CSingleViewShellExperience::WaitForWindowReadyForPresentation_::_1_::dtor$1 @ 0x1801A5599 (_CSingleViewShellExperience--WaitForWindowReadyForPresentation_--_1_--dtor$1.c)
 *     __lambda_00be1f95221eb842538ce67e0fb4e246_::operator()_::_1_::dtor$1 @ 0x1801A55ED (__lambda_00be1f95221eb842538ce67e0fb4e246_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180188998 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___(
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
