/*
 * XREFs of SetGestureConfigSettings @ 0x1C0110CB8
 * Callers:
 *     NtUserSetGestureConfig @ 0x1C0110B20 (NtUserSetGestureConfig.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     FreeWindowGCData @ 0x1C005D7A4 (FreeWindowGCData.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C00C66C8 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F8188 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1C0110DE8 (-SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C0110E98 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C011A5D8 (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 */

__int64 __fastcall SetGestureConfigSettings(struct tagWND *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  _BYTE *v9; // rax
  unsigned __int64 v10; // rdx
  struct tagVWPLGESTUREDATA *GCData; // rsi
  __int64 v12; // r8
  int v13; // r9d
  int v14; // ecx
  _BYTE *v15; // rcx
  __int64 v16; // rbx
  __int64 v18; // rcx

  if ( !(unsigned int)SortGestureConfigArray((struct tagGESTURECONFIG *)a4, a3) )
    goto LABEL_16;
  if ( !GetGCData(a1) )
  {
    v7 = Win32AllocPoolWithQuota(24LL, 1684501333LL);
    v8 = (_QWORD *)v7;
    if ( !v7
      || (*(_DWORD *)(v7 + 12) = 0,
          *(_DWORD *)(v7 + 8) = 0,
          v9 = (_BYTE *)Win32AllocPoolWithQuota(1LL, 1835168597LL),
          (*v8 = v9) == 0LL) )
    {
      v18 = 14LL;
      goto LABEL_18;
    }
    *v9 = 0;
    v8[2] = 0LL;
    VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) + 816LL), (__int64)v8, a1, 5u);
  }
  GCData = GetGCData(a1);
  if ( *(_DWORD *)a4 )
    return _StoreGestureConfig(a1, a3, (struct tagGESTURECONFIG *)a4);
  if ( !*(_DWORD *)(a4 + 4) && !*(_DWORD *)(a4 + 8) )
    FreeWindowGCData(a1, v10, v12, v13);
  v14 = *(_DWORD *)(a4 + 4);
  if ( (v14 | *(_DWORD *)(a4 + 8)) != 1 || v14 == *(_DWORD *)(a4 + 8) )
  {
LABEL_16:
    v18 = 87LL;
LABEL_18:
    UserSetLastError(v18);
    return 0LL;
  }
  *((_DWORD *)GCData + 2) = v14;
  v15 = *(_BYTE **)GCData;
  *((_DWORD *)GCData + 3) = *(_DWORD *)(a4 + 8);
  *v15 = 0;
  v16 = *((_QWORD *)GCData + 2);
  if ( v16 )
  {
    FreeWindowGCList(*((struct tagGESTURECONFIGLIST ***)GCData + 2));
    Win32FreePool(v16);
    *((_QWORD *)GCData + 2) = 0LL;
  }
  return 1LL;
}
