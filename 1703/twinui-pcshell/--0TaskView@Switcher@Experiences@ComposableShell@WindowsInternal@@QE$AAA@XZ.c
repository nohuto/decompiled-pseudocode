/*
 * XREFs of ??0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18012F158
 * Callers:
 *     _lambda_4d9498deded80cfab1ff9f78bf19bcab_::operator() @ 0x18012E08C (_lambda_4d9498deded80cfab1ff9f78bf19bcab_--operator().c)
 *     _lambda_650cc3be0f7c1281208c8cf80a59183f_::operator() @ 0x18013F570 (_lambda_650cc3be0f7c1281208c8cf80a59183f_--operator().c)
 *     _lambda_595b6875358bb48b4963d1a32745e1c2_::operator() @ 0x180141268 (_lambda_595b6875358bb48b4963d1a32745e1c2_--operator().c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x18011E6EC (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18019716C (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskView::TaskView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  unsigned int (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rax
  unsigned int (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 v7; // rbx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]
  __int64 v12; // [rsp+70h] [rbp+28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+30h] BYREF
  __int64 v14; // [rsp+80h] [rbp+38h]
  unsigned int (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // [rsp+88h] [rbp+40h]

  v9 = 53LL;
  v10 = 192;
  v11 = 1174405120;
  v12 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.TaskView",
                                &v9,
                                (struct Platform::Guid *)&v12,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v5 = (unsigned int (__fastcall ***)(_QWORD, _QWORD, _QWORD))Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v12);
  v6 = v5;
  v15 = v5;
  v7 = 0LL;
  v13 = 0LL;
  if ( v5 && !(**v5)(v5, &_uuidof__AVTaskView_Switcher_Experiences_ComposableShell_WindowsInternal__, &v13) )
    v7 = v13;
  v14 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v14 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    ((void (__fastcall *)(unsigned int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v6)[2])(v6);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v7;
}
