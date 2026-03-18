/*
 * XREFs of ??1CPropertyBagBase@@MEAA@XZ @ 0x1800315A0
 * Callers:
 *     ??1CPropertyBag@@MEAA@XZ @ 0x1800322BC (--1CPropertyBag@@MEAA@XZ.c)
 *     ??_ECPropertyBagBase@@MEAAPEAXI@Z @ 0x180170820 (--_ECPropertyBagBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CPropertyBagBase::~CPropertyBagBase(CPropertyBagBase *this)
{
  int v1; // r9d
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+64h] [rbp-24h]

  v1 = *((_DWORD *)this + 14);
  *(_QWORD *)this = &CPropertyBagBase::`vftable';
  if ( v1 && dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = (int)v5;
    v9 = 4;
    TlgWrite(v3, &unk_1801F7B82, v4, v5, 3u, &pData);
  }
  CResource::~CResource(this);
}
