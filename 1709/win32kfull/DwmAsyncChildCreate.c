/*
 * XREFs of DwmAsyncChildCreate @ 0x1C004590C
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0045740 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 CurrentProcess; // rax
  _QWORD v22[20]; // [rsp+20h] [rbp-B1h] BYREF

  v14 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v22, 0, 0x94uLL);
    v15 = *a8;
    v16 = a8[1];
    WORD2(v22[0]) = 0x8000;
    LODWORD(v22[8]) = a5;
    *(_OWORD *)&v22[11] = v15;
    LODWORD(v22[17]) = a6;
    v22[15] = *((_QWORD *)a8 + 4);
    v17 = *a10;
    HIDWORD(v22[10]) = a7;
    *(_OWORD *)((char *)&v22[8] + 4) = v17;
    LODWORD(v22[0]) = 9699436;
    LODWORD(v22[5]) = 1073741841;
    *(_QWORD *)((char *)&v22[5] + 4) = a2;
    *(_QWORD *)((char *)&v22[6] + 4) = a3;
    HIDWORD(v22[7]) = a4;
    *(_OWORD *)&v22[13] = v16;
    v22[16] = a9;
    CurrentProcess = PsGetCurrentProcess(v19, v18);
    *(_QWORD *)((char *)&v22[17] + 4) = PsGetProcessSequenceNumber(CurrentProcess);
    EtwUpdateEvent(a3, 1073741841LL);
    v14 = LpcRequestPort(Object, v22);
    ObfDereferenceObject(Object);
  }
  return v14;
}
