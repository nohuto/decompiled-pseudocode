/*
 * XREFs of rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C010EAB8
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     rimFindHoldingFrame @ 0x1C0095120 (rimFindHoldingFrame.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00D9940 (EtwTraceBeginPointerFrameCommit.c)
 *     rimReclaimHoldingFrame @ 0x1C010ECB8 (rimReclaimHoldingFrame.c)
 */

__int64 __fastcall rimGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *HoldingFrame; // rsi
  int v6; // r8d
  _OWORD *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // ebp
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 i; // r8
  __int64 v16; // r9
  _OWORD *v17; // rcx
  __int64 v18; // r14
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rax

  v3 = 0;
  *a3 = 0LL;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  EtwTraceBeginPointerFrameCommit(0, *((_DWORD *)HoldingFrame + 10), v6);
  v7 = (_OWORD *)HoldingFrame[7];
  v8 = 0LL;
  while ( v7 )
  {
    v9 = *((_DWORD *)v7 + 1);
    v7 = (_OWORD *)*((_QWORD *)v7 + 2);
    v8 = ((v9 + 7) & 0xFFFFFFF8) + (_DWORD)v8 + 24;
  }
  v10 = 168 * *((_DWORD *)HoldingFrame + 10);
  v11 = v8 + v10 + 96;
  if ( v11 )
  {
    v12 = Win32AllocPoolZInit(v11, 1717793618LL);
    v13 = v12;
    if ( v12 )
    {
      *v12 = v11;
      v8 = 0LL;
      v14 = v12 + 2;
      v14[1] = v14;
      *v14 = v14;
      v13[6] = *((_DWORD *)HoldingFrame + 10);
      *((_QWORD *)v13 + 4) = HoldingFrame[3];
      *((_QWORD *)v13 + 5) = HoldingFrame[4];
      *((_QWORD *)v13 + 11) = v13 + 24;
      for ( i = HoldingFrame[9]; (unsigned int)v8 < *((_DWORD *)HoldingFrame + 10); i += 168LL )
      {
        v16 = 168LL * (unsigned int)v8;
        v17 = (_OWORD *)(v16 + *((_QWORD *)v13 + 11));
        *v17 = *(_OWORD *)i;
        v17[1] = *(_OWORD *)(i + 16);
        v17[2] = *(_OWORD *)(i + 32);
        v17[3] = *(_OWORD *)(i + 48);
        v17[4] = *(_OWORD *)(i + 64);
        v17[5] = *(_OWORD *)(i + 80);
        v17[6] = *(_OWORD *)(i + 96);
        v7 = v17 + 8;
        *(v7 - 1) = *(_OWORD *)(i + 112);
        *v7 = *(_OWORD *)(i + 128);
        v7[1] = *(_OWORD *)(i + 144);
        *((_QWORD *)v7 + 4) = *(_QWORD *)(i + 160);
        if ( i == HoldingFrame[10] )
        {
          v7 = (_OWORD *)(v16 + *((_QWORD *)v13 + 11));
          *((_QWORD *)v13 + 9) = v7;
        }
        v8 = (unsigned int)(v8 + 1);
      }
      v13[7] = *((_DWORD *)HoldingFrame + 12);
      if ( HoldingFrame[7] )
        *((_QWORD *)v13 + 10) = *((_QWORD *)v13 + 11) + v10;
      v18 = HoldingFrame[7];
      v19 = *((_QWORD *)v13 + 10);
      while ( v18 )
      {
        *(_DWORD *)v19 = *(_DWORD *)v18;
        *(_DWORD *)(v19 + 4) = *(_DWORD *)(v18 + 4);
        *(_QWORD *)(v19 + 8) = v19 + 24;
        memmove((void *)(v19 + 24), *(const void **)(v18 + 8), *(unsigned int *)(v18 + 4));
        v7 = (_OWORD *)(v19 + 16);
        v20 = *(_DWORD *)(v18 + 4) + 7;
        *(_QWORD *)(v19 + 16) = 0LL;
        v21 = (v20 & 0xFFFFFFF8) + 24;
        if ( *(_QWORD *)(v18 + 16) )
          *(_QWORD *)v7 = v19 + v21;
        v19 = *(_QWORD *)v7;
        v18 = *(_QWORD *)(v18 + 16);
      }
      *a3 = v13;
      v3 = 1;
    }
  }
  rimReclaimHoldingFrame(v7, v8, HoldingFrame);
  return v3;
}
