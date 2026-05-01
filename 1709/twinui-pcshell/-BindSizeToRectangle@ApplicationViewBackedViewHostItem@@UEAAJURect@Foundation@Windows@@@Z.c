/*
 * XREFs of ?BindSizeToRectangle@ApplicationViewBackedViewHostItem@@UEAAJURect@Foundation@Windows@@@Z @ 0x18010EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEAPEAVApplicationViewBackedViewHostItem@@$$QEAPEAVViewSizePreferencesChangedEventArgs@@@Z @ 0x1801036D8 (--$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs@@@-$.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewSizePreferencesChangedEventArgs@Holographic@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180109AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewSizePreferen.c)
 *     ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@@012@AEAUSize@Foundation@Windows@@@Z @ 0x18010A164 (--$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Deta.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     floor @ 0x1801E2E52 (floor.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::BindSizeToRectangle(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rsi
  float v4; // xmm0_4
  float v5; // xmm1_4
  LONG v6; // eax
  float v7; // xmm0_4
  LONG v8; // eax
  float v9; // xmm1_4
  HMONITOR v10; // rax
  float v11; // xmm7_4
  int v12; // eax
  float v13; // xmm1_4
  int v14; // eax
  float v15; // xmm1_4
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rdx
  volatile signed __int64 *v19; // rcx
  volatile signed __int64 *v21; // rcx
  volatile signed __int64 *v22; // [rsp+20h] [rbp-40h] BYREF
  int nDenominator[2]; // [rsp+28h] [rbp-38h] BYREF
  volatile signed __int64 *v24; // [rsp+30h] [rbp-30h] BYREF
  RECT rc; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v2 = a1 - 16;
  *(_OWORD *)(a1 + 140) = *a2;
  if ( *(float *)(a1 - 16 + 168) <= 0.0 && *(float *)(v2 + 164) <= 0.0 )
    return 0LL;
  v4 = *(float *)(a1 + 140);
  v5 = *(float *)(a1 + 144);
  *(_QWORD *)&rc.top = 0LL;
  v6 = (int)v4;
  nDenominator[0] = 100;
  v7 = v4 + *(float *)(a1 + 148);
  rc.left = v6;
  v8 = (int)v5;
  v9 = v5 + *(float *)(a1 + 152);
  rc.top = v8;
  rc.right = (int)v7;
  rc.bottom = (int)v9;
  v10 = MonitorFromRect(&rc, 0);
  if ( v10 )
    GetScaleFactorForMonitor(v10, nDenominator);
  v11 = *(float *)(a1 + 152);
  v12 = MulDiv((int)*(float *)(a1 + 148), 100, nDenominator[0]);
  v13 = floor((double)v12 + 0.5);
  *(float *)&v24 = v13;
  v14 = MulDiv((int)v11, 100, nDenominator[0]);
  v22 = 0LL;
  v15 = floor((double)v14 + 0.5);
  *((float *)&v24 + 1) = v15;
  v16 = Microsoft::WRL::Details::MakeAndInitialize<ViewSizePreferencesChangedEventArgs,ViewSizePreferencesChangedEventArgs,Windows::Foundation::Size &>(
          &v22,
          &v24);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v24 = v22;
    *(_QWORD *)nDenominator = v2;
    v16 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem *,ViewSizePreferencesChangedEventArgs *>(
            (RTL_SRWLOCK *)(a1 + 312),
            (__int64 *)nDenominator,
            (__int64 *)&v24);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 546LL;
      goto LABEL_9;
    }
    v21 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v21);
    }
    return 0LL;
  }
  v18 = 545LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v18,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v16);
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v19);
  }
  return v17;
}
