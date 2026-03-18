/*
 * XREFs of EtwTraceRetrievePostMessage @ 0x1C007BAB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Template_cppppqqq @ 0x1C00DB574 (Template_cppppqqq.c)
 */

void __fastcall EtwTraceRetrievePostMessage(__int64 a1)
{
  int v2; // r9d
  int v3; // ecx
  int v4; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    Template_cppppqqq(v3, (unsigned int)&RetrievePostMessage, v4, v2, a1, *(_QWORD *)(a1 + 16));
  }
}
