/*
 * XREFs of ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18007AB10
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18007A2D8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Write(
        wil::details_abi::UsageIndexProperty *this,
        char **a2,
        char *a3)
{
  char *v4; // rbx
  rsize_t v7; // r9
  bool result; // al
  char *v9; // r14
  char *p_Source; // r8
  rsize_t v11; // r9
  rsize_t v12; // rdx
  __int16 Source; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a2;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    v9 = v4 + 2;
    if ( v4 + 2 > a3 )
      return 0;
    p_Source = (char *)&Source;
    v11 = 2LL;
    Source = *((_WORD *)this + 2);
    v12 = 2LL;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 2) == 2 )
  {
    v9 = v4 + 4;
    if ( v4 + 4 > a3 )
      return 0;
    v12 = 4LL;
    p_Source = (char *)this + 4;
    v11 = 4LL;
LABEL_8:
    memcpy_s(v4, v12, p_Source, v11);
    v4 = v9;
  }
  if ( !*(_WORD *)this )
  {
    if ( v4 + 2 > a3 )
      return 0;
    memcpy_s(v4, a3 - v4, (char *)this + 8, 2uLL);
    v4 += 2;
  }
  v7 = *((unsigned __int16 *)this + 4);
  if ( &v4[v7] <= a3 )
  {
    memcpy_s(v4, a3 - v4, *((const void *const *)this + 3), v7);
    result = 1;
    *a2 = &v4[*((unsigned __int16 *)this + 4)];
    return result;
  }
  return 0;
}
