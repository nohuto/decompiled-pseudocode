/*
 * XREFs of xxxGetClipboardData @ 0x1C00C5AC0
 * Callers:
 *     NtUserGetClipboardData @ 0x1C00C59C0 (NtUserGetClipboardData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C013EB70 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F4338 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F44C0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F4684 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01F475C (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C000BD0C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FindClipFormat @ 0x1C00C65BC (FindClipFormat.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C013EB70 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F4338 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F44C0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F4684 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01F475C (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 */

void *__fastcall xxxGetClipboardData(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 ClipFormat; // rax
  __int64 v7; // rcx
  void *v8; // rbx
  int v9; // eax
  void *RenderData; // rax
  __int64 v12; // rax

  v4 = a2;
  if ( *((_QWORD *)a1 + 6) != gptiCurrent )
  {
    UserSetLastError(1418LL, a2);
    return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 1LL);
  v7 = ClipFormat;
  if ( !ClipFormat )
    return 0LL;
  if ( (unsigned __int64)(*(_QWORD *)(ClipFormat + 8) - 3LL) <= 1 )
  {
    if ( v4 == 14 )
    {
      v4 = 3;
    }
    else if ( v4 == 3 )
    {
      v4 = 14;
    }
    v7 = FindClipFormat(a1, v4, 1LL);
    if ( !v7 )
      return 0LL;
  }
  v8 = *(void **)(v7 + 8);
  if ( !v8 || v8 == (void *)3 )
  {
    RenderData = xxxGetRenderData(a1, v4);
LABEL_13:
    v8 = RenderData;
    goto LABEL_14;
  }
  if ( v8 != (void *)2 )
  {
    if ( v8 != (void *)1 )
    {
      if ( !a3 )
        return v8;
      v9 = *(_DWORD *)(v7 + 16);
LABEL_10:
      *(_DWORD *)(a3 + 4) = v9;
      return v8;
    }
    RenderData = xxxGetDummyText(a1, v4, (struct tagGETCLIPBDATA *)a3);
    goto LABEL_13;
  }
  switch ( v4 )
  {
    case 2u:
      RenderData = xxxGetDummyBitmap(a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_13;
    case 8u:
      RenderData = xxxGetDummyDib(a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_13;
    case 9u:
      RenderData = xxxGetDummyPalette(a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_13;
    case 0x11u:
      RenderData = xxxGetDummyDibV5(a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_13;
  }
LABEL_14:
  v12 = FindClipFormat(a1, v4, 1LL);
  if ( v12 )
  {
    if ( !a3 )
      return v8;
    v9 = *(_DWORD *)(v12 + 16);
    goto LABEL_10;
  }
  return 0LL;
}
