/*
 * XREFs of ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C009E7C4
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     CalcWindowFullScreen @ 0x1C0020C84 (CalcWindowFullScreen.c)
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 */

void __fastcall UpdateWindowRects(
        struct tagWND *a1,
        const struct tagPOINT *a2,
        const struct tagSIZE *a3,
        int *a4,
        int *a5)
{
  int v5; // r14d
  int v6; // r15d
  unsigned int v10; // esi
  unsigned int v11; // edi
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax

  v5 = 0;
  *a4 = 0;
  v6 = 0;
  *a5 = 0;
  if ( a2 )
  {
    v10 = a2->x - *((_DWORD *)a1 + 32);
    v11 = a2->y - *((_DWORD *)a1 + 33);
    if ( a2->x != *((_DWORD *)a1 + 32) || v11 )
    {
      v16 = *((_DWORD *)a1 + 76);
      v6 = 1;
      if ( (v16 & 0x8000) != 0 )
      {
        v18 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 76) = v16 & 0xFFFF7FFF;
        PostShellHookMessagesEx(0x36u, v18, 0LL);
      }
    }
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( a3 )
  {
    v12 = a3->cx + *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 34);
    v13 = a3->cy + *((_DWORD *)a1 + 33) - *((_DWORD *)a1 + 35);
    if ( v12 || v13 )
      v5 = 1;
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  if ( v6 || v5 )
  {
    *((_DWORD *)a1 + 32) += v10;
    *((_DWORD *)a1 + 34) += v12 + v10;
    *((_DWORD *)a1 + 35) += v13 + v11;
    *((_DWORD *)a1 + 33) += v11;
    *((_DWORD *)a1 + 38) += v12 + v10;
    *((_DWORD *)a1 + 39) += v13 + v11;
    *((_DWORD *)a1 + 36) += v10;
    *((_DWORD *)a1 + 37) += v11;
    if ( v12 < 0 )
    {
      v19 = *((_DWORD *)a1 + 32);
      if ( *((_DWORD *)a1 + 36) < v19 )
      {
        *((_DWORD *)a1 + 36) = v19;
        *((_DWORD *)a1 + 38) = v19;
      }
    }
    if ( v13 < 0 )
    {
      v17 = *((_DWORD *)a1 + 33);
      if ( *((_DWORD *)a1 + 37) < v17 )
      {
        *((_DWORD *)a1 + 37) = v17;
        *((_DWORD *)a1 + 39) = v17;
      }
    }
    v14 = *((_QWORD *)a1 + 27);
    if ( v14 )
      GreOffsetRgn(v14, v10, v11);
    if ( IsPWNDEligibleForGDIScaling((__int64)a1) )
      DwmChildRectChange(v15);
    CalcWindowFullScreen((__int64)a1);
  }
  *a4 = v5;
  *a5 = v6;
}
