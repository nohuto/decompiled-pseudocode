/*
 * XREFs of ??1?$ComPtr@VShellPositionerProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FB1E0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ShellPositionerProxy_IShellPositionerProxy_IShellPositionerManager_____ptr64_&___ptr64_IApplicationView_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x1800B11EC (_Microsoft--WRL--Details--MakeAndInitialize_ShellPositionerProxy_IShellPositionerPr_ea_1800B11EC.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerProxy@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025390 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ShellPositionerProxy>::~ComPtr<ShellPositionerProxy>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,IShellPositionerProxy>::Release(
             result,
             a2);
  }
  return result;
}
