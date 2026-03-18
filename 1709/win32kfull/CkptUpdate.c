/*
 * XREFs of CkptUpdate @ 0x1C004B97C
 * Callers:
 *     _GetWindowPlacement @ 0x1C004B5A0 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     GetMonitorMaxArea @ 0x1C0086F24 (GetMonitorMaxArea.c)
 */

char __fastcall CkptUpdate(__int64 a1, struct tagRECT *a2, __int64 a3)
{
  char v3; // al
  char v7; // cl
  struct tagRECT v8; // xmm0
  int top; // eax
  _DWORD *v10; // rdx
  _DWORD *v11; // r8
  __int64 v12; // rax
  __int128 *MonitorMaxArea; // rax
  __int128 v14; // xmm0
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_BYTE *)(a1 + 71);
  if ( (v3 & 0x20) != 0 )
  {
    *(_DWORD *)(a3 + 32) |= 8u;
    *(_DWORD *)(a3 + 16) = a2->left;
    top = a2->top;
    *(_DWORD *)(a3 + 20) = top;
  }
  else if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(a3 + 32) |= 0x10u;
    if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) )
    {
      if ( (*(_BYTE *)(a1 + 59) & 0x40) == 0 )
      {
        v12 = MonitorFromRect(a2);
        MonitorMaxArea = (__int128 *)GetMonitorMaxArea(v16, a1, v12);
        v14 = *MonitorMaxArea;
        *(_DWORD *)(a3 + 24) = a2->left - *MonitorMaxArea;
        top = a2->top - DWORD1(v14);
        *(_DWORD *)(a3 + 28) = top;
        return top;
      }
      v11[8] &= ~0x10u;
      top = -1;
      v11[6] = -1;
    }
    else
    {
      v11[6] = *v10;
      top = v10[1];
    }
    v11[7] = top;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 305);
    v8 = *a2;
    LOBYTE(top) = v7 & 3;
    if ( (v7 & 3) == 3 || (v7 & 1) != 0 || (v7 & 2) != 0 )
      *(struct tagRECT *)(a3 + 36) = v8;
    else
      *(struct tagRECT *)a3 = v8;
  }
  return top;
}
