/*
 * XREFs of ?OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z @ 0x1800C6360
 * Callers:
 *     ?OnDeviceStateChanged@CExclusiveModeListener@@EEAAJPEBGK@Z @ 0x1800C64B0 (-OnDeviceStateChanged@CExclusiveModeListener@@EEAAJPEBGK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x1800C6FDC (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CExclusiveModeListener::OnDeviceAdded(CExclusiveModeListener *this, const unsigned __int16 *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  wil::details::in1diag3 *v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 7);
  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, a2, &v14);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CD,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_16;
  }
  v15 = 0LL;
  v5 = (**v14)(v14, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v15);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (__int64)"internal\\sdk\\inc\\wil/resultmacros.h",
      (const char *)(unsigned int)v5);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 464LL;
LABEL_13:
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)v8);
    goto LABEL_14;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v13);
  v7 = retaddr;
  if ( v10 < 0 )
  {
    v9 = 467LL;
LABEL_12:
    v8 = (unsigned int)v10;
    goto LABEL_13;
  }
  if ( !v13 )
  {
    v10 = CExclusiveModeListener::SetDeviceRendererSelectionMode(retaddr, v14, *((unsigned int *)this + 38));
    v7 = retaddr;
    if ( v10 < 0 )
    {
      v9 = 469LL;
      goto LABEL_12;
    }
  }
LABEL_14:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
  return 0LL;
}
