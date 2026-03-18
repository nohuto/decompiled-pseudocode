/*
 * XREFs of DwmAsyncCreateSprite @ 0x1C001E508
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHHPEAG@Z @ 0x1C0020FA4 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncCreateSprite(PVOID Object, __int64 a2, __int64 a3, _OWORD *a4, int a5, __int64 a6)
{
  unsigned int v10; // edi
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD v14[9]; // [rsp+20h] [rbp-89h] BYREF

  v10 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset((char *)v14 + 2, 0, 0x86uLL);
    LODWORD(v14[0]) = 8912992;
    WORD2(v14[0]) = 0x8000;
    HIDWORD(v14[4]) = a5;
    DWORD2(v14[2]) = 1073741826;
    *(_QWORD *)((char *)&v14[2] + 12) = a2;
    *(_QWORD *)((char *)&v14[3] + 4) = a3;
    if ( a4 )
      *(_OWORD *)((char *)&v14[3] + 12) = *a4;
    if ( a6 )
    {
      v11 = *(_OWORD *)(a6 + 16);
      v14[5] = *(_OWORD *)a6;
      v12 = *(_OWORD *)(a6 + 32);
      v14[6] = v11;
      *(_QWORD *)&v11 = *(_QWORD *)(a6 + 48);
      v14[7] = v12;
      *(_QWORD *)&v14[8] = v11;
    }
    EtwUpdateEvent(a3, 1073741826LL);
    v10 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v10;
}
