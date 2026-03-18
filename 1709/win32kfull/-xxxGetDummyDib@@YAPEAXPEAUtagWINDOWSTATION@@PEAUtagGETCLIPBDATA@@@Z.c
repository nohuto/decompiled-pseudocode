/*
 * XREFs of ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C013EB70
 * Callers:
 *     xxxGetClipboardData @ 0x1C00C5AC0 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     _ConvertMemHandle @ 0x1C00C4E5C (_ConvertMemHandle.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00C5738 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C00C5804 (HMUnlockDestroyObject.c)
 *     xxxGetClipboardData @ 0x1C00C5AC0 (xxxGetClipboardData.c)
 *     FindClipFormat @ 0x1C00C65BC (FindClipFormat.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C013ECB4 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C013ECE8 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 */

void *__fastcall xxxGetDummyDib(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  HPALETTE ClipboardData; // rbp
  __int64 ClipFormat; // rax
  __int64 v6; // rax
  HBITMAP v7; // rax
  __int64 v8; // rdi
  struct tagBITMAPINFOHEADER *v9; // rax
  struct tagBITMAPINFOHEADER *v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  struct tagCLIP *v15; // rax
  struct tagCLIP *v16; // rsi
  void *result; // rax
  __int64 v18; // rax

  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 9980LL) & 1) != 0 )
  {
    ClipboardData = (HPALETTE)xxxGetClipboardData(a1, 9LL, (__int64)a2);
    if ( !ClipboardData )
      return 0LL;
  }
  ClipFormat = FindClipFormat((__int64)a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) != 2LL )
    {
      result = xxxGetClipboardData(a1, 17LL, (__int64)a2);
      if ( result )
      {
        *(_DWORD *)a2 = 17;
        *((_QWORD *)a2 + 1) = ClipboardData;
        return result;
      }
    }
  }
  v6 = FindClipFormat((__int64)a1, 2u, 1);
  if ( !v6 )
    return 0LL;
  if ( *(_QWORD *)(v6 + 8) == 2LL )
    return 0LL;
  v7 = (HBITMAP)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v7 )
    return 0LL;
  v8 = 0LL;
  v9 = xxxBMPtoDIB(v7, ClipboardData, 0LL);
  v10 = v9;
  if ( v9 )
  {
    v11 = SizeOfDibColorTable(v9);
    v8 = ConvertMemHandle(
           v10,
           v10->biSize + v11 + abs32(v10->biHeight) * (((v10->biWidth * v10->biBitCount + 31) >> 3) & 0xFFFFFFFC),
           v12);
    Win32FreePool(v10, v13, v14);
    if ( v8 )
    {
      v15 = (struct tagCLIP *)FindClipFormat((__int64)a1, 8u, 1);
      v16 = v15;
      if ( v15 )
      {
        UT_FreeCBFormat(v15);
        *((_QWORD *)v16 + 1) = v8;
        *(_DWORD *)a2 = 8;
      }
      else
      {
        v18 = HMValidateHandleNoRip(v8, 6);
        if ( v18 )
          HMUnlockDestroyObject(v18);
        return 0LL;
      }
    }
  }
  return (void *)v8;
}
