/*
 * XREFs of SmpRoundDownToPowerOf2 @ 0x140010390
 * Callers:
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x1400101EC (SmpMakeSystemManagedPagingFileDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpRoundDownToPowerOf2(unsigned __int64 a1)
{
  unsigned int i; // edx
  char v3; // r9
  char v4; // cl

  for ( i = 0; i < 0x40; ++i )
  {
    a1 >>= 1;
    v3 = i;
    if ( !a1 )
      break;
  }
  v4 = v3 + 1;
  if ( !a1 )
    v4 = v3;
  return 1LL << v4;
}
