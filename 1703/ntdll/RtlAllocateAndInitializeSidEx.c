/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x18008E030
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSidEx(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        PULONG SubAuthorities,
        PSID *Sid)
{
  __int64 v8; // rsi
  char *Heap; // rax
  signed __int64 v10; // rdx

  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  v8 = SubAuthorityCount;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1310720, 4LL * SubAuthorityCount + 8);
  if ( !Heap )
    return -1073741801;
  *Heap = 1;
  *(_DWORD *)(Heap + 2) = *(_DWORD *)IdentifierAuthority->Value;
  *((_WORD *)Heap + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  Heap[1] = SubAuthorityCount;
  if ( SubAuthorityCount )
  {
    v10 = Heap - (char *)SubAuthorities;
    do
    {
      *(PULONG)((char *)SubAuthorities + v10 + 8) = *SubAuthorities;
      ++SubAuthorities;
      --v8;
    }
    while ( v8 );
  }
  *Sid = Heap;
  return 0;
}
