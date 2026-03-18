/*
 * XREFs of SelectWindowRgn @ 0x1C009D0B0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserSetWindowRgnEx @ 0x1C01E01D0 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     DwmAsyncChildClipRgnChange @ 0x1C009D1C0 (DwmAsyncChildClipRgnChange.c)
 *     GreUpdateSpriteClipRgn @ 0x1C009D248 (GreUpdateSpriteClipRgn.c)
 */

__int16 __fastcall SelectWindowRgn(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  _UNKNOWN **v3; // rax
  int v4; // esi
  __int64 v6; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rax
  _UNKNOWN **v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = 0;
  v6 = a1[27];
  v8 = a2;
  if ( v6 )
  {
    if ( (*((_BYTE *)a1 + 61) & 8) != 0 )
    {
      LOWORD(v3) = SetOrClrWF(0, a1, 0x508u, 1);
    }
    else
    {
      if ( a2 == 2 )
        return (__int16)v3;
      LOWORD(v3) = GreDeleteObject(v6);
      v4 = 1;
    }
    a1[27] = 0LL;
  }
  if ( v8 > 1 )
  {
    if ( v8 == 2 )
    {
      if ( (*((_BYTE *)a1 + 71) & 1) == 0 )
        return (__int16)v3;
      if ( (*((_BYTE *)a1 + 59) & 0x40) == 0 )
        return (__int16)v3;
      v3 = (_UNKNOWN **)MonitorFromWindow((__int64)a1, 0);
      v14 = v3;
      if ( !v3 )
        return (__int16)v3;
      if ( (a1[46] & 0xF) == 0
        && (v15 = *(_QWORD *)(a1[2] + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v15 + 8) + 52LL) & 1) != 0 )
      {
        v8 = (unsigned __int64)v3[12];
      }
      else if ( (a1[46] & 0xF) == 1
             && (v16 = *(_QWORD *)(a1[2] + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 52LL) & 1) != 0 )
      {
        v8 = (unsigned __int64)v14[13];
      }
      else
      {
        v8 = (unsigned __int64)v14[11];
      }
      LOWORD(v3) = SetOrClrWF(1, a1, 0x508u, 1);
    }
    else
    {
      if ( a1 != (_QWORD *)GetDesktopWindow((__int64)a1) )
        GreOffsetRgn(v8, *((unsigned int *)a1 + 32), *((unsigned int *)a1 + 33));
      LOWORD(v3) = GreSetRegionOwner(v8, 0LL);
      v4 = 1;
    }
    a1[27] = v8;
  }
  if ( v4 )
  {
    LODWORD(v3) = IsWindowDesktopComposed(a1);
    if ( (_DWORD)v3 )
    {
      if ( (unsigned int)IsTopLevelWindow((__int64)a1) && (*((_BYTE *)a1 + 66) & 8) != 0 )
        GreUpdateSpriteClipRgn(v10, *a1, a1[27], a3);
      v13 = (void *)ReferenceDwmApiPort(v10, v9, v11, v12);
      LOWORD(v3) = DwmAsyncChildClipRgnChange(v13);
    }
  }
  return (__int16)v3;
}
