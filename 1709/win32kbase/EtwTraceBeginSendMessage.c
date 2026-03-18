/*
 * XREFs of EtwTraceBeginSendMessage @ 0x1C007BEB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppppqqqqq @ 0x1C00E2140 (McTemplateK0cppppqqqqq.c)
 */

char __fastcall EtwTraceBeginSendMessage(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  __int64 v5; // rbp
  __int64 *v6; // rax
  int v7; // r9d
  int v8; // edx
  int v9; // r8d
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x400000000400000LL) != 0 )
  {
    LOBYTE(v3) = byte_1C0188DA8 - 1;
    if ( (unsigned __int8)(byte_1C0188DA8 - 1) > 2u && (qword_1C0188D90 & 0x400000000400000LL) != 0 )
    {
      LOBYTE(v3) = 0;
      if ( (qword_1C0188D98 & 0x400000000400000LL) == qword_1C0188D98 )
      {
        LOBYTE(v5) = 0;
        if ( a2 && a3 )
          LOBYTE(v3) = 3;
        if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
        {
          v6 = *(__int64 **)(a1 + 112);
          if ( v6 )
            v5 = *v6;
          PsGetThreadId(**(PETHREAD **)(a1 + 40));
          LOBYTE(v7) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1196);
          LOBYTE(v3) = McTemplateK0cppppqqqqq(*(_DWORD *)(a1 + 80), v8, v9, v7, a1, v5);
        }
      }
    }
  }
  return (char)v3;
}
