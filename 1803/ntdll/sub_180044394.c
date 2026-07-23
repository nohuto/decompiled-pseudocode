/*
 * XREFs of sub_180044394 @ 0x180044394
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlEqualSid @ 0x1800442A0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     ZwOpenProcessToken @ 0x18009CED0 (ZwOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x18009D0B0 (ZwPrivilegeCheck.c)
 */

char __fastcall sub_180044394(void *a1, void *a2, char a3, NTSTATUS *a4)
{
  char v4; // bl
  PVOID ProcessHeap; // r13
  NTSTATUS v9; // eax
  NTSTATUS v11; // eax
  PSID *Heap; // r14
  unsigned int v13; // edi
  PSID *v14; // r15
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  BOOLEAN v17; // cl
  BOOLEAN Result[4]; // [rsp+30h] [rbp-89h] BYREF
  ULONG TokenInformationLength; // [rsp+34h] [rbp-85h] BYREF
  HANDLE TokenHandle[2]; // [rsp+38h] [rbp-81h] BYREF
  HANDLE ClientToken; // [rsp+48h] [rbp-71h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-69h] BYREF
  PSID TokenInformation[12]; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  ClientToken = a1;
  if ( a2 )
  {
    if ( a3 )
    {
      v15 = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, TokenHandle);
      *a4 = v15;
      if ( v15 < 0 )
        return 0;
    }
    else
    {
      TokenHandle[0] = a1;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v9 = ZwQueryInformationToken(TokenHandle[0], 1u, TokenInformation, 0x54u, &TokenInformationLength);
    *a4 = v9;
    if ( v9 >= 0 )
    {
      if ( RtlEqualSid(a2, TokenInformation[0]) )
      {
        if ( a3 )
          ZwClose(TokenHandle[0]);
        return 1;
      }
      v11 = ZwQueryInformationToken(TokenHandle[0], 2u, 0LL, 0, &TokenInformationLength);
      *a4 = v11;
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
      {
        Heap = (PSID *)RtlAllocateHeap(ProcessHeap, 0, TokenInformationLength);
        if ( Heap )
        {
          *a4 = ZwQueryInformationToken(TokenHandle[0], 2u, Heap, TokenInformationLength, &TokenInformationLength);
          if ( a3 )
            ZwClose(TokenHandle[0]);
          if ( *a4 >= 0 )
          {
            v13 = 0;
            if ( !*(_DWORD *)Heap )
              goto LABEL_30;
            v14 = Heap + 1;
            while ( !RtlEqualSid(a2, *v14) )
            {
              ++v13;
              v14 += 2;
              if ( v13 >= *(_DWORD *)Heap )
                goto LABEL_30;
            }
            if ( ((__int64)Heap[2 * v13 + 2] & 0x18) != 8 )
            {
LABEL_30:
              RtlFreeHeap(ProcessHeap, 0, Heap);
              TokenHandle[1] = (HANDLE)18;
              RequiredPrivileges.Privilege[0].Luid = (LUID)18LL;
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              v16 = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, Result);
              v17 = Result[0];
              if ( v16 < 0 )
                v17 = 0;
              if ( v17 )
                return 1;
              *a4 = -1073741734;
              return 0;
            }
            v4 = 1;
          }
          RtlFreeHeap(ProcessHeap, 0, Heap);
          return v4;
        }
        *a4 = -1073741801;
      }
    }
    if ( a3 )
      ZwClose(TokenHandle[0]);
  }
  else
  {
    *a4 = -1073741734;
  }
  return 0;
}
