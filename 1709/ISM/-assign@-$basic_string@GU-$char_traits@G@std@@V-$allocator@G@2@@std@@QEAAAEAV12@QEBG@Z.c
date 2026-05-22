/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1800340E8
 * Callers:
 *     ?DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x1800335AC (-DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z.c)
 *     ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180033864 (-DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z.c)
 *     ??0PropertyTypeInfo@Input@@QEAA@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x180033AF0 (--0PropertyTypeInfo@Input@@QEAA@PEBGKP6AJPEBXKPEAGK@Z@Z.c)
 *     ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x180033DC4 (-Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18008F488 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     GetHolographicInputSession @ 0x180090C58 (GetHolographicInputSession.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800A8B3C (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x180034298 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 */

_QWORD *__fastcall std::wstring::assign(_QWORD *a1, _WORD *Src, __int64 a3)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rdx
  char *v6; // rsi
  __int64 v7; // rbx

  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  if ( v5 > a1[3] )
    return (_QWORD *)std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
                       a1,
                       v5,
                       a3,
                       Src);
  v6 = (char *)a1;
  if ( a1[3] >= 8uLL )
    v6 = (char *)*a1;
  v7 = 2 * v5;
  a1[2] = v5;
  memmove(v6, Src, 2 * v5);
  *(_WORD *)&v6[v7] = 0;
  return v4;
}
