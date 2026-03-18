/*
 * XREFs of GetWorkspaceId @ 0x1C00E4E00
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetWorkspaceId(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  LOBYTE(a2) = 19;
  result = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( result )
    return *(unsigned int *)(result + 752);
  return result;
}
