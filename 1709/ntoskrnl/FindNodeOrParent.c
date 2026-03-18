/*
 * XREFs of FindNodeOrParent @ 0x1400DFF6C
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1400DF530 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400DFCC0 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x140154CA0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FindNodeOrParent(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v7; // rbx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 1;
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v7 + 32);
    if ( !v9 )
      break;
    if ( v9 != 1 )
      goto LABEL_8;
    v10 = *(_QWORD *)(v7 + 16);
    if ( !v10 )
    {
      v8 = 3;
      goto LABEL_8;
    }
LABEL_10:
    v7 = v10;
  }
  v10 = *(_QWORD *)(v7 + 8);
  if ( v10 )
    goto LABEL_10;
  v8 = 2;
LABEL_8:
  *a3 = v7;
  return v8;
}
