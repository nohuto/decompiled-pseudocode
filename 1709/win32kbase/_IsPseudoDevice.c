/*
 * XREFs of _IsPseudoDevice @ 0x1C012E6D0
 * Callers:
 *     TouchTargetingEnabledForInput @ 0x1C012E570 (TouchTargetingEnabledForInput.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall IsPseudoDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 1;
  if ( v4 )
  {
    LOBYTE(a2) = 19;
    v6 = HMValidateHandleNoSecure(v4, a2, a3, a4);
    if ( v6 )
      return (*(_DWORD *)(v6 + 184) & 0x1000u) >> 12;
  }
  return v5;
}
