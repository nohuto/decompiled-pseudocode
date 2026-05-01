/*
 * XREFs of ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010DCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180107B34 (--1-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180108F3C (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180109358 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAAXIUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010CCD8 (-StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QE.c)
 *     ?get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x18010D160 (-get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z.c)
 *     ??$ApplicationViewBackedViewHostItem_ChangeBounds_SizeBoundToRectangle@AEAMAEAM@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAAXAEAM0@Z @ 0x18010F6AC (--$ApplicationViewBackedViewHostItem_ChangeBounds_SizeBoundToRectangle@AEAMAEAM@ApplicationViewB.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::ChangeBounds(float *a1, __int64 a2)
{
  int CompositionId; // eax
  unsigned int LastError; // edi
  unsigned int v6; // ebx
  int v8; // eax
  __int128 v9; // xmm1
  const char *v10; // r9
  unsigned int v11[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+70h] [rbp-90h]
  _QWORD v14[4]; // [rsp+80h] [rbp-80h] BYREF
  int v15; // [rsp+A0h] [rbp-60h]
  int *v16; // [rsp+A8h] [rbp-58h]
  int *v17; // [rsp+B0h] [rbp-50h]
  int v18; // [rsp+B8h] [rbp-48h] BYREF
  char v19; // [rsp+BCh] [rbp-44h]
  int v20; // [rsp+E0h] [rbp-20h] BYREF
  const char *v21; // [rsp+E8h] [rbp-18h]
  __int64 v22; // [rsp+F0h] [rbp-10h]
  char v23; // [rsp+F8h] [rbp-8h]
  __int64 v24; // [rsp+100h] [rbp+0h]
  _BYTE v25[144]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v26; // [rsp+198h] [rbp+98h]
  __int64 v27; // [rsp+1A0h] [rbp+A0h]
  __int64 v28; // [rsp+1A8h] [rbp+A8h]
  __int64 v29; // [rsp+1B0h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  CompositionId = ApplicationViewBackedViewHostItem::get_CompositionId((ApplicationViewBackedViewHostItem *)a1, v11);
  LastError = 0;
  v6 = CompositionId;
  if ( CompositionId >= 0 )
  {
    v14[1] = 0LL;
    v14[2] = v14;
    v14[3] = 0LL;
    v16 = &v20;
    v15 = 0;
    v17 = &v18;
    v18 = 0;
    v21 = "ApplicationViewBackedViewHostItem_ChangeBounds";
    v19 = 0;
    v23 = 0;
    v20 = 0;
    v22 = 0LL;
    v24 = 1LL;
    v26 = 0LL;
    v27 = 0LL;
    memset(v25, 0, sizeof(v25));
    v8 = *(_DWORD *)(a2 + 32);
    v9 = *(_OWORD *)(a2 + 16);
    v12[0] = *(_OWORD *)a2;
    v12[1] = v9;
    v28 = 0LL;
    v29 = 0LL;
    v14[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::`vftable';
    v13 = v8;
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::StartActivity(
      (__int64)v14,
      v11[0],
      v12);
    if ( a1[42] > 0.0 || a1[41] > 0.0 )
    {
      HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::ApplicationViewBackedViewHostItem_ChangeBounds_SizeBoundToRectangle<float &,float &>(
        v14,
        a1 + 41,
        a1 + 42);
      *(_DWORD *)a2 = (int)a1[41];
      *(_DWORD *)(a2 + 4) = (int)a1[42];
    }
    if ( SetWindowPos((HWND)(int)v11[0], 0LL, 0, 0, *(_DWORD *)a2, *(_DWORD *)(a2 + 4), 0x504u) )
    {
      a1[37] = (float)*(int *)a2;
      a1[38] = (float)*(int *)(a2 + 4);
      wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x125,
                    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
                    v10);
    }
    v14[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::`vftable';
    wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
    wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
    return LastError;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x10A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)CompositionId);
    return v6;
  }
}
