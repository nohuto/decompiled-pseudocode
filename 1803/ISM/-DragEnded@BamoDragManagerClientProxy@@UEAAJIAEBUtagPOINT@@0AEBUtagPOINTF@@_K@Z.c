/*
 * XREFs of ?DragEnded@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@0AEBUtagPOINTF@@_K@Z @ 0x18001CB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001BDD0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::DragEnded(
        BamoDragManagerClientProxy *this,
        int a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4,
        const struct tagPOINTF *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // xmm0_8
  const char *v16; // r9
  __int16 v18; // [rsp+20h] [rbp-59h]
  unsigned int v19; // [rsp+60h] [rbp-19h] BYREF
  __int64 v20; // [rsp+68h] [rbp-11h]
  __int64 v21; // [rsp+70h] [rbp-9h]
  __int64 v22; // [rsp+78h] [rbp-1h]
  struct IMessageCallSendHost *v23; // [rsp+80h] [rbp+7h] BYREF
  _QWORD v24[3]; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]
  unsigned int v26; // [rsp+D0h] [rbp+57h] BYREF

  v9 = 0LL;
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL);
  if ( *(_DWORD *)(v10 + 136) != GetCurrentThreadId() )
  {
    v9 = v10;
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
    *(_DWORD *)(v10 + 136) = GetCurrentThreadId();
  }
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v11 = -2018375660;
    v12 = 3633LL;
    v13 = 2276591636LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)v13);
    goto LABEL_9;
  }
  v14 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
          (BamoDragManagerClientProxy *)((char *)this + 8),
          &v23,
          &v26,
          &v19);
  v11 = v14;
  if ( v14 < 0 )
  {
    v13 = (unsigned int)v14;
    v12 = 3640LL;
    goto LABEL_5;
  }
  v15 = (__int64)*a5;
  v21 = (__int64)*a4;
  v22 = (__int64)*a3;
  v24[0] = v26;
  v24[1] = v19;
  v18 = 2;
  v20 = v15;
  v11 = CoreUICallSend(v23, v24, 2LL, 9LL, v18, &unk_1800F9685, a2);
LABEL_9:
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v16);
      JUMPOUT(0x18001CCA1LL);
    }
    *(_DWORD *)(v9 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
  }
  return v11;
}
