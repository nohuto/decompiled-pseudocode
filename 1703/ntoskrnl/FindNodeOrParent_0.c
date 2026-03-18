/*
 * XREFs of FindNodeOrParent_0 @ 0x14004CB00
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x14004C610 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006E6F0 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1401527B0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FindNodeOrParent_0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rbx
  int v7; // eax
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(i + 8) )
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, i + 32);
      if ( !v7 )
        break;
      if ( v7 != 1 )
      {
        result = 1LL;
        goto LABEL_10;
      }
      if ( !*(_QWORD *)(i + 16) )
      {
        result = 3LL;
        goto LABEL_10;
      }
      i = *(_QWORD *)(i + 16);
    }
    if ( !*(_QWORD *)(i + 8) )
      break;
  }
  result = 2LL;
LABEL_10:
  *a3 = i;
  return result;
}
