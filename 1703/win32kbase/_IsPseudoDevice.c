/*
 * XREFs of _IsPseudoDevice @ 0x1C012F020
 * Callers:
 *     TouchTargetingEnabledForInput @ 0x1C012EF00 (TouchTargetingEnabledForInput.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall IsPseudoDevice(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 1;
  if ( v1 )
  {
    v3 = HMValidateHandleNoSecure(v1, 19);
    if ( v3 )
      return (*(_DWORD *)(v3 + 184) & 0x1000u) >> 12;
  }
  return v2;
}
