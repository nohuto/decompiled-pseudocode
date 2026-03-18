/*
 * XREFs of InitTouchpadState @ 0x1C01B0C48
 * Callers:
 *     HoldRimCompleteFrame @ 0x1C019AC00 (HoldRimCompleteFrame.c)
 * Callees:
 *     ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AC5CC (-UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z.c)
 *     TPAAPSetCurtainState @ 0x1C01B0FC8 (TPAAPSetCurtainState.c)
 */

__int64 __fastcall InitTouchpadState(struct tagTPSTATE *a1, struct tagHID_POINTER_DEVICE_INFO *a2)
{
  __int64 result; // rax

  *((_DWORD *)a1 + 411) = *((_DWORD *)a2 + 174);
  *((_DWORD *)a1 + 480) ^= (*((_DWORD *)a1 + 480) ^ (*((_DWORD *)a2 + 65) << 29)) & 0x20000000;
  TPAAPSetCurtainState(a1, 1LL);
  UpdatePTPRightClickZone(a1, a2, 1);
  *((_DWORD *)a1 + 480) |= 0x10000000u;
  *((_DWORD *)a1 + 475) = gTPThresholds[41];
  *((_DWORD *)a1 + 477) = *((_DWORD *)a2 + 54);
  *((_DWORD *)a1 + 474) = gTPThresholds[42];
  result = (unsigned int)gTPThresholds[43];
  *((_DWORD *)a1 + 476) = *((_DWORD *)a2 + 53) - result;
  return result;
}
