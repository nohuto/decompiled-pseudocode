/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D043C
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01D0008 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D0660 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D1138 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     DwmSyncHitTestQuery @ 0x1C00E7D74 (DwmSyncHitTestQuery.c)
 */

void __fastcall xxxSendNCHitTest(
        struct tagWND *a1,
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
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF
  struct tagPOINT v25; // [rsp+98h] [rbp+48h]
  struct tagPOINT v26; // [rsp+A0h] [rbp+50h]
  unsigned __int64 v27; // [rsp+A8h] [rbp+58h]

  v26 = a3;
  v25 = a2;
  v6 = 0;
  v7 = (__int64)a2;
  LODWORD(v24) = 0;
  if ( a4 )
  {
    v26.x += a4->x;
    v26.y += a4->y;
    v27 = (unsigned __int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (v9 = (float *)*((_QWORD *)a1 + 36)) != 0LL )
    {
      v10 = (int)(float)((float)(int)v27 * *v9);
      v11 = (int)(float)((float)SHIDWORD(v27) * v9[5]);
      v27 = __PAIR64__(v11, v10);
    }
    else
    {
      v11 = HIDWORD(v27);
      v10 = v27;
    }
    v25.x += v10;
    v25.y += v11;
    v7 = (__int64)v25;
    a3 = v26;
  }
  if ( PtInRect((_DWORD *)a1 + 32, *(_QWORD *)&a3) )
  {
    v13 = (*((_BYTE *)a1 + 71) & 0x20) != 0 || !PtInRect((_DWORD *)a1 + 36, v12);
    if ( *((_QWORD *)a1 + 2) == gptiCurrent )
    {
      v14 = a6;
      v15 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
        && (*((_BYTE *)a1 + 66) & 8) != 0
        && v13 )
      {
        if ( gdwInAtomicOperation )
        {
          v16 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v19 = (void *)ReferenceDwmApiPort(v16, gdwInAtomicOperation, v17, v18);
        LODWORD(v24) = 1;
        UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
        DwmSyncHitTestQuery(
          v19,
          *(_QWORD *)a1,
          *(_DWORD *)v14,
          v7,
          *((_QWORD *)v14 + 1),
          *((_QWORD *)v14 + 2),
          -2,
          v15,
          &v24);
        EnterCrit(0LL, 1LL);
        v6 = v24;
      }
      if ( !*((_DWORD *)v14 + 21) || !v6 )
      {
        _InterlockedIncrement(&glSendMessage);
        *v15 = xxxSendTransformableMessageTimeout(
                 (ULONG_PTR)a1,
                 0x84u,
                 0LL,
                 (struct _LARGE_STRING *)(LOWORD(v26.x) | (LOWORD(v26.y) << 16)),
                 0,
                 0,
                 0LL,
                 1,
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
