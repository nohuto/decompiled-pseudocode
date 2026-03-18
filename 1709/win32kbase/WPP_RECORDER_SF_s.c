/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C000B81C
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C00087B0 (RIMAllocateHidConfigDesc.c)
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     RIMGetKbdExId @ 0x1C009A600 (RIMGetKbdExId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  const wchar_t *v19; // rcx
  int v20; // [rsp+20h] [rbp-48h]

  v8 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a6;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = 2 * v17;
    v19 = a6;
    if ( !a6 )
      v19 = L"NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v19,
      v18,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v14 = v8 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !a6 )
    v12 = L"NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v20, v12, 2 * v14, 0LL);
}
