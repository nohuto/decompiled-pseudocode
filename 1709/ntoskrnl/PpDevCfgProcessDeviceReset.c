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
  int inited; // edi
  __int64 v4; // r14
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r8
  int v8; // eax
  int v9; // r15d
  __int64 v10; // r8
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // [rsp+48h] [rbp-79h] BYREF
  int v15; // [rsp+4Ch] [rbp-75h] BYREF
  int v16; // [rsp+50h] [rbp-71h] BYREF
  int v17; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-69h] BYREF
  __int64 v19; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v20[5]; // [rsp+70h] [rbp-51h] BYREF
  _QWORD v21[10]; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v22[2]; // [rsp+E8h] [rbp+27h] BYREF

  v1 = 0;
  LODWORD(v21[0]) = 0;
  memset(&v21[1], 0, 0x40uLL);
  v17 = 1;
  v19 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v14 = 0;
  v16 = 0;
  v15 = 0;
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
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v21);
  if ( inited >= 0 )
  {
    v4 = v21[2];
    memset(v20, 0, sizeof(v20));
    v5 = *(_QWORD *)(a1 + 48);
    v20[0] = &DEVPKEY_Device_ClassGuid;
    v20[2] = v22;
    LODWORD(v20[1]) = 13;
    LODWORD(v20[3]) = 16;
    inited = PiDevCfgQueryObjectProperties(v6, v5, 1, v21[2], (__int64)v20, 1);
    if ( inited >= 0 )
    {
      if ( SLODWORD(v20[4]) >= 0 )
      {
        LOBYTE(v7) = 1;
        inited = RtlStringFromGUIDEx(v22, &UnicodeString, v7);
        if ( inited < 0 )
          goto LABEL_14;
        if ( (int)PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 2, 131097, 0, (__int64)&v19, 0LL, 0) >= 0 )
          goto LABEL_8;
        RtlFreeUnicodeString(&UnicodeString);
      }
      v22[1] = 0LL;
      v22[0] = 0LL;
LABEL_8:
      v8 = PiDevCfgMigrateDevice(
             a1,
             v21,
             (unsigned __int64)&UnicodeString & -(__int64)(UnicodeString.Buffer != 0LL),
             0LL,
             &v16,
             0LL);
      v9 = v16;
      if ( v8 < 0 )
        v9 = 0;
      PiDevCfgResetDeviceDriverSettings(
        a1,
        (unsigned int)v21,
        (unsigned __int64)v22 & -(__int64)(UnicodeString.Buffer != 0LL),
        v19,
        0LL);
      if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
        v10 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
      else
        v10 = 0LL;
      RegRtlDeleteTreeInternal(v4, L"Devices", v10, 0LL);
      if ( v9 )
      {
        v12 = *(_QWORD *)(a1 + 48);
        v15 = 4;
        if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v12, v4, 11, (__int64)&v17, (__int64)&v14, (__int64)&v15, 0) >= 0
          && v17 == 4
          && v15 == 4 )
        {
          v1 = v14;
        }
        v14 = v9 | v1;
        PiDevCfgSetDeviceRegProp(v13, (unsigned int)v21, 11, 4, (__int64)&v14, 4);
      }
    }
  }
LABEL_14:
  RtlFreeUnicodeString(&UnicodeString);
  PiDevCfgFreeDeviceContext(v21);
  return (unsigned int)inited;
}
