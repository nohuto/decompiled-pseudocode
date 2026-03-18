/*
 * XREFs of _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01317DC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0047C70 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C004C08C (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

_OWORD *__fastcall anonymous_namespace_::GetRawMouseInputDestination(_OWORD *a1)
{
  __int64 PtiFromInputDest; // rax
  __int64 v3; // rdi
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _DWORD v16[50]; // [rsp+20h] [rbp-C8h] BYREF

  memset(a1, 0, 0xC0uLL);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1);
  v3 = PtiFromInputDest;
  if ( PtiFromInputDest && (unsigned int)HasHidTable(PtiFromInputDest) )
  {
    v4 = INPUTDEST_FROM_PWND(v16, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 376) + 776LL) + 64LL));
    v5 = v4[1];
    *a1 = *v4;
    v6 = v4[2];
    a1[1] = v5;
    v7 = v4[3];
    a1[2] = v6;
    v8 = v4[4];
    a1[3] = v7;
    v9 = v4[5];
    a1[4] = v8;
    v10 = v4[6];
    a1[5] = v9;
    a1[6] = v10;
    v11 = v4[7];
    v4 += 8;
    a1[7] = v11;
    v12 = v4[1];
    a1[8] = *v4;
    v13 = v4[2];
    a1[9] = v12;
    v14 = v4[3];
    a1[10] = v13;
    a1[11] = v14;
  }
  return a1;
}
