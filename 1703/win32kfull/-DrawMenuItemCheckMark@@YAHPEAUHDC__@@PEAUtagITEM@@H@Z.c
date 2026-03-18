/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0214B68
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     FixHDCBITSBmp @ 0x1C00D6694 (FixHDCBITSBmp.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     BltColor @ 0x1C0219728 (BltColor.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2)
{
  int v2; // esi
  unsigned int v5; // r14d
  int v6; // r12d
  _QWORD *v7; // rbx
  int *v8; // rbx
  int v9; // eax
  int v10; // r13d
  int v11; // ecx
  HBRUSH v12; // r15
  __int64 v13; // r12
  int v14; // r13d
  bool v15; // zf
  char v16; // al
  _QWORD *v17; // rbx
  int v19; // [rsp+60h] [rbp-C8h]
  int v20; // [rsp+64h] [rbp-C4h]
  int v21; // [rsp+68h] [rbp-C0h]
  unsigned __int16 v22[24]; // [rsp+70h] [rbp-B8h] BYREF
  int v23; // [rsp+A0h] [rbp-88h]

  v2 = 2;
  v5 = 1;
  v6 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v7 = (_QWORD *)gpsi;
    if ( *(_WORD *)(gpsi + 8678LL) != 96 )
    {
      v8 = (int *)(gpsi + 8196LL);
      goto LABEL_8;
    }
  }
  else
  {
    v7 = (_QWORD *)gpsi;
  }
  v8 = (int *)(*v7 + 6708LL);
LABEL_8:
  v9 = 0;
  if ( *((_DWORD *)a2 + 21) - v8[3] >= 0 )
    v9 = *((_DWORD *)a2 + 21) - v8[3];
  v20 = v9 / 2;
  v10 = v9 / 2;
  v11 = *((_DWORD *)a2 + 1) & 8;
  if ( v11 )
    v12 = (HBRUSH)*((_QWORD *)a2 + 3);
  else
    v12 = (HBRUSH)*((_QWORD *)a2 + 4);
  if ( v12 )
  {
    v13 = GreSelectBitmap(*(_QWORD *)ghdcMem2, v12);
    if ( v13 )
    {
      v14 = GreSetTextColor(a1, 0);
      v21 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (*(_DWORD *)a2 & 0x2000) != 0 )
        v2 = *((_DWORD *)a2 + 20) - v8[2];
      if ( (unsigned int)GreExtGetObjectW(v12, 104LL, v22) == 104 && v22[23] == 32 && !v23 )
      {
        LOBYTE(v19) = 0;
        HIWORD(v19) = 511;
        v15 = (GreGetLayout(a1) & 1) == 0;
        v16 = 0;
        if ( !v15 )
          v16 = 0x80;
        BYTE1(v19) = v16;
        NtGdiAlphaBlend(a1, v2, v20, v8[3], v8[3], *(POINTL *)ghdcMem2, 0, 0, v8[2], v8[3], v19);
      }
      else
      {
        NtGdiBitBltInternal(a1, v2, v20, v8[2], v8[3], *(HDC *)ghdcMem2, 0, 0, 12060490, 0xFFFFFF, 0);
      }
      GreSetTextColor(a1, v14);
      GreSetBkColor(a1, v21);
      GreSelectBitmap(*(_QWORD *)ghdcMem2, v13);
    }
    return v5;
  }
  if ( !v11 )
    return 0;
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v17 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v8 = (int *)(gpsi + 8212LL);
        goto LABEL_34;
      }
    }
    else
    {
      v17 = (_QWORD *)gpsi;
    }
    v8 = (int *)(*v17 + 6724LL);
  }
LABEL_34:
  if ( (GreGetLayout(a1) & 1) != 0 && a1 != *(HDC *)(gpDispInfo + 64LL) )
    v6 = 3;
  FixHDCBITSBmp();
  BltColor(a1, v10, v8[2], v8[3], *v8, v8[1], v6);
  return v5;
}
