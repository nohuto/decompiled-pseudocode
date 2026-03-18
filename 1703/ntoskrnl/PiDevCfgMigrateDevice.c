/*
 * XREFs of PiDevCfgMigrateDevice @ 0x14059389C
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14069AA94 (PiDevCfgMigrateRootDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x14014FD64 (PnpValidateRegistryDword.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14058EC68 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgSetObjectProperty @ 0x1405917F0 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140592E04 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgFreeMigrationContext @ 0x140593960 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgInitMigrationContext @ 0x140593980 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1406991C4 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14069A4E4 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceMigrated @ 0x14069A7C0 (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14069AE04 (PiDevCfgQueryDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _DWORD *v10; // r15
  __int64 v11; // rdi
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
  unsigned int *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // [rsp+30h] [rbp-71h]
  int v29; // [rsp+30h] [rbp-71h]
  int v30; // [rsp+68h] [rbp-39h]
  __int64 v31; // [rsp+70h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  __int64 v33; // [rsp+80h] [rbp-21h] BYREF
  __int64 v34[8]; // [rsp+88h] [rbp-19h] BYREF

  memset(v34, 0, 0x38uLL);
  v10 = a5;
  v31 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v30 = 0;
  v33 = 0LL;
  if ( a5 )
    *a5 = 0;
  v12 = (__int64)a6;
  if ( a6 )
    *a6 = 0;
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
    goto LABEL_74;
  }
  if ( v34[1] )
  {
    inited = PiDevCfgQueryDeviceMigrationNode(v34, *(_QWORD *)(a2 + 8), &v31);
    if ( inited < 0 )
    {
      v31 = 0LL;
      if ( inited == -1073741772 )
        inited = 0;
    }
    else
    {
      v11 = v31;
      *(_QWORD *)(v31 + 184) = 0LL;
    }
    if ( v11 )
      goto LABEL_53;
  }
  if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode )
  {
LABEL_74:
    PiDevCfgClearDeviceMigrationNode(v34, *(_QWORD *)(a2 + 8));
    goto LABEL_75;
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
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(v34, a2, v34[3], 69665LL, &v31);
        inited = DeviceMigrationNode;
        if ( DeviceMigrationNode >= 0 )
        {
          v11 = v31;
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
      goto LABEL_74;
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
    inited = PiDevCfgFindDeviceMigrationNode(v34, a2, Handle, 70145LL, &v31);
    ZwClose(Handle);
    v19 = 0LL;
    if ( inited >= 0 )
    {
      v11 = v31;
      goto LABEL_45;
    }
    v31 = 0LL;
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
    v23 = *(_DWORD *)(v11 + 16);
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
      if ( IopGetRegistryValue(*(HANDLE *)(v11 + 40), L"ConfigFlags", 0, &v33) >= 0 )
      {
        if ( PnpValidateRegistryDword(v33) )
          v30 = *(unsigned int *)((char *)v24 + v24[2]);
        ExFreePoolWithTag(v24, 0);
      }
      v25 = *(_QWORD *)(a2 + 16);
      v26 = *(_QWORD *)(a2 + 8);
      LODWORD(a5) = 0;
      if ( (unsigned int)PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v26,
                           1u,
                           v25,
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
          PiDevCfgSetDeviceRegProp(v27, a2, 9u, 1, *((_QWORD *)a3 + 1), *a3 + 2);
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
            (unsigned int *)(v11 + 80),
            16);
      }
      inited = PiDevCfgConfigureDeviceDriverConfiguration(a1, a2, *(_QWORD *)(v11 + 40), -1, (__int64)v10, v12);
      if ( inited >= 0 )
      {
        if ( v10 )
          *v10 |= v30;
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          (_BYTE *)a2,
          *(const WCHAR **)(a2 + 8),
          1,
          *(_QWORD *)(a2 + 16),
          v29,
          (__int64)&DEVPKEY_Device_MigrationRank,
          9,
          (unsigned int *)(v11 + 184),
          8);
      }
    }
    PiDevCfgLogDeviceMigrated(a2, v11, (unsigned int)inited);
    if ( (*(_DWORD *)(v11 + 16) & 1) == 0 )
      PiDevCfgClearDeviceMigrationNode(v34, *(_QWORD *)(v11 + 32));
    if ( wcsicmp(*(const wchar_t **)(a2 + 8), *(const wchar_t **)(v11 + 32)) )
      goto LABEL_74;
LABEL_75:
    if ( v11 )
      PiDevCfgFreeDeviceMigrationNode(v11);
  }
LABEL_8:
  PiDevCfgFreeMigrationContext(v34);
  return (unsigned int)inited;
}
