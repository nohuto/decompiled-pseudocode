/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x1404A17C8
 * Callers:
 *     CmpDoesBufferRequireCapturing @ 0x1404A4878 (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x1404AD270 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140103610 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  int v1; // eax

  if ( a1 <= 0x7FFFFFFEFFFFLL )
    return 0;
  LOBYTE(v1) = MmIsSessionAddress(a1);
  return v1 == 0;
}
