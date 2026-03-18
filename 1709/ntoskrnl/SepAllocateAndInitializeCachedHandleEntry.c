/*
 * XREFs of SepAllocateAndInitializeCachedHandleEntry @ 0x14056477C
 * Callers:
 *     SepGetCachedHandlesEntry @ 0x140563D30 (SepGetCachedHandlesEntry.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x14049CB70 (RtlCopySid.c)
 */

__int64 __fastcall SepAllocateAndInitializeCachedHandleEntry(int *a1, _QWORD *a2)
{
  int v3; // ecx
  int v5; // r8d
  int v6; // eax
  SIZE_T v7; // rbp
  char *PoolWithTag; // rax
  char *v9; // rbx

  *a2 = 0LL;
  v3 = *a1;
  v5 = 72;
  if ( !v3 )
  {
    v6 = 4 * *(unsigned __int8 *)(*((_QWORD *)a1 + 1) + 1LL) + 8;
LABEL_3:
    v5 = v6 + 72;
    goto LABEL_4;
  }
  if ( v3 == 1 )
  {
    v6 = *((unsigned __int16 *)a1 + 5);
    goto LABEL_3;
  }
LABEL_4:
  v7 = (v5 + 3) & 0xFFFFFFFC;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x734C6553u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  *((_DWORD *)PoolWithTag + 14) = 0;
  *((_QWORD *)PoolWithTag + 3) = 1LL;
  *((_DWORD *)PoolWithTag + 8) = *a1;
  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      *((_WORD *)PoolWithTag + 20) = *((_WORD *)a1 + 4);
      *((_WORD *)PoolWithTag + 21) = *((_WORD *)a1 + 5);
      *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 72;
      RtlCopyUnicodeString((PUNICODE_STRING)(PoolWithTag + 40), (PCUNICODE_STRING)(a1 + 2));
    }
  }
  else
  {
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 72;
    RtlCopySid(v7 - 72, PoolWithTag + 72, *((PSID *)a1 + 1));
  }
  *a2 = v9;
  return 0LL;
}
