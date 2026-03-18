/*
 * XREFs of MiEnablePagingOfDriver @ 0x1405B2C7C
 * Callers:
 *     MiEnablePagingTheExecutive @ 0x140829664 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiSetPagingOfDriver @ 0x1400DDBDC (MiSetPagingOfDriver.c)
 *     MiImagePagable @ 0x140516BA8 (MiImagePagable.c)
 *     MiSnapDriverRange @ 0x140516C14 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiEnablePagingOfDriver(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  __int64 *v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  result = (__int64)MiImagePagable((PVOID *)a1, *(_QWORD *)(a1 + 48));
  if ( result )
  {
    v3 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v3, 1, 0LL, (unsigned __int64 *)&v4, &v5);
      v3 = result;
      if ( v4 )
        result = (__int64)MiSetPagingOfDriver(a1, v4, v5);
    }
    while ( v3 );
  }
  return result;
}
