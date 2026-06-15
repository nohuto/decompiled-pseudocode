/*
 * XREFs of ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x18001745C
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019450 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019640 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x180070DD8 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18005EDAC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18005FB40 (-LogProductionAssert@@YAX_KPEBG@Z.c)
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
  unsigned __int16 v10[1024]; // [rsp+40h] [rbp-828h] BYREF

  *(_QWORD *)a1 = &CAudioStreamStateChanged::`vftable';
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  v8 = *(_DWORD *)(a5 + 496);
  if ( a4 == v8 || !a4 && v8 != 1 )
  {
    StringCchPrintfW(
      v10,
      0x400uLL,
      L"Stream %p: From [%d (%s)] to [%d (%s)]",
      a5,
      *(_DWORD *)(a5 + 496),
      *(_QWORD *)(a5 + 504),
      a4,
      a6);
    LogProductionAssert(0x6C966DuLL, v10);
  }
  *(_DWORD *)(a5 + 496) = a4;
  result = a1;
  *(_QWORD *)(a5 + 504) = a6;
  return result;
}
