/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x14069F1F4
 * Callers:
 *     PiConfigureDevice @ 0x1406A69EC (PiConfigureDevice.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlQueryInfoKey @ 0x14044A174 (_RegRtlQueryInfoKey.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404840A0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpOpenObjectRegKey @ 0x140487A28 (_PnpOpenObjectRegKey.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PiDevCfgFreeDeviceContext @ 0x14055947C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x14058EA58 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14058EC68 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14069BB20 (PiDevCfgResetDeviceDriverSettings.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // r14
  int inited; // esi
  char *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  UNICODE_STRING *p_GuidString; // r8
  int v8; // eax
  int v9; // r13d
  GUID *p_Guid; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  PVOID PoolWithTag; // rdi
  unsigned int v14; // r12d
  unsigned int v15; // r8d
  int v16; // eax
  unsigned __int64 v17; // rsi
  ULONG v18; // r15d
  int v19; // eax
  unsigned __int64 v20; // r14
  void *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v25; // r8d
  int v26; // eax
  unsigned __int64 v27; // rsi
  ULONG v28; // r15d
  int v29; // eax
  unsigned __int64 v30; // r14
  PVOID v31; // rdi
  unsigned int v32; // r12d
  unsigned int v33; // r8d
  int v34; // eax
  unsigned __int64 v35; // rsi
  ULONG v36; // r15d
  int v37; // eax
  unsigned __int64 v38; // r14
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  int ObjectProperties; // [rsp+44h] [rbp-BCh]
  unsigned __int64 LowLimit; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 HighLimit; // [rsp+58h] [rbp-A8h] BYREF
  char *v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h]
  unsigned __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING GuidString; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v52; // [rsp+A0h] [rbp-60h] BYREF
  int v53[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v54[6]; // [rsp+B0h] [rbp-50h] BYREF
  int v55[20]; // [rsp+E0h] [rbp-20h] BYREF
  GUID Guid; // [rsp+130h] [rbp+30h] BYREF

  v1 = 0;
  v49 = a1;
  v2 = a1;
  v55[0] = 0;
  memset(&v55[2], 0, 0x40uLL);
  *(_QWORD *)v53 = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v42 = 0;
  v39 = 0;
  v46 = 1;
  v43 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_63;
  }
  if ( !*(_QWORD *)(v2 + 48) )
  {
    inited = -1073741808;
    goto LABEL_63;
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(v2 + 48), 0LL, v55);
  if ( inited >= 0 )
  {
    v4 = *(char **)&v55[4];
    v45 = *(char **)&v55[4];
    memset(v54, 0, 0x28uLL);
    v5 = *(_QWORD *)(v2 + 48);
    v54[0] = &DEVPKEY_Device_ClassGuid;
    v54[2] = &Guid;
    LODWORD(v54[1]) = 13;
    LODWORD(v54[3]) = 16;
    ObjectProperties = PiDevCfgQueryObjectProperties(v6, v5, 1u, *(void **)&v55[4], (__int64)v54, 1u);
    inited = ObjectProperties;
    if ( ObjectProperties >= 0 )
    {
      if ( SLODWORD(v54[4]) >= 0 )
      {
        ObjectProperties = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        inited = ObjectProperties;
        if ( ObjectProperties < 0 )
          goto LABEL_63;
        if ( (int)PnpOpenObjectRegKey(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)GuidString.Buffer,
                    2u,
                    131097,
                    0,
                    (__int64)v53,
                    0LL,
                    0) >= 0 )
        {
LABEL_12:
          p_GuidString = &GuidString;
          if ( !GuidString.Buffer )
            p_GuidString = 0LL;
          v8 = PiDevCfgMigrateDevice(v2, (__int64)v55, &p_GuidString->Length, 0LL, &v39, 0LL);
          v9 = v39;
          p_Guid = &Guid;
          if ( v8 < 0 )
            v9 = 0;
          v39 = v9;
          if ( !GuidString.Buffer )
            p_Guid = 0LL;
          PiDevCfgResetDeviceDriverSettings(v2, (__int64)v55, p_Guid, *(__int64 *)v53, 0LL);
          if ( *(_QWORD *)&PiPnpRtlCtx )
          {
            v11 = **(_QWORD **)&PiPnpRtlCtx;
            if ( **(_QWORD **)&PiPnpRtlCtx )
            {
              v12 = *(_QWORD *)(v11 + 8);
              PoolWithTag = 0LL;
              v14 = 0;
              if ( *(_BYTE *)(v11 + 16) )
              {
                v50 = *(_QWORD *)(v11 + 8);
                Handle = 0LL;
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit < 0x400
                  || (int)RegRtlOpenKeyTransacted(v4, L"Devices", 0, 0x3001Fu, &Handle, v12) < 0 )
                {
LABEL_52:
                  v21 = Handle;
                  if ( !Handle )
                  {
LABEL_54:
                    if ( PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    v2 = v49;
LABEL_57:
                    if ( v9 )
                    {
                      v22 = *(_QWORD *)(v2 + 48);
                      v43 = 4;
                      if ( (int)CmGetDeviceRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  v22,
                                  (__int64)v4,
                                  11,
                                  (__int64)&v46,
                                  (__int64)&v42,
                                  (__int64)&v43,
                                  0) >= 0
                        && v46 == 4
                        && v43 == 4 )
                      {
                        v1 = v42;
                      }
                      v42 = v9 | v1;
                      PiDevCfgSetDeviceRegProp(v23, (__int64)v55, 0xBu, 4, (__int64)&v42, 4);
                    }
                    goto LABEL_63;
                  }
LABEL_53:
                  ZwClose(v21);
                  goto LABEL_54;
                }
                if ( (unsigned int)RegRtlQueryInfoKey(Handle, 0LL, (unsigned int *)&LowLimit, 0LL, 0LL, 0LL) )
                {
                  LODWORD(v17) = 0;
                }
                else
                {
                  v15 = LowLimit;
                  if ( (_DWORD)LowLimit )
                  {
                    v16 = -1;
                    if ( (int)LowLimit + 1 >= (unsigned int)LowLimit )
                      v16 = LowLimit + 1;
                    v15 = v16;
                    if ( (int)LowLimit + 1 < (unsigned int)LowLimit )
                      goto LABEL_51;
                  }
                  v17 = 2LL * v15;
                  if ( v17 > 0xFFFFFFFF
                    || (_DWORD)v17
                    && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v17, 0x4C474552u)) == 0LL )
                  {
LABEL_50:
                    inited = ObjectProperties;
LABEL_51:
                    v9 = v39;
                    goto LABEL_52;
                  }
                }
LABEL_33:
                while ( 1 )
                {
                  v18 = 0;
                  while ( 1 )
                  {
                    LODWORD(LowLimit) = (unsigned int)v17 >> 1;
                    v19 = RegRtlEnumKey(Handle, v18, (unsigned int *)PoolWithTag, (unsigned int *)&LowLimit);
                    if ( v19 == -2147483622 || v19 == -1073741444 )
                      break;
                    if ( v19 == -1073741789 )
                    {
                      v20 = 2LL * (unsigned int)LowLimit;
                      if ( v20 > 0xFFFFFFFF )
                        goto LABEL_49;
                      LODWORD(v17) = 2 * LowLimit;
                      if ( PoolWithTag )
                        ExFreePoolWithTag(PoolWithTag, 0);
                      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v20, 0x4C474552u);
                      if ( !PoolWithTag )
                        goto LABEL_49;
                      v12 = v50;
                    }
                    else
                    {
                      if ( v19 )
                        break;
                      *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v17 >> 1) - 1) = 0;
                      if ( !(unsigned int)RegRtlDeleteTreeInternal((char *)Handle, (const WCHAR *)PoolWithTag, v12, 0) )
                        goto LABEL_33;
                      ++v18;
                    }
                  }
                  if ( (unsigned int)RegRtlDeleteKeyTransacted(v45, L"Devices", v12) != -1073741535 || v18 || v14 >= 0xA )
                    break;
                  ++v14;
                }
LABEL_49:
                v4 = v45;
                goto LABEL_50;
              }
              v52 = *(_QWORD *)(v11 + 8);
              HighLimit = 0LL;
              IoGetStackLimits(&LowLimit, &v50);
              if ( (unsigned __int64)&v50 - LowLimit < 0x400
                || (int)RegRtlOpenKeyTransacted(v4, L"Devices", 0, 0x3001Fu, (PHANDLE)&HighLimit, v12) < 0 )
              {
LABEL_95:
                v21 = (void *)HighLimit;
                if ( !HighLimit )
                  goto LABEL_54;
                goto LABEL_53;
              }
              if ( (unsigned int)RegRtlQueryInfoKey((void *)HighLimit, 0LL, (unsigned int *)&LowLimit, 0LL, 0LL, 0LL) )
              {
                LODWORD(v27) = 0;
              }
              else
              {
                v25 = LowLimit;
                if ( (_DWORD)LowLimit )
                {
                  v26 = -1;
                  if ( (int)LowLimit + 1 >= (unsigned int)LowLimit )
                    v26 = LowLimit + 1;
                  v25 = v26;
                  if ( (int)LowLimit + 1 < (unsigned int)LowLimit )
                    goto LABEL_94;
                }
                v27 = 2LL * v25;
                if ( v27 > 0xFFFFFFFF
                  || (_DWORD)v27
                  && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v27, 0x4C474552u)) == 0LL )
                {
LABEL_93:
                  inited = ObjectProperties;
LABEL_94:
                  v9 = v39;
                  goto LABEL_95;
                }
              }
