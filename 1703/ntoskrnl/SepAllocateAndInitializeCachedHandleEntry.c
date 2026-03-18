/*
 * XREFs of SepAllocateAndInitializeCachedHandleEntry @ 0x140462774
 * Callers:
 *     SepGetCachedHandlesEntry @ 0x140461E70 (SepGetCachedHandlesEntry.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 */

__int64 __fastcall SepAllocateAndInitializeCachedHandleEntry(__int64 a1, _QWORD *a2)
{
  int v4; // ecx
  unsigned int v5; // ebp
  char *PoolWithTag; // rax
  char *v7; // rbx

  *a2 = 0LL;
  v4 = 72;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
      v4 = *(unsigned __int16 *)(a1 + 10) + 72;
  }
  else
  {
    v4 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL) + 80;
  }
  v5 = (v4 + 3) & 0xFFFFFFFC;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5, 0x734C6553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  *((_DWORD *)PoolWithTag + 14) = 0;
  *((_QWORD *)PoolWithTag + 3) = 1LL;
  *((_DWORD *)PoolWithTag + 8) = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      *((_WORD *)PoolWithTag + 20) = *(_WORD *)(a1 + 8);
      *((_WORD *)PoolWithTag + 21) = *(_WORD *)(a1 + 10);
      *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 72;
      RtlCopyUnicodeString((PUNICODE_STRING)(PoolWithTag + 40), (PCUNICODE_STRING)(a1 + 8));
    }
  }
  else
  {
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 72;
    RtlCopySid(v5 - 72, PoolWithTag + 72, *(PSID *)(a1 + 8));
  }
  *a2 = v7;
  return 0LL;
}
