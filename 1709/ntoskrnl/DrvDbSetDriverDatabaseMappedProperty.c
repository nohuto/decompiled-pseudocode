/*
 * XREFs of DrvDbSetDriverDatabaseMappedProperty @ 0x140443CDC
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140531320 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbCreateDatabaseNode @ 0x1405C5178 (DrvDbCreateDatabaseNode.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140787C44 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14044435C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140459BE0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbFindDatabaseNode @ 0x140459D40 (DrvDbFindDatabaseNode.c)
 *     RtlCreateUnicodeString @ 0x1404DF560 (RtlCreateUnicodeString.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140533B00 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140533D40 (DrvDbUnloadDatabaseNode.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall DrvDbSetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        PCWSTR SourceString,
        unsigned int a7)
{
  int DatabaseNode; // esi
  __int64 v10; // r15
  __int64 v12; // rcx
  int v13; // r10d
  __int64 **v14; // rdx
  unsigned int i; // r8d
  __int64 *v16; // r9
  _UNKNOWN **v17; // r13
  __int64 v18; // rdx
  _UNKNOWN **v19; // r9
  _QWORD *v20; // r8
  HANDLE v21; // r13
  int v22; // eax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // ecx
  __int64 v30; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rbx
  int v33; // eax
  struct _ERESOURCE *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _UNKNOWN **v38; // r9
  __int64 v39; // rdx
  _QWORD *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rax
  struct _KTHREAD *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // [rsp+28h] [rbp-38h]
  __int64 v46; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  DatabaseNode = 0;
  Handle = 0LL;
  v10 = 0LL;
  v46 = 0LL;
  if ( !wcsicmp(a2, L"*") )
  {
    v24 = *(_DWORD *)(a4 + 16);
    if ( v24 == 6 )
    {
      v25 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
        v25 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v25 )
      {
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( *(_BYTE *)SourceString == 0xFF )
            *(_QWORD *)(a1 + 40) = 0LL;
          goto LABEL_23;
        }
        goto LABEL_107;
      }
    }
    if ( v24 != 11 )
      goto LABEL_45;
    v26 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
      v26 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v26 )
    {
LABEL_45:
      DatabaseNode = -1073741637;
      goto LABEL_23;
    }
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_107;
    v27 = *(_DWORD *)SourceString;
    goto LABEL_43;
  }
  v13 = *(_DWORD *)(a4 + 16);
  v14 = off_1403549C0;
  for ( i = 0; i < 5; ++i )
  {
    v16 = *v14;
    if ( *((_DWORD *)*v14 + 4) == v13 )
    {
      v12 = *v16 - *(_QWORD *)a4;
      if ( *v16 == *(_QWORD *)a4 )
        v12 = v16[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
      {
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v46);
        if ( DatabaseNode < 0 )
          goto LABEL_23;
        v29 = *(_DWORD *)(a4 + 16);
        if ( v29 == 5 )
        {
          v30 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
            v30 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v30 )
          {
            if ( a5 == 17 && a7 == 1 && SourceString )
            {
              if ( (*(_DWORD *)(v46 + 56) & 1) == 0 )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v32 = v46;
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v46 + 136), 1u);
                if ( *(_BYTE *)SourceString == 0xFF )
                  v33 = DrvDbLoadDatabaseNode(a1, v32);
                else
                  v33 = DrvDbUnloadDatabaseNode(a1, v32);
                v34 = *(struct _ERESOURCE **)(v32 + 136);
                DatabaseNode = v33;
                goto LABEL_125;
              }
              goto LABEL_60;
            }
            goto LABEL_107;
          }
        }
        if ( v29 == 6 )
        {
          v35 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
            v35 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v35 )
          {
            if ( a5 == 17 && a7 == 1 && SourceString )
            {
              if ( *(_BYTE *)SourceString == 0xFF )
              {
                *(_QWORD *)(a1 + 40) = v46;
              }
              else if ( v46 == *(_QWORD *)(a1 + 40) || !v46 )
              {
                *(_QWORD *)(a1 + 40) = 0LL;
              }
              goto LABEL_23;
            }
            goto LABEL_107;
          }
        }
        if ( v29 == 7 )
        {
          v36 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
            v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v36 )
          {
            if ( a5 == 17 && a7 == 1 && SourceString )
            {
              if ( *(_BYTE *)SourceString == 0xFF )
                *(_DWORD *)(v46 + 56) |= 4u;
              else
                *(_DWORD *)(v46 + 56) &= ~4u;
              goto LABEL_23;
            }
            goto LABEL_107;
          }
        }
        if ( v29 != 11 )
          goto LABEL_23;
        v37 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
          v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v37 )
          goto LABEL_23;
        if ( a5 != 7 || a7 != 4 || !SourceString )
        {
LABEL_107:
          DatabaseNode = -1073741811;
          goto LABEL_23;
        }
        if ( v46 != *(_QWORD *)(a1 + 32) )
          goto LABEL_60;
        v27 = *(_DWORD *)SourceString;
LABEL_43:
        v28 = v27 & 0xD0000000;
        *(_DWORD *)(a1 + 12) = v28;
        if ( v28 == 0x10000000 )
          *(_DWORD *)(a1 + 12) = -805306368;
        goto LABEL_23;
      }
    }
    ++v14;
  }
  v17 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v18 = 0LL;
  v19 = &off_1402B5000;
  while ( 1 )
  {
    v20 = *v19;
    if ( *((_DWORD *)*v19 + 4) == v13 )
    {
      v12 = *v20 - *(_QWORD *)a4;
      if ( *v20 == *(_QWORD *)a4 )
        v12 = v20[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
        break;
    }
    v18 = (unsigned int)(v18 + 1);
    v19 += 5;
    if ( (unsigned int)v18 >= 7 )
      goto LABEL_13;
  }
  v12 = 5 * v18;
  v17 = &off_1402B5000 + 5 * v18;
  *(_QWORD *)&DestinationString.Length = v17;
LABEL_13:
  if ( !v17 )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    v38 = &off_1402BBE90;
    v39 = 0LL;
    while ( 1 )
    {
      v40 = *v38;
      if ( *((_DWORD *)*v38 + 4) == v13 )
      {
        v41 = *v40 - *(_QWORD *)a4;
        if ( *v40 == *(_QWORD *)a4 )
          v41 = v40[1] - *(_QWORD *)(a4 + 8);
        if ( !v41 )
          break;
      }
      v39 = (unsigned int)(v39 + 1);
      v38 += 5;
      if ( (unsigned int)v39 >= 2 )
        goto LABEL_101;
    }
    v17 = &off_1402BBE90 + 5 * v39;
    *(_QWORD *)&DestinationString.Length = v17;
LABEL_101:
    if ( !v17 )
    {
      DatabaseNode = -1073741802;
      goto LABEL_23;
    }
    DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v46);
    if ( DatabaseNode < 0 )
      goto LABEL_23;
    v10 = v46;
    if ( (*(_DWORD *)(v46 + 56) & 0x10) != 0 )
      goto LABEL_14;
LABEL_60:
    DatabaseNode = -1073741790;
    goto LABEL_23;
  }
LABEL_14:
  if ( a5 != *((_DWORD *)v17 + 2) && a5 )
    goto LABEL_107;
  v21 = a3;
  if ( a3 && (!v10 || (*(_DWORD *)(v10 + 56) & 0x10) == 0)
    || (!v10 || (*(_DWORD *)(v10 + 56) & 0x10) == 0
      ? (HIDWORD(v45) = 0, v22 = DrvDbOpenDriverDatabaseRegKey(a1, a2, 2LL))
      : (v22 = DrvDbOpenObjectRegKey(a1, *(_QWORD *)(a1 + 32), 1, (_DWORD)a2, 2, 0, (__int64)&Handle, 0LL)),
        DatabaseNode = v22,
        v22 >= 0) )
  {
    if ( Handle )
      v21 = Handle;
    LODWORD(v45) = a7;
    DatabaseNode = DrvDbSetRegValueMappedProperty(v12, v21, *(_QWORD *)&DestinationString.Length, a5, SourceString, v45);
    if ( DatabaseNode >= 0 && v10 && (*(_DWORD *)(v10 + 56) & 0x10) != 0 && *(_DWORD *)(a4 + 16) == 14 )
    {
      v42 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_RegistryPath;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_RegistryPath )
        v42 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v42 && a5 )
      {
        if ( a7 < 2 || !SourceString || *((_BYTE *)SourceString + ((unsigned __int64)a7 >> 1) - 1) )
          goto LABEL_107;
        if ( !RtlCreateUnicodeString(&DestinationString, SourceString) )
        {
          DatabaseNode = -1073741670;
          goto LABEL_23;
        }
        v43 = KeGetCurrentThread();
        --v43->KernelApcDisable;
        v44 = v46;
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v46 + 136), 1u);
        RtlFreeUnicodeString((PUNICODE_STRING)(v44 + 40));
        *(_DWORD *)(v44 + 32) = 0;
        *(UNICODE_STRING *)(v44 + 40) = DestinationString;
        v34 = *(struct _ERESOURCE **)(v44 + 136);
LABEL_125:
        ExReleaseResourceLite(v34);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
