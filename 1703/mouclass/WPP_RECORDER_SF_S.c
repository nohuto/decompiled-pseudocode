/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0001E70
 * Callers:
 *     MouseAddDeviceEx @ 0x1C000C480 (MouseAddDeviceEx.c)
 *     MouCreateClassObject @ 0x1C000C990 (MouCreateClassObject.c)
 *     MouConfiguration @ 0x1C000F030 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  char *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rcx
  const wchar_t *v21; // rdx
  int v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-28h]
  __int64 v24; // [rsp+48h] [rbp-20h]
  __int64 v25; // [rsp+50h] [rbp-18h]
  __int64 v26; // [rsp+58h] [rbp-10h]

  v6 = a6;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = -1LL;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v16 = (char *)WPP_GLOBAL_Control + 80 * v11;
    if ( (unsigned __int8)v16[41] >= a2 )
    {
      if ( a6 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( a6[v17] );
        v18 = v17 + 1;
      }
      else
      {
        v18 = 5LL;
      }
      v19 = 2 * v18;
      v20 = *((_QWORD *)v16 + 3);
      v21 = a6;
      if ( !a6 )
        v21 = L"NULL";
      ((void (__fastcall *)(__int64, __int64, void *, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
        v20,
        43LL,
        &WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids,
        a4,
        v21,
        v19,
        0LL);
    }
  }
  if ( a6 )
  {
    do
      ++v12;
    while ( a6[v12] );
    v14 = v12 + 1;
  }
  else
  {
    v14 = 5LL;
    v6 = L"NULL";
  }
  LOWORD(v22) = a4;
  return WppAutoLogTrace(
           a1,
           a2,
           a3,
           &WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids,
           v22,
           v6,
           2 * v14,
           0LL,
           v23,
           v24,
           v25,
           v26);
}
