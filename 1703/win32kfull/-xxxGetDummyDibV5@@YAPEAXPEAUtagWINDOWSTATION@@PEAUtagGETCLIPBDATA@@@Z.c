/*
 * XREFs of ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E84A0
 * Callers:
 *     xxxGetClipboardData @ 0x1C00AEDEC (xxxGetClipboardData.c)
 * Callees:
 *     _ConvertMemHandle @ 0x1C00AE1AC (_ConvertMemHandle.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00AE880 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C00AE950 (HMUnlockDestroyObject.c)
 *     xxxGetClipboardData @ 0x1C00AEDEC (xxxGetClipboardData.c)
 *     FindClipFormat @ 0x1C00AF864 (FindClipFormat.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C0137E3C (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0137E70 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01E7F4C (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 */

void *__fastcall xxxGetDummyDibV5(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  __int64 v2; // rdi
  __int64 ClipFormat; // rax
  void *ClipboardData; // rax
  __int64 v7; // rax
  struct tagBITMAPINFOHEADER *v8; // rbx
  __int64 v9; // rax
  HBRUSH v10; // rbx
  __int64 v11; // rdx
  void *result; // rax
  struct tagBITMAPINFO *v13; // rax
  struct tagBITMAPINFO *v14; // rbp
  int v15; // eax
  __int64 v16; // r8
  struct tagCLIP *v17; // rax
  struct tagCLIP *v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  ClipFormat = FindClipFormat((__int64)a1, 8LL, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) != 2LL )
    {
      ClipboardData = xxxGetClipboardData(a1, 8LL, (__int64)a2);
      if ( ClipboardData )
      {
        v7 = HMValidateHandleNoRip((__int64)ClipboardData, 6);
        if ( v7 )
        {
          v8 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5((struct tagBITMAPINFOHEADER *)(v7 + 20));
          if ( v8 )
            goto LABEL_15;
        }
      }
    }
  }
  v9 = FindClipFormat((__int64)a1, 2LL, 1);
  if ( !v9 )
    return (void *)v2;
  if ( *(_QWORD *)(v9 + 8) == 2LL )
    return (void *)v2;
  v10 = (HBRUSH)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v10 )
    return (void *)v2;
  v11 = 0LL;
  if ( (*(_DWORD *)(gpsi + 8684LL) & 1) == 0
    || (result = xxxGetClipboardData(a1, 9LL, (__int64)a2), (v11 = (__int64)result) != 0) )
  {
    v13 = xxxBMPtoDIB(v10, v11, &v20);
    v14 = v13;
    if ( v13 )
    {
      v8 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5(&v13->bmiHeader);
      Win32FreePool(v14);
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
LABEL_15:
      v15 = SizeOfDibColorTable(v8);
      v2 = ConvertMemHandle(
             v8,
             v8->biSize + v15 + abs32(v8->biHeight) * (((v8->biWidth * v8->biBitCount + 31) >> 3) & 0xFFFFFFFC),
             v16);
      Win32FreePool(v8);
      if ( v2 )
      {
        v17 = (struct tagCLIP *)FindClipFormat((__int64)a1, 17LL, 1);
        v18 = v17;
        if ( v17 )
        {
          UT_FreeCBFormat(v17);
          *((_QWORD *)v18 + 1) = v2;
          *(_DWORD *)a2 = 17;
        }
        else
        {
          v19 = HMValidateHandleNoRip(v2, 6);
          if ( v19 )
            HMUnlockDestroyObject(v19);
          return 0LL;
        }
      }
      return (void *)v2;
    }
    return (void *)v2;
  }
  return result;
}
