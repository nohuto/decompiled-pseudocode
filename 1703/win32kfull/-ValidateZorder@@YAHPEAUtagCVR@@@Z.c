/*
 * XREFs of ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C001FDE4
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C001CA48 (GetLastTopMostWindow.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C001E26C (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 *     PWInsertAfter @ 0x1C001FF60 (PWInsertAfter.c)
 *     HWInsertAfter @ 0x1C01A3E50 (HWInsertAfter.c)
 */

__int64 __fastcall ValidateZorder(struct tagCVR *a1)
{
  unsigned int v1; // ebx
  struct tagWND *v3; // rsi
  char *v4; // rax
  char *v5; // r9
  struct tagWND *v6; // rdi
  bool v7; // zf
  __int64 v9; // rdx
  struct tagWND *v10; // rax
  struct tagWND *LastTopMostWindow; // rax
  __int64 v12; // rax
  struct tagWND *LastNonBottomMostWindow; // rax

  v1 = 0;
  v3 = *(struct tagWND **)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)a1);
  if ( *((char *)v3 + 59) < 0 )
    return 1LL;
  v4 = (char *)PWInsertAfter(*((_QWORD *)a1 + 1));
  v5 = v4;
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( !v4 )
      return 1LL;
  }
  if ( v4 == (char *)1 )
  {
    if ( (*((_BYTE *)v3 + 60) & 0x20) != 0 )
      v7 = *((_QWORD *)v3 + 11) == 0LL;
    else
      v7 = v3 == GetLastNonBottomMostWindow(v3, 0);
LABEL_8:
    LOBYTE(v1) = v7;
    return v1;
  }
  v6 = *(struct tagWND **)(*((_QWORD *)v3 + 13) + 112LL);
  if ( !v4 )
  {
    if ( *((_DWORD *)v3 + 80) == 1 )
    {
      while ( v6 && *((_DWORD *)v6 + 80) != 1 )
        v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
    }
    v7 = v6 == v3;
    goto LABEL_8;
  }
  if ( v4[59] < 0 )
    return 1LL;
  if ( (v4[60] & 0x20) != 0 )
  {
    LastNonBottomMostWindow = GetLastNonBottomMostWindow(v3, 1);
    *((_QWORD *)a1 + 1) = HWInsertAfter(LastNonBottomMostWindow);
    return 0LL;
  }
  v9 = *((_BYTE *)v3 + 64) & 8 ^ 8u;
  if ( (*((_BYTE *)v3 + 59) & 4) == 0 )
    v9 = *((_BYTE *)v3 + 64) & 8;
  if ( (_BYTE)v9 == (v4[64] & 8) )
  {
LABEL_14:
    if ( v6 != v3 )
    {
      if ( v6 )
      {
        while ( 1 )
        {
          v10 = (struct tagWND *)*((_QWORD *)v6 + 11);
          if ( v10 == v3 )
            break;
          v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
          if ( !v10 )
            return 1LL;
        }
        v7 = v5 == (char *)v6;
        goto LABEL_8;
      }
      return 1LL;
    }
    return 0LL;
  }
  LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow((__int64)v3, v9);
  v5 = (char *)LastTopMostWindow;
  if ( LastTopMostWindow != v3 )
  {
    if ( LastTopMostWindow )
      v12 = *(_QWORD *)LastTopMostWindow;
    else
      v12 = 0LL;
    *((_QWORD *)a1 + 1) = v12;
    goto LABEL_14;
  }
  return 1LL;
}
