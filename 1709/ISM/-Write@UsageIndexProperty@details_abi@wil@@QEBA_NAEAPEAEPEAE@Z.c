/*
 * XREFs of ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18000C220
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000CA9C (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x18000ADE8 (memcpy_s_0.c)
 *     _invalid_parameter_noinfo @ 0x1800CAA36 (_invalid_parameter_noinfo.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Write(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  _WORD *v4; // rbx
  _WORD *v8; // rbp
  bool result; // al
  rsize_t v10; // r9

  v3 = *((_BYTE *)this + 2);
  v4 = *a2;
  if ( v3 == 1 )
  {
    v8 = v4 + 1;
    if ( v4 + 1 > (_WORD *)a3 )
      return 0;
    if ( v4 )
    {
      *v4 = *((_WORD *)this + 2);
    }
    else
    {
      *(_DWORD *)_o__errno() = 22;
      invalid_parameter_noinfo();
    }
  }
  else
  {
    if ( v3 != 2 )
      goto LABEL_11;
    v8 = v4 + 2;
    if ( v4 + 2 > (_WORD *)a3 )
      return 0;
    memcpy_s_0(v4, 4uLL, (char *)this + 4, 4uLL);
  }
  v4 = v8;
LABEL_11:
  if ( !*(_WORD *)this )
  {
    if ( v4 + 1 > (_WORD *)a3 )
      return 0;
    memcpy_s_0(v4, a3 - (unsigned __int8 *)v4, (char *)this + 8, 2uLL);
    ++v4;
  }
  v10 = *((unsigned __int16 *)this + 4);
  if ( (unsigned __int8 *)((char *)v4 + v10) > a3 )
    return 0;
  if ( *((_WORD *)this + 4) )
    memcpy_s_0(v4, a3 - (unsigned __int8 *)v4, *((const void *const *)this + 3), v10);
  result = 1;
  *a2 = (unsigned __int8 *)v4 + *((unsigned __int16 *)this + 4);
  return result;
}
