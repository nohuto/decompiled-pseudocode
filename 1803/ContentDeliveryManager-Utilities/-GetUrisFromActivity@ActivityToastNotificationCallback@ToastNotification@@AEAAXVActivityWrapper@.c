/*
 * XREFs of ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x18004C5D8
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x18004B79C (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004AF60 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+28h] BYREF
  __int64 v21; // [rsp+78h] [rbp+30h]
  __int64 v22; // [rsp+80h] [rbp+38h] BYREF
  __int64 v23; // [rsp+88h] [rbp+40h] BYREF

  v21 = a2;
  v20 = a1;
  v18[1] = -2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  MobilityExperience::ActivityWrapper::GetUserActivityPayload(a2, (const WCHAR *)&v23);
  v22 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 192LL))(v23, &v22);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v22)(
         v22,
         &GUID_758d9661_221c_480f_a339_50656673f46f,
         v18);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v8);
    goto LABEL_24;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v18[0] + 48LL))(v18[0], a3);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_24:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0xE2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_25;
  }
  v20 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v23 + 176LL))(
             v23,
             &v20);
  if ( (int)result >= 0 )
  {
    v12 = v20;
    if ( !v20 )
      goto LABEL_11;
    v13 = (**v20)(v20, &GUID_758d9661_221c_480f_a339_50656673f46f, &v17);
    v14 = retaddr;
    if ( v13 >= 0 )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 48LL))(v17, a4);
      v15 = retaddr;
      if ( (int)result >= 0 )
      {
        if ( v17 )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        goto LABEL_10;
      }
LABEL_26:
      wil::details::in1diag3::Throw_Hr(
        v15,
        (void *)0xE8,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)result);
      JUMPOUT(0x18004C7E9LL);
    }
LABEL_25:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v13);
    goto LABEL_26;
  }
LABEL_10:
  v12 = v20;
LABEL_11:
  if ( v12 )
    result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
  if ( v18[0] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
  if ( v22 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v16 = *(_QWORD *)(a2 + 8);
  if ( v16 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return result;
}
