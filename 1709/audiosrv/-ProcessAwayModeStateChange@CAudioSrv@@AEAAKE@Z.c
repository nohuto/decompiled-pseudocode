/*
 * XREFs of ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x180062504
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x180062310 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::ProcessAwayModeStateChange(CAudioSrv *this, unsigned __int8 a2)
{
  unsigned int v2; // r13d
  __int64 v4; // rcx
  __int64 v5; // r9
  CVolumeProvider *v6; // r12
  unsigned int i; // r14d
  unsigned int v8; // edi
  CAudioDGProcess *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-38h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h]
  unsigned int v19; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v20; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+60h] BYREF

  v15[1] = -2LL;
  v2 = a2;
  v4 = 0LL;
  v15[0] = 0LL;
  v5 = *((unsigned int *)this + 24);
  if ( a2 != (_DWORD)v5 )
  {
    *((_DWORD *)this + 24) = a2;
    v6 = g_pVolumeProvider;
    if ( !g_pVolumeProvider )
      goto LABEL_48;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           0LL,
           1LL,
           v15) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v15[0] + 24LL))(v15[0], &v19);
      for ( i = 0; i < v19; ++i )
      {
        v13 = 0LL;
        v22 = 0LL;
        v21 = 0LL;
        v8 = v2;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v15[0] + 32LL))(v15[0], i, &v21) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v21 + 40LL))(v21, &pv) < 0
            || (*(int (__fastcall **)(CVolumeProvider *, LPVOID, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, pv, &v13) < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          else
          {
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids, pv);
            }
            CoTaskMemFree(pv);
            if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v21 + 32LL))(v21, 2LL, &v22) >= 0 )
            {
              pvar = 0LL;
              v17 = 0LL;
              v18 = 0LL;
              if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v22 + 40LL))(
                     v22,
                     &PKEY_Endpoint_Flags,
                     &pvar) < 0
                || (_WORD)pvar != 19 && (_WORD)pvar )
              {
                PropVariantClear(&pvar);
              }
              else if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 152LL))(v13, &v20) >= 0 )
              {
                v9 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    36LL,
                    &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids,
                    v20);
                  v9 = WPP_GLOBAL_Control;
                }
                if ( (_BYTE)v2 )
                {
                  LOWORD(pvar) = 19;
                  if ( v20 )
                    LODWORD(v17) = v17 | 4;
                  else
                    LODWORD(v17) = v17 & 0xFFFFFFFB;
                  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v22 + 48LL))(
                          v22,
                          &PKEY_Endpoint_Flags,
                          &pvar);
                  if ( v10 < 0 )
                    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessAwayModeStateChange", 1435, v10);
                }
                else
                {
                  v8 = ((unsigned int)v17 >> 2) & 1;
                  if ( v9 != (CAudioDGProcess *)&WPP_GLOBAL_Control
                    && (*((_BYTE *)v9 + 28) & 0x10) != 0
                    && *((_BYTE *)v9 + 25) >= 4u )
                  {
                    WPP_SF_d(
                      *((_QWORD *)v9 + 2),
                      37LL,
                      &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids,
                      ((unsigned int)v17 >> 2) & 1);
                  }
                }
                PropVariantClear(&pvar);
                if ( v20 != v8 )
                {
                  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *))(*(_QWORD *)v13 + 144LL))(
                          v13,
                          v8,
                          &EVENTCONTEXT_POWEREVENT);
                  if ( v11 < 0 )
                    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessAwayModeStateChange", 1458, v11);
                }
              }
            }
          }
        }
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    goto LABEL_47;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids, v5);
LABEL_47:
    v4 = v15[0];
  }
LABEL_48:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
