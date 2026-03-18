/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0013B90
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     UpdateGlobalCursorOwner @ 0x1C012E610 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0016F4C (INPUTDEST_FROM_PWND.c)
 *     EtwTraceWakePump @ 0x1C0017BF0 (EtwTraceWakePump.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0017CC0 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionPostEventMessage @ 0x1C00905D8 (ApiSetEditionPostEventMessage.c)
 */

void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  struct tagQ *v8; // rsi
  __int64 v9; // rbx
  int v10; // edi
  bool v11; // di
  _OWORD *v12; // rax
  int v13; // r9d
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  _OWORD v24[12]; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v25[192]; // [rsp+F0h] [rbp-C8h] BYREF

  if ( *((_DWORD *)a2 + 23) == 2 )
    v5 = (_QWORD *)*((_QWORD *)a2 + 10);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = (__int64)*a3;
    v7 = (int)IsEditionUpdateCursorOnMouseMoveSupported() < 0 ? 0LL : (_QWORD *)EditionUpdateCursorOnMouseMove(v5, v6);
    v8 = *(struct tagQ **)(v5[2] + 408LL);
    if ( v8 != gpqCursor )
    {
      if ( gpqCursor )
      {
        if ( *((_QWORD *)gpqCursor + 13) )
        {
          CoalesceInputSourceMouseMoves(gpqCursor);
          EtwTraceWakePump(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 0LL, 512LL);
          *((_DWORD *)gpqCursor + 95) |= 0x20u;
          SetWakeBit(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 2LL);
        }
        if ( v7 && *v7 != *v5 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
            PostIAMShellHookMessageEx(v5[3], 39LL, *v5);
          v9 = v7[3];
          v10 = *(_DWORD *)(v9 + 48);
          if ( (v10 & 0x5C0) != 0 )
          {
            v12 = (_OWORD *)INPUTDEST_FROM_PWND(v25);
            v13 = *(_DWORD *)(v9 + 192);
            v14 = v12[1];
            v24[0] = *v12;
            v15 = v12[2];
            v24[1] = v14;
            v16 = v12[3];
            v24[2] = v15;
            v17 = v12[4];
            v24[3] = v16;
            v18 = v12[5];
            v24[4] = v17;
            v19 = v12[6];
            v24[5] = v18;
            v24[6] = v19;
            v20 = v12[7];
            v12 += 8;
            v24[7] = v20;
            v21 = v12[1];
            v24[8] = *v12;
            v22 = v12[2];
            v24[9] = v21;
            v23 = v12[3];
            v24[10] = v22;
            v24[11] = v23;
            ApiSetEditionPostEventMessage((unsigned int)v24, 11, v10, v13, 1472LL);
            *(_DWORD *)(v9 + 48) &= 0xFFFFFA3F;
          }
        }
      }
      gpqCursor = v8;
      zzzUpdateCursorImage();
      RIMLockExclusive((char *)this + 3024);
      v11 = *((_BYTE *)this + 3040) && *((_BYTE *)this + 3041);
      *((_WORD *)this + 1520) = 0;
      *((_QWORD *)this + 379) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 3024, 0LL);
      KeLeaveCriticalRegion();
      if ( v11 && (int)IsSetPointerSupported() >= 0 )
        SetPointer(1LL);
    }
  }
}
