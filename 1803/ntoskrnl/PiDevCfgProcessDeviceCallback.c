/*
 * XREFs of PiDevCfgProcessDeviceCallback @ 0x1406433E0
 * Callers:
 *     <none>
 * Callees:
 *     PipAreDriversLoaded @ 0x14006EB44 (PipAreDriversLoaded.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     PnpDuplicateUnicodeString @ 0x140147994 (PnpDuplicateUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     PnpSetTargetDeviceRemove @ 0x1405C766C (PnpSetTargetDeviceRemove.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405D7334 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1405D7378 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1405DA00C (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072B048 (PiDevCfgCheckDeviceNeedsUpdate.c)
 */

__int64 __fastcall PiDevCfgProcessDeviceCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  bool v5; // zf
  __int64 v6; // rdx
  unsigned int v7; // r8d
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r8d
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rax
  HANDLE Handle[2]; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v18[16]; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v19; // [rsp+110h] [rbp+67h] BYREF
  int v20; // [rsp+118h] [rbp+6Fh] BYREF
  int v21; // [rsp+120h] [rbp+77h] BYREF
  int v22; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = 0LL;
  memset(v18, 0, 0x48uLL);
  v5 = (*(_DWORD *)(a1 + 704) & 0x1000) == 0;
  Handle[0] = 0LL;
  v19 = 0;
  v22 = 0;
  v21 = 1;
  v20 = 0;
  if ( v5
    || !*(_QWORD *)(a1 + 48)
    || (int)CmOpenDeviceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 48),
              0x10u,
              0,
              983103,
              0,
              (__int64)Handle,
              0LL) < 0 )
  {
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(a1 + 48);
  v20 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v6,
              (__int64)Handle[0],
              11,
              (__int64)&v21,
              (__int64)&v19,
              (__int64)&v20,
              0) >= 0
    && v21 == 4
    && v20 == 4 )
  {
    v7 = v19;
  }
  else
  {
    v7 = 0;
    v19 = 0;
  }
  if ( (v7 & 0x40000) != 0 )
  {
    if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), (__int64)Handle[0], v18) < 0 )
      goto LABEL_11;
    LOBYTE(v10) = (PiDevCfgFlags & 2) != 0;
    if ( ((unsigned __int8)v10 & ((v19 & 0x400) != 0)) != 0 )
    {
      v11 = v19 & 0xFFFFFFDF;
    }
    else
    {
      v12 = PiDevCfgCheckDeviceNeedsUpdate(v18, &v22);
      v11 = v19;
      if ( v12 >= 0 )
        v11 = v22 | v19;
    }
    v19 = v11 & 0xFFFBFFFF;
    PiDevCfgSetDeviceRegProp(v10, (__int64)v18, 0xBu, 4, (__int64)&v19, 4);
    LOBYTE(v7) = v19;
  }
  if ( (v7 & 2) == 0 )
  {
    if ( (v7 & 0x20) == 0 )
      goto LABEL_11;
    v9 = *(_QWORD **)(a1 + 32);
    if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
    {
      PnpRequestDeviceAction(v9, 1, 1, 0LL, 0LL, 0LL, 0LL);
      PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_11;
    }
    PnpSetTargetDeviceRemove(v9, 0, 0, 0, 0, 18, -1073740651, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_31;
  }
  if ( (unsigned int)PipAreDriversLoaded(a1) )
  {
    v19 = v14 & 0xFFFFFFFD;
    PiDevCfgSetDeviceRegProp(v13, (__int64)v18, 0xBu, 4, (__int64)&v19, 4);
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x63647050u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    if ( !PnpDuplicateUnicodeString((__int64)(v4 + 2), a1 + 40) )
    {
LABEL_31:
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      goto LABEL_11;
    }
    v16 = *(_QWORD **)(a2 + 8);
    if ( *v16 != a2 )
      __fastfail(3u);
    *v4 = a2;
    v4[1] = v16;
    *v16 = v4;
    *(_QWORD *)(a2 + 8) = v4;
  }
LABEL_11:
  PiDevCfgFreeDeviceContext((__int64)v18);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 0LL;
}
