/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C01370C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowDesktopComposed(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  LOBYTE(a2) = 1;
  v4 = 0;
  v5 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( v5 )
    return (unsigned int)IsWindowDesktopComposed(v5);
  return v4;
}
