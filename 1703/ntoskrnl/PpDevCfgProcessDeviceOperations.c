/*
 * XREFs of PpDevCfgProcessDeviceOperations @ 0x140559390
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlQueryInfoKey @ 0x14044A174 (_RegRtlQueryInfoKey.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404840A0 (_RegRtlOpenKeyTransacted.c)
 *     PiDevCfgFreeDeviceContext @ 0x14055947C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x14058EA58 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14058EC68 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140592E90 (PiDevCfgConfigureDeviceKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceOperations(unsigned __int64 a1, void *a2)
{
  int v2; // ebx
  unsigned __int64 v4; // rsi
  NTSTATUS v5; // eax
  int inited; // edi
  __int64 v8; // rax
  __int64 v9; // r15
  PVOID PoolWithTag; // r12
  unsigned int v11; // r8d
  int v12; // eax
  unsigned __int64 v13; // r15
  __int64 v14; // rsi
  unsigned int v15; // r13d
  int v16; // eax
  unsigned __int64 v17; // r13
  void *v18; // rcx
  void *v19; // rcx
  unsigned int v20; // r8d
  int v21; // eax
  unsigned __int64 v22; // r15
  __int64 v23; // rsi
  unsigned int v24; // r13d
  int v25; // eax
  unsigned __int64 v26; // r13
  PVOID v27; // r15
  unsigned int v28; // r8d
  int v29; // eax
  unsigned __int64 v30; // r12
  int v31; // r15d
  __int64 v32; // rdx
  int v33; // ecx
  unsigned int v34; // r13d
  int v35; // eax
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 LowLimit; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE v44; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  int v47; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v48; // [rsp+90h] [rbp-70h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v50[20]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v51; // [rsp+160h] [rbp+60h] BYREF
  int v52; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 HighLimit; // [rsp+178h] [rbp+78h] BYREF

  v51 = a1;
  v2 = 0;
  v4 = a1;
  KeyHandle = 0LL;
  v50[0] = 0;
  memset(&v50[2], 0, 0x40uLL);
  v52 = 0;
  v41 = 0;
  v42 = 0;
  v38 = 0;
  if ( !*(_QWORD *)(v4 + 48) )
  {
    inited = -1073741808;
    goto LABEL_6;
  }
  v47 = 2752552;
  KeyHandle = 0LL;
  v48 = L"PendingConfiguration";
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v47;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  inited = v5;
  if ( v5 == -1073741772 )
  {
    inited = 0;
    goto LABEL_4;
  }
  if ( v5 >= 0 )
  {
    inited = PiDevCfgInitDeviceContext(*(_QWORD *)(v4 + 48), a2, v50);
    if ( inited >= 0 )
    {
      inited = PiDevCfgConfigureDeviceKeys(v4, (unsigned int)v50, (_DWORD)KeyHandle, -1, (__int64)&v41, 0LL);
      if ( inited >= 0 )
      {
        if ( *(_QWORD *)&PiPnpRtlCtx )
        {
          v8 = **(_QWORD **)&PiPnpRtlCtx;
          if ( **(_QWORD **)&PiPnpRtlCtx )
          {
            v9 = *(_QWORD *)(v8 + 8);
            PoolWithTag = 0LL;
            if ( *(_BYTE *)(v8 + 16) )
            {
              v39 = *(_QWORD *)(v8 + 8);
              Handle = 0LL;
              LODWORD(v37) = 0;
              IoGetStackLimits(&LowLimit, &HighLimit);
              if ( (unsigned __int64)&HighLimit - LowLimit < 0x400
                || (int)RegRtlOpenKeyTransacted((char *)a2, L"PendingConfiguration", 0, 0x3001Fu, &Handle, v9) < 0 )
              {
                goto LABEL_44;
              }
              if ( (unsigned int)RegRtlQueryInfoKey(Handle, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL) )
              {
                LODWORD(v13) = 0;
              }
              else
              {
                v11 = HighLimit;
                if ( (_DWORD)HighLimit )
                {
                  v12 = -1;
                  if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
                    v12 = HighLimit + 1;
                  v11 = v12;
                  if ( (int)HighLimit + 1 < (unsigned int)HighLimit )
                    goto LABEL_44;
                }
                v13 = 2LL * v11;
                if ( v13 > 0xFFFFFFFF )
                  goto LABEL_44;
                if ( (_DWORD)v13 )
                {
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x4C474552u);
                  if ( !PoolWithTag )
                    goto LABEL_44;
                }
              }
              v14 = v39;
LABEL_27:
              while ( 1 )
              {
                LODWORD(HighLimit) = 0;
                v15 = 0;
                while ( 1 )
                {
                  LODWORD(v39) = (unsigned int)v13 >> 1;
                  v16 = RegRtlEnumKey(Handle, v15, PoolWithTag, &v39);
                  if ( v16 == -2147483622 || v16 == -1073741444 )
                    break;
                  if ( v16 == -1073741789 )
                  {
                    v17 = 2LL * (unsigned int)v39;
                    if ( v17 > 0xFFFFFFFF )
                      goto LABEL_43;
                    LODWORD(v13) = 2 * v39;
                    if ( PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v17, 0x4C474552u);
                    if ( !PoolWithTag )
                      goto LABEL_43;
                    v15 = HighLimit;
                  }
                  else
                  {
                    if ( v16 )
                      break;
                    *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v13 >> 1) - 1) = 0;
                    if ( !(unsigned int)RegRtlDeleteTreeInternal(Handle, PoolWithTag, v14, 0LL) )
                      goto LABEL_27;
                    LODWORD(HighLimit) = ++v15;
                  }
                }
                if ( (unsigned int)RegRtlDeleteKeyTransacted(a2, L"PendingConfiguration", v14) != -1073741535
                  || v15
                  || (unsigned int)v37 >= 0xA )
                {
                  break;
                }
                LODWORD(v37) = v37 + 1;
              }
LABEL_43:
              v4 = v51;
LABEL_44:
              v18 = Handle;
              if ( !Handle )
              {
LABEL_46:
                if ( !PoolWithTag )
                  goto LABEL_95;
                v19 = PoolWithTag;
LABEL_94:
                ExFreePoolWithTag(v19, 0);
LABEL_95:
                v31 = v41;
                if ( v41 )
                {
                  v32 = *(_QWORD *)(v4 + 48);
                  v38 = 4;
                  if ( (int)CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              v32,
                              (__int64)a2,
                              11,
                              (__int64)&v42,
                              (__int64)&v52,
                              (__int64)&v38,
                              0) >= 0
                    && v42 == 4
                    && v38 == 4 )
                  {
                    v2 = v52;
                  }
                  v52 = v31 | v2;
                  PiDevCfgSetDeviceRegProp(v33, (unsigned int)v50, 11, 4, (__int64)&v52, 4);
                }
                goto LABEL_4;
              }
LABEL_45:
              ZwClose(v18);
              goto LABEL_46;
            }
            v46 = *(_QWORD *)(v8 + 8);
            LowLimit = 0LL;
            LODWORD(v39) = 0;
            IoGetStackLimits(&v37, &HighLimit);
            if ( (unsigned __int64)&HighLimit - v37 >= 0x400
              && (int)RegRtlOpenKeyTransacted((char *)a2, L"PendingConfiguration", 0, 0x3001Fu, (PHANDLE)&LowLimit, v9) >= 0 )
            {
              if ( (unsigned int)RegRtlQueryInfoKey((void *)LowLimit, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL) )
              {
                LODWORD(v22) = 0;
              }
              else
              {
                v20 = HighLimit;
                if ( (_DWORD)HighLimit )
                {
                  v21 = -1;
                  if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
                    v21 = HighLimit + 1;
                  v20 = v21;
                  if ( (int)HighLimit + 1 < (unsigned int)HighLimit )
                    goto LABEL_78;
                }
                v22 = 2LL * v20;
                if ( v22 > 0xFFFFFFFF )
                  goto LABEL_78;
                if ( (_DWORD)v22 )
                {
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v22, 0x4C474552u);
                  if ( !PoolWithTag )
                    goto LABEL_78;
                }
              }
              v23 = v46;
LABEL_61:
              while ( 1 )
              {
                LODWORD(HighLimit) = 0;
                v24 = 0;
                while ( 1 )
                {
                  LODWORD(v37) = (unsigned int)v22 >> 1;
                  v25 = RegRtlEnumKey(LowLimit, v24, PoolWithTag, &v37);
                  if ( v25 == -2147483622 || v25 == -1073741444 )
                    break;
                  if ( v25 == -1073741789 )
                  {
                    v26 = 2LL * (unsigned int)v37;
                    if ( v26 > 0xFFFFFFFF )
                      goto LABEL_77;
                    LODWORD(v22) = 2 * v37;
                    if ( PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v26, 0x4C474552u);
                    if ( !PoolWithTag )
                      goto LABEL_77;
                    v24 = HighLimit;
                  }
                  else
                  {
                    if ( v25 )
                      break;
                    *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v22 >> 1) - 1) = 0;
                    if ( !(unsigned int)RegRtlDeleteTreeInternal(LowLimit, PoolWithTag, v23, 0LL) )
                      goto LABEL_61;
                    LODWORD(HighLimit) = ++v24;
                  }
                }
                if ( (unsigned int)RegRtlDeleteKeyTransacted(a2, L"PendingConfiguration", v23) != -1073741535
                  || v24
                  || (unsigned int)v39 >= 0xA )
                {
                  break;
                }
                LODWORD(v39) = v39 + 1;
              }
LABEL_77:
              v4 = v51;
            }
LABEL_78:
            v18 = (void *)LowLimit;
            if ( !LowLimit )
              goto LABEL_46;
            goto LABEL_45;
          }
        }
        v44 = 0LL;
        LODWORD(v37) = 0;
        v27 = 0LL;
        IoGetStackLimits(&HighLimit, &v51);
        if ( (unsigned __int64)&v51 - HighLimit >= 0x400
          && (int)RegRtlOpenKeyTransacted((char *)a2, L"PendingConfiguration", 0, 0x3001Fu, &v44, 0LL) >= 0 )
        {
          if ( (unsigned int)RegRtlQueryInfoKey(v44, 0LL, (unsigned int *)&v51, 0LL, 0LL, 0LL) )
          {
            LODWORD(v30) = 0;
          }
          else
          {
            v28 = v51;
            if ( (_DWORD)v51 )
            {
              v29 = -1;
              if ( (int)v51 + 1 >= (unsigned int)v51 )
                v29 = v51 + 1;
              v28 = v29;
              if ( (int)v51 + 1 < (unsigned int)v51 )
                goto LABEL_90;
            }
            v30 = 2LL * v28;
            if ( v30 > 0xFFFFFFFF )
              goto LABEL_90;
            if ( (_DWORD)v30 )
            {
              v27 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v30, 0x4C474552u);
              if ( !v27 )
                goto LABEL_90;
            }
          }
LABEL_103:
          while ( 1 )
          {
            LODWORD(v51) = 0;
            v34 = 0;
            while ( 1 )
            {
              LODWORD(HighLimit) = (unsigned int)v30 >> 1;
              v35 = RegRtlEnumKey(v44, v34, v27, &HighLimit);
              if ( v35 == -2147483622 || v35 == -1073741444 )
                break;
              if ( v35 == -1073741789 )
              {
                v36 = 2LL * (unsigned int)HighLimit;
                if ( v36 > 0xFFFFFFFF )
                  goto LABEL_90;
                LODWORD(v30) = 2 * HighLimit;
                if ( v27 )
                  ExFreePoolWithTag(v27, 0);
                v27 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v36, 0x4C474552u);
                if ( !v27 )
                  goto LABEL_90;
                v34 = v51;
              }
              else
              {
                if ( v35 )
                  break;
                *((_WORD *)v27 + ((unsigned __int64)(unsigned int)v30 >> 1) - 1) = 0;
                if ( !(unsigned int)RegRtlDeleteTreeInternal(v44, v27, 0LL, 0LL) )
                  goto LABEL_103;
                LODWORD(v51) = ++v34;
              }
            }
            if ( (unsigned int)RegRtlDeleteKeyTransacted(a2, L"PendingConfiguration", 0LL) != -1073741535
              || v34
              || (unsigned int)v37 >= 0xA )
            {
              break;
            }
            LODWORD(v37) = v37 + 1;
          }
        }
LABEL_90:
        if ( v44 )
          ZwClose(v44);
        if ( !v27 )
          goto LABEL_95;
        v19 = v27;
        goto LABEL_94;
      }
    }
  }
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_6:
  PiDevCfgFreeDeviceContext(v50);
  return (unsigned int)inited;
}
