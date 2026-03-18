/*
 * XREFs of DwmAsyncCreateSprite @ 0x1C008C024
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEAG@Z @ 0x1C008F420 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall DwmAsyncCreateSprite(PVOID Object, __int64 a2, __int64 a3, _OWORD *a4, int a5, __int64 a6, int a7)
{
  unsigned int v11; // edi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD v15[9]; // [rsp+20h] [rbp-91h] BYREF

  v11 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v15, 0, 0x8CuLL);
    LODWORD(v15[0]) = 9175140;
    WORD2(v15[0]) = 0x8000;
    HIDWORD(v15[4]) = a5;
    DWORD2(v15[8]) = a7;
    DWORD2(v15[2]) = 1073741826;
    *(_QWORD *)((char *)&v15[2] + 12) = a2;
    *(_QWORD *)((char *)&v15[3] + 4) = a3;
    if ( a4 )
      *(_OWORD *)((char *)&v15[3] + 12) = *a4;
    if ( a6 )
    {
      v12 = *(_OWORD *)(a6 + 16);
      v15[5] = *(_OWORD *)a6;
      v13 = *(_OWORD *)(a6 + 32);
      v15[6] = v12;
      *(_QWORD *)&v12 = *(_QWORD *)(a6 + 48);
      v15[7] = v13;
      *(_QWORD *)&v15[8] = v12;
    }
    EtwUpdateEvent(a3, 1073741826LL);
    v11 = LpcRequestPort(Object, v15);
    ObfDereferenceObject(Object);
  }
  return v11;
}
