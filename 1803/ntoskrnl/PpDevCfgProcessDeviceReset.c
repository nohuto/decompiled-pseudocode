/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x14073174C
 * Callers:
 *     PiConfigureDevice @ 0x140739518 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     _PnpOpenObjectRegKey @ 0x1405038FC (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405D7334 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1405D7378 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1405DA00C (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgMigrateDevice @ 0x1405E6DB0 (PiDevCfgMigrateDevice.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072E24C (PiDevCfgResetDeviceDriverSettings.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int v2; // ebx
  int inited; // edi
  char *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // [rsp+48h] [rbp-79h] BYREF
  int v15; // [rsp+4Ch] [rbp-75h] BYREF
  int v16; // [rsp+50h] [rbp-71h] BYREF
  int v17; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-69h] BYREF
  int v19[2]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v20[5]; // [rsp+70h] [rbp-51h] BYREF
  int v21[20]; // [rsp+98h] [rbp-29h] BYREF
  GUID Guid; // [rsp+E8h] [rbp+27h] BYREF

  memset(v21, 0, 0x48uLL);
  v2 = 0;
  *(_QWORD *)v19 = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v17 = 1;
  v14 = 0;
  v16 = 0;
  v15 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_24;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_24;
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v21);
  if ( inited >= 0 )
  {
    v4 = *(char **)&v21[4];
    memset(v20, 0, sizeof(v20));
    v5 = *(_QWORD *)(a1 + 48);
    v20[0] = &DEVPKEY_Device_ClassGuid;
    v20[2] = &Guid;
    LODWORD(v20[1]) = 13;
    LODWORD(v20[3]) = 16;
    inited = PiDevCfgQueryObjectProperties(v6, v5, 1u, *(void **)&v21[4], (__int64)v20, 1u);
    if ( inited >= 0 )
    {
      if ( SLODWORD(v20[4]) >= 0 )
      {
        inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        if ( inited < 0 )
          goto LABEL_24;
        if ( (int)PnpOpenObjectRegKey(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)GuidString.Buffer,
                    2u,
                    131097,
                    0,
                    (__int64)v19,
                    0LL,
                    0) >= 0 )
          goto LABEL_12;
        RtlFreeAnsiString(&GuidString);
      }
      *(_QWORD *)Guid.Data4 = 0LL;
      *(_QWORD *)&Guid.Data1 = 0LL;
LABEL_12:
      v7 = PiDevCfgMigrateDevice(
             a1,
             (__int64)v21,
             (unsigned __int16 *)((unsigned __int64)&GuidString & -(__int64)(GuidString.Buffer != 0LL)),
             0LL,
             &v16,
             0LL);
      v8 = v16;
      if ( v7 < 0 )
        v8 = 0;
      PiDevCfgResetDeviceDriverSettings(
        a1,
        (__int64)v21,
        (_QWORD *)((unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL)),
        *(__int64 *)v19,
        0LL);
      if ( *(_QWORD *)&PiPnpRtlCtx && (v9 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v10 = *(_QWORD *)(v9 + 8);
      else
        v10 = 0LL;
      RegRtlDeleteTreeInternal(v4, L"Devices", v10, 0);
      if ( v8 )
      {
        v11 = *(_QWORD *)(a1 + 48);
        v15 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v11,
                    (__int64)v4,
                    11,
                    (__int64)&v17,
                    (__int64)&v14,
                    (__int64)&v15,
                    0) >= 0
          && v17 == 4
          && v15 == 4 )
        {
          v2 = v14;
        }
        v14 = v8 | v2;
        PiDevCfgSetDeviceRegProp(v12, (__int64)v21, 0xBu, 4, (__int64)&v14, 4);
      }
    }
  }
LABEL_24:
  RtlFreeAnsiString(&GuidString);
  PiDevCfgFreeDeviceContext((__int64)v21);
  return (unsigned int)inited;
}
