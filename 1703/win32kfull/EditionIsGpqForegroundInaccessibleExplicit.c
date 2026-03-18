/*
 * XREFs of EditionIsGpqForegroundInaccessibleExplicit @ 0x1C0102640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionIsGpqForegroundInaccessibleExplicit(int a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax

  if ( !a1 )
    return 0LL;
  if ( !gpqForeground )
    return 0LL;
  if ( a4 )
    return 0LL;
  v4 = *(_QWORD *)(gpqForeground + 380LL);
  if ( !gbEnforceUIPI )
    return 0LL;
  if ( (unsigned int)a3 > (unsigned int)v4 )
    return 0LL;
  if ( (_DWORD)a3 == (_DWORD)v4 )
  {
    v6 = HIDWORD(a3);
    v7 = HIDWORD(v4);
    if ( (_DWORD)v6 == (_DWORD)v7 || (_DWORD)v7 == -1 || (_DWORD)v6 == -1 )
      return 0LL;
  }
  EtwTraceUIPIInputError(a2, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
  return 1LL;
}
