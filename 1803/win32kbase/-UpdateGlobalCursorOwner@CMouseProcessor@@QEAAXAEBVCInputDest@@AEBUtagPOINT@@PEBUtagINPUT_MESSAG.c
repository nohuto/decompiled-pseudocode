/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0039794
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     UpdateGlobalCursorOwner @ 0x1C012ED70 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     EtwTraceWakePump @ 0x1C003AAB0 (EtwTraceWakePump.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C003AB80 (CoalesceInputSourceMouseMoves.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0061D64 (INPUTDEST_FROM_PWND.c)
 *     ApiSetEditionPostEventMessage @ 0x1C006A6E0 (ApiSetEditionPostEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  struct tagQ *v9; // rsi
  __int64 v10; // rbx
  int v11; // edi
  _OWORD *v12; // rax
  int v13; // r9d
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  bool v23; // di
  _QWORD *v24; // rdi
  _OWORD v25[11]; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v26[176]; // [rsp+E0h] [rbp-B8h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((_DWORD *)a2 + 21) == 2 )
    v24 = (_QWORD *)*((_QWORD *)a2 + 9);
  else
    v24 = 0LL;
  if ( v24 )
  {
    v7 = (__int64)*a3;
    v8 = (int)IsEditionUpdateCursorOnMouseMoveSupported() < 0 ? 0LL : (_QWORD *)EditionUpdateCursorOnMouseMove(v24, v7);
    v9 = *(struct tagQ **)(v24[2] + 424LL);
    if ( v9 != gpqCursor )
    {
      if ( gpqCursor )
      {
        if ( *((_QWORD *)gpqCursor + 13) )
        {
          CoalesceInputSourceMouseMoves(gpqCursor);
          EtwTraceWakePump(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 0LL, 512LL);
          *((_DWORD *)gpqCursor + 97) |= 0x20u;
          SetWakeBit(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 2LL);
        }
        if ( v8 && *v8 != *v24 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
            PostIAMShellHookMessageEx(v24[3], 39LL, *v24);
          v10 = v8[3];
          v11 = *(_DWORD *)(v10 + 48);
          if ( (v11 & 0x5C0) != 0 )
          {
            v12 = (_OWORD *)INPUTDEST_FROM_PWND(v26, *(_QWORD *)(v10 + 184));
            v13 = *(_DWORD *)(v10 + 192);
            v14 = v12[1];
            v25[0] = *v12;
            v15 = v12[2];
            v25[1] = v14;
            v16 = v12[3];
            v25[2] = v15;
            v17 = v12[4];
            v25[3] = v16;
            v18 = v12[5];
            v25[4] = v17;
            v19 = v12[6];
            v25[5] = v18;
            v20 = v12[8];
            v25[6] = v19;
            v25[7] = v12[7];
            v21 = v12[9];
            v25[8] = v20;
            v22 = v12[10];
            v25[9] = v21;
            v25[10] = v22;
            ApiSetEditionPostEventMessage((unsigned int)v25, 11, v11, v13, 1472LL);
            *(_DWORD *)(v10 + 48) &= 0xFFFFFA3F;
          }
        }
      }
      gpqCursor = v9;
      zzzUpdateCursorImage();
      RIMLockExclusive((char *)this + 2864);
      v23 = *((_BYTE *)this + 2880) && *((_BYTE *)this + 2881);
      *((_WORD *)this + 1440) = 0;
      *((_QWORD *)this + 359) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 2864, 0LL);
      KeLeaveCriticalRegion();
      if ( v23 && (int)IsSetPointerSupported() >= 0 )
        SetPointer(1LL);
    }
  }
}
