/*
 * XREFs of ?OnInput@BamoAttachableInputObjectSampleProxy@@UEAAJ_J0PEBG@Z @ 0x18001C180
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001BDD0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoAttachableInputObjectSampleProxy::OnInput(
        BamoAttachableInputObjectSampleProxy *this,
        int a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  const char *v12; // r9
  __int16 v14; // [rsp+20h] [rbp-78h]
  unsigned int v15; // [rsp+50h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v19; // [rsp+A0h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL);
  if ( *(_DWORD *)(v7 + 136) != GetCurrentThreadId() )
  {
    v6 = v7;
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v8 = -2018375660;
    v9 = 1154LL;
    v10 = 2276591636LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)v10);
    goto LABEL_9;
  }
  v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
          (BamoAttachableInputObjectSampleProxy *)((char *)this + 8),
          &v16,
          &v19,
          &v15);
  v8 = v11;
  if ( v11 < 0 )
  {
    v10 = (unsigned int)v11;
    v9 = 1161LL;
    goto LABEL_5;
  }
  v17[0] = v19;
  v17[1] = v15;
  v14 = 0;
  v8 = CoreUICallSend(v16, v17, 2LL, 1LL, v14, &unk_1800F9663, a2);
LABEL_9:
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v12);
      JUMPOUT(0x18001C2EBLL);
    }
    *(_DWORD *)(v6 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
  }
  return v8;
}
