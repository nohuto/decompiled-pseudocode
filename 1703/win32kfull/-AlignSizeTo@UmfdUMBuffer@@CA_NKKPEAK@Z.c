/*
 * XREFs of ?AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z @ 0x1C00D482C
 * Callers:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0091F94 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x1C02BA204 (-AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall UmfdUMBuffer::AlignSizeTo(unsigned int a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // eax

  v3 = -1;
  if ( a1 + 4095 >= a1 )
    v3 = a1 + 4095;
  *a3 = v3;
  if ( a1 + 4095 < a1 )
    return 0;
  *a3 &= 0xFFFFF000;
  return 1;
}
