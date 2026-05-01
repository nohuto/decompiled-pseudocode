/*
 * XREFs of ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x1802DB508
 * Callers:
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x1802DBB1C (-InitView@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E3F28 (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180305064 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::InitDragData(WindowArrangementView *this)
{
  unsigned int v2; // edi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v3; // rdx
  int Instance; // eax
  unsigned int v5; // ebx
  int pvParam; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[40]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 1LL) < 2;
  if ( SystemParametersInfoW(0x82u, 0, &pvParam, 0) && !pvParam
    || *((_DWORD *)this + 70) == 1
    || ((*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15), v8),
        ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps((ImmersiveApplicationLayout *)v8, v3) == 1) )
  {
    v2 |= 4u;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Instance = DragData_CreateInstance(
               *((_QWORD *)this + 2),
               *((_QWORD *)this + 15),
               *((_QWORD *)this + 11),
               v2,
               &GUID_37174fc0_9131_4a7e_a52f_f91d0258105f,
               (char *)this + 96);
  v5 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3ED,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)Instance);
  return v5;
}
