/*
 * XREFs of ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxy@@UEAAJIII@Z @ 0x180027C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001BDD0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnButtonsChangedDuringHomeGesture(
        BamoMPCManagerClientProxy *this,
        int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  const char *v10; // r9
  __int16 v12; // [rsp+20h] [rbp-68h]
  unsigned int v13; // [rsp+50h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v17; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL);
  if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
  {
    v4 = v5;
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v6 = -2018375660;
    v7 = 9915LL;
    v8 = 2276591636LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ISMBamos.bamo.details.inl",
      (const char *)v8);
    goto LABEL_9;
  }
  v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
         (BamoMPCManagerClientProxy *)((char *)this + 8),
         &v14,
         &v17,
         &v13);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = (unsigned int)v9;
    v7 = 9922LL;
    goto LABEL_5;
  }
  v15[0] = v17;
  v15[1] = v13;
  v12 = 7;
  v6 = CoreUICallSend(v14, v15, 2LL, 24LL, v12, &unk_1800F96D8, a2);
LABEL_9:
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v10);
      JUMPOUT(0x180027D8CLL);
    }
    *(_DWORD *)(v4 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
  }
  return v6;
}
