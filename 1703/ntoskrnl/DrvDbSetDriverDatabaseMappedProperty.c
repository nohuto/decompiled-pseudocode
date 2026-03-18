/*
 * XREFs of DrvDbSetDriverDatabaseMappedProperty @ 0x140744354
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1404E8770 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbCreateDatabaseNode @ 0x1405CD648 (DrvDbCreateDatabaseNode.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140745768 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     DrvDbFindDatabaseNode @ 0x14044C7CC (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbUnloadDatabaseNode @ 0x140489320 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbLoadDatabaseNode @ 0x140489400 (DrvDbLoadDatabaseNode.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14059D9EC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140745158 (DrvDbSetRegValueMappedProperty.c)
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
  const UNICODE_STRING *v10; // r15
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // r11d
  __int64 **v18; // rdx
  unsigned int i; // r8d
  __int64 *v20; // r9
  __int64 v21; // rcx
  _UNKNOWN **v22; // r12
  __int64 v23; // rdx
  _UNKNOWN **v24; // r8
  _QWORD *v25; // r9
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rax
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v30; // rbx
  int v31; // eax
  struct _ERESOURCE *Buffer; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  _UNKNOWN **v37; // r8
  _QWORD *v38; // r9
  __int64 v39; // rcx
  HANDLE v40; // rcx
  int v41; // eax
  __int64 v42; // rax
  struct _KTHREAD *v43; // rax
  const UNICODE_STRING *v44; // rdi
  const UNICODE_STRING *v46; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  DatabaseNode = 0;
  Handle = 0LL;
  v10 = 0LL;
  v46 = 0LL;
  if ( !wcsicmp(a2, L"*") )
  {
    v12 = *(_DWORD *)(a4 + 16);
    if ( v12 == 6 )
    {
      v13 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
        v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v13 )
      {
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( *(_BYTE *)SourceString == 0xFF )
            *(_QWORD *)(a1 + 40) = 0LL;
          goto LABEL_123;
        }
        goto LABEL_122;
      }
    }
    if ( v12 != 11 )
      goto LABEL_21;
    v14 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
      v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v14 )
    {
LABEL_21:
      DatabaseNode = -1073741637;
      goto LABEL_123;
    }
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_122;
    v15 = *(_DWORD *)SourceString;
LABEL_19:
    v16 = v15 & 0xD0000000;
    *(_DWORD *)(a1 + 12) = v16;
    if ( v16 == 0x10000000 )
      *(_DWORD *)(a1 + 12) = -805306368;
    goto LABEL_123;
  }
  v17 = *(_DWORD *)(a4 + 16);
  v18 = off_14033C598;
  for ( i = 0; i < 5; ++i )
  {
    v20 = *v18;
    if ( *((_DWORD *)*v18 + 4) == v17 )
    {
      v21 = *v20 - *(_QWORD *)a4;
      if ( *v20 == *(_QWORD *)a4 )
        v21 = v20[1] - *(_QWORD *)(a4 + 8);
      if ( !v21 )
      {
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v46);
        if ( DatabaseNode < 0 )
          goto LABEL_123;
        v27 = *(_DWORD *)(a4 + 16);
        if ( v27 != 5 )
          goto LABEL_52;
        v28 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
          v28 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v28 )
        {
LABEL_52:
          if ( v27 == 6 )
          {
            v33 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
              v33 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v33 )
            {
              if ( a5 == 17 && a7 == 1 && SourceString )
              {
                if ( *(_BYTE *)SourceString == 0xFF )
                {
                  *(_QWORD *)(a1 + 40) = v46;
                }
                else if ( v46 == *(const UNICODE_STRING **)(a1 + 40) || !v46 )
                {
                  *(_QWORD *)(a1 + 40) = 0LL;
                }
                goto LABEL_123;
              }
              goto LABEL_122;
            }
          }
          if ( v27 == 7 )
          {
            v34 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
              v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v34 )
            {
              if ( a5 == 17 && a7 == 1 && SourceString )
              {
                if ( *(_BYTE *)SourceString == 0xFF )
                  LODWORD(v46[3].Buffer) |= 4u;
                else
                  LODWORD(v46[3].Buffer) &= ~4u;
                goto LABEL_123;
              }
              goto LABEL_122;
            }
          }
          if ( v27 != 11 )
            goto LABEL_123;
          v35 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
            v35 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v35 )
            goto LABEL_123;
          if ( a5 == 7 && a7 == 4 && SourceString )
          {
            if ( v46 != *(const UNICODE_STRING **)(a1 + 32) )
              goto LABEL_44;
            v15 = *(_DWORD *)SourceString;
            goto LABEL_19;
          }
        }
        else if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( ((__int64)v46[3].Buffer & 1) != 0 )
            goto LABEL_44;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v30 = v46;
          ExAcquireResourceExclusiveLite((PERESOURCE)v46[8].Buffer, 1u);
          if ( *(_BYTE *)SourceString == 0xFF )
            v31 = DrvDbLoadDatabaseNode((_QWORD **)a1, (__int64)v30);
          else
            v31 = DrvDbUnloadDatabaseNode(a1, (__int64)v30);
          Buffer = (struct _ERESOURCE *)v30[8].Buffer;
          DatabaseNode = v31;
LABEL_121:
          ExReleaseResourceLite(Buffer);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_123;
        }
LABEL_122:
        DatabaseNode = -1073741811;
        goto LABEL_123;
      }
    }
    ++v18;
  }
  v22 = 0LL;
  v23 = 0LL;
  v24 = &off_140288000;
  while ( 1 )
  {
    v25 = *v24;
    if ( *((_DWORD *)*v24 + 4) == v17 )
    {
      v26 = *v25 - *(_QWORD *)a4;
      if ( *v25 == *(_QWORD *)a4 )
        v26 = v25[1] - *(_QWORD *)(a4 + 8);
      if ( !v26 )
        break;
    }
    v23 = (unsigned int)(v23 + 1);
    v24 += 5;
    if ( (unsigned int)v23 >= 7 )
      goto LABEL_81;
  }
  v22 = &off_140288000 + 5 * v23;
LABEL_81:
  if ( !v22 )
  {
    v36 = 0LL;
    v37 = &off_14028EBD0;
    while ( 1 )
    {
      v38 = *v37;
      if ( *((_DWORD *)*v37 + 4) == v17 )
      {
        v39 = *v38 - *(_QWORD *)a4;
        if ( *v38 == *(_QWORD *)a4 )
          v39 = v38[1] - *(_QWORD *)(a4 + 8);
        if ( !v39 )
          break;
      }
      v36 = (unsigned int)(v36 + 1);
      v37 += 5;
      if ( (unsigned int)v36 >= 2 )
        goto LABEL_90;
    }
    v22 = &off_14028EBD0 + 5 * v36;
LABEL_90:
    if ( !v22 )
    {
      DatabaseNode = -1073741802;
      goto LABEL_123;
    }
    DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v46);
    if ( DatabaseNode >= 0 )
    {
      v10 = v46;
      if ( ((__int64)v46[3].Buffer & 0x10) != 0 )
        goto LABEL_94;
LABEL_44:
      DatabaseNode = -1073741790;
      goto LABEL_123;
    }
    goto LABEL_123;
  }
LABEL_94:
  if ( a5 != *((_DWORD *)v22 + 2) && a5 )
    goto LABEL_122;
  v40 = a3;
  if ( !a3 || v10 && ((__int64)v10[3].Buffer & 0x10) != 0 )
  {
    if ( v10 && ((__int64)v10[3].Buffer & 0x10) != 0 )
      v41 = DrvDbOpenObjectRegKey(a1, *(_QWORD **)(a1 + 32), 1u, a2, 2, 0, &Handle, 0LL);
    else
      v41 = DrvDbOpenDriverDatabaseRegKey((__int64 **)a1, a2, 2u, 0, (__int64)&Handle, 0LL);
    DatabaseNode = v41;
    if ( v41 < 0 )
      goto LABEL_123;
    v40 = a3;
  }
  if ( Handle )
    v40 = Handle;
  DatabaseNode = DrvDbSetRegValueMappedProperty(v40, v40, v22, a5, SourceString, a7);
  if ( DatabaseNode >= 0 && v10 && ((__int64)v10[3].Buffer & 0x10) != 0 && *(_DWORD *)(a4 + 16) == 14 )
  {
    v42 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_RegistryPath;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_RegistryPath )
      v42 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v42 && a5 )
    {
      if ( a7 >= 2 && SourceString && !*((_BYTE *)SourceString + ((unsigned __int64)a7 >> 1) - 1) )
      {
        if ( !RtlCreateUnicodeString(&DestinationString, SourceString) )
        {
          DatabaseNode = -1073741670;
          goto LABEL_123;
        }
        v43 = KeGetCurrentThread();
        --v43->KernelApcDisable;
        v44 = v46;
        ExAcquireResourceExclusiveLite((PERESOURCE)v46[8].Buffer, 1u);
        RtlFreeUnicodeString((PUNICODE_STRING)&v44[2].Buffer);
        *(_DWORD *)&v44[2].Length = 0;
        *(UNICODE_STRING *)&v44[2].Buffer = DestinationString;
        Buffer = (struct _ERESOURCE *)v44[8].Buffer;
        goto LABEL_121;
      }
      goto LABEL_122;
    }
  }
LABEL_123:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
