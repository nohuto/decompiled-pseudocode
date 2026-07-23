/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x180075A60
 * Callers:
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        ULONG SubAuthority0,
        ULONG SubAuthority1,
        ULONG SubAuthority2,
        ULONG SubAuthority3,
        ULONG SubAuthority4,
        ULONG SubAuthority5,
        ULONG SubAuthority6,
        ULONG SubAuthority7,
        PSID *Sid)
{
  char *Heap; // rax

  if ( SubAuthorityCount > 8u )
    return -1073741704;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1310720, 4LL * SubAuthorityCount + 8);
  if ( Heap )
  {
    Heap[1] = SubAuthorityCount;
    *Heap = 1;
    *(_DWORD *)(Heap + 2) = *(_DWORD *)IdentifierAuthority->Value;
    *((_WORD *)Heap + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
    if ( SubAuthorityCount != 1 )
    {
      if ( SubAuthorityCount != 2 )
      {
        if ( SubAuthorityCount != 3 )
        {
          if ( SubAuthorityCount != 4 )
          {
            if ( SubAuthorityCount != 5 )
            {
              if ( SubAuthorityCount != 6 )
              {
                if ( SubAuthorityCount != 7 )
                {
                  if ( SubAuthorityCount != 8 )
                    goto LABEL_5;
                  *((_DWORD *)Heap + 9) = SubAuthority7;
                }
                *((_DWORD *)Heap + 8) = SubAuthority6;
              }
              *((_DWORD *)Heap + 7) = SubAuthority5;
            }
            *((_DWORD *)Heap + 6) = SubAuthority4;
          }
          *((_DWORD *)Heap + 5) = SubAuthority3;
        }
        *((_DWORD *)Heap + 4) = SubAuthority2;
      }
      *((_DWORD *)Heap + 3) = SubAuthority1;
    }
    *((_DWORD *)Heap + 2) = SubAuthority0;
LABEL_5:
    *Sid = Heap;
    return 0;
  }
  return -1073741801;
}
