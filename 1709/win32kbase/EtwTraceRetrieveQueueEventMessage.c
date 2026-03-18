/*
 * XREFs of EtwTraceRetrieveQueueEventMessage @ 0x1C0081D20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppqp @ 0x1C00E2328 (McTemplateK0cppqp.c)
 */

void __fastcall EtwTraceRetrieveQueueEventMessage(__int64 a1)
{
  int v2; // r9d
  int v3; // ecx
  int v4; // r8d

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1196);
    McTemplateK0cppqp(
      v3,
      (unsigned int)&RetrieveQueueEventMessage,
      v4,
      v2,
      a1,
      *(_QWORD *)(a1 + 104),
      *(_DWORD *)(a1 + 96),
      *(_QWORD *)(a1 + 16));
  }
}
