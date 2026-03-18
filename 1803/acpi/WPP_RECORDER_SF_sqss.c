/*
 * XREFs of WPP_RECORDER_SF_sqss @ 0x1C0013850
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C000A5D4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C000AB04 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildProcessSynchronizationList @ 0x1C0010104 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C0011C80 (ACPIBuildWakeEventDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
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
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // r9
  const char *v22; // r14
  __int64 v23; // r8
  const char *v24; // r10
  __int64 v25; // rdx
  __int64 v26; // rdx
  const char *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  int v34; // [rsp+20h] [rbp-88h]
  __int64 v35; // [rsp+70h] [rbp-38h]
  __int64 v36; // [rsp+78h] [rbp-30h]
  unsigned __int16 v38; // [rsp+C8h] [rbp+20h]

  v38 = a4;
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
    v19 = 10 * v14;
    if ( *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v14 + 1) >= a2 )
    {
      if ( a9 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( a9[v20] );
        v21 = v20 + 1;
      }
      else
      {
        v21 = 5LL;
      }
      v22 = a9;
      if ( !a9 )
        v22 = "NULL";
      if ( a8 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( a8[v23] );
        v18 = v23 + 1;
      }
      v24 = a8;
      if ( !a8 )
        v24 = "NULL";
      if ( a6 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( a6[v25] );
        v26 = v25 + 1;
      }
      else
      {
        v26 = 5LL;
      }
      v27 = a6;
      if ( !a6 )
        v27 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, const ULONG_PTR *, _QWORD, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + v19),
        43LL,
        &WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v38,
        v27,
        v26,
        &a7,
        8LL,
        v24,
        v18,
        v22,
        v21,
        0LL);
      a4 = v38;
    }
  }
  if ( v10 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v10[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v11 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v11[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  if ( a6 )
  {
    do
      ++v15;
    while ( a6[v15] );
    v32 = v15 + 1;
  }
  else
  {
    v32 = 5LL;
  }
  if ( !a6 )
    v12 = "NULL";
  LOWORD(v34) = a4;
  return WppAutoLogTrace(
           a1,
           a2,
           a3,
           &WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
           v34,
           v12,
           v32,
           &a7,
           8LL,
           v11,
           v31,
           v10,
           v29,
           0LL,
           v35,
           v36);
}
