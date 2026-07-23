/*
 * XREFs of RtlAcquirePrivilege @ 0x180078BB0
 * Callers:
 *     sub_18002BDB8 @ 0x18002BDB8 (sub_18002BDB8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180078DB0 @ 0x180078DB0 (sub_180078DB0.c)
 *     RtlImpersonateSelfEx @ 0x180078E10 (RtlImpersonateSelfEx.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x18009B0C0 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x18009B2E0 (ZwAdjustPrivilegesToken.c)
 */

NTSTATUS __cdecl RtlAcquirePrivilege(PULONG Privilege, ULONG NumPriv, ULONG Flags, PVOID *ReturnedState)
{
  __int64 v4; // rbp
  char v7; // si
  char *Heap; // rax
  char *v9; // rbx
  HANDLE *v10; // r14
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  ULONG v14; // eax
  __int64 v15; // rcx
  _TOKEN_PRIVILEGES *PreviousState; // rax
  char *v18; // r8
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+18h] BYREF

  v4 = NumPriv;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  v7 = Flags | 1;
  if ( (Flags & 2) == 0 )
    v7 = Flags;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, ::Flags + 1310720, 12 * (NumPriv - 1 + 90LL));
  v9 = Heap;
  if ( !Heap )
    return -1073741801;
  *(_QWORD *)Heap = 0LL;
  v10 = (HANDLE *)(Heap + 8);
  *((_QWORD *)Heap + 1) = 0LL;
  *((_DWORD *)Heap + 8) = 0;
  if ( !NtCurrentTeb()->IsImpersonating )
    goto LABEL_10;
  if ( (v7 & 1) != 0 )
  {
    v11 = sub_180078DB0(4u, v10);
    if ( v11 >= 0 )
    {
      *((_DWORD *)v9 + 8) |= 1u;
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      goto LABEL_9;
    }
  }
  else
  {
    v11 = sub_180078DB0(0x28u, (PHANDLE)Heap);
    if ( v11 >= 0 )
    {
LABEL_9:
      if ( *(_QWORD *)v9 )
        goto LABEL_13;
LABEL_10:
      if ( (v7 & 2) != 0 )
      {
        v11 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, (PHANDLE)v9);
        if ( v11 >= 0 )
        {
          *((_DWORD *)v9 + 8) |= 2u;
          goto LABEL_13;
        }
      }
      else
      {
        v11 = RtlImpersonateSelfEx(SecurityDelegation, 0x28u, (PHANDLE)v9);
        if ( v11 >= 0 )
        {
          *((_DWORD *)v9 + 8) |= 1u;
LABEL_13:
          *((_QWORD *)v9 + 3) = v9 + 1064;
          *((_QWORD *)v9 + 2) = v9 + 36;
          *((_DWORD *)v9 + 266) = v4;
          if ( (_DWORD)v4 )
          {
            HIDWORD(ThreadInformation) = 0;
            v12 = v4;
            v13 = 0LL;
            do
            {
              v14 = *Privilege;
              v13 += 12LL;
              v15 = *((_QWORD *)v9 + 3);
              ++Privilege;
              LODWORD(ThreadInformation) = v14;
              *(_QWORD *)(v13 + v15 - 8) = ThreadInformation;
              *(_DWORD *)(v13 + *((_QWORD *)v9 + 3)) = 2;
              --v12;
            }
            while ( v12 );
          }
          BufferLength = 1024;
          v11 = ZwAdjustPrivilegesToken(
                  *(HANDLE *)v9,
                  0,
                  *((PTOKEN_PRIVILEGES *)v9 + 3),
                  0x400u,
                  *((PTOKEN_PRIVILEGES *)v9 + 2),
                  &BufferLength);
          if ( v11 == -1073741789 )
          {
            while ( 1 )
            {
              PreviousState = (_TOKEN_PRIVILEGES *)RtlAllocateHeap(
                                                     NtCurrentPeb()->ProcessHeap,
                                                     ::Flags + 1310720,
                                                     BufferLength);
              *((_QWORD *)v9 + 2) = PreviousState;
              if ( !PreviousState )
                break;
              v11 = ZwAdjustPrivilegesToken(
                      *(HANDLE *)v9,
                      0,
                      *((PTOKEN_PRIVILEGES *)v9 + 3),
                      BufferLength,
                      PreviousState,
                      &BufferLength);
              if ( v11 != -1073741789 )
                goto LABEL_17;
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)v9 + 2));
            }
            v11 = -1073741801;
          }
LABEL_17:
          if ( v11 == 262 )
          {
            if ( (_DWORD)v4 == 1 )
            {
              v11 = -1073741727;
LABEL_33:
              v18 = (char *)*((_QWORD *)v9 + 2);
              if ( v18 && v18 != v9 + 36 )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
              ZwClose(*(HANDLE *)v9);
              goto LABEL_37;
            }
            v11 = 0;
          }
          if ( v11 >= 0 )
          {
            *ReturnedState = v9;
            return 0;
          }
          goto LABEL_33;
        }
      }
LABEL_37:
      if ( (v9[32] & 1) != 0 )
      {
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, v10, 8u);
        if ( *v10 )
          ZwClose(*v10);
      }
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return v11;
}
