/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x18006BC60
 * Callers:
 *     RtlCheckSandboxedToken @ 0x18006B8E0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
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
  int v15; // ebx
  char *Heap; // rax
  int v17; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx

  if ( SubAuthorityCount > 8u )
    return -1073741704;
  v15 = SubAuthorityCount;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1310720, 4 * (unsigned int)SubAuthorityCount + 8);
  if ( Heap )
  {
    Heap[1] = SubAuthorityCount;
    *Heap = 1;
    *(_DWORD *)(Heap + 2) = *(_DWORD *)IdentifierAuthority->Value;
    *((_WORD *)Heap + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
    v17 = v15 - 1;
    if ( v17 )
    {
      v19 = v17 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                v24 = v23 - 1;
                if ( v24 )
                {
                  if ( v24 != 1 )
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
