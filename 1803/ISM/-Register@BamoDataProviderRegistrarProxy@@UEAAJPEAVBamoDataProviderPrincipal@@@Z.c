/*
 * XREFs of ?Register@BamoDataProviderRegistrarProxy@@UEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x18008BDD0
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
__int64 __fastcall BamoDataProviderRegistrarProxy::Register(
        BamoDataProviderRegistrarProxy *this,
        struct BamoDataProviderPrincipal *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // esi
  Microsoft::BamoImpl::BamoPrincipalImpl *v10; // rax
  int v11; // eax
  const char *v12; // r9
  __int16 v14; // [rsp+20h] [rbp-68h]
  _QWORD v15[8]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v19; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL);
  v5 = 0LL;
  v17 = 0LL;
  if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
  {
    v5 = v4;
    v17 = v4;
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
  }
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v6 = -2018375660;
    v7 = 2276591636LL;
    v8 = 1288LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)v7);
    goto LABEL_12;
  }
  if ( a2 )
  {
    v10 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoDataProviderPrincipal *))(*(_QWORD *)a2 + 32LL))(a2);
    v9 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
           v10,
           *((struct Microsoft::BamoImpl::BamoPeerImpl **)this + 3));
  }
  else
  {
    v9 = 0;
  }
  v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
          (BamoDataProviderRegistrarProxy *)((char *)this + 8),
          &v19,
          (unsigned int *)&v17,
          &v18);
  v6 = v11;
  if ( v11 < 0 )
  {
    v7 = (unsigned int)v11;
    v8 = 1296LL;
    goto LABEL_5;
  }
  v15[0] = (unsigned int)v17;
  v15[1] = v18;
  v14 = 0;
  v6 = CoreUICallSend(v19, v15, 2LL, 2LL, v14, &unk_1800FE145, v9);
LABEL_12:
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v12);
      JUMPOUT(0x18008BF58LL);
    }
    *(_DWORD *)(v5 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
  }
  return v6;
}
