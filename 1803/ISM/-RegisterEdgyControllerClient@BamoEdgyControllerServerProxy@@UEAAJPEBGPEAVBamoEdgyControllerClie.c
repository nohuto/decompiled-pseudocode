/*
 * XREFs of ?RegisterEdgyControllerClient@BamoEdgyControllerServerProxy@@UEAAJPEBGPEAVBamoEdgyControllerClientPrincipal@@@Z @ 0x18001D120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z @ 0x18001BB4C (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001BDD0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoEdgyControllerServerProxy::RegisterEdgyControllerClient(
        BamoEdgyControllerServerProxy *this,
        const unsigned __int16 *a2,
        struct BamoEdgyControllerClientPrincipal *a3)
{
  int v4; // r14d
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v11; // rax
  int v12; // eax
  const char *v13; // r9
  __int16 v15; // [rsp+20h] [rbp-68h]
  struct IMessageCallSendHost *v16[2]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v17[7]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+20h] BYREF

  v16[1] = (struct IMessageCallSendHost *)-2LL;
  v4 = (int)a2;
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL);
  v7 = 0LL;
  v19 = 0LL;
  if ( *(_DWORD *)(v6 + 136) != GetCurrentThreadId() )
  {
    v7 = v6;
    v19 = v6;
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v8 = -2018375660;
    v9 = 2276591636LL;
    v10 = 5612LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)v9);
    goto LABEL_11;
  }
  if ( a3 )
  {
    v11 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoEdgyControllerClientPrincipal *))(*(_QWORD *)a3 + 32LL))(a3);
    Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
      v11,
      *((struct Microsoft::BamoImpl::BamoPeerImpl **)this + 3));
  }
  v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
          (BamoEdgyControllerServerProxy *)((char *)this + 8),
          v16,
          (unsigned int *)&v19,
          &v20);
  v8 = v12;
  if ( v12 < 0 )
  {
    v9 = (unsigned int)v12;
    v10 = 5620LL;
    goto LABEL_5;
  }
  v17[0] = (unsigned int)v19;
  v17[1] = v20;
  v15 = 0;
  v8 = CoreUICallSend(v16[0], v17, 2LL, 14LL, v15, &unk_1800F96BA, v4);
LABEL_11:
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v13);
      JUMPOUT(0x18001D2BBLL);
    }
    *(_DWORD *)(v7 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
  }
  return v8;
}
