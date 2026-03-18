/*
 * XREFs of DwmAsyncChildCreate @ 0x1C0016300
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0016158 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncChildCreate(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int128 *a8,
        __int64 a9,
        __int128 *a10)
{
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rcx
  __int64 CurrentProcess; // rax
  _QWORD v21[20]; // [rsp+20h] [rbp-B1h] BYREF

  v14 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset((char *)v21 + 2, 0, 0x92uLL);
    v15 = *a8;
    v16 = a8[1];
    WORD2(v21[0]) = 0x8000;
    LODWORD(v21[8]) = a5;
    *(_OWORD *)&v21[11] = v15;
    LODWORD(v21[17]) = a6;
    v21[15] = *((_QWORD *)a8 + 4);
    v17 = *a10;
    HIDWORD(v21[10]) = a7;
    *(_OWORD *)((char *)&v21[8] + 4) = v17;
    LODWORD(v21[0]) = 9699436;
    LODWORD(v21[5]) = 1073741841;
    *(_QWORD *)((char *)&v21[5] + 4) = a2;
    *(_QWORD *)((char *)&v21[6] + 4) = a3;
    HIDWORD(v21[7]) = a4;
    *(_OWORD *)&v21[13] = v16;
    v21[16] = a9;
    CurrentProcess = PsGetCurrentProcess(v18);
    *(_QWORD *)((char *)&v21[17] + 4) = PsGetProcessSequenceNumber(CurrentProcess);
    EtwUpdateEvent(a3, 1073741841LL);
    v14 = LpcRequestPort(Object, v21);
    ObfDereferenceObject(Object);
  }
  return v14;
}
