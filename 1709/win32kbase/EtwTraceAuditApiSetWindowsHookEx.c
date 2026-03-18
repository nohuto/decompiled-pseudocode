/*
 * XREFs of EtwTraceAuditApiSetWindowsHookEx @ 0x1C008D3E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qzppq @ 0x1C00E4780 (McTemplateK0qzppq.c)
 */

char __fastcall EtwTraceAuditApiSetWindowsHookEx(int a1, __int64 a2, int a3, char a4, char a5)
{
  char result; // al
  __int64 v7; // rcx

  if ( (WPP_MAIN_CB.SectorSize & 0x400) != 0 )
  {
    result = byte_1C0188DA8 - 1;
    if ( (unsigned __int8)(byte_1C0188DA8 - 1) > 2u && (qword_1C0188D90 & 0x400) != 0 )
    {
      result = 0;
      if ( (qword_1C0188D98 & 0x400) == qword_1C0188D98 )
      {
        v7 = 0LL;
        if ( a2 )
          v7 = *(_QWORD *)(a2 + 8);
        result = BYTE4(Microsoft_Windows_Win32kEnableBits);
        if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
          return McTemplateK0qzppq(v7, a2, a3, a1, v7, a3, a4, a5);
      }
    }
  }
  return result;
}
