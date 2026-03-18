/*
 * XREFs of ?MouseMove_UpdateCursor@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0045C28
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     CoalesceInputSourceMouseMoves @ 0x1C0045220 (CoalesceInputSourceMouseMoves.c)
 *     EtwTraceWakePump @ 0x1C0045320 (EtwTraceWakePump.c)
 *     INPUTDEST_FROM_PWND @ 0x1C004C08C (INPUTDEST_FROM_PWND.c)
 *     ApiSetEditionPostEventMessage @ 0x1C0089DE8 (ApiSetEditionPostEventMessage.c)
 */

void __fastcall CMouseProcessor::MouseMove_UpdateCursor(
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
  _OWORD *v11; // rax
  int v12; // r9d
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _OWORD v23[12]; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v24[192]; // [rsp+F0h] [rbp-C8h] BYREF

  if ( *((_DWORD *)a2 + 23) == 2 )
    v5 = (_QWORD *)*((_QWORD *)a2 + 10);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = (__int64)*a3;
    v7 = (int)IsEditionUpdateCursorOnMouseMoveSupported(this) < 0
       ? 0LL
       : (_QWORD *)EditionUpdateCursorOnMouseMove(v5, v6);
    v8 = *(struct tagQ **)(v5[2] + 384LL);
    if ( v8 != gpqCursor )
    {
      if ( gpqCursor )
      {
        if ( *((_QWORD *)gpqCursor + 9) )
        {
          CoalesceInputSourceMouseMoves(gpqCursor, a4);
          EtwTraceWakePump(*(_QWORD *)(*((_QWORD *)gpqCursor + 9) + 16LL), 0LL, 0);
          *((_DWORD *)gpqCursor + 85) |= 0x20u;
          SetWakeBit(*(_QWORD *)(*((_QWORD *)gpqCursor + 9) + 16LL), 2LL);
        }
        if ( v7 && *v7 != *v5 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
            PostIAMShellHookMessageEx(v5[3], 39LL, *v5);
          v9 = v7[3];
          v10 = *(_DWORD *)(v9 + 48);
          if ( (v10 & 0x5C0) != 0 )
          {
            v11 = (_OWORD *)INPUTDEST_FROM_PWND(v24, *(_QWORD *)(v9 + 184));
            v12 = *(_DWORD *)(v9 + 192);
            v13 = v11[1];
            v23[0] = *v11;
            v14 = v11[2];
            v23[1] = v13;
            v15 = v11[3];
            v23[2] = v14;
            v16 = v11[4];
            v23[3] = v15;
            v17 = v11[5];
            v23[4] = v16;
            v18 = v11[6];
            v23[5] = v17;
            v23[6] = v18;
            v19 = v11[7];
            v11 += 8;
            v23[7] = v19;
            v20 = v11[1];
            v23[8] = *v11;
            v21 = v11[2];
            v23[9] = v20;
            v22 = v11[3];
            v23[10] = v21;
            v23[11] = v22;
            ApiSetEditionPostEventMessage((unsigned int)v23, 11, v10, v12, 1472LL);
            *(_DWORD *)(v9 + 48) &= 0xFFFFFA3F;
          }
        }
      }
      gpqCursor = v8;
      zzzUpdateCursorImage();
    }
  }
}
