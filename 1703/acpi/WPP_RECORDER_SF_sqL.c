/*
 * XREFs of WPP_RECORDER_SF_sqL @ 0x1C004B2C8
 * Callers:
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C004A810 (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C00936CC (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sqL(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  const char *v7; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *v16; // rcx
  __int64 v17; // rbx
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+60h] [rbp-28h]
  __int64 v21; // [rsp+68h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-18h]
  __int64 v23; // [rsp+78h] [rbp-10h]
  __int64 v24; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v24 = va_arg(va1, _QWORD);
  v7 = a6;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = -1LL;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v11 + 1) >= a2 )
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
    v16 = a6;
    if ( !a6 )
      v16 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v11),
      43LL,
      a5,
      a4,
      v16,
      v15,
      (__int64 *)va);
  }
  if ( a6 )
  {
    do
      ++v12;
    while ( a6[v12] );
    v17 = v12 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !a6 )
    v7 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v19, v7, v17, (__int64 *)va, 8LL, va1, 4LL, 0LL, v20, v21, v22, v23);
}
