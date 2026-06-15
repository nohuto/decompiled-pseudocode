/*
 * XREFs of ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x180067010
 * Callers:
 *     ?GetLevelData@CMuteSoftware@@MEAAJXZ @ 0x180066CC0 (-GetLevelData@CMuteSoftware@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     WPP_SF_Sl @ 0x180067BB8 (WPP_SF_Sl.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteSoftware::LoadMuteState(CMuteSoftware *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // r8d
  BOOL v5; // eax
  PROPVARIANT pvar; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp-8h]
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)this + 4),
         &v11);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, 0LL, &v10);
    if ( v2 >= 0 )
    {
      pvar = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x15u,
          (__int64)&WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids,
          *((const wchar_t **)this + 4));
      }
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
             v10,
             &PKEY_APO_MasterMute,
             &pvar);
      if ( v3 >= 0 && (_WORD)pvar == 11 )
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            22,
            (unsigned int)&WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids,
            *((_QWORD *)this + 4),
            v8);
        }
        v5 = (_WORD)v8 == 0xFFFF;
        *((_DWORD *)this + 6) = v5;
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sl(*((_QWORD *)WPP_GLOBAL_Control + 2), 23, v4, *((_QWORD *)this + 4), v5);
        }
      }
      PropVariantClear(&pvar);
      if ( v3 < 0 )
        AudSrvTraceLoggingErrorHelper("CMuteSoftware::LoadMuteState", 670, v3);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v2;
}
