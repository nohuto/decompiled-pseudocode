/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C000AA24
 * Callers:
 *     Display_LPI @ 0x1C0009F84 (Display_LPI.c)
 *     AcpiParseLpiObject @ 0x1C00298DC (AcpiParseLpiObject.c)
 *     LpiEnumerateDependencies @ 0x1C0030448 (LpiEnumerateDependencies.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  __int64 v8; // rdi
  unsigned __int64 v10; // rsi
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  const wchar_t *v17; // rcx
  int v19; // [rsp+20h] [rbp-48h]

  v8 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a6;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = 2 * v15;
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10), 43LL, a5, a4, v17, v16, 0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( !a6 )
    v12 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v19, v12);
}
