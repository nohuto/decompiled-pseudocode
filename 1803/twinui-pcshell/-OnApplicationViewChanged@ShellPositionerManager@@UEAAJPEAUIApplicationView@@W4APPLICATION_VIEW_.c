/*
 * XREFs of ?OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180024540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?SetPositionerPriority@CApplicationViewBase@@UEAAJPEAUIShellPositionerPriority@@@Z @ 0x180024E60 (-SetPositionerPriority@CApplicationViewBase@@UEAAJPEAUIShellPositionerPriority@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18008AE5C (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1802BDF9C (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerManager::OnApplicationViewChanged(__int64 a1, CApplicationViewBase *a2, int a3)
{
  __int64 (__fastcall *v6)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **); // rax
  int PositionerPriority; // eax
  struct IApplicationView *v8; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v11; // rdx
  __int64 v12; // rdx
  int v13; // eax
  __int64 (__fastcall *v14)(CApplicationViewBase *__hidden, struct IShellPositionerPriority *); // rax
  int Instance; // eax
  __int64 v16; // rdx
  struct IShellPositionerPriority *v17[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]

  v17[1] = (struct IShellPositionerPriority *)-2LL;
  if ( !a3 )
  {
    v17[0] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v17);
    v6 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **))(*(_QWORD *)a2 + 264LL);
    if ( v6 == CApplicationViewBase::GetPositionerPriority )
      PositionerPriority = CApplicationViewBase::GetPositionerPriority(a2, v17);
    else
      PositionerPriority = v6(a2, v17);
    if ( PositionerPriority >= 0 )
      goto LABEL_6;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v17);
    v17[0] = 0LL;
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v8);
    if ( WindowForView )
    {
      PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
      if ( PropW )
      {
        Instance = PositionerPriority_CreateInstance(PropW, v11, (void **)v17);
        if ( Instance >= 0 )
          goto LABEL_10;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D6,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)Instance,
          (int)v17[0]);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v17);
    v13 = PositionerPriority_CreateInstance(*(unsigned int *)(a1 + 40), v12, v17);
    if ( v13 < 0 )
    {
      v16 = 834LL;
      goto LABEL_19;
    }
LABEL_10:
    v14 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority *))(*(_QWORD *)a2 + 272LL);
    if ( v14 == CApplicationViewBase::SetPositionerPriority )
      v13 = CApplicationViewBase::SetPositionerPriority(a2, v17[0]);
    else
      v13 = v14(a2, v17[0]);
    if ( v13 >= 0 )
      goto LABEL_6;
    v16 = 838LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v13,
      (int)v17[0]);
LABEL_6:
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v17);
  }
  return 0LL;
}
