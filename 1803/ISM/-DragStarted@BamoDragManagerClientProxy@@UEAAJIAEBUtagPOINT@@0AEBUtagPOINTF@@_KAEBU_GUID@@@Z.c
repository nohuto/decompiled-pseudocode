/*
 * XREFs of ?DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@0AEBUtagPOINTF@@_KAEBU_GUID@@@Z @ 0x18001C7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001BDD0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::DragStarted(
        BamoDragManagerClientProxy *this,
        int a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4,
        const struct tagPOINTF *a5,
        unsigned __int64 a6,
        const struct _GUID *a7)
{
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // xmm1_8
  const char *v18; // r9
  __int16 v20; // [rsp+28h] [rbp-71h]
  unsigned int v21; // [rsp+68h] [rbp-31h] BYREF
  __int64 v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+78h] [rbp-21h]
  __int64 v24; // [rsp+80h] [rbp-19h]
  struct IMessageCallSendHost *v25; // [rsp+88h] [rbp-11h] BYREF
  _QWORD v26[3]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v27; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]
  unsigned int v29; // [rsp+E8h] [rbp+4Fh] BYREF

  v11 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL);
  if ( *(_DWORD *)(v12 + 136) != GetCurrentThreadId() )
  {
    v11 = v12;
    EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 96));
    *(_DWORD *)(v12 + 136) = GetCurrentThreadId();
  }
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v13 = -2018375660;
    v14 = 3583LL;
    v15 = 2276591636LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)v15);
    goto LABEL_9;
  }
  v16 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
          (BamoDragManagerClientProxy *)((char *)this + 8),
          &v25,
          &v29,
          &v21);
  v13 = v16;
  if ( v16 < 0 )
  {
    v15 = (unsigned int)v16;
    v14 = 3590LL;
    goto LABEL_5;
  }
  v27 = (__int128)*a7;
  v17 = (__int64)*a5;
  v23 = (__int64)*a4;
  v24 = (__int64)*a3;
  v26[0] = v29;
  v26[1] = v21;
  v20 = 0;
  v22 = v17;
  v13 = CoreUICallSend(v25, v26, 2LL, 9LL, v20, &unk_1800F9675, a2);
LABEL_9:
  if ( v11 )
  {
    if ( *(_DWORD *)(v11 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v18);
      JUMPOUT(0x18001C963LL);
    }
    *(_DWORD *)(v11 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v11 + 96));
  }
  return v13;
}
