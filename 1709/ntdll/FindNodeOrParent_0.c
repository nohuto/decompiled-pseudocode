/*
 * XREFs of FindNodeOrParent_0 @ 0x180069A44
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x180069830 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x180069870 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x180069A10 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x18008D690 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1800F3A40 (RtlEnumerateGenericTableLikeADirectory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FindNodeOrParent_0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 1;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v6 + 32);
    if ( !v8 )
      break;
    if ( v8 != 1 )
      goto LABEL_7;
    v9 = *(_QWORD *)(v6 + 16);
    if ( !v9 )
    {
      v7 = 3;
      goto LABEL_7;
    }
LABEL_9:
    v6 = v9;
  }
  v9 = *(_QWORD *)(v6 + 8);
  if ( v9 )
    goto LABEL_9;
  v7 = 2;
LABEL_7:
  *a3 = v6;
  return v7;
}
