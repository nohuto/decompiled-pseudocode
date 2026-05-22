/*
 * XREFs of ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x180066190
 * Callers:
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1800B4280 (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001BDD0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoEdgyControllerClientProxy::EdgyGestureDetected(
        BamoEdgyControllerClientProxy *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const struct D2D_VECTOR_2F *a4,
        unsigned __int64 a5,
        const struct D2D_VECTOR_2F *a6)
{
  int v7; // r12d
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // xmm0_8
  const char *v16; // r9
  __int16 v18; // [rsp+28h] [rbp-71h]
  unsigned int v19; // [rsp+78h] [rbp-21h] BYREF
  __int64 v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  struct IMessageCallSendHost *v22; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v23[2]; // [rsp+98h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+37h]
  unsigned int v25; // [rsp+D8h] [rbp+3Fh] BYREF

  v7 = (int)a2;
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
    v12 = 5128LL;
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
          (BamoEdgyControllerClientProxy *)((char *)this + 8),
          &v22,
          &v25,
          &v19);
  v11 = v14;
  if ( v14 < 0 )
  {
    v13 = (unsigned int)v14;
    v12 = 5135LL;
    goto LABEL_5;
  }
  v21 = (__int64)*a4;
  v15 = (__int64)*a6;
  v23[0] = v25;
  v23[1] = v19;
  v18 = 0;
  v20 = v15;
  v11 = CoreUICallSend(v22, v23, 2LL, 12LL, v18, &unk_1800F96A7, v7);
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
      JUMPOUT(0x18006633DLL);
    }
    *(_DWORD *)(v9 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
  }
  return v11;
}
