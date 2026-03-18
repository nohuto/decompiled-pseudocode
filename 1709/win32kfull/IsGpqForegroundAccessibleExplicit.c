/*
 * XREFs of IsGpqForegroundAccessibleExplicit @ 0x1C00560C4
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C0055E90 (EditionKeyEventLLHook.c)
 *     EditionHandleAltTabCancel @ 0x1C01122A0 (EditionHandleAltTabCancel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGpqForegroundAccessibleExplicit(int a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  v3 = 0;
  if ( !a1 )
    return 1;
  if ( !gpqForeground )
    return 1;
  if ( a3 )
    return 1;
  v4 = *(_QWORD *)(gpqForeground + 420LL);
  if ( !gbEnforceUIPI )
    return 1;
  if ( (unsigned int)a2 > (unsigned int)v4 )
    return 1;
  if ( (_DWORD)a2 == (_DWORD)v4 )
  {
    v5 = HIDWORD(a2);
    v6 = HIDWORD(v4);
    if ( (_DWORD)v5 == (_DWORD)v6 || (_DWORD)v6 == -1 || (_DWORD)v5 == -1 )
      return 1;
  }
  return v3;
}
