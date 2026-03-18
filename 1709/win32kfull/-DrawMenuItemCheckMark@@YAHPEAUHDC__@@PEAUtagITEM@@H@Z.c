/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0215A78
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     GreGetLayout @ 0x1C007EAB0 (GreGetLayout.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FixHDCBITSBmpEx @ 0x1C0112F44 (FixHDCBITSBmpEx.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     BltColor @ 0x1C021A97C (BltColor.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v7; // r14d
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  int *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r13d
  __int64 v19; // rcx
  HBRUSH v20; // r15
  __int64 v21; // r12
  int v22; // r13d
  bool v23; // zf
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v36; // [rsp+60h] [rbp-C8h]
  int v37; // [rsp+64h] [rbp-C4h]
  int v38; // [rsp+68h] [rbp-C0h]
  char v39[46]; // [rsp+70h] [rbp-B8h] BYREF
  __int16 v40; // [rsp+9Eh] [rbp-8Ah]
  int v41; // [rsp+A0h] [rbp-88h]

  v4 = 2;
  v7 = 1;
  v8 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, a3, a4) & 0xF) != 0
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11) + 432)
    || (v14 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v11) + 432)
                          + 8LL),
        (*(_DWORD *)(v14 + 52) & 1) == 0)
    || *(_WORD *)(PsGetCurrentProcessWin32Process(v14) + 284) == 96 )
  {
    v15 = (int *)(gpsi + 8004LL);
  }
  else
  {
    v15 = (int *)(gpsi + 9492LL);
  }
  v16 = 0;
  if ( *((_DWORD *)a2 + 21) - v15[3] >= 0 )
    v16 = *((_DWORD *)a2 + 21) - v15[3];
  v17 = (unsigned int)(v16 >> 31);
  v37 = v16 / 2;
  v18 = v16 / 2;
  v19 = *((_DWORD *)a2 + 1) & 8;
  if ( (_DWORD)v19 )
    v20 = (HBRUSH)*((_QWORD *)a2 + 3);
  else
    v20 = (HBRUSH)*((_QWORD *)a2 + 4);
  if ( v20 )
  {
    v21 = GreSelectBitmap(*(_QWORD *)ghdcMem2, v20);
    if ( v21 )
    {
      v22 = GreSetTextColor(a1, 0);
      v38 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (*(_DWORD *)a2 & 0x2000) != 0 )
        v4 = *((_DWORD *)a2 + 20) - v15[2];
      if ( (unsigned int)GreExtGetObjectW(v20, 104LL, v39) == 104 && v40 == 32 && !v41 )
      {
        LOBYTE(v36) = 0;
        HIWORD(v36) = 511;
        v23 = (GreGetLayout(a1) & 1) == 0;
        v24 = 0;
        if ( !v23 )
          v24 = 0x80;
        BYTE1(v36) = v24;
        NtGdiAlphaBlend(a1, v4, v37, v15[3], v15[3], *(HDC *)ghdcMem2, 0, 0, v15[2], v15[3], v36);
      }
      else
      {
        NtGdiBitBltInternal(a1, v4, v37, v15[2], v15[3], *(HDC *)ghdcMem2, 0, 0, 12060490, 0xFFFFFF, 0);
      }
      GreSetTextColor(a1, v22);
      GreSetBkColor(a1, v38);
      GreSelectBitmap(*(_QWORD *)ghdcMem2, v21);
    }
  }
  else if ( (_DWORD)v19 )
  {
    if ( (*(_DWORD *)a2 & 0x200) != 0 )
    {
      LODWORD(v17) = v16 % 2;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v17, 0LL, v11) & 0xF) != 0
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 432)
        || (v31 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 432)
                              + 8LL),
            (*(_DWORD *)(v31 + 52) & 1) == 0)
        || *(_WORD *)(PsGetCurrentProcessWin32Process(v31) + 284) == 96 )
      {
        v15 = (int *)(gpsi + 8020LL);
      }
      else
      {
        v15 = (int *)(gpsi + 9508LL);
      }
    }
    if ( (GreGetLayout(a1) & 1) != 0 && a1 != *(HDC *)(gpDispInfo + 64LL) )
      v8 = 3;
    FixHDCBITSBmpEx(0LL, v32, v33, v34);
    BltColor(a1, v18, v15[2], v15[3], *v15, v15[1], v8);
  }
  else
  {
    return 0;
  }
  return v7;
}
