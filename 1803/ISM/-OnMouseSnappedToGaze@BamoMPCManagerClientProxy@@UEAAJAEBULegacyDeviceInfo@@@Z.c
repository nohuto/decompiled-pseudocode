/*
 * XREFs of ?OnMouseSnappedToGaze@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@@Z @ 0x180028160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001BDD0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnMouseSnappedToGaze(
        BamoMPCManagerClientProxy *this,
        const struct LegacyDeviceInfo *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  const char *v24; // r9
  __int16 v26; // [rsp+20h] [rbp-E0h]
  _QWORD v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v28[1024]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+458h] [rbp+358h]
  unsigned int v30; // [rsp+460h] [rbp+360h] BYREF
  unsigned int v31; // [rsp+470h] [rbp+370h] BYREF
  struct IMessageCallSendHost *v32; // [rsp+478h] [rbp+378h] BYREF

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
    v7 = 9829LL;
    v8 = 2276591636LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ISMBamos.bamo.details.inl",
      (const char *)v8);
    goto LABEL_11;
  }
  v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
         (BamoMPCManagerClientProxy *)((char *)this + 8),
         &v32,
         &v30,
         &v31);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = (unsigned int)v9;
    v7 = 9836LL;
    goto LABEL_5;
  }
  v10 = 7LL;
  v11 = v28;
  do
  {
    v12 = *((_OWORD *)a2 + 1);
    *v11 = *(_OWORD *)a2;
    v13 = *((_OWORD *)a2 + 2);
    v11[1] = v12;
    v14 = *((_OWORD *)a2 + 3);
    v11[2] = v13;
    v15 = *((_OWORD *)a2 + 4);
    v11[3] = v14;
    v16 = *((_OWORD *)a2 + 5);
    v11[4] = v15;
    v17 = *((_OWORD *)a2 + 6);
    v11[5] = v16;
    v18 = *((_OWORD *)a2 + 7);
    a2 = (const struct LegacyDeviceInfo *)((char *)a2 + 128);
    v11[6] = v17;
    v11 += 8;
    *(v11 - 1) = v18;
    --v10;
  }
  while ( v10 );
  v19 = *((_QWORD *)a2 + 10);
  v20 = *((_OWORD *)a2 + 1);
  *v11 = *(_OWORD *)a2;
  v21 = *((_OWORD *)a2 + 2);
  v11[1] = v20;
  v22 = *((_OWORD *)a2 + 3);
  v11[2] = v21;
  v23 = *((_OWORD *)a2 + 4);
  v11[3] = v22;
  v11[4] = v23;
  *((_QWORD *)v11 + 10) = v19;
  v27[0] = v30;
  v27[1] = v31;
  v26 = 3;
  v6 = CoreUICallSend(v32, v27, 2LL, 24LL, v26, &unk_1800F96D3, (unsigned int)v28);
LABEL_11:
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v24);
      JUMPOUT(0x18002833DLL);
    }
    *(_DWORD *)(v4 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
  }
  return v6;
}
