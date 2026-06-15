/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000A9F0
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000ACD0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EDF0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     WPP_SF__guid_ @ 0x14003FBC8 (WPP_SF__guid_.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140046F74 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::ActivateAPOs(CPipeInstance *this, __int64 a2)
{
  int v3; // r15d
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, _QWORD, int); // rax
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v14; // r12
  int v15; // edx
  char *v16; // rsi
  _QWORD *v17; // rcx
  PROPVARIANT pvar; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp-18h]
  __int64 v21; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+50h]
  __int64 v23; // [rsp+C0h] [rbp+58h] BYREF
  LPVOID ppv; // [rsp+C8h] [rbp+60h] BYREF

  v22 = a2;
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    goto LABEL_14;
  do
  {
    v7 = *(_QWORD *)(v6 + 16);
    v6 = *(_QWORD *)(v6 + 8);
    if ( *(_DWORD *)(v7 + 40) != 2 )
      continue;
    v4 = *(_QWORD *)(v7 + 32);
    v5 = *(_QWORD *)(v4 + 40);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      a2 = v22;
    }
    v8 = *((_QWORD *)this + 18);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int))(*(_QWORD *)v8 + 56LL);
    if ( *((_DWORD *)this + 3) == 1 )
      v10 = v9(v8, a2, v5, 0LL, 1);
    else
      v10 = v9(v8, a2, v5, 0LL, 0);
    v3 = v10;
    if ( v10 < 0 )
      goto LABEL_37;
    v11 = *(int *)(v4 + 4);
    if ( (_DWORD)v11 )
    {
      v14 = *((_QWORD *)this + 23);
      ppv = 0LL;
      v23 = 0LL;
      if ( (unsigned int)GetClassFromEndpointId(v14) == 3
        || CoCreateInstance(
             &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
             0LL,
             0x17u,
             &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
             &ppv) < 0
        || (*(int (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v14, &v23) < 0 )
      {
LABEL_29:
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
        goto LABEL_9;
      }
      v21 = 0LL;
      v15 = dword_140086260;
      if ( (dword_140086260 & 1) == 0 )
      {
        v15 = dword_140086260 | 1;
        dword_140086260 |= 1u;
        xmmword_140086224 = PKEY_Endpoint_LFX_FailCount;
        dword_140086234 = 9;
        xmmword_140086238 = PKEY_Endpoint_GFX_FailCount;
        dword_140086248 = 8;
        xmmword_14008624C = PKEY_Endpoint_EFX_FailCount;
        dword_14008625C = 31;
      }
      if ( (v15 & 2) == 0 )
      {
        dword_140086260 = v15 | 2;
        xmmword_1400861D4 = PKEY_Endpoint_LFX_ExceptionCount;
        dword_1400861E4 = 33;
        xmmword_1400861E8 = PKEY_Endpoint_GFX_ExceptionCount;
        dword_1400861F8 = 34;
        xmmword_1400861FC = PKEY_Endpoint_EFX_ExceptionCount;
        dword_14008620C = 35;
      }
      pvar = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v23 + 32LL))(v23, 2LL, &v21) >= 0 )
      {
        v16 = (char *)&unk_140086210 + 20 * v11;
        (*(void (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(v21, v16, &pvar);
        if ( (_WORD)pvar == 19 )
        {
          if ( !(_DWORD)v19 )
            goto LABEL_27;
        }
        else if ( !(_WORD)pvar )
        {
          goto LABEL_27;
        }
        LOWORD(pvar) = 19;
        LODWORD(v19) = 0;
        (*(void (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v21 + 48LL))(v21, v16, &pvar);
      }
LABEL_27:
      PropVariantClear(&pvar);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      goto LABEL_29;
    }
LABEL_9:
    v12 = v5;
    if ( v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    a2 = v22;
  }
  while ( v6 );
  if ( v3 >= 0 )
    goto LABEL_14;
LABEL_37:
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 4) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids);
      }
      TrackSystemEffectBehavior(*((_QWORD *)this + 23), *(unsigned int *)(v4 + 4), 0LL, 0LL);
      goto LABEL_52;
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids);
        v17 = WPP_GLOBAL_Control;
      }
      if ( v17 != &WPP_GLOBAL_Control && (*((_DWORD *)v17 + 7) & 0x20000) != 0 && *((_BYTE *)v17 + 25) >= 4u )
      {
        WPP_SF__guid_(v17[2], 43LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, v4 + 8);
        goto LABEL_52;
      }
    }
  }
  else
  {
LABEL_52:
    v17 = WPP_GLOBAL_Control;
  }
  if ( v3 < 0 )
  {
    if ( v17 != &WPP_GLOBAL_Control && (*((_DWORD *)v17 + 7) & 0x20000) != 0 && *((_BYTE *)v17 + 25) >= 2u )
      WPP_SF_D(v17[2], 44LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, (unsigned int)v3);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ActivateAPOs", 0xB84u, v3);
  }
LABEL_14:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v3;
}
