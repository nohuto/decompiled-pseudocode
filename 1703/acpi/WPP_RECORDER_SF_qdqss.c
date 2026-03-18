/*
 * XREFs of WPP_RECORDER_SF_qDqss @ 0x1C0046B54
 * Callers:
 *     ACPIDevicePowerProcessPhase4 @ 0x1C0007A58 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIWakeCompleteRequestQueue @ 0x1C00598A0 (ACPIWakeCompleteRequestQueue.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C0083008 (ACPIBusIrpQueryTargetRelation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v11; // rdi
  const char *v13; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  int v17; // eax
  unsigned __int8 v18; // cf
  __int64 v19; // r8
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  const char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  int v29; // [rsp+20h] [rbp-88h]
  __int64 v30; // [rsp+B0h] [rbp+8h]

  v30 = a1;
  v11 = a10;
  v13 = a9;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = -1LL;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v18 = _bittest(&v17, ((_BYTE)a3 - 1) & 0x1F);
  v19 = 5LL;
  if ( v18 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= a2 )
  {
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v19 = v20 + 1;
    }
    v21 = a10;
    if ( !a10 )
      v21 = "NULL";
    if ( a9 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a9[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a9;
    if ( !a9 )
      v24 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v24,
      v23,
      v21,
      v19,
      0LL);
    a1 = v30;
  }
  if ( v11 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v11[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v13 )
  {
    do
      ++v16;
    while ( v13[v16] );
    v27 = v16 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v29) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v29, &a6, 8LL, &a7, 4LL, &a8, 8LL, v13, v27, v11, v26, 0LL);
}
