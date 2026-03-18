/*
 * XREFs of ?PostEvent@DFlipFailedEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x1801874B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall DwmCoreAsimov::DFlipFailedEventData::PostEvent(
        DwmCoreAsimov::DFlipFailedEventData *this,
        const struct _TlgProvider_t *a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  if ( *(_DWORD *)a2 > 5u )
  {
    if ( TlgKeywordOn(a2, 0x400000000000uLL) )
    {
      v9 = 0;
      v7 = v5 + 16;
      v8 = 4;
      TlgWrite(v2, &unk_1801F82B1, v3, v4, 3u, &pData);
    }
  }
}
