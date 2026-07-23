/*
 * XREFs of sub_18002E46C @ 0x18002E46C
 * Callers:
 *     sub_18002E238 @ 0x18002E238 (sub_18002E238.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlSidDominatesForTrust @ 0x18002E5E0 (RtlSidDominatesForTrust.c)
 *     RtlCopySid @ 0x18006C490 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 */

__int64 __fastcall sub_18002E46C(HANDLE TokenHandle, _QWORD *a2)
{
  PSID *v2; // rsi
  PVOID ProcessHeap; // r14
  NTSTATUS v6; // edi
  ULONG v7; // ecx
  _QWORD *Heap; // rax
  void *v9; // rbx
  BOOLEAN DominatesTrust[4]; // [rsp+30h] [rbp-89h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-85h] BYREF
  ULONG TokenInformationLength; // [rsp+38h] [rbp-81h] BYREF
  PSID TokenInformation[10]; // [rsp+40h] [rbp-79h] BYREF
  PSID Sid2[10]; // [rsp+90h] [rbp-29h] BYREF

  DominatesTrust[0] = 0;
  ReturnLength = 76;
  TokenInformationLength = 76;
  v2 = TokenInformation;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v6 = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0x29u, TokenInformation, 0x4Cu, &ReturnLength);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( !TokenHandle )
    goto LABEL_16;
  v6 = ZwQueryInformationToken(TokenHandle, 0x29u, Sid2, TokenInformationLength, &TokenInformationLength);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v6 = RtlSidDominatesForTrust(TokenInformation[0], Sid2[0], DominatesTrust);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( DominatesTrust[0] )
  {
    v7 = TokenInformationLength;
    v2 = Sid2;
    ReturnLength = TokenInformationLength;
  }
  else
  {
LABEL_16:
    v7 = ReturnLength;
  }
  Heap = RtlAllocateHeap(ProcessHeap, Flags + 1310720, v7);
  v9 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  if ( !*v2 )
  {
    *Heap = 0LL;
LABEL_10:
    *a2 = v9;
    v9 = 0LL;
    goto LABEL_11;
  }
  *Heap = Heap + 1;
  v6 = RtlCopySid(ReturnLength - 8, Heap + 1, *v2);
  if ( v6 >= 0 )
    goto LABEL_10;
LABEL_11:
  if ( v9 )
    RtlFreeHeap(ProcessHeap, 0, v9);
  return (unsigned int)v6;
}
