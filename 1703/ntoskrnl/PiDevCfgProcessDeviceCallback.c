/*
 * XREFs of PiDevCfgProcessDeviceCallback @ 0x1405C1710
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14055947C (PiDevCfgFreeDeviceContext.c)
 *     PnpSetTargetDeviceRemove @ 0x14056E408 (PnpSetTargetDeviceRemove.c)
 *     PiDevCfgInitDeviceContext @ 0x14058EA58 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14058EC68 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140698E74 (PiDevCfgCheckDeviceNeedsUpdate.c)
 */

__int64 __fastcall PiDevCfgProcessDeviceCallback(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdx
  unsigned int v4; // eax
  __int64 v6; // rcx
  unsigned int v7; // edx
  int v8; // eax
  _QWORD *v9; // rcx
  int v10; // [rsp+70h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v12[12]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v13; // [rsp+F0h] [rbp+67h] BYREF
  int v14; // [rsp+100h] [rbp+77h] BYREF
  int v15; // [rsp+108h] [rbp+7Fh] BYREF

  LODWORD(v12[0]) = 0;
  memset(&v12[1], 0, 0x40uLL);
  v2 = (*(_DWORD *)(a1 + 704) & 0x1000) == 0;
  Handle = 0LL;
  v13 = 0;
  v10 = 0;
  v15 = 1;
  v14 = 0;
  if ( !v2
    && *(_QWORD *)(a1 + 48)
    && (int)CmOpenDeviceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 48),
              0x10u,
              0,
              983103,
              0,
              (__int64)&Handle,
              0LL) >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    v14 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v3,
                (__int64)Handle,
                11,
                (__int64)&v15,
                (__int64)&v13,
                (__int64)&v14,
                0) >= 0
      && v15 == 4
      && v14 == 4 )
    {
      v4 = v13;
    }
    else
    {
      v4 = 0;
      v13 = 0;
    }
    if ( (v4 & 0x40000) != 0 )
    {
      if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), (__int64)Handle, v12) < 0 )
        goto LABEL_10;
      LOBYTE(v6) = (PiDevCfgFlags & 2) != 0;
      if ( ((unsigned __int8)v6 & ((v13 & 0x400) != 0)) != 0 )
      {
        v7 = v13 & 0xFFFFFFDF;
      }
      else
      {
        v8 = PiDevCfgCheckDeviceNeedsUpdate(v12, &v10);
        v7 = v13;
        if ( v8 >= 0 )
          v7 = v10 | v13;
      }
      v13 = v7 & 0xFFFBFFFF;
      PiDevCfgSetDeviceRegProp(v6, (__int64)v12, 0xBu, 4, (__int64)&v13, 4);
      LOBYTE(v4) = v13;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v9 = *(_QWORD **)(a1 + 32);
      if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
      {
        PnpRequestDeviceAction(v9, 1, 1, 0LL, 0LL, 0LL, 0LL);
        PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        PnpSetTargetDeviceRemove(v9, 0, 0, 0, 0, 18, -1073740651, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
LABEL_10:
  PiDevCfgFreeDeviceContext((__int64)v12);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
