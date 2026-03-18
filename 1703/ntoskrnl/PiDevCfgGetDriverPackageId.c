/*
 * XREFs of PiDevCfgGetDriverPackageId @ 0x14058FA6C
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x14058F3B8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140698E74 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14069B1C8 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x140487A28 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgGetDriverPackageId(__int64 a1, __int64 a2)
{
  int v3; // edi
  int ObjectProperties; // ebx
  int v5; // ecx
  _QWORD v7[6]; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF

  v3 = a1;
  Handle = 0LL;
  ObjectProperties = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 8u, 131097, 0, (__int64)&Handle, 0LL, 0);
  if ( ObjectProperties >= 0 )
  {
    memset(v7, 0, 0x28uLL);
    v7[0] = &DEVPKEY_DriverInfFile_ActiveDriverPackage;
    LODWORD(v7[1]) = 18;
    v7[2] = a2;
    HIDWORD(v7[3]) = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(v5, v3, 8, (_DWORD)Handle, (__int64)v7, 1);
    if ( ObjectProperties >= 0 && SLODWORD(v7[4]) < 0 )
      ObjectProperties = v7[4];
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperties;
}
