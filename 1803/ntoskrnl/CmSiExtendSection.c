/*
 * XREFs of CmSiExtendSection @ 0x1400BD7E8
 * Callers:
 *     HvpViewMapExtendStorage @ 0x140566FA8 (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1401A9020 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewMaximumSize; // [rsp+38h] [rbp+10h] BYREF

  NewMaximumSize = a2;
  return ZwExtendSection(a1, &NewMaximumSize);
}
