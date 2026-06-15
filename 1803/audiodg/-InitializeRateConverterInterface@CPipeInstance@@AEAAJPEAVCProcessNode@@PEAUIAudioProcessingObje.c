/*
 * XREFs of ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400093B0
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x1400089A0 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14000CD30 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000CEC0 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000D2E0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::InitializeRateConverterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // ebx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  __int64 (__fastcall *v11)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v12; // eax
  __int64 (*GetAudioFormat)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  CAudioMediaType *v15; // rbx
  const WAVEFORMATEX *(__stdcall *v16)(IAudioMediaType *); // rax
  const struct tWAVEFORMATEX *v17; // rax
  const struct tWAVEFORMATEX *(__fastcall *v18)(CAudioMediaType *__hidden); // rax
  const struct tWAVEFORMATEX *v19; // rax
  void (*Release)(void); // rax
  struct IAudioMediaType *v21; // [rsp+28h] [rbp-49h] BYREF
  struct IAudioMediaType *v22; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v24[24]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v25; // [rsp+60h] [rbp-11h]
  __int64 v26; // [rsp+68h] [rbp-9h]
  __int64 v27; // [rsp+70h] [rbp-1h]
  __int64 v28; // [rsp+78h] [rbp+7h]
  int v29; // [rsp+80h] [rbp+Fh]

  v23[1] = -2LL;
  v23[0] = 0LL;
  memset(v24, 0, sizeof(v24));
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9,
         v23) < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)a2;
  if ( *((_DWORD *)a2 + 6) )
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, struct IAudioMediaType **))(v8 + 16))(a2, &v21);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, struct IAudioMediaType **))(*(_QWORD *)a2 + 8LL))(a2, &v22);
      if ( v6 >= 0 )
        goto LABEL_16;
    }
  }
  else
  {
    v9 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(v8 + 8);
    if ( v9 == CProcessNode::GetLeftFormat )
      LeftFormat = CProcessNode::GetLeftFormat(a2, &v21);
    else
      LeftFormat = v9(a2, &v21);
    v6 = LeftFormat;
    if ( LeftFormat >= 0 )
    {
      v11 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)a2 + 16LL);
      v12 = v11 == CProcessNode::GetRightFormat ? CProcessNode::GetRightFormat(a2, &v22) : v11(a2, &v22);
      v6 = v12;
      if ( v12 >= 0 )
      {
LABEL_16:
        *(_DWORD *)v24 = 60;
        *(GUID *)&v24[4] = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
        *(float *)&v24[20] = (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->GetAudioFormat)(v21)
                                           + 4);
        GetAudioFormat = (__int64 (*)(void))v22->lpVtbl->GetAudioFormat;
        if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
          AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v22);
        else
          AudioFormat = (const struct tWAVEFORMATEX *)GetAudioFormat();
        *(float *)&v25 = (float)(int)AudioFormat->nSamplesPerSec;
        if ( (float)((float)(1.0 - *((float *)this + 48))
                   * (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->GetAudioFormat)(v21)
                                   + 4)) < 10.0 )
          HIDWORD(v25) = 1092616192;
        else
          *((float *)&v25 + 1) = (float)(1.0 - *((float *)this + 48))
                               * (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->GetAudioFormat)(v21)
                                               + 4);
        if ( (float)((float)(*((float *)this + 49) + 1.0)
                   * (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->GetAudioFormat)(v21)
                                   + 4)) > 384000.0 )
          LODWORD(v26) = 1220247552;
        else
          *(float *)&v26 = (float)(*((float *)this + 49) + 1.0)
                         * (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->GetAudioFormat)(v21)
                                         + 4);
        v15 = (CAudioMediaType *)v22;
        v16 = v22->lpVtbl->GetAudioFormat;
        if ( (char *)v16 == (char *)CAudioMediaType::GetAudioFormat )
        {
          v17 = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v22);
        }
        else
        {
          v17 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v16)(v22);
          v15 = (CAudioMediaType *)v22;
        }
        *((float *)&v26 + 1) = (float)(int)v17->nSamplesPerSec;
        v18 = *(const struct tWAVEFORMATEX *(__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v15 + 40LL);
        if ( v18 == CAudioMediaType::GetAudioFormat )
          v19 = CAudioMediaType::GetAudioFormat(v15);
        else
          v19 = v18(v15);
        *(float *)&v27 = (float)(int)v19->nSamplesPerSec;
        HIDWORD(v27) = *((_DWORD *)this + 50);
        HIDWORD(v28) = *(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->GetAudioFormat)(v21)
                                           + 2);
        v29 = 0;
        LODWORD(v28) = *((_DWORD *)this + 3) != 0;
        v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))a3->lpVtbl->Initialize)(
               a3,
               60LL,
               v24);
        if ( v6 >= 0 )
          goto LABEL_3;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      46LL,
      &WPP_0100469152753b0964101f667eb0634c_Traceguids,
      (unsigned int)v6);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeRateConverterInterface", 0xDA1u, v6);
LABEL_3:
  if ( v22 )
  {
    Release = (void (*)(void))v22->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v22);
    else
      Release();
  }
  if ( v21 )
    ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
  if ( v23[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
  return (unsigned int)v6;
}
