/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0004740
 * Callers:
 *     MouCreateClassObject @ 0x1C000B3D8 (MouCreateClassObject.c)
 *     MouseAddDeviceEx @ 0x1C000BC70 (MouseAddDeviceEx.c)
 *     MouConfiguration @ 0x1C000E95C (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00017D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6)
{
  __int64 v8; // rdi
  unsigned __int64 v10; // rsi
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  const wchar_t *v16; // rcx
  __int64 v17; // rdi
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
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      &WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids,
      a4,
      v16,
      2 * v15,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v17 = v8 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !a6 )
    v12 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, a2, a3, &WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids, v19, v12, 2 * v17, 0LL);
}
