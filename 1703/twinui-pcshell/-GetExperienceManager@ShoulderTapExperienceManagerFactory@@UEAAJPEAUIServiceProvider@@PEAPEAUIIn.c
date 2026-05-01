/*
 * XREFs of ?GetExperienceManager@ShoulderTapExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800A7CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIIconFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009C380 (-Release@-$RuntimeClass@U-$InterfaceList@UIIconFactory@Common@Multitasking@Experiences@Composabl.c)
 *     ??0CShoulderTapExperienceManager@@QEAA@XZ @ 0x1800A6D48 (--0CShoulderTapExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A6F30 (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIShoulderTapExperienceManager@Experience@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7D80 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIShoulderTapExperienceManager@Experience@Shell@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShoulderTapExperienceManagerFactory::GetExperienceManager(
        ShoulderTapExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  __int64 v5; // rax
  CShoulderTapExperienceManager *v6; // rax
  int Interface; // ebx
  CShoulderTapExperienceManager *v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 2LL;
  do
  {
    *a3 = 0LL;
    --v5;
  }
  while ( v5 );
  v6 = (CShoulderTapExperienceManager *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
  {
    Interface = -2147024882;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)Interface);
    return (unsigned int)Interface;
  }
  v8 = CShoulderTapExperienceManager::CShoulderTapExperienceManager(v6);
  Interface = CShoulderTapExperienceManager::RuntimeClassInitialize(v8, a2);
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShoulderTapExperienceManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  v8,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  (void **)a3);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IIconFactory,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v8);
  if ( Interface < 0 )
    goto LABEL_10;
  return (unsigned int)Interface;
}
