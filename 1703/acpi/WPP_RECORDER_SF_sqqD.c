/*
 * XREFs of WPP_RECORDER_SF_sqqD @ 0x1C0054A10
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C0054078 (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00A09B0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sqqD(
        __int64 a1,
        _DWORD a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rbx
  int v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+70h] [rbp-18h]
  __int64 v20; // [rsp+78h] [rbp-10h]
  __int64 v21; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v23; // [rsp+C8h] [rbp+40h] BYREF
  va_list va1; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v6 = a6;
  v7 = -1LL;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v11 + 1) >= 2u )
  {
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v11),
      43LL,
      &WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids,
      a4,
      v15,
      v14,
      (__int64 *)va);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v16 = v7 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           a3,
           &WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids,
           v18,
           v6,
           v16,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL,
           v19,
           v20);
}
