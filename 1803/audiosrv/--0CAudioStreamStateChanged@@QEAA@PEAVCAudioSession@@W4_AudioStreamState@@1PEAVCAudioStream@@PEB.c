/*
 * XREFs of ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180098920
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800A9038 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180016F9C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18009BD38 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 */

__int64 __fastcall CAudioStreamStateChanged::CAudioStreamStateChanged(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // eax
  __int64 result; // rax
  wchar_t Buffer[1024]; // [rsp+40h] [rbp-828h] BYREF

  *(_QWORD *)a1 = &CAudioStreamStateChanged::`vftable';
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  v8 = *(_DWORD *)(a5 + 512);
  if ( a4 == v8 || !a4 && v8 != 1 )
  {
    StringCchPrintfW(
      Buffer,
      1024LL,
      L"Stream %p: From [%d (%s)] to [%d (%s)]",
      a5,
      *(_DWORD *)(a5 + 512),
      *(_QWORD *)(a5 + 520),
      a4,
      a6);
    LogProductionAssert(0x6C966DuLL, Buffer);
  }
  *(_DWORD *)(a5 + 512) = a4;
  result = a1;
  *(_QWORD *)(a5 + 520) = a6;
  return result;
}
