/*
 * XREFs of WPP_RECORDER_SF_DsD @ 0x1C0009F74
 * Callers:
 *     ValidateAcpi_PSD_TSD @ 0x1C002B2B4 (ValidateAcpi_PSD_TSD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DsD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const char *v11; // rcx
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const char *v16; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, const char *);
  v5 = (__int64)v16;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( v16 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v16[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = "NULL";
    if ( v16 )
      v11 = v16;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_43c87aadc204398ca111f18064ed4edf_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      v11,
      v10,
      va1);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( *(_BYTE *)(v5 + v6) );
  }
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_43c87aadc204398ca111f18064ed4edf_Traceguids, v13, (__int64 *)va);
}
