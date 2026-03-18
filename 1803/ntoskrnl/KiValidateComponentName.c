/*
 * XREFs of KiValidateComponentName @ 0x1402446D8
 * Callers:
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1402441DC (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     RtlStringCbLengthA @ 0x140239044 (RtlStringCbLengthA.c)
 */

char __fastcall KiValidateComponentName(__int64 psz, _DWORD *a2)
{
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  size_t pcbLength; // [rsp+40h] [rbp+18h] BYREF

  if ( !MiIsAddressValid(psz) )
    return 0;
  v5 = psz & 0xFFFFFFFFFFFFF000uLL;
  v6 = 257;
  if ( psz - (psz & 0xFFFFFFFFFFFFF000uLL) > 0xEFF )
  {
    v7 = -1LL;
    if ( v5 + 4096 >= v5 )
      v7 = v5 + 4096;
    v8 = 0LL;
    if ( v5 + 4096 >= v5 )
      v8 = v7;
    if ( !v8 || !MiIsAddressValid(v8) )
      v6 = v5 - psz + 4096;
  }
  if ( RtlStringCbLengthA((STRSAFE_PCNZCH)psz, v6, &pcbLength) < 0 )
    return 0;
  *a2 = pcbLength;
  return 1;
}
