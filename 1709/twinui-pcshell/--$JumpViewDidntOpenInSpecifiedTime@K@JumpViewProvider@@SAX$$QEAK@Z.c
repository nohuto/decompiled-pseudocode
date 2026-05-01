/*
 * XREFs of ??$JumpViewDidntOpenInSpecifiedTime@K@JumpViewProvider@@SAX$$QEAK@Z @ 0x1800C0338
 * Callers:
 *     _lambda_89df0ffbe2c53d06adbb7fd818281742_::_lambda_invoker_cdecl_ @ 0x1800BF230 (_lambda_89df0ffbe2c53d06adbb7fd818281742_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@JumpViewProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800BBE74 (-Provider@JumpViewProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall JumpViewProvider::JumpViewDidntOpenInSpecifiedTime<unsigned long>(__int64 a1)
{
  const struct _TlgProvider_t *v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  v2 = JumpViewProvider::Provider();
  if ( *(_DWORD *)v2 > 5u
    && (*((_QWORD *)v2 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x400000000000LL) == *((_QWORD *)v2 + 3) )
  {
    v7 = 0;
    v5 = a1;
    v6 = 4;
    LODWORD(v2) = TlgWrite(v2, &unk_18025B9E6, 0LL, 0LL, 3u, &pData);
  }
  return (int)v2;
}
