/*
 * XREFs of ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B3B3C
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B3090 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B3864 (-Initialize@EdgyProcessorTarget@@IEAAJUtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18000BB40 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18001827C (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180019168 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyProcessorTarget::UpdateInputTarget(__int64 a1, __int64 a2, void *a3)
{
  void *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  int v6; // esi
  char v7; // bl
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v12; // rax
  __int64 *InputSiteFromInputSinkHandle; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rdi
  __int64 v20; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+28h] [rbp-70h] BYREF
  _QWORD *v22; // [rsp+30h] [rbp-68h] BYREF
  void *v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+40h] [rbp-58h]
  __int64 v25; // [rsp+48h] [rbp-50h]
  wil::ResultException *v26; // [rsp+50h] [rbp-48h] BYREF
  __int64 v27; // [rsp+60h] [rbp-38h]

  v25 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  v24 = a1;
  v27 = a2;
  v23 = a3;
  v6 = 0;
  v7 = 0;
  v8 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 112);
  if ( !v8 )
    goto LABEL_11;
  v20 = 0LL;
  if ( (**v8)(v8, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v20) >= 0 )
  {
    if ( !v20 )
      return (unsigned int)-2147418113;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v20 + 24LL))(v20, v4, v3);
    if ( v7 && v3 )
      NtCloseCompositionInputSink(v3);
  }
  v9 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( !v7 )
  {
LABEL_11:
    v22 = 0LL;
    v10 = 0LL;
    v21 = 0LL;
    if ( v3 )
    {
      try
      {
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
        InputSiteFromInputSinkHandle = InputSiteManager::GetInputSiteFromInputSinkHandle(v12, &v20, v3);
        if ( &v21 != InputSiteFromInputSinkHandle )
        {
          v10 = *InputSiteFromInputSinkHandle;
          *InputSiteFromInputSinkHandle = 0LL;
        }
        v21 = v10;
        v14 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      catch ( wil::ResultException *v26 )
      {
        LODWORD(v20) = *((_DWORD *)v26 + 7);
        if ( (int)v20 >= 0 )
        {
          v10 = v21;
          v5 = v24;
          LODWORD(v4) = v27;
          v3 = v23;
          goto LABEL_20;
        }
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        return (unsigned int)v20;
      }
    }
LABEL_20:
    v20 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v6 = DWMInputTarget::Create(v4, &v20, (__int64)&v22);
    if ( v6 >= 0 )
    {
      NtCloseCompositionInputSink(v3);
      v17 = *(_QWORD **)(v5 + 112);
      v18 = v22;
      if ( v17 != v22 )
      {
        if ( v22 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v22 + 8LL))(v22);
          v17 = *(_QWORD **)(v5 + 112);
        }
        *(_QWORD *)(v5 + 112) = v18;
        if ( v17 )
          (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v18 )
      {
        v16 = *v18;
        v15 = v18;
        goto LABEL_36;
      }
    }
    else
    {
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v15 = v22;
      if ( v22 )
      {
        v16 = *v22;
LABEL_36:
        (*(void (__fastcall **)(_QWORD *))(v16 + 16))(v15);
      }
    }
  }
  return (unsigned int)v6;
}
