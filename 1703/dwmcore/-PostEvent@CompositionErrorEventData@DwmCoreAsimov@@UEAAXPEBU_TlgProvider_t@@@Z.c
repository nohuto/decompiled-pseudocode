/*
 * XREFs of ?PostEvent@CompositionErrorEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x1800CF5C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall DwmCoreAsimov::CompositionErrorEventData::PostEvent(LPCWSTR *this, const struct _TlgProvider_t *a2)
{
  const WCHAR *v3; // rdx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  TraceLoggingHProvider v6; // r11
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-48h] BYREF
  char *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+70h] [rbp-28h] BYREF

  if ( *(_DWORD *)a2 > 5u )
  {
    if ( TlgKeywordOn(a2, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, this[2]);
      v11 = 0;
      v3 = this[3];
      v9 = (char *)(this + 4);
      v10 = 4;
      TlgCreateWsz(&v12, v3);
      TlgWrite(v6, &unk_1801F82D0, v4, v5, 5u, &pData);
    }
  }
}
