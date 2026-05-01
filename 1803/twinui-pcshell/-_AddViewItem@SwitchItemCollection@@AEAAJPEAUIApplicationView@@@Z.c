/*
 * XREFs of ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x18027A0C4
 * Callers:
 *     ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180279D30 (-OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x18027A288 (-_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18027A4FC (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800954CC (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180279E78 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHidi.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180286AA8 (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 */

__int64 __fastcall SwitchItemCollection::_AddViewItem(SwitchItemCollection *this, RTL_SRWLOCK *a2)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  struct IApplicationView *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  int v20[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v23; // [rsp+88h] [rbp+38h] BYREF
  int v24; // [rsp+90h] [rbp+40h] BYREF
  int v25; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0;
  v21[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
  if ( (*(int (__fastcall **)(RTL_SRWLOCK *, GUID *, __int64 *))a2->Ptr)(
         a2,
         &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
         v21) >= 0 )
  {
    v5 = v21[0];
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v19) >= 0 )
    {
      v6 = v19;
      v23 = 0;
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64, const WCHAR *, int *))(*(_QWORD *)v19 + 88LL))(
          v19,
          L"Microsoft.Windows.Desktop",
          &v23);
        if ( v23 )
          goto LABEL_11;
        v6 = v19;
      }
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 56LL))(v6, &v24) >= 0 && v24 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_9;
      }
    }
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_20;
  }
LABEL_9:
  v7 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, int *))a2->Ptr + 27))(a2, &v25);
  v11 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v7);
    v3 = v11;
    goto LABEL_20;
  }
  if ( v25 )
  {
    wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::ReportUsageToService(v9, v8, v10);
    if ( !HolographicViewHelpers::IsApplicationViewHolographic(a2, v12) )
    {
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v13, 3u, v14);
      v15 = *((_QWORD *)this + 26);
      *(_QWORD *)v20 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
      v16 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD, GUID *, int *))(*(_QWORD *)v15 + 24LL))(
              v15,
              a2,
              0LL,
              &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27,
              v20);
      if ( v16 >= 0 )
      {
        v16 = ObservableObjectArray::_AddItem((char *)this + 8, v20, 0LL);
        if ( v16 >= 0 )
        {
LABEL_19:
          v3 = v16;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
          goto LABEL_20;
        }
        v17 = 250LL;
      }
      else
      {
        v17 = 249LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_19;
    }
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
  return v3;
}
