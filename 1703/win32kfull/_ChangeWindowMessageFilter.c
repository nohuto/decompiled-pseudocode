/*
 * XREFs of _ChangeWindowMessageFilter @ 0x1C00C91B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00C7040 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00C952C (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     UIPISQMChangeFilter @ 0x1C00C957C (UIPISQMChangeFilter.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00C9778 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 */

__int64 __fastcall ChangeWindowMessageFilter(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  unsigned int v4; // edi
  __int64 CurrentProcessWin32Process; // rsi
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v7 = 0;
  v4 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  UIPISQMChangeFilter((struct tagPROCESSINFO *)CurrentProcessWin32Process);
  if ( !gbEnforceUIPI )
    return 1LL;
  if ( !(unsigned int)ValidateChangeMessageFilter((struct tagPROCESSINFO *)CurrentProcessWin32Process, v4) )
    return 0LL;
  if ( v3 == 1 )
  {
    return (unsigned int)AddMessageToFilter((void ***)(CurrentProcessWin32Process + 792), v4, 0LL);
  }
  else if ( v3 == 2 )
  {
    v2 = RemoveMessageFromFilter((void ***)(CurrentProcessWin32Process + 792), v4, &v7);
    if ( v2 )
    {
      if ( v7 )
      {
        UserSetLastError(87LL);
        return 0;
      }
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return v2;
}
