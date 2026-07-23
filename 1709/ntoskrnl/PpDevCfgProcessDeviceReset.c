/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x14044EE8C
 * Callers:
 *     PiConfigureDevice @ 0x14044EA84 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8 (PiDevCfgResetDeviceDriverSettings.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgInitDeviceContext @ 0x14058AA6C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDeviceContext @ 0x14058B72C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14059BF64 (PiDevCfgSetDeviceRegProp.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int v1; // ebx
  NTSTATUS inited; // edi
  __int64 v4; // r14
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // eax
  int v8; // r15d
  __int64 v9; // r8
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // [rsp+48h] [rbp-79h] BYREF
  int v14; // [rsp+4Ch] [rbp-75h] BYREF
  int v15; // [rsp+50h] [rbp-71h] BYREF
  int v16; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-69h] BYREF
  int v18[2]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v19[5]; // [rsp+70h] [rbp-51h] BYREF
  int v20[20]; // [rsp+98h] [rbp-29h] BYREF
  GUID Guid; // [rsp+E8h] [rbp+27h] BYREF

  v1 = 0;
  v20[0] = 0;
  memset(&v20[2], 0, 0x40uLL);
  v16 = 1;
  *(_QWORD *)v18 = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v13 = 0;
  v15 = 0;
  v14 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_14;
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v20);
  if ( inited >= 0 )
  {
    v4 = *(_QWORD *)&v20[4];
    memset(v19, 0, sizeof(v19));
    v5 = *(_QWORD *)(a1 + 48);
    v19[0] = &DEVPKEY_Device_ClassGuid;
    v19[2] = &Guid;
    LODWORD(v19[1]) = 13;
    LODWORD(v19[3]) = 16;
    inited = PiDevCfgQueryObjectProperties(v6, v5, 1, v20[4], (__int64)v19, 1);
    if ( inited >= 0 )
    {
      if ( SLODWORD(v19[4]) >= 0 )
      {
        inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        if ( inited < 0 )
          goto LABEL_14;
        if ( (int)PnpOpenObjectRegKey(PiPnpRtlCtx, GuidString.Buffer, 2, 131097, 0, (__int64)v18, 0LL, 0) >= 0 )
          goto LABEL_8;
        RtlFreeUnicodeString(&GuidString);
      }
      *(_QWORD *)Guid.Data4 = 0LL;
      *(_QWORD *)&Guid.Data1 = 0LL;
LABEL_8:
      v7 = PiDevCfgMigrateDevice(
             a1,
             v20,
             (unsigned __int64)&GuidString & -(__int64)(GuidString.Buffer != 0LL),
             0LL,
             &v15,
             0LL);
      v8 = v15;
      if ( v7 < 0 )
        v8 = 0;
      PiDevCfgResetDeviceDriverSettings(
        a1,
        (int)v20,
        (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
        v18[0],
        0LL);
      if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
        v9 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
      else
        v9 = 0LL;
      RegRtlDeleteTreeInternal(v4, L"Devices", v9, 0LL);
      if ( v8 )
      {
        v11 = *(_QWORD *)(a1 + 48);
        v14 = 4;
        if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v11, v4, 11, (__int64)&v16, (__int64)&v13, (__int64)&v14, 0) >= 0
          && v16 == 4
          && v14 == 4 )
        {
          v1 = v13;
        }
        v13 = v8 | v1;
        PiDevCfgSetDeviceRegProp(v12, (unsigned int)v20, 11, 4, (__int64)&v13, 4);
      }
    }
  }
LABEL_14:
  RtlFreeUnicodeString(&GuidString);
  PiDevCfgFreeDeviceContext(v20);
  return (unsigned int)inited;
}
