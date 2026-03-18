/*
 * XREFs of WPP_RECORDER_SF_qsL @ 0x1C001C944
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C000E7F4 (ACPIDevicePowerProcessPhase3.c)
 *     OSNotifyCreate @ 0x1C001C840 (OSNotifyCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qsL(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  const char *v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rbx
  __int64 v14; // rdx
  const char *v15; // rcx
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+60h] [rbp-18h]
  __int64 v18; // [rsp+68h] [rbp-10h]
  __int64 v19; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const char *v21; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, const char *);
  v5 = v21;
  v6 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v11, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= 4u )
  {
    if ( v21 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v21[v14] );
    }
    v15 = v21;
    if ( !v21 )
      v15 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      v15);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v12 = v6 + 1;
  }
  else
  {
    v12 = 5LL;
  }
  if ( !v5 )
    v5 = "NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v16, (__int64 *)va, 8LL, v5, v12, va1, 4LL, 0LL, v17, v18);
}
