/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D4AF0
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01D46C0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D4D14 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D57E4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     DwmSyncHitTestQuery @ 0x1C0049A6C (DwmSyncHitTestQuery.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxSendNCHitTest(
        __int64 BugCheckParameter2,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        int *a5,
        struct tagPNTRWINDOWHITTTESTARGS *a6)
{
  int v6; // r15d
  __int64 v7; // rbx
  float *v9; // rax
  int v10; // ecx
  int v11; // eax
  unsigned __int64 v12; // r8
  BOOL v13; // edi
  struct tagPNTRWINDOWHITTTESTARGS *v14; // r14
  int *v15; // r12
  __int64 v16; // rcx
  void *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+90h] [rbp+40h] BYREF
  struct tagPOINT v21; // [rsp+98h] [rbp+48h]
  struct tagPOINT v22; // [rsp+A0h] [rbp+50h]
  unsigned __int64 v23; // [rsp+A8h] [rbp+58h]

  v22 = a3;
  v21 = a2;
  v6 = 0;
  v7 = (__int64)a2;
  LODWORD(v20) = 0;
  if ( a4 )
  {
    v22.x += a4->x;
    v22.y += a4->y;
    v23 = (unsigned __int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(BugCheckParameter2)
      && (v9 = *(float **)(BugCheckParameter2 + 288)) != 0LL )
    {
      v10 = (int)(float)((float)(int)v23 * *v9);
      v11 = (int)(float)((float)SHIDWORD(v23) * v9[5]);
      v23 = __PAIR64__(v11, v10);
    }
    else
    {
      v11 = HIDWORD(v23);
      v10 = v23;
    }
    v21.x += v10;
    v21.y += v11;
    v7 = (__int64)v21;
    a3 = v22;
  }
  if ( PtInRect((_DWORD *)(BugCheckParameter2 + 128), *(_QWORD *)&a3) )
  {
    v13 = (*(_BYTE *)(BugCheckParameter2 + 71) & 0x20) != 0 || !PtInRect((_DWORD *)(BugCheckParameter2 + 144), v12);
    if ( *(_QWORD *)(BugCheckParameter2 + 16) == gptiCurrent )
    {
      v14 = a6;
      v15 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed(BugCheckParameter2)
        && (*(_BYTE *)(BugCheckParameter2 + 66) & 8) != 0
        && v13 )
      {
        if ( gdwInAtomicOperation )
        {
          v16 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v17 = (void *)ReferenceDwmApiPort(v16);
        LODWORD(v20) = 1;
        UserSessionSwitchLeaveCrit(v19, v18);
        DwmSyncHitTestQuery(
          v17,
          *(_QWORD *)BugCheckParameter2,
          *(_DWORD *)v14,
          v7,
          *((_QWORD *)v14 + 1),
          *((_QWORD *)v14 + 2),
          -2,
          v15,
          &v20);
        EnterCrit(0LL, 1LL);
        v6 = v20;
      }
      if ( !*((_DWORD *)v14 + 21) || !v6 )
      {
        _InterlockedIncrement(&glSendMessage);
        *v15 = xxxSendTransformableMessageTimeout(
                 (__int64 *)BugCheckParameter2,
                 132LL,
                 0LL,
                 (struct _LARGE_STRING *)(LOWORD(v22.x) | (LOWORD(v22.y) << 16)),
                 0,
                 0,
                 0LL,
                 1u,
                 0);
      }
    }
    else
    {
      *a5 = 1;
    }
  }
  else
  {
    *a5 = 0;
  }
}
