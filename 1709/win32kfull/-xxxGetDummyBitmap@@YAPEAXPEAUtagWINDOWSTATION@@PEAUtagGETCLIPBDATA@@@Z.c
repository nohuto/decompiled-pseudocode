/*
 * XREFs of ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F4338
 * Callers:
 *     xxxGetClipboardData @ 0x1C00C5AC0 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00C5738 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxGetClipboardData @ 0x1C00C5AC0 (xxxGetClipboardData.c)
 *     FindClipFormat @ 0x1C00C65BC (FindClipFormat.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F41C8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 */

void *__fastcall xxxGetDummyBitmap(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  void *v2; // rbx
  void *ClipboardData; // rbp
  __int64 ClipFormat; // rax
  void *result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct tagCLIP *v17; // rax
  struct tagCLIP *v18; // rsi
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 9980LL) & 1) != 0 )
    ClipboardData = xxxGetClipboardData(a1, 9LL, (__int64)a2);
  ClipFormat = FindClipFormat((__int64)a1, 0x11u, 1);
  if ( ClipFormat
    && *(_QWORD *)(ClipFormat + 8) != 2LL
    && (result = xxxGetClipboardData(a1, 17LL, (__int64)a2), (v2 = result) != 0LL) )
  {
    *(_DWORD *)a2 = 17;
    *((_QWORD *)a2 + 1) = ClipboardData;
  }
  else
  {
    v8 = FindClipFormat((__int64)a1, 8u, 1);
    if ( v8 && *(_QWORD *)(v8 + 8) != 2LL )
      v2 = xxxGetClipboardData(a1, 8LL, (__int64)a2);
    if ( v2 && (v10 = HMValidateHandleNoRip((__int64)v2, 6)) != 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11, v12);
      v19[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v19;
      v19[1] = v10;
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v16 = xxxDIBtoBMP((struct tagBITMAPINFOHEADER *)(v10 + 20), (__int64)ClipboardData, *(_DWORD *)(v10 + 16));
      if ( v16 )
      {
        v17 = (struct tagCLIP *)FindClipFormat((__int64)a1, 2u, 1);
        v18 = v17;
        if ( v17 )
        {
          UT_FreeCBFormat(v17);
          *((_QWORD *)v18 + 1) = v16;
          GreSetBitmapOwner(v16, 0LL);
          *(_DWORD *)a2 = 2;
        }
        else
        {
          GreDeleteObject(v16);
          v16 = 0LL;
        }
      }
      ThreadUnlock1(v15, v14);
      return (void *)v16;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
