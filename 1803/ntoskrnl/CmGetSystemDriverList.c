/*
 * XREFs of CmGetSystemDriverList @ 0x1408B7D44
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x1401A7FC0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1401A9C20 (ZwQueryDirectoryObject.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpAcquireShutdownRundown @ 0x1404A5B8C (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x1404A674C (CmpReleaseShutdownRundown.c)
 *     CmpDetachFromRegistryProcess @ 0x1404A80D8 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1408B7BC8 (CmpOpenSystemDriverHiveContext.c)
 *     CmpCloseSystemDriverHiveContext @ 0x1408B8140 (CmpCloseSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x1408B8194 (CmpFreeDriverList.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x1408B8294 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpSortDriverList @ 0x1408B8454 (CmpSortDriverList.c)
 *     CmpFindDrivers @ 0x1408B97B4 (CmpFindDrivers.c)
 */

HANDLE *__fastcall CmGetSystemDriverList(__int64 a1)
{
  char v1; // r13
  UNICODE_STRING *v2; // rsi
  HANDLE *v3; // r14
  char v4; // r15
  BOOLEAN v5; // r12
  NTSTATUS i; // eax
  const UNICODE_STRING *j; // rdi
  PVOID *k; // rdi
  __int64 *v9; // rax
  int v10; // ecx
  __int64 v11; // rbx
  int v12; // edi
  PVOID **v13; // rdi
  PVOID **v14; // rcx
  int v16; // eax
  _DWORD *v17; // rax
  _DWORD *v18; // rbx
  PVOID *v19; // rax
  _OWORD *v20; // rax
  _OWORD *v21; // rbx
  PVOID *v22; // rax
  PVOID *v23; // rbx
  PVOID *v24; // rbx
  int Context; // [rsp+30h] [rbp-D8h]
  PULONG ReturnLength; // [rsp+38h] [rbp-D0h]
  __int64 v27; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  ULONG v32; // [rsp+88h] [rbp-80h] BYREF
  PVOID v33; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v34; // [rsp+98h] [rbp-70h]
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  ULONG v36; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING *PoolWithTag; // [rsp+B8h] [rbp-50h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-48h] BYREF
  ULONG_PTR v40[8]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v41[8]; // [rsp+138h] [rbp+30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v43[48]; // [rsp+188h] [rbp+80h] BYREF

  v37 = a1;
  v1 = 0;
  memset(v43, 0, sizeof(v43));
  memset(v40, 0, sizeof(v40));
  LODWORD(v40[7]) = -1;
  memset(v41, 0, sizeof(v41));
  LODWORD(v41[7]) = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  v2 = 0LL;
  v34 = &v33;
  v3 = 0LL;
  v4 = 0;
  v33 = &v33;
  v5 = 0;
  v29[1] = (__int64)v29;
  v29[0] = (__int64)v29;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString, (__int64)v40) >= 0 )
  {
    if ( !CmStateSeparationEnabled
      || (v16 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString, (__int64)v41), (int)(v16 + 0x80000000) < 0)
      || v16 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        v32 = 0;
        PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20204D43u);
        v2 = PoolWithTag;
        if ( PoolWithTag )
        {
          for ( i = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, 0x400u, 1u, 1u, &v32, &v36);
                i != -2147483622;
                i = ZwQueryDirectoryObject(DirectoryHandle, v2, 0x400u, 1u, 0, &v32, &v36) )
          {
            if ( i < 0 )
              goto LABEL_29;
            for ( j = v2; j->Length; j += 2 )
            {
              if ( !RtlEqualUnicodeString(j, &CmpSystemFileName, 1u) )
              {
                v17 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x20204D43u);
                v18 = v17;
                if ( !v17 )
                  goto LABEL_29;
                memset(v17, 0, 0x40uLL);
                v18[14] = -1;
                if ( (int)CmpOpenSystemDriverHiveContext(j, (__int64)v18) >= 0 )
                {
                  v19 = p_P;
                  if ( *p_P != &P )
                    __fastfail(3u);
                  *((_QWORD *)v18 + 1) = p_P;
                  *(_QWORD *)v18 = &P;
                  *v19 = v18;
                  p_P = (PVOID *)v18;
                }
                else
                {
                  ExFreePoolWithTag(v18, 0);
                }
              }
            }
          }
          v5 = CmpAcquireShutdownRundown();
          if ( v5 )
          {
            CmpAttachToRegistryProcess((__int64)v43);
            v1 = 1;
            CmpLockRegistryExclusive();
            v4 = 1;
            if ( (int)CmpAcquireSystemDriverHiveContext(v40) >= 0
              && (!v41[4] || (int)CmpAcquireSystemDriverHiveContext(v41) >= 0) )
            {
              for ( k = (PVOID *)P; k != &P; k = (PVOID *)*k )
              {
                if ( (int)CmpAcquireSystemDriverHiveContext(k) >= 0 )
                {
                  v20 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20204D43u);
                  v21 = v20;
                  if ( !v20 )
                    goto LABEL_29;
                  memset(v20, 0, 0x30uLL);
                  v21[1] = *((_OWORD *)k + 1);
                  *((_QWORD *)v21 + 4) = k[6];
                  *((_DWORD *)v21 + 10) = *((_DWORD *)k + 14);
                  v22 = v34;
                  if ( *v34 != &v33 )
                    __fastfail(3u);
                  *((_QWORD *)v21 + 1) = v34;
                  *(_QWORD *)v21 = &v33;
                  *v22 = v21;
                  v34 = (PVOID *)v21;
                }
              }
              if ( (unsigned __int8)CmpFindDrivers(
                                      v40[6],
                                      (__int64)&v33,
                                      Context,
                                      (__int64)ReturnLength,
                                      (__int64)v29,
                                      v27,
                                      v37,
                                      v28)
                && (unsigned __int8)CmpSortDriverList(v40[6]) )
              {
                CmpUnlockRegistry();
                v9 = (__int64 *)v29[0];
                v10 = 0;
                v4 = 0;
                while ( v9 != v29 )
                {
                  v9 = (__int64 *)*v9;
                  ++v10;
                }
                v3 = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v10 + 1), 0x32384D43u);
                if ( !v3 )
                  KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                v11 = v29[0];
                v12 = 0;
                if ( (__int64 *)v29[0] != v29 )
                {
                  do
                  {
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.ObjectName = (PUNICODE_STRING)(v11 + 32);
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 576;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&v3[v12], 0x2001Fu, &ObjectAttributes) >= 0 )
                      ++v12;
                    v11 = *(_QWORD *)v11;
                  }
                  while ( (__int64 *)v11 != v29 );
                  v2 = PoolWithTag;
                }
                v3[v12] = 0LL;
              }
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( (__int64 *)v29[0] != v29 )
    CmpFreeDriverList(v40[6], v29);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v1 )
    CmpDetachFromRegistryProcess((__int64)v43);
  if ( v5 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v40);
  if ( v41[4] )
    CmpCloseSystemDriverHiveContext(v41);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v13 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v23 = *v13;
      CmpCloseSystemDriverHiveContext(v13);
      ExFreePoolWithTag(v13, 0);
      v13 = (PVOID **)v23;
    }
    while ( v23 != &P );
  }
  v14 = (PVOID **)v33;
  if ( v33 != &v33 )
  {
    do
    {
      v24 = *v14;
      ExFreePoolWithTag(v14, 0);
      v14 = (PVOID **)v24;
    }
    while ( v24 != &v33 );
  }
  return v3;
}
