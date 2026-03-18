/*
 * XREFs of FindClipFormat @ 0x1C00AF864
 * Callers:
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0006A14 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxGetClipboardData @ 0x1C00AEDEC (xxxGetClipboardData.c)
 *     InternalSetClipboardData @ 0x1C00AF078 (InternalSetClipboardData.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AF478 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00AF810 (NtUserIsClipboardFormatAvailable.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0137CF8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _EnumClipboardFormats @ 0x1C0139380 (_EnumClipboardFormats.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E8320 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E84A0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E8664 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01E873C (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C00AFA70 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01E8954 (IsFmtBlocked.c)
 */

__int64 __fastcall FindClipFormat(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  int i; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  v3 = a2;
  if ( (_DWORD)a2 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      for ( i = *(_DWORD *)(a1 + 104); i; --i )
      {
        if ( *(_DWORD *)v4 == (_DWORD)a2 )
        {
          if ( (a3 & 1) == 0 )
            return v4;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
          if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                               *(_QWORD *)(v4 + 20),
                               *(_QWORD *)(CurrentProcessWin32Process + 824))
            || !(unsigned int)IsFmtBlocked(v3) )
          {
            return v4;
          }
          v10 = PsGetCurrentProcessWin32Process(v9, v8);
          EtwTraceUIPIClipboardError(0LL, v10, v3, *(_QWORD *)(v4 + 20));
          return 0LL;
        }
        v4 += 32LL;
      }
    }
  }
  return 0LL;
}