LABEL_76:
              while ( 1 )
              {
                v28 = 0;
                while ( 1 )
                {
                  LODWORD(LowLimit) = (unsigned int)v27 >> 1;
                  v29 = RegRtlEnumKey((void *)HighLimit, v28, (unsigned int *)PoolWithTag, (unsigned int *)&LowLimit);
                  if ( v29 == -2147483622 || v29 == -1073741444 )
                    break;
                  if ( v29 == -1073741789 )
                  {
                    v30 = 2LL * (unsigned int)LowLimit;
                    if ( v30 > 0xFFFFFFFF )
                      goto LABEL_92;
                    LODWORD(v27) = 2 * LowLimit;
                    if ( PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v30, 0x4C474552u);
                    if ( !PoolWithTag )
                      goto LABEL_92;
                    v12 = v52;
                  }
                  else
                  {
                    if ( v29 )
                      break;
                    *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v27 >> 1) - 1) = 0;
                    if ( !(unsigned int)RegRtlDeleteTreeInternal((char *)HighLimit, (const WCHAR *)PoolWithTag, v12, 0) )
                      goto LABEL_76;
                    ++v28;
                  }
                }
                if ( (unsigned int)RegRtlDeleteKeyTransacted(v45, L"Devices", v12) != -1073741535 || v28 || v14 >= 0xA )
                  break;
                ++v14;
              }
