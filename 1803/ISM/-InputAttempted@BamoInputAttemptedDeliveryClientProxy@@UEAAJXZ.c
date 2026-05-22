/*
 * XREFs of ?InputAttempted@BamoInputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x180022C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001BDD0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoInputAttemptedDeliveryClientProxy::InputAttempted(BamoInputAttemptedDeliveryClientProxy *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  const char *v8; // r9
  __int16 v10; // [rsp+20h] [rbp-38h]
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+10h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL);
  if ( *(_DWORD *)(v3 + 136) != GetCurrentThreadId() )
  {
    v2 = v3;
    EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 96));
    *(_DWORD *)(v3 + 136) = GetCurrentThreadId();
  }
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v4 = -2018375660;
    v5 = 6378LL;
    v6 = 2276591636LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)v6);
    goto LABEL_9;
  }
  v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
         (BamoInputAttemptedDeliveryClientProxy *)((char *)this + 8),
         &v15,
         &v13,
         &v14);
  v4 = v7;
  if ( v7 < 0 )
  {
    v6 = (unsigned int)v7;
    v5 = 6385LL;
    goto LABEL_5;
  }
  v11[0] = v13;
  v11[1] = v14;
  v10 = 0;
  v4 = ((__int64 (__fastcall *)(struct IMessageCallSendHost *, _QWORD *, __int64, __int64, __int16, void *))CoreUICallSend)(
         v15,
         v11,
         2LL,
         17LL,
         v10,
         &unk_1800F96C8);
LABEL_9:
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v8);
      JUMPOUT(0x180022DBALL);
    }
    *(_DWORD *)(v2 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 96));
  }
  return v4;
}
