/*
 * XREFs of ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003850
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002008 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 * Callees:
 *     ?Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140017E90 (-Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14001955C (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x14001A42C (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x140034B94 (WPP_SF_DDD.c)
 *     WPP_SF_S @ 0x140034BE4 (WPP_SF_S.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        int a2,
        unsigned int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct CEndpointInstance **a5)
{
  __int64 (__fastcall ***v7)(_QWORD, GUID *, CCrossProcessServerOutputEndpoint **); // rbx
  struct HandleSendReceiveServer *v8; // r13
  struct tWAVEFORMATEX *v9; // rdi
  BOOL v10; // r12d
  unsigned int nBlockAlign; // ecx
  DWORD nAvgBytesPerSec; // eax
  int v13; // eax
  double v14; // xmm3_8
  unsigned int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // r8
  int started; // r14d
  int v19; // r12d
  __int64 v20; // r8
  __int64 (__fastcall *v21)(CCrossProcessServerOutputEndpoint *__hidden, struct tWAVEFORMATEX *, unsigned int, unsigned int, const unsigned __int16 *, const unsigned __int16 *, void *, unsigned int, unsigned __int64 *, unsigned __int64 *); // rax
  int v22; // eax
  GUID v23; // xmm0
  struct CEndpointInstance *v24; // rax
  struct CEndpointInstance *v25; // rdi
  void *v26; // rcx
  CCrossProcessServerOutputEndpoint *v28[2]; // [rsp+60h] [rbp-21h] BYREF
  struct HandleSendReceiveServer *v29[2]; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int16 *v30; // [rsp+80h] [rbp-1h]
  __int64 v31; // [rsp+88h] [rbp+7h]
  _OWORD v32[4]; // [rsp+90h] [rbp+Fh] BYREF
  int v33; // [rsp+E0h] [rbp+5Fh]
  __int64 (__fastcall ***v34)(_QWORD, GUID *, CCrossProcessServerOutputEndpoint **); // [rsp+E8h] [rbp+67h] BYREF
  unsigned int v35; // [rsp+F0h] [rbp+6Fh]

  v35 = a3;
  v31 = -2LL;
  v7 = 0LL;
  v34 = 0LL;
  v28[0] = 0LL;
  v8 = 0LL;
  v29[0] = 0LL;
  v9 = (struct tWAVEFORMATEX *)*((_QWORD *)a1 + 10);
  v10 = *(_DWORD *)a1 != 0;
  nBlockAlign = v9->nBlockAlign;
  nAvgBytesPerSec = v9->nAvgBytesPerSec;
  if ( nBlockAlign == 4 )
    v13 = nAvgBytesPerSec >> 2;
  else
    v13 = nAvgBytesPerSec / nBlockAlign;
  v14 = (double)v13;
  v15 = a3 + (int)((double)a2 * (double)v13 / 10000000.0 + 0.5);
  v16 = (int)((double)(int)*((_QWORD *)a1 + 3) * v14 / 10000000.0 + 0.5);
  v17 = v16;
  if ( *((_DWORD *)a1 + 2) != 1 && v15 > v16 )
    v17 = v15;
  v33 = v17;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_5aa50ee117a7329902bac0d78754971b_Traceguids,
      v15,
      v16,
      v17);
  }
  v30 = (unsigned __int16 *)*((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 22) & 0x40000) != 0 )
  {
    started = CEndpointInstance::StartALPCHandleServer(a1, v29);
    if ( started < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11LL,
          &WPP_5aa50ee117a7329902bac0d78754971b_Traceguids,
          (unsigned int)started);
      }
      AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateStreamEndpointInstance", 0x146u, started);
      v8 = v29[0];
      goto LABEL_49;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_5aa50ee117a7329902bac0d78754971b_Traceguids,
        *((_QWORD *)a1 + 12));
    }
    v8 = v29[0];
  }
  if ( v10 )
  {
    *(_OWORD *)v29 = *((_OWORD *)a1 + 3);
    v32[0] = GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6;
    started = privateCreateCrossProcessEndpoint(v32, v29, v17, &v34);
    v7 = v34;
    if ( started < 0 )
      goto LABEL_49;
    started = (**v34)(v34, &GUID_1d3009e2_e512_4c63_86eb_f5ea64a140ee, v28);
    if ( started < 0 )
      goto LABEL_49;
    v19 = v33;
    started = (*(__int64 (__fastcall **)(CCrossProcessServerOutputEndpoint *, struct tWAVEFORMATEX *, _QWORD, _QWORD, unsigned __int16 *, _QWORD, struct HandleSendReceiveServer *, _DWORD, char *, char *))(*(_QWORD *)v28[0] + 24LL))(
                v28[0],
                v9,
                v33 * (unsigned int)v9->nBlockAlign,
                v35,
                v30,
                *((_QWORD *)a1 + 12),
                v8,
                *((_DWORD *)a1 + 22),
                (char *)a4 + 24,
                (char *)a4 + 32);
    if ( started < 0 )
      goto LABEL_49;
    v23 = GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538;
  }
  else
  {
    v32[0] = *((_OWORD *)a1 + 3);
    *(GUID *)v29 = GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561;
    started = privateCreateCrossProcessEndpoint(v29, v32, v17, &v34);
    v7 = v34;
    if ( started < 0 )
      goto LABEL_49;
    started = (**v34)(v34, &GUID_1d3009e2_e512_4c63_86eb_f5ea64a140ee, v28);
    if ( started < 0 )
      goto LABEL_49;
    v19 = v33;
    v20 = v33 * (unsigned int)v9->nBlockAlign;
    v21 = *(__int64 (__fastcall **)(CCrossProcessServerOutputEndpoint *__hidden, struct tWAVEFORMATEX *, unsigned int, unsigned int, const unsigned __int16 *, const unsigned __int16 *, void *, unsigned int, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v28[0] + 24LL);
    v22 = v21 == CCrossProcessServerOutputEndpoint::Initialize
        ? CCrossProcessServerOutputEndpoint::Initialize(
            v28[0],
            v9,
            v20,
            v35,
            v30,
            *((const unsigned __int16 **)a1 + 12),
            v8,
            *((_DWORD *)a1 + 22),
            (unsigned __int64 *)a4 + 3,
            (unsigned __int64 *)a4 + 4)
        : ((__int64 (__fastcall *)(CCrossProcessServerOutputEndpoint *, struct tWAVEFORMATEX *, __int64, _QWORD))v21)(
            v28[0],
            v9,
            v20,
            v35);
    started = v22;
    if ( v22 < 0 )
      goto LABEL_49;
    v23 = GUID_cd773740_b187_4974_a1d5_e0ff91372277;
  }
  *(GUID *)a4 = v23;
  *((_DWORD *)a4 + 22) = 0;
  *((_DWORD *)a4 + 4) = v19 * v9->nBlockAlign;
  v24 = (struct CEndpointInstance *)operator new(0x20uLL);
  v25 = v24;
  if ( v24 )
  {
    *(_QWORD *)v24 = 0LL;
    *((_QWORD *)v24 + 3) = 0LL;
    if ( *(__int64 (__fastcall ****)(_QWORD, GUID *, CCrossProcessServerOutputEndpoint **))v24 != v7 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, CCrossProcessServerOutputEndpoint **)))(*v7)[1])(v7);
      if ( *(_QWORD *)v25 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 16LL))(*(_QWORD *)v25);
      *(_QWORD *)v25 = v7;
    }
    *((_QWORD *)v25 + 2) = v8;
    *((_QWORD *)v25 + 1) = 0LL;
    *a5 = v25;
    goto LABEL_26;
  }
  started = -2147024882;
LABEL_49:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_5aa50ee117a7329902bac0d78754971b_Traceguids,
      (unsigned int)started);
  }
  AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateStreamEndpointInstance", 0x1A1u, started);
  if ( v8 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v8)(v8, 1LL);
LABEL_26:
  v26 = (void *)*((_QWORD *)a1 + 12);
  if ( v26 )
  {
    CoTaskMemFree(v26);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  if ( v28[0] )
    (*(void (__fastcall **)(CCrossProcessServerOutputEndpoint *))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
  if ( v7 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, CCrossProcessServerOutputEndpoint **)))(*v7)[2])(v7);
  return (unsigned int)started;
}
