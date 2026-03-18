/*
 * XREFs of PiDevCfgMigrateDevice @ 0x14059ADAC
 * Callers:
 *     PpDevCfgProcessDeviceReset @ 0x14044EE8C (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x1406C66B8 (PiDevCfgMigrateRootDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     PiDevCfgSetObjectProperty @ 0x14058A470 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgFreeMigrationContext @ 0x14059AE70 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgInitMigrationContext @ 0x14059AE90 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14059BF64 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1405A4760 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1406C4FEC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x1406C60A8 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceMigrated @ 0x1406C6380 (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1406C6A28 (PiDevCfgQueryDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        PVOID a5,
        __int64 a6)
{
  _DWORD *v10; // r15
  PVOID v11; // rdi
  __int64 v12; // r12
  int inited; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  _WORD *v18; // r14
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  int DeviceMigrationNode; // eax
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // ecx
  void *v27; // r15
  int v28; // [rsp+30h] [rbp-71h]
  int v29; // [rsp+30h] [rbp-71h]
  PVOID v30; // [rsp+68h] [rbp-39h] BYREF
  int v31; // [rsp+70h] [rbp-31h]
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  UNICODE_STRING P; // [rsp+80h] [rbp-21h] BYREF
  __int64 v34[7]; // [rsp+90h] [rbp-11h] BYREF
  int v35; // [rsp+F8h] [rbp+57h]

  v35 = a1;
  memset(v34, 0, sizeof(v34));
  v10 = a5;
  v30 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v31 = 0;
  *(_QWORD *)&P.Length = 0LL;
  if ( a5 )
    *(_DWORD *)a5 = 0;
  v12 = a6;
  if ( a6 )
    *(_DWORD *)a6 = 0;
  inited = PiDevCfgInitMigrationContext(a3, a4, v34);
  if ( inited < 0 )
    goto LABEL_8;
  if ( !v34[0] )
  {
    inited = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a2 + 8),
                       1u,
                       *(_QWORD *)(a2 + 16),
                       0LL,
                       (__int64)&DEVPKEY_Device_MigrationRank,
                       (__int64)&a6,
                       0LL,
                       0,
                       (__int64)&a5,
                       0) == -1073741789
    && (_DWORD)a6 == 9
    && (_DWORD)a5 == 8 )
  {
    goto LABEL_78;
  }
  if ( v34[1] )
  {
    inited = PiDevCfgQueryDeviceMigrationNode(v34, *(_QWORD *)(a2 + 8), &v30);
    if ( inited < 0 )
    {
      v30 = 0LL;
      if ( inited == -1073741772 )
        inited = 0;
    }
    else
    {
      v11 = v30;
      *((_QWORD *)v30 + 23) = 0LL;
    }
    if ( v11 )
      goto LABEL_53;
  }
  if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode )
  {
LABEL_78:
    PiDevCfgClearDeviceMigrationNode(v34, *(_QWORD *)(a2 + 8));
    goto LABEL_79;
  }
  if ( !*(_QWORD *)(a2 + 64) )
    goto LABEL_46;
  v15 = v34[4];
  if ( !v34[4] )
  {
    v16 = 0LL;
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v16 = **(_QWORD **)&PiPnpRtlCtx;
    v17 = SysCtxRegOpenKey(v16, v34[0], (__int64)L"Locations", 0, 0x20019u, (__int64)&v34[4]);
    if ( v17 == -1073741772 )
    {
      v34[4] = 0LL;
      goto LABEL_46;
    }
    if ( v17 < 0 )
    {
      inited = v17;
      goto LABEL_8;
    }
    v15 = v34[4];
    if ( !v34[4] )
    {
LABEL_46:
      if ( v34[3] )
      {
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(v34, a2, v34[3], 69665LL, &v30);
        inited = DeviceMigrationNode;
        if ( DeviceMigrationNode >= 0 )
        {
          v11 = v30;
        }
        else
        {
          v11 = 0LL;
          if ( DeviceMigrationNode == -1073741275 )
            inited = 0;
        }
        if ( v11 )
          goto LABEL_53;
      }
      goto LABEL_78;
    }
  }
  v18 = *(_WORD **)(a2 + 64);
  v19 = 0LL;
  if ( !*v18 )
    goto LABEL_44;
  while ( 1 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v19 = **(_QWORD **)&PiPnpRtlCtx;
    v20 = SysCtxRegOpenKey(v19, v15, (__int64)v18, 0, 0x20019u, (__int64)&Handle);
    if ( v20 == -1073741772 )
    {
      v19 = 0LL;
      goto LABEL_38;
    }
    if ( v20 < 0 )
      break;
    inited = PiDevCfgFindDeviceMigrationNode(v34, a2, Handle, 70145LL, &v30);
    ZwClose(Handle);
    v19 = 0LL;
    if ( inited >= 0 )
    {
      v11 = v30;
      goto LABEL_45;
    }
    v30 = 0LL;
    v11 = 0LL;
    if ( inited == -1073741275 )
      inited = 0;
LABEL_38:
    v21 = -1LL;
    do
      ++v21;
    while ( v18[v21] );
    v18 += v21 + 1;
    if ( !*v18 )
      goto LABEL_44;
    v15 = v34[4];
  }
  inited = v20;
LABEL_44:
  if ( inited >= 0 )
  {
LABEL_45:
    if ( !v11 )
      goto LABEL_46;
LABEL_53:
    v23 = *((_DWORD *)v11 + 4);
    if ( (v23 & 1) != 0 )
    {
      inited = -1073740007;
    }
    else if ( (v23 & 2) != 0 )
    {
      inited = -1073740719;
    }
    else
    {
      if ( IopGetRegistryValue(*((HANDLE *)v11 + 5), L"ConfigFlags", 0, &P) >= 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&P.Length + 4LL) == 4 && *(_DWORD *)(*(_QWORD *)&P.Length + 12LL) == 4 )
          v31 = *(_DWORD *)(*(unsigned int *)(*(_QWORD *)&P.Length + 8LL) + *(_QWORD *)&P.Length);
        ExFreePoolWithTag(*(PVOID *)&P.Length, 0);
      }
      v24 = *(_QWORD *)(a2 + 16);
      v25 = *(_QWORD *)(a2 + 8);
      LODWORD(a5) = 0;
      if ( (unsigned int)PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v25,
                           1u,
                           v24,
                           0LL,
                           (__int64)&DEVPKEY_Device_ClassGuid,
                           (__int64)&a6,
                           0LL,
                           0,
                           (__int64)&a5,
                           0) != -1073741789
        || (_DWORD)a6 != 13
        || (_DWORD)a5 != 16 )
      {
        if ( a3 )
          PiDevCfgSetDeviceRegProp(v26, a2, 9, 1, *((_QWORD *)a3 + 1), *a3 + 2);
        else
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            (_BYTE *)a2,
            *(const WCHAR **)(a2 + 8),
            1,
            *(_QWORD *)(a2 + 16),
            v28,
            (__int64)&DEVPKEY_Device_ClassGuid,
            13,
            (unsigned int *)v11 + 20,
            16);
      }
      inited = PiDevCfgConfigureDeviceDriverConfiguration(v35, a2, *((_QWORD *)v11 + 5), -1, v10, v12);
      if ( inited >= 0 )
      {
        if ( v10 )
          *v10 |= v31;
        if ( *((_QWORD *)v11 + 23) )
        {
          v27 = *(void **)(a2 + 16);
          if ( RtlInitUnicodeStringEx(&P, L"ParentIdPrefix") >= 0 )
            ZwDeleteValueKey(v27, &P);
        }
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          (_BYTE *)a2,
          *(const WCHAR **)(a2 + 8),
          1,
          *(_QWORD *)(a2 + 16),
          v29,
          (__int64)&DEVPKEY_Device_MigrationRank,
          9,
          (unsigned int *)v11 + 46,
          8);
      }
    }
    PiDevCfgLogDeviceMigrated(a2, v11, (unsigned int)inited);
    if ( (*((_DWORD *)v11 + 4) & 1) == 0 )
      PiDevCfgClearDeviceMigrationNode(v34, *((_QWORD *)v11 + 4));
    if ( wcsicmp(*(const wchar_t **)(a2 + 8), *((const wchar_t **)v11 + 4)) )
      goto LABEL_78;
LABEL_79:
    if ( v11 )
      PiDevCfgFreeDeviceMigrationNode(v11);
  }
LABEL_8:
  PiDevCfgFreeMigrationContext(v34);
  return (unsigned int)inited;
}
