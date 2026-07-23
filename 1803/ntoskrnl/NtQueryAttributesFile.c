/*
 * XREFs of NtQueryAttributesFile @ 0x1404D1D30
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404D1FD0 (FsRtlFreeExtraCreateParameter.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  unsigned __int8 v4; // r15
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // r14d
  __int64 v8; // rdi
  __int64 **v9; // rbx
  __int64 *v10; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _QWORD v19[28]; // [rsp+50h] [rbp-258h] BYREF
  _BYTE v20[64]; // [rsp+130h] [rbp-178h] BYREF
  char v21; // [rsp+170h] [rbp-138h] BYREF

  v4 = KeGetCurrentThread()->gap0[10];
  if ( v4 )
  {
    v5 = (__int64)FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 39) = *(_BYTE *)(v5 + 39);
  }
  memset(v19, 0, 0xD8uLL);
  memset(v20, 0, 0x38uLL);
  LODWORD(v19[0]) = 14155784;
  HIWORD(v19[8]) = 7;
  LODWORD(v19[11]) = 1;
  LODWORD(v19[8]) = 2113536;
  v19[12] = FileInformation;
  v19[13] = v20;
  BYTE1(v19[17]) = 1;
  v19[18] = &v21;
  v19[6] = ObjectAttributes;
  LODWORD(v19[19]) = 32;
  memset(&v19[20], 0, 0x28uLL);
  LOWORD(v19[20]) = 40;
  v19[24] = 1LL;
  v19[24] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(ObjectAttributes, IoFileObjectType, v4, 0LL, 128, v19, v19[24], Handle);
  v8 = v19[21];
  if ( v19[21] )
  {
    if ( (*(_DWORD *)(v19[21] + 4LL) & 1) != 0 )
    {
      v13 = (_QWORD *)(v19[21] + 8LL);
      v14 = *(_QWORD **)(v19[21] + 8LL);
      if ( (_QWORD *)*v13 != v13 )
      {
        do
        {
          v15 = v14;
          v16 = v14 - 1;
          v14 = (_QWORD *)*v14;
          if ( (v16[6] & 1) == 0 )
          {
            v17 = (_QWORD *)v15[1];
            if ( (_QWORD *)v14[1] != v15 || (_QWORD *)*v17 != v15 )
              __fastfail(3u);
            *v17 = v14;
            v14[1] = v17;
            v16[2] = 0LL;
            *v15 = 0LL;
            FsRtlFreeExtraCreateParameter(v16 + 9);
          }
        }
        while ( v14 != v13 );
      }
    }
    else
    {
      v9 = (__int64 **)(v19[21] + 8LL);
      while ( 1 )
      {
        v10 = *v9;
        if ( *v9 == (__int64 *)v9 )
          break;
        v12 = *v10;
        if ( (__int64 **)v10[1] != v9 || *(__int64 **)(v12 + 8) != v10 )
          __fastfail(3u);
        *v9 = (__int64 *)v12;
        *(_QWORD *)(v12 + 8) = v9;
        v10[1] = 0LL;
        *v10 = 0LL;
        FsRtlFreeExtraCreateParameter(v10 + 8);
      }
      if ( (*(_DWORD *)(v8 + 4) & 4) != 0 )
      {
        ++unk_1403D191C;
        if ( LOWORD(FsRtlEcpListLookaside.Alignment) >= unk_1403D1910 )
        {
          ++unk_1403D1920;
          unk_1403D1938(v8);
        }
        else
        {
          RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)v8);
        }
      }
      else
      {
        ExFreePoolWithTag((PVOID)v8, 0);
      }
      v19[21] = 0LL;
    }
  }
  if ( LODWORD(v19[4]) == -1096154543 )
    return v19[2];
  if ( v7 >= 0 )
  {
    ObCloseHandle(Handle[0], v4);
    return -1073741788;
  }
  return v7;
}
