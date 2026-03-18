/*
 * XREFs of EtwTraceBeginPointerSetTargetWindows @ 0x1C00DFDF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceBeginPointerSetTargetWindows(int a1)
{
  __int64 v1; // rcx
  void *v2; // rdx
  __int64 result; // rax

  v1 = (unsigned int)(a1 - 577);
  if ( !(_DWORD)v1 || (_DWORD)v1 == 4 )
  {
    if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x100000) == 0 )
      return result;
    v2 = &BeginPointerUpdateSetTargetWindows;
  }
  else
  {
    if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) == 0 )
      return result;
    v2 = &BeginPointerSetTargetWindows;
  }
  return McTemplateK0(v1, v2, &W32kControlGuid);
}
