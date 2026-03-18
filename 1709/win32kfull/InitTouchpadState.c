/*
 * XREFs of InitTouchpadState @ 0x1C01B4038
 * Callers:
 *     HoldRimCompleteFrame @ 0x1C01A68DC (HoldRimCompleteFrame.c)
 * Callees:
 *     ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AF948 (-UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z.c)
 *     TPAAPSetCurtainState @ 0x1C01B43D0 (TPAAPSetCurtainState.c)
 */

__int64 __fastcall InitTouchpadState(struct tagTPSTATE *a1, struct tagHID_POINTER_DEVICE_INFO *a2)
{
  __int64 result; // rax

  *((_DWORD *)a1 + 411) = *((_DWORD *)a2 + 170);
  *((_DWORD *)a1 + 480) ^= (*((_DWORD *)a1 + 480) ^ (*((_DWORD *)a2 + 69) << 29)) & 0x20000000;
  TPAAPSetCurtainState(a1, 1LL);
  UpdatePTPRightClickZone(a1, a2, 1);
  *((_DWORD *)a1 + 480) |= 0x10000000u;
  *((_DWORD *)a1 + 475) = gTPThresholds[41];
  *((_DWORD *)a1 + 477) = *((_DWORD *)a2 + 38);
  *((_DWORD *)a1 + 474) = gTPThresholds[42];
  result = (unsigned int)gTPThresholds[43];
  *((_DWORD *)a1 + 476) = *((_DWORD *)a2 + 37) - result;
  return result;
}
