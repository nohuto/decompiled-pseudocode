/*
 * XREFs of ?PostEvent@UsageEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180187650
 * Callers:
 *     ??1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ @ 0x180186F88 (--1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall DwmCoreAsimov::UsageEventData::PostEvent(
        DwmCoreAsimov::UsageEventData *this,
        const struct _TlgProvider_t *a2)
{
  __int64 v2; // r11
  __int64 v3; // r11
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  TraceLoggingHProvider v6; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-58h] BYREF
  __int64 v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+6Ch] [rbp-3Ch]
  __int64 v12; // [rsp+70h] [rbp-38h]
  int v13; // [rsp+78h] [rbp-30h]
  int v14; // [rsp+7Ch] [rbp-2Ch]

  if ( *(_DWORD *)a2 > 5u )
  {
    if ( TlgKeywordOn(a2, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, *(LPCWSTR *)(v2 + 16));
      v11 = 0;
      v14 = 0;
      v12 = v3 + 32;
      v9 = v3 + 24;
      v10 = 8;
      v13 = 8;
      TlgWrite(v6, &unk_1801F830A, v4, v5, 5u, &pData);
    }
  }
}
