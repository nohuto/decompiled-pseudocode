/*
 * XREFs of CkptUpdate @ 0x1C001D51C
 * Callers:
 *     _GetWindowPlacement @ 0x1C001CFF0 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C001D438 (CkptRestore.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     GetMonitorMaxArea @ 0x1C003C008 (GetMonitorMaxArea.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 */

char __fastcall CkptUpdate(__int64 a1, _DWORD *a2, __int64 a3)
{
  char v3; // al
  char v7; // cl
  __int128 v8; // xmm0
  int v9; // eax
  __int64 DesktopWindow; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // r8
  __int64 v14; // rax
  _DWORD *v15; // rdx
  _DWORD *v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 71);
  if ( (v3 & 0x20) != 0 )
  {
    *(_DWORD *)(a3 + 32) |= 8u;
    *(_DWORD *)(a3 + 16) = *a2;
    v9 = a2[1];
    *(_DWORD *)(a3 + 20) = v9;
  }
  else if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(a3 + 32) |= 0x10u;
    DesktopWindow = GetDesktopWindow(a1, a2);
    if ( *(_QWORD *)(v12 + 104) == DesktopWindow )
    {
      if ( (*(_BYTE *)(v12 + 59) & 0x40) == 0 )
      {
        v14 = MonitorFromRect(a2, 1LL);
        LOBYTE(v9) = GetMonitorMaxArea(a1, v14, &v17);
        v15 = v17;
        *(_DWORD *)(a3 + 24) = *a2 - *v17;
        *(_DWORD *)(a3 + 28) = a2[1] - v15[1];
        return v9;
      }
      v13[8] &= ~0x10u;
      v9 = -1;
      v13[6] = -1;
    }
    else
    {
      v13[6] = *v11;
      v9 = v11[1];
    }
    v13[7] = v9;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 305);
    v8 = *(_OWORD *)a2;
    LOBYTE(v9) = v7 & 3;
    if ( (v7 & 3) == 3 || (v7 & 1) != 0 || (v7 & 2) != 0 )
      *(_OWORD *)(a3 + 36) = v8;
    else
      *(_OWORD *)a3 = v8;
  }
  return v9;
}