LABEL_92:
              v4 = v45;
              goto LABEL_93;
            }
          }
          v48 = 0LL;
          v31 = 0LL;
          v32 = 0;
          IoGetStackLimits(&v50, &v52);
          if ( (unsigned __int64)&v53[-2] - v50 < 0x400
            || (int)RegRtlOpenKeyTransacted(v4, L"Devices", 0, 0x3001Fu, &v48, 0LL) < 0 )
          {
LABEL_120:
            if ( v48 )
              ZwClose(v48);
            if ( v31 )
              ExFreePoolWithTag(v31, 0);
            goto LABEL_57;
          }
          if ( (unsigned int)RegRtlQueryInfoKey(v48, 0LL, (unsigned int *)&LowLimit, 0LL, 0LL, 0LL) )
          {
            LODWORD(v35) = 0;
          }
          else
          {
            v33 = LowLimit;
            if ( (_DWORD)LowLimit )
            {
              v34 = -1;
              if ( (int)LowLimit + 1 >= (unsigned int)LowLimit )
                v34 = LowLimit + 1;
              v33 = v34;
              if ( (int)LowLimit + 1 < (unsigned int)LowLimit )
                goto LABEL_119;
            }
            v35 = 2LL * v33;
            if ( v35 > 0xFFFFFFFF
              || (_DWORD)v35 && (v31 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v35, 0x4C474552u)) == 0LL )
            {
LABEL_118:
              inited = ObjectProperties;
LABEL_119:
              v9 = v39;
              goto LABEL_120;
            }
          }
LABEL_109:
          while ( 1 )
          {
            v36 = 0;
            while ( 1 )
            {
              LODWORD(LowLimit) = (unsigned int)v35 >> 1;
              v37 = RegRtlEnumKey(v48, v36, (unsigned int *)v31, (unsigned int *)&LowLimit);
              if ( v37 == -2147483622 || v37 == -1073741444 )
                break;
              if ( v37 == -1073741789 )
              {
                v38 = 2LL * (unsigned int)LowLimit;
                if ( v38 > 0xFFFFFFFF )
                  goto LABEL_117;
                LODWORD(v35) = 2 * LowLimit;
                if ( v31 )
                  ExFreePoolWithTag(v31, 0);
                v31 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v38, 0x4C474552u);
                if ( !v31 )
                  goto LABEL_117;
              }
              else
              {
                if ( v37 )
                  break;
                *((_WORD *)v31 + ((unsigned __int64)(unsigned int)v35 >> 1) - 1) = 0;
                if ( !(unsigned int)RegRtlDeleteTreeInternal((char *)v48, (const WCHAR *)v31, 0LL, 0) )
                  goto LABEL_109;
                ++v36;
              }
            }
            if ( (unsigned int)RegRtlDeleteKeyTransacted(v45, L"Devices", 0LL) != -1073741535 || v36 || v32 >= 0xA )
              break;
            ++v32;
          }
LABEL_117:
          v4 = v45;
          v2 = v49;
          goto LABEL_118;
        }
        RtlFreeUnicodeString(&GuidString);
      }
      *(_QWORD *)Guid.Data4 = 0LL;
      *(_QWORD *)&Guid.Data1 = 0LL;
      goto LABEL_12;
    }
  }
LABEL_63:
  RtlFreeUnicodeString(&GuidString);
  PiDevCfgFreeDeviceContext((__int64)v55);
  return (unsigned int)inited;
}
