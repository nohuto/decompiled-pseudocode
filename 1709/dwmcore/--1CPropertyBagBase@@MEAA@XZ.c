/*
 * XREFs of ??1CPropertyBagBase@@MEAA@XZ @ 0x1800A55A0
 * Callers:
 *     ??1CPropertyBag@@MEAA@XZ @ 0x1800A69CC (--1CPropertyBag@@MEAA@XZ.c)
 *     ??_ECPropertyBagBase@@MEAAPEAXI@Z @ 0x180175360 (--_ECPropertyBagBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CPropertyBagBase::~CPropertyBagBase(CPropertyBagBase *this)
{
  int v1; // r9d
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v1 = *((_DWORD *)this + 14);
  *(_QWORD *)this = &CPropertyBagBase::`vftable';
  if ( v1 && dword_18026D7B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = (int)v5;
    v9 = 4;
    TlgWrite(v3, &unk_1802144F4, v4, v5, 3u, &pData);
  }
  CResource::~CResource(this);
}
