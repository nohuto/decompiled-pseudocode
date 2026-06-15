/*
 * XREFs of ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180006AD4
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005510 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180006E28 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Write(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v8; // rbp
  unsigned __int64 v9; // r14
  __int64 v10; // rbp
  unsigned __int8 *v11; // rdi
  bool result; // al

  v3 = *((_BYTE *)this + 2);
  v4 = *a2;
  if ( v3 == 1 )
  {
    v8 = v4 + 2;
    if ( v4 + 2 > a3 )
      return 0;
    if ( v4 )
    {
      *(_WORD *)v4 = *((_WORD *)this + 2);
    }
    else
    {
      *(_DWORD *)_o__errno(this, a2) = 22;
      invalid_parameter_noinfo();
    }
  }
  else
  {
    if ( v3 != 2 )
      goto LABEL_6;
    v8 = v4 + 4;
    if ( v4 + 4 > a3 )
      return 0;
    memcpy_s(v4, 4uLL, (char *)this + 4, 4uLL);
  }
  v4 = v8;
LABEL_6:
  if ( !*(_WORD *)this )
  {
    if ( v4 + 2 > a3 )
      return 0;
    memcpy_s(v4, a3 - v4, (char *)this + 8, 2uLL);
    v4 += 2;
  }
  v9 = *((unsigned __int16 *)this + 4);
  if ( &v4[v9] <= a3 )
  {
    v10 = *((_QWORD *)this + 3);
    v11 = (unsigned __int8 *)(a3 - v4);
    if ( *((_WORD *)this + 4) )
    {
      if ( !v4 )
        goto LABEL_21;
      if ( v10 && (unsigned __int64)v11 >= v9 )
      {
        memcpy_0(v4, *((const void **)this + 3), *((unsigned __int16 *)this + 4));
        goto LABEL_13;
      }
      memset(v4, 0, (size_t)v11);
      if ( v10 )
      {
        if ( (unsigned __int64)v11 >= v9 )
          goto LABEL_13;
        *(_DWORD *)_o__errno(this, a2) = 34;
      }
      else
      {
LABEL_21:
        *(_DWORD *)_o__errno(this, a2) = 22;
      }
      invalid_parameter_noinfo();
    }
LABEL_13:
    result = 1;
    *a2 = &v4[*((unsigned __int16 *)this + 4)];
    return result;
  }
  return 0;
}
