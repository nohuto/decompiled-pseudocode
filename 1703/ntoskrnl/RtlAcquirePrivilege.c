/*
 * XREFs of RtlAcquirePrivilege @ 0x14044BAB8
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ZwSetInformationThread @ 0x14017E0E0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x14017E540 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x14017E760 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlImpersonateSelfEx @ 0x14044BCE4 (RtlImpersonateSelfEx.c)
 *     RtlpOpenThreadToken @ 0x14044BE08 (RtlpOpenThreadToken.c)
 */

NTSTATUS __stdcall RtlAcquirePrivilege(PULONG Privilege, ULONG NumPriv, ULONG Flags, PVOID *ReturnedState)
{
  __int64 v4; // rbp
  char v7; // si
  char *PoolWithQuotaTag; // rax
  char *v9; // rbx
  HANDLE *v10; // r15
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  ULONG v14; // eax
  __int64 v15; // rcx
  char *v17; // rcx
  PVOID v18; // rax
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+18h] BYREF

  v4 = NumPriv;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  v7 = Flags | 1;
  if ( (Flags & 2) == 0 )
    v7 = Flags;
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 12 * (NumPriv - 1 + 90LL), 0x62507452u);
  v9 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    *(_QWORD *)PoolWithQuotaTag = 0LL;
    v10 = (HANDLE *)(PoolWithQuotaTag + 8);
    *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
    *((_DWORD *)PoolWithQuotaTag + 8) = 0;
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) == 0 )
      goto LABEL_9;
    if ( (v7 & 1) != 0 )
    {
      v11 = RtlpOpenThreadToken(4u, v10);
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
      v11 = RtlpOpenThreadToken(0x28u, (PHANDLE)PoolWithQuotaTag);
      if ( v11 >= 0 )
      {
LABEL_9:
        if ( *(_QWORD *)v9 )
          goto LABEL_13;
        if ( (v7 & 2) != 0 )
        {
          v11 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, (PHANDLE)v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 2u;
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
                *(_QWORD *)(v15 + v13 - 8) = ThreadInformation;
                *(_DWORD *)(*((_QWORD *)v9 + 3) + v13) = 2;
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
                v18 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, BufferLength, 0x62507452u);
                *((_QWORD *)v9 + 2) = v18;
                if ( !v18 )
                  break;
                v11 = ZwAdjustPrivilegesToken(
                        *(HANDLE *)v9,
                        0,
                        *((PTOKEN_PRIVILEGES *)v9 + 3),
                        BufferLength,
                        *((PTOKEN_PRIVILEGES *)v9 + 2),
                        &BufferLength);
                if ( v11 != -1073741789 )
                  goto LABEL_17;
                ExFreePoolWithTag(*((PVOID *)v9 + 2), 0);
              }
              v11 = -1073741801;
            }
LABEL_17:
            if ( v11 == 262 )
            {
              if ( (_DWORD)v4 == 1 )
              {
                v11 = -1073741727;
LABEL_22:
                v17 = (char *)*((_QWORD *)v9 + 2);
                if ( v17 && v17 != v9 + 36 )
                  ExFreePoolWithTag(v17, 0);
                ZwClose(*(HANDLE *)v9);
                goto LABEL_26;
              }
              v11 = 0;
            }
            if ( v11 >= 0 )
            {
              *ReturnedState = v9;
              return 0;
            }
            goto LABEL_22;
          }
        }
        else
        {
          v11 = RtlImpersonateSelfEx(SecurityDelegation, 0x28u, (PHANDLE)v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 1u;
            goto LABEL_13;
          }
        }
LABEL_26:
        if ( (*((_DWORD *)v9 + 8) & 1) != 0 )
        {
          ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, v10, 8u);
          if ( *v10 )
            ZwClose(*v10);
        }
      }
    }
    ExFreePoolWithTag(v9, 0);
    return v11;
  }
  return -1073741801;
}
