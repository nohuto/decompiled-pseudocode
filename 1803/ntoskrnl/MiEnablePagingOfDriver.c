/*
 * XREFs of MiEnablePagingOfDriver @ 0x14061C480
 * Callers:
 *     MiEnablePagingTheExecutive @ 0x14089C7D4 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiSetPagingOfDriver @ 0x14013F7B4 (MiSetPagingOfDriver.c)
 *     MiImagePagable @ 0x1405BB4C4 (MiImagePagable.c)
 *     MiSnapDriverRange @ 0x1405F8770 (MiSnapDriverRange.c)
 */

void __fastcall MiEnablePagingOfDriver(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  if ( MiImagePagable(a1, *(_QWORD *)(a1 + 48)) )
  {
    v2 = 0;
    do
    {
      v2 = MiSnapDriverRange(a1, v2, 1, 0LL, &v3, &v4);
      if ( v3 )
        MiSetPagingOfDriver(a1, v3, v4);
    }
    while ( v2 );
  }
}
