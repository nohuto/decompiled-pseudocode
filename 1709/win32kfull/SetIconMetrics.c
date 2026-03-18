/*
 * XREFs of SetIconMetrics @ 0x1C0082F1C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00BF790 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1C00DC7B8 (xxxInitWindowStation.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01B7978 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     UserSetFont @ 0x1C008218C (UserSetFont.c)
 *     UserSetAltScaleFont @ 0x1C00821F4 (UserSetAltScaleFont.c)
 *     GreMarkDeletableFont @ 0x1C00822BC (GreMarkDeletableFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C0082EEC (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C0083490 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     ?GetLocalizedInt@@YAHIH@Z @ 0x1C00834F8 (-GetLocalizedInt@@YAHIH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetIconMetrics(struct _UNICODE_STRING *a1, char *a2)
{
  struct HLFONT__ **v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rax
  int v7; // edx
  int LocalizedInt; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  _DWORD v16[4]; // [rsp+30h] [rbp-A8h] BYREF
  char v17; // [rsp+40h] [rbp-98h] BYREF
  int TWIPSMetricById; // [rsp+44h] [rbp-94h]
  int v19; // [rsp+48h] [rbp-90h]
  int v20; // [rsp+4Ch] [rbp-8Ch]

  v4 = (struct HLFONT__ **)(GetSessionDpiMetrics() + 64);
  v5 = (unsigned int)UserSetFont(
                       a1,
                       (_DWORD *)((unsigned __int64)(a2 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)),
                       0x9Au,
                       v4);
  if ( v5 )
  {
    v6 = Get96DpiMetrics();
    v5 = UserSetAltScaleFont((HBRUSH)*v4, (__int64 *)(v6 + 64));
    if ( !v5 )
    {
      GreMarkDeletableFont(*v4);
      GreDeleteObject(*v4);
      *v4 = 0LL;
    }
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  if ( !v5 )
    return 0LL;
  if ( !a2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 66LL, 1LL, v16, 0);
    v20 = v16[0];
    LocalizedInt = GetLocalizedInt(0x71u, v7);
    TWIPSMetricById = GetTWIPSMetricById(a1, 0x40u, LocalizedInt);
    v10 = GetLocalizedInt(0x72u, v9);
    v19 = GetTWIPSMetricById(a1, 0x41u, v10);
    a2 = &v17;
  }
  v11 = *((_DWORD *)a2 + 1);
  v12 = *(unsigned int *)(gpsi + 2288LL);
  if ( v11 > (int)v12 )
    v12 = (unsigned int)v11;
  v13 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 1) = v12;
  v14 = *(_DWORD *)(gpsi + 2292LL);
  if ( v13 > v14 )
    v14 = v13;
  *((_DWORD *)a2 + 2) = v14;
  SetDpiDepSysMet(18LL, v12);
  SetDpiDepSysMet(19LL, *((unsigned int *)a2 + 2));
  *(_DWORD *)(gpsi + 2460LL) = EngMulDiv(*(_DWORD *)(gpsi + 2340LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2464LL) = EngMulDiv(*(_DWORD *)(gpsi + 2344LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  if ( *((_DWORD *)a2 + 3) )
    gdwPUDFlags |= 0x200000u;
  else
    gdwPUDFlags &= ~0x200000u;
  return 1LL;
}
