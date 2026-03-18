/*
 * XREFs of EtwTraceEndPointerMessageRetrieve @ 0x1C00E02C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq @ 0x1C00E2F94 (McTemplateK0pqq.c)
 */

__int64 __fastcall EtwTraceEndPointerMessageRetrieve(int a1, char a2, int a3)
{
  __int64 result; // rax
  char v4; // al
  void *v5; // rdx

  result = (unsigned int)(a3 - 577);
  if ( a3 == 577 || a3 == 581 )
  {
    if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x100000) == 0 )
      return result;
    v4 = a2;
    v5 = &EndPointerUpdateMessageRetrieve;
  }
  else
  {
    if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) == 0 )
      return result;
    v4 = a2;
    v5 = &EndPointerMessageRetrieve;
  }
  return McTemplateK0pqq(a1, (_DWORD)v5, a3, a1, v4, a3);
}
