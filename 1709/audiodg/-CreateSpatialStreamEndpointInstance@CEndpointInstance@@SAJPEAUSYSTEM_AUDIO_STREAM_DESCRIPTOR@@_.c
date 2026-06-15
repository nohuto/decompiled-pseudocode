/*
 * XREFs of ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140042678
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002214 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 * Callees:
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x14001A344 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ??2@YAPEAX_K@Z @ 0x14001C898 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x140030240 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_DDD @ 0x140035FA8 (WPP_SF_DDD.c)
 *     WPP_SF_S @ 0x140035FF8 (WPP_SF_S.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     CreateSpatialCrossProcessEndpointRT @ 0x14005BE4C (CreateSpatialCrossProcessEndpointRT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointInstance::CreateSpatialStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        int a2,
        int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct CEndpointInstance **a5)
{
  struct IAudioEndpointRT *v7; // rbx
  struct HandleSendReceiveServer *v8; // r14
  double v9; // xmm3_8
  unsigned int v10; // r8d
  double v11; // xmm0_8
  int v12; // r15d
  _UNKNOWN **v13; // rcx
  __int64 v14; // r12
  int started; // edi
  CEndpointInstance *v16; // rax
  void *v17; // rcx
  int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+28h] [rbp-D8h]
  int v21; // [rsp+30h] [rbp-D0h]
  struct IAudioEndpointRT *v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  CEndpointInstance *v25; // [rsp+48h] [rbp-B8h]
  struct HandleSendReceiveServer *v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct CEndpointInstance **v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  GUID v29; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+80h] [rbp-80h] BYREF
  __int128 v31; // [rsp+88h] [rbp-78h]
  __int128 v32; // [rsp+98h] [rbp-68h]
  __int128 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D4h] [rbp-2Ch]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  __int64 v40; // [rsp+E0h] [rbp-20h]
  struct HandleSendReceiveServer *v41; // [rsp+E8h] [rbp-18h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]

  v28 = -2LL;
  v27 = a5;
  v7 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  v26[0] = 0LL;
  v25 = (CEndpointInstance *)*((_QWORD *)a1 + 10);
  v21 = *(_DWORD *)a1;
  v9 = (double)(int)(*((_DWORD *)v25 + 2) / (unsigned int)*((unsigned __int16 *)v25 + 6));
  v10 = a3 + (int)((double)a2 * v9 / 10000000.0 + 0.5);
  v11 = (double)(int)*((_QWORD *)a1 + 3) * v9 / 10000000.0 + 0.5;
  v12 = (int)v11;
  if ( *((_DWORD *)a1 + 2) != 1 && v10 > (int)v11 )
    v12 = v10;
  v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v20 = v12;
    v19 = (int)v11;
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xEu,
      (__int64)&WPP_a8d630645d0b339664572c2ddd340e05_Traceguids,
      v10);
    v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v14 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 22) & 0x40000) != 0 )
  {
    started = CEndpointInstance::StartALPCHandleServer(a1, v26);
    if ( started < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xFu,
          (__int64)&WPP_a8d630645d0b339664572c2ddd340e05_Traceguids,
          started);
      }
      AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateSpatialStreamEndpointInstance", 0x20Bu, started);
      v8 = v26[0];
      goto LABEL_30;
    }
    v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_a8d630645d0b339664572c2ddd340e05_Traceguids,
        *((const wchar_t **)a1 + 12));
      v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    v8 = v26[0];
  }
  if ( v21 )
  {
    started = -2147418113;
    goto LABEL_31;
  }
  *(_OWORD *)v26 = *((_OWORD *)a1 + 3);
  v29 = GUID_6b78656b_c0e1_4190_83ee_ef91c2908926;
  started = CreateSpatialCrossProcessEndpointRT(&v29, v26, &v23);
  v7 = v23;
  if ( started >= 0 )
  {
    started = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, __int64 *))v23->lpVtbl->QueryInterface)(
                v23,
                &GUID_50a63589_dc31_42b1_8e82_dbb0ab53dda5,
                &v24);
    if ( started >= 0 )
    {
      v30 = 144;
      v31 = *((_OWORD *)a1 + 9);
      v32 = *((_OWORD *)a1 + 10);
      v33 = *((_OWORD *)a1 + 11);
      v34 = *((_QWORD *)a1 + 24);
      v35 = 0;
      v36 = *((_QWORD *)a1 + 4);
      v37 = v12 * *((unsigned __int16 *)v25 + 6);
      v38 = a3;
      v39 = v14;
      v40 = *((_QWORD *)a1 + 12);
      v41 = v8;
      v42 = 0LL;
      v43 = *((_QWORD *)a1 + 10);
      v44 = *((_QWORD *)a1 + 8);
      started = (*(__int64 (__fastcall **)(__int64, int *, char *, char *, int, int))(*(_QWORD *)v24 + 24LL))(
                  v24,
                  &v30,
                  (char *)a4 + 24,
                  (char *)a4 + 32,
                  v19,
                  v20);
      if ( started >= 0 )
      {
        *(GUID *)a4 = GUID_9371e7ff_df2d_4962_9585_40424d054550;
        *((_DWORD *)a4 + 22) = 0;
        *((_DWORD *)a4 + 4) = v12 * *((unsigned __int16 *)v25 + 6);
        v16 = (CEndpointInstance *)operator new(0x20uLL);
        v25 = v16;
        if ( v16 )
          v16 = CEndpointInstance::CEndpointInstance(v16, (struct IUnknown *)v7, v8, 0LL);
        if ( v16 )
        {
          *v27 = v16;
          goto LABEL_37;
        }
        started = -2147024882;
      }
    }
  }
LABEL_30:
  v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_31:
  if ( v13 != &WPP_GLOBAL_Control && (*((_DWORD *)v13 + 7) & 0x20000) != 0 && *((_BYTE *)v13 + 25) >= 2u )
    WPP_SF_D((__int64)v13[2], 0x11u, (__int64)&WPP_a8d630645d0b339664572c2ddd340e05_Traceguids, started);
  AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateSpatialStreamEndpointInstance", 0x24Eu, started);
  if ( v8 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v8)(v8, 1LL);
LABEL_37:
  v17 = (void *)*((_QWORD *)a1 + 12);
  if ( v17 )
  {
    CoTaskMemFree(v17);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v7 )
    ((void (__fastcall *)(struct IAudioEndpointRT *))v7->lpVtbl->Release)(v7);
  return (unsigned int)started;
}
