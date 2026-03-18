/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C002B994
 * Callers:
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C002BDA8 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C00372D8 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  const wchar_t *v16; // rcx
  int v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+70h] [rbp+8h]

  v19 = a1;
  v6 = L"NULL";
  v10 = (unsigned __int64)a3 >> 16;
  v11 = -1LL;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
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
    v15 = 2 * v14;
    v16 = L"NULL";
    if ( a6 )
      v16 = a6;
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v16,
      v15,
      0LL);
    a1 = v19;
  }
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v18, v6);
}
