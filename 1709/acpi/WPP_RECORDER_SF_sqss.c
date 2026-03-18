/*
 * XREFs of WPP_RECORDER_SF_sqss @ 0x1C0027C54
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0014E10 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildProcessSynchronizationList @ 0x1C0027B5C (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C00429B4 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C00446FC (ACPIBuildWakeEventDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v10; // rdi
  const char *v11; // rsi
  const char *v12; // rbp
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v25; // r11
  __int64 v26; // r9
  __int64 v27; // r9
  const char *v28; // r14
  __int64 v29; // r8
  const char *v30; // r10
  __int64 v31; // rdx
  __int64 v32; // rdx
  const char *v33; // rcx
  int v34; // [rsp+20h] [rbp-88h]
  unsigned __int16 v36; // [rsp+C8h] [rbp+20h]

  v36 = a4;
  v10 = a9;
  v11 = a8;
  v12 = a6;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 )
  {
    v25 = 10 * v14;
    if ( *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v14 + 1) >= a2 )
    {
      if ( a9 )
      {
        v26 = -1LL;
        do
          ++v26;
        while ( a9[v26] );
        v27 = v26 + 1;
      }
      else
      {
        v27 = 5LL;
      }
      v28 = a9;
      if ( !a9 )
        v28 = "NULL";
      if ( a8 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( a8[v29] );
        v18 = v29 + 1;
      }
      v30 = a8;
      if ( !a8 )
        v30 = "NULL";
      if ( a6 )
      {
        v31 = -1LL;
        do
          ++v31;
        while ( a6[v31] );
        v32 = v31 + 1;
      }
      else
      {
        v32 = 5LL;
      }
      v33 = a6;
      if ( !a6 )
        v33 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, const ULONG_PTR *, _QWORD, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + v25),
        43LL,
        &WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
        v36,
        v33,
        v32,
        &a7,
        8LL,
        v30,
        v18,
        v28,
        v27,
        0LL);
      a4 = v36;
    }
  }
  if ( v10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v10[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v11[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  if ( a6 )
  {
    do
      ++v15;
    while ( a6[v15] );
    v23 = v15 + 1;
  }
  else
  {
    v23 = 5LL;
  }
  if ( !a6 )
    v12 = "NULL";
  LOWORD(v34) = a4;
  return WppAutoLogTrace(
           a1,
           a2,
           a3,
           &WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
           v34,
           v12,
           v23,
           &a7,
           8LL,
           v11,
           v22,
           v10,
           v20,
           0LL);
}
