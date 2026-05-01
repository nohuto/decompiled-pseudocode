/*
 * XREFs of ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801BB580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801B569C (--0-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801B91A4 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801BB404 (--1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAAXIUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801BC714 (-StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QE.c)
 *     ?get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x1801BDE80 (-get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::ChangeBounds(float *a1, __int128 *a2)
{
  int CompositionId; // eax
  unsigned int LastError; // ebx
  unsigned int v6; // esi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // eax
  const char *v11; // r9
  unsigned int v12[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  _QWORD v16[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  CompositionId = ApplicationViewBackedViewHostItem::get_CompositionId((ApplicationViewBackedViewHostItem *)a1, v12);
  LastError = 0;
  v6 = CompositionId;
  if ( CompositionId >= 0 )
  {
    wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v16,
      (__int64)"ApplicationViewBackedViewHostItem_ChangeBounds");
    v8 = *a2;
    v9 = a2[1];
    v16[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::`vftable';
    v13[0] = v8;
    v10 = *((_DWORD *)a2 + 10);
    v14 = *((_QWORD *)a2 + 4);
    v13[1] = v9;
    v15 = v10;
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::StartActivity(v16, v12[0], v13);
    if ( SetWindowPos((HWND)(int)v12[0], 0LL, 0, 0, *(_DWORD *)a2, *((_DWORD *)a2 + 1), 0x504u) )
    {
      a1[37] = (float)*(int *)a2;
      a1[38] = (float)*((int *)a2 + 1);
      wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v16);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x124,
                    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
                    v11);
    }
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::~ApplicationViewBackedViewHostItem_ChangeBounds((HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds *)v16);
    return LastError;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x113,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)CompositionId);
    return v6;
  }
}
