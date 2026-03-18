/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C0126D4C
 * Callers:
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_K_JHPEAX@Z @ 0x1C01224E0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_K_JHPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(CTouchProcessor *this, __int64 a2, int a3, int a4)
{
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // r9
  struct CPointerInputFrame *FrameById; // r9
  int *v12; // rcx
  int v13; // eax
  int v14; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xDBu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  if ( !a2 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v9 = 220;
LABEL_6:
    WPP_RECORDER_SF_(
      (__int64)v8->DeviceExtension,
      5u,
      0xBu,
      v9,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v9 = 221;
    goto LABEL_6;
  }
  v12 = (int *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32));
  switch ( a3 )
  {
    case 585:
      v13 = *v12 ^ (*v12 ^ (a4 << 24)) & 0x1000000 | 0x800000;
LABEL_20:
      *v12 = v13;
      break;
    case 586:
      v13 = *v12 ^ (*v12 ^ (a4 << 28)) & 0x10000000 | 0x8000000;
      goto LABEL_20;
    case 593:
      v14 = v12[1] ^ a4;
      *v12 |= 0x80000000;
      v12[1] ^= v14 & 1;
      break;
    case 594:
      v12[1] = v12[1] ^ (v12[1] ^ (16 * a4)) & 0x10 | 8;
      break;
    default:
      v13 = *v12 ^ (*v12 ^ (a4 << 20)) & 0x100000 | 0x80000;
      goto LABEL_20;
  }
  if ( a4 )
    *(_DWORD *)(240LL * (unsigned int)v12[2] + *((_QWORD *)FrameById + 13) + 220) |= 8u;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xDEu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  return 1LL;
}
