/*
 * XREFs of ?PostEvent@HighErrorRateEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180187530
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall DwmCoreAsimov::HighErrorRateEventData::PostEvent(
        DwmCoreAsimov::HighErrorRateEventData *this,
        const struct _TlgProvider_t *a2)
{
  const GUID *v2; // r8
  const struct _TlgProvider_t *v3; // r9
  __int64 v4; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  __int64 v6; // [rsp+50h] [rbp-48h]
  int v7; // [rsp+58h] [rbp-40h]
  int v8; // [rsp+5Ch] [rbp-3Ch]
  __int64 v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]

  if ( *(_DWORD *)a2 > 5u )
  {
    if ( TlgKeywordOn(a2, 0x400000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = v4 + 24;
      v9 = v4 + 32;
      v7 = 8;
      v10 = 8;
      TlgWrite(v3, &unk_1801F834F, v2, (LPCGUID)v3, 4u, &pData);
    }
  }
}
