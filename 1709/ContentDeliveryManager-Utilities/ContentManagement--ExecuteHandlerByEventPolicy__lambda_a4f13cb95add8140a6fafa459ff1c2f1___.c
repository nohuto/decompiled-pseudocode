/*
 * XREFs of ContentManagement::ExecuteHandlerByEventPolicy__lambda_a4f13cb95add8140a6fafa459ff1c2f1___ @ 0x180037328
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x18002BD80 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800261F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18002AF5C (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     _lambda_a4f13cb95add8140a6fafa459ff1c2f1_::operator() @ 0x18002C36C (_lambda_a4f13cb95add8140a6fafa459ff1c2f1_--operator().c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x180038740 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x180038910 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ExecuteHandlerByEventPolicy__lambda_a4f13cb95add8140a6fafa459ff1c2f1___(
        void *Src,
        __int64 a2,
        HSTRING a3,
        unsigned int a4,
        __int64 a5,
        HSTRING **a6,
        __int64 *a7)
{
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rbx
  WCHAR *StringRawBuffer; // rax
  int v17; // eax
  unsigned int v18; // r14d
  volatile signed __int32 *v19; // rdi
  int v21; // esi
  __int64 v22; // rdx
  volatile signed __int32 *v23; // rdi
  __int64 *v24; // rbx
  volatile signed __int32 *v25; // rdi
  _BYTE v26[8]; // [rsp+30h] [rbp-30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+40h] [rbp-20h]
  _QWORD v29[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v31; // [rsp+A8h] [rbp+48h] BYREF

  v28 = -2LL;
  LOBYTE(v31) = 0;
  if ( a4 <= 0xB )
  {
    v11 = 2053;
    if ( _bittest(&v11, a4) )
    {
      if ( !a2 )
        goto LABEL_12;
      v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, _BYTE *))(*(_QWORD *)a2 + 48LL))(
              a2,
              a3,
              a4,
              a5,
              v26);
      v13 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x118,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v12);
      if ( !v13 && v26[0] )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, int *))(*(_QWORD *)a2 + 64LL))(
                a2,
                a3,
                a4,
                a5,
                &v31);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x11D,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)v14);
        if ( !(_BYTE)v31 )
          goto LABEL_33;
      }
      else
      {
LABEL_12:
        if ( a4 )
        {
          if ( a4 == 2 )
            anonymous_namespace_::PlacementHealth::HandleEvent_9_(Src);
        }
        else
        {
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          v15 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
          StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
          anonymous_namespace_::GetImpressionEventExpirationTime(Src, StringRawBuffer, v15);
        }
      }
    }
  }
  v17 = lambda_a4f13cb95add8140a6fafa459ff1c2f1_::operator()(a6, a4);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x12B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v17);
    v19 = (volatile signed __int32 *)a7[1];
    if ( v19 && _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
    return v18;
  }
  if ( a2 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(a2, a3, a4, a5);
    if ( v21 < 0 )
    {
      v22 = 302LL;
      goto LABEL_25;
    }
  }
  if ( (_BYTE)v31 )
  {
    v21 = lambda_a4f13cb95add8140a6fafa459ff1c2f1_::operator()(a6, 0xCu);
    if ( v21 < 0 )
    {
      v22 = 308LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v22,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v21);
      v23 = (volatile signed __int32 *)a7[1];
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
      }
      return (unsigned int)v21;
    }
  }
LABEL_33:
  v24 = a7;
  std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
    v29,
    a7);
  anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___(Src);
  v25 = (volatile signed __int32 *)v24[1];
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  return 0LL;
}
