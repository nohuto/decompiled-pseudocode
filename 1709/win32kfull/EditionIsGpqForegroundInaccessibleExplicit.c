/*
 * XREFs of EditionIsGpqForegroundInaccessibleExplicit @ 0x1C010DDB0
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 */

__int64 __fastcall EditionIsGpqForegroundInaccessibleExplicit(int a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax

  if ( !a1 )
    return 0LL;
  if ( !gpqForeground )
    return 0LL;
  if ( a4 )
    return 0LL;
  v4 = *(_QWORD *)(gpqForeground + 420LL);
  if ( !gbEnforceUIPI )
    return 0LL;
  if ( (unsigned int)a3 > (unsigned int)v4 )
    return 0LL;
  if ( (_DWORD)a3 == (_DWORD)v4 )
  {
    v5 = HIDWORD(a3);
    v6 = HIDWORD(v4);
    if ( (_DWORD)v5 == (_DWORD)v6 || (_DWORD)v6 == -1 || (_DWORD)v5 == -1 )
      return 0LL;
  }
  MSGLUA_GPQFOREGROUND();
  return 1LL;
}
