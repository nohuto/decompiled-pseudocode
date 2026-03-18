/*
 * XREFs of PpDevCfgProcessDeviceOperations @ 0x14058B640
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400D9020 (IoGetStackLimits.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _RegRtlOpenKeyTransacted @ 0x140521DE8 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKey @ 0x14057E9B4 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x14057EBC4 (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140589470 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitDeviceContext @ 0x14058AA6C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x14058B72C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14059BF64 (PiDevCfgSetDeviceRegProp.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceOperations(unsigned __int64 a1, void *a2)
{
  int v2; // ebx
  unsigned __int64 v4; // rsi
  NTSTATUS v5; // eax
  int inited; // edi
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned int *PoolWithTag; // r15
  unsigned int v12; // r8d
  int v13; // eax
  unsigned __int64 v14; // rax
  int v15; // r13d
  unsigned int v16; // r12d
  unsigned __int64 v17; // rsi
  ULONG v18; // r13d
  int v19; // eax
  unsigned __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // r8d
  int v23; // eax
  unsigned __int64 v24; // rax
  int v25; // r13d
  unsigned int v26; // r12d
  __int64 v27; // rsi
  ULONG v28; // r13d
  int v29; // eax
  unsigned __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // r8d
  int v33; // eax
  unsigned __int64 v34; // rax
  int v35; // r13d
  int v36; // r15d
  __int64 v37; // rdx
  int v38; // ecx
  ULONG v39; // r13d
  int v40; // eax
  unsigned __int64 v41; // rax
  int v42; // ecx
  unsigned int v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-BCh] BYREF
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-B0h] BYREF
  int P; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+5Ch] [rbp-A4h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v50; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h]
  int v54; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v55; // [rsp+90h] [rbp-70h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  int v57[20]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v58; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 HighLimit; // [rsp+170h] [rbp+70h] BYREF
  int v60; // [rsp+178h] [rbp+78h] BYREF

  v58 = a1;
  v2 = 0;
  v4 = a1;
  KeyHandle = 0LL;
  v57[0] = 0;
  memset(&v57[2], 0, 0x40uLL);
  v60 = 0;
  P = 0;
  v48 = 0;
  v45 = 0;
  if ( !*(_QWORD *)(v4 + 48) )
  {
    inited = -1073741808;
    goto LABEL_6;
  }
  v54 = 2752552;
  KeyHandle = 0LL;
  v55 = L"PendingConfiguration";
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v54;
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
    inited = PiDevCfgInitDeviceContext(*(_QWORD *)(v4 + 48), (__int64)a2, v57);
    if ( inited >= 0 )
    {
      v8 = -1;
      inited = PiDevCfgConfigureDeviceKeys(v4, (__int64)v57, KeyHandle, -1, &P, 0LL);
      if ( inited >= 0 )
      {
        if ( *(_QWORD *)&PiPnpRtlCtx )
        {
          v9 = **(_QWORD **)&PiPnpRtlCtx;
          if ( **(_QWORD **)&PiPnpRtlCtx )
          {
            v10 = *(_QWORD *)(v9 + 8);
            PoolWithTag = 0LL;
            if ( *(_BYTE *)(v9 + 16) )
            {
              v52 = *(_QWORD *)(v9 + 8);
              Handle = 0LL;
              v43 = 0;
              IoGetStackLimits(&LowLimit, &HighLimit);
              if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
                goto LABEL_42;
              LODWORD(HighLimit) = RegRtlOpenKeyTransacted(
                                     (char *)a2,
                                     L"PendingConfiguration",
                                     0,
                                     0x3001Fu,
                                     &Handle,
                                     v10);
              if ( (HighLimit & 0x80000000) != 0LL )
                goto LABEL_42;
              if ( (unsigned int)RegRtlQueryInfoKey(Handle, 0LL, &v44, 0LL, 0LL, 0LL) )
              {
                v16 = 0;
              }
              else
              {
                v12 = v44;
                if ( v44 )
                {
                  v13 = -1;
                  if ( v44 + 1 >= v44 )
                    v13 = v44 + 1;
                  v12 = v13;
                  if ( v44 + 1 < v44 )
                    goto LABEL_42;
                }
                v14 = 2LL * v12;
                v15 = 0;
                v16 = -1;
                if ( v14 <= 0xFFFFFFFF )
                  v16 = 2 * v12;
                else
                  v15 = -1073741675;
                LODWORD(HighLimit) = v15;
                if ( v14 > 0xFFFFFFFF )
                  goto LABEL_42;
                if ( v16 )
                {
                  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v16, 0x4C474552u);
                  if ( !PoolWithTag )
                    goto LABEL_42;
                }
              }
              v17 = v52;
LABEL_30:
              while ( 1 )
              {
                v18 = 0;
                while ( 1 )
                {
                  v44 = v16 >> 1;
                  v19 = RegRtlEnumKey(Handle, v18, PoolWithTag, &v44);
                  if ( v19 == -2147483622 || v19 == -1073741444 )
                    break;
                  if ( v19 == -1073741789 )
                  {
                    v20 = 2LL * v44;
                    v21 = 0;
                    v16 = -1;
                    if ( v20 <= 0xFFFFFFFF )
                      v16 = 2 * v44;
                    else
                      v21 = -1073741675;
                    LODWORD(HighLimit) = v21;
                    if ( v20 > 0xFFFFFFFF )
                      goto LABEL_50;
                    if ( PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v16, 0x4C474552u);
                    if ( !PoolWithTag )
                      goto LABEL_41;
                  }
                  else
                  {
                    if ( v19 )
                      break;
                    *((_WORD *)PoolWithTag + ((unsigned __int64)v16 >> 1) - 1) = 0;
                    if ( !(unsigned int)RegRtlDeleteTreeInternal((char *)Handle, (const WCHAR *)PoolWithTag, v17, 0) )
                      goto LABEL_30;
                    ++v18;
                  }
                }
                v21 = HighLimit;
LABEL_50:
                if ( v21 < 0
                  || (unsigned int)RegRtlDeleteKeyTransacted((char *)a2, L"PendingConfiguration", v17) != -1073741535
                  || v18
                  || v43 >= 0xA )
                {
                  break;
                }
                ++v43;
              }
LABEL_41:
              v4 = v58;
LABEL_42:
              if ( Handle )
                ZwClose(Handle);
              if ( !PoolWithTag )
                goto LABEL_113;
              goto LABEL_112;
            }
            v53 = *(_QWORD *)(v9 + 8);
            LowLimit = 0LL;
            v44 = 0;
            IoGetStackLimits(&v52, &HighLimit);
            if ( (unsigned __int64)&HighLimit - v52 < 0x400 )
              goto LABEL_83;
            LODWORD(HighLimit) = RegRtlOpenKeyTransacted(
                                   (char *)a2,
                                   L"PendingConfiguration",
                                   0,
                                   0x3001Fu,
                                   (PHANDLE)&LowLimit,
                                   v10);
            if ( (HighLimit & 0x80000000) != 0LL )
              goto LABEL_83;
            if ( (unsigned int)RegRtlQueryInfoKey((void *)LowLimit, 0LL, &v43, 0LL, 0LL, 0LL) )
            {
              v26 = 0;
            }
            else
            {
              v22 = v43;
              if ( v43 )
              {
                v23 = -1;
                if ( v43 + 1 >= v43 )
                  v23 = v43 + 1;
                v22 = v23;
                if ( v43 + 1 < v43 )
                  goto LABEL_83;
              }
              v24 = 2LL * v22;
              v25 = 0;
              v26 = -1;
              if ( v24 <= 0xFFFFFFFF )
                v26 = 2 * v22;
              else
                v25 = -1073741675;
              LODWORD(HighLimit) = v25;
              if ( v24 > 0xFFFFFFFF )
                goto LABEL_83;
              if ( v26 )
              {
                PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v26, 0x4C474552u);
                if ( !PoolWithTag )
                  goto LABEL_83;
              }
            }
            v27 = v53;
LABEL_71:
            while ( 1 )
            {
              v28 = 0;
              while ( 1 )
              {
                v43 = v26 >> 1;
                v29 = RegRtlEnumKey((void *)LowLimit, v28, PoolWithTag, &v43);
                if ( v29 == -2147483622 || v29 == -1073741444 )
                  break;
                if ( v29 == -1073741789 )
                {
                  v30 = 2LL * v43;
                  v31 = 0;
                  v26 = -1;
                  if ( v30 <= 0xFFFFFFFF )
                    v26 = 2 * v43;
                  else
                    v31 = -1073741675;
                  LODWORD(HighLimit) = v31;
                  if ( v30 > 0xFFFFFFFF )
                    goto LABEL_91;
                  if ( PoolWithTag )
                    ExFreePoolWithTag(PoolWithTag, 0);
                  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v26, 0x4C474552u);
                  if ( !PoolWithTag )
                    goto LABEL_82;
                }
                else
                {
                  if ( v29 )
                    break;
                  *((_WORD *)PoolWithTag + ((unsigned __int64)v26 >> 1) - 1) = 0;
                  if ( !(unsigned int)RegRtlDeleteTreeInternal((char *)LowLimit, (const WCHAR *)PoolWithTag, v27, 0) )
                    goto LABEL_71;
                  ++v28;
                }
              }
              v31 = HighLimit;
LABEL_91:
              if ( v31 < 0
                || (unsigned int)RegRtlDeleteKeyTransacted((char *)a2, L"PendingConfiguration", v27) != -1073741535
                || v28
                || v44 >= 0xA )
              {
                break;
              }
              ++v44;
            }
LABEL_82:
            v4 = v58;
LABEL_83:
            if ( LowLimit )
              ZwClose((HANDLE)LowLimit);
            if ( !PoolWithTag )
              goto LABEL_113;
            goto LABEL_112;
          }
        }
        v50 = 0LL;
        v43 = 0;
        PoolWithTag = 0LL;
        IoGetStackLimits(&HighLimit, &v58);
        if ( (unsigned __int64)&v58 - HighLimit >= 0x400 )
        {
          LODWORD(v58) = RegRtlOpenKeyTransacted((char *)a2, L"PendingConfiguration", 0, 0x3001Fu, &v50, 0LL);
          if ( (v58 & 0x80000000) == 0LL )
          {
            if ( (unsigned int)RegRtlQueryInfoKey(v50, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL) )
            {
              v8 = 0;
            }
            else
            {
              v32 = HighLimit;
              if ( (_DWORD)HighLimit )
              {
                v33 = -1;
                if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
                  v33 = HighLimit + 1;
                v32 = v33;
                if ( (int)HighLimit + 1 < (unsigned int)HighLimit )
                  goto LABEL_109;
              }
              v34 = 2LL * v32;
              v35 = 0;
              if ( v34 > 0xFFFFFFFF )
                v35 = -1073741675;
              else
                v8 = 2 * v32;
              LODWORD(v58) = v35;
              if ( v34 > 0xFFFFFFFF )
                goto LABEL_109;
              if ( v8 )
              {
                PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v8, 0x4C474552u);
                if ( !PoolWithTag )
                  goto LABEL_109;
              }
            }
LABEL_121:
            while ( 1 )
            {
              v39 = 0;
              while ( 1 )
              {
                LODWORD(HighLimit) = v8 >> 1;
                v40 = RegRtlEnumKey(v50, v39, PoolWithTag, (unsigned int *)&HighLimit);
                if ( v40 == -2147483622 || v40 == -1073741444 )
                  break;
                if ( v40 == -1073741789 )
                {
                  v41 = 2LL * (unsigned int)HighLimit;
                  v42 = 0;
                  v8 = -1;
                  if ( v41 <= 0xFFFFFFFF )
                    v8 = 2 * HighLimit;
                  else
                    v42 = -1073741675;
                  LODWORD(v58) = v42;
                  if ( v41 > 0xFFFFFFFF )
                    goto LABEL_137;
                  if ( PoolWithTag )
                    ExFreePoolWithTag(PoolWithTag, 0);
                  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v8, 0x4C474552u);
                  if ( !PoolWithTag )
                    goto LABEL_109;
                }
                else
                {
                  if ( v40 )
                    break;
                  *((_WORD *)PoolWithTag + ((unsigned __int64)v8 >> 1) - 1) = 0;
                  if ( !(unsigned int)RegRtlDeleteTreeInternal((char *)v50, (const WCHAR *)PoolWithTag, 0LL, 0) )
                    goto LABEL_121;
                  ++v39;
                }
              }
              v42 = v58;
LABEL_137:
              if ( v42 < 0
                || (unsigned int)RegRtlDeleteKeyTransacted((char *)a2, L"PendingConfiguration", 0LL) != -1073741535
                || v39
                || v43 >= 0xA )
              {
                break;
              }
              ++v43;
            }
          }
        }
LABEL_109:
        if ( v50 )
          ZwClose(v50);
        if ( !PoolWithTag )
          goto LABEL_113;
LABEL_112:
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_113:
        v36 = P;
        if ( P )
        {
          v37 = *(_QWORD *)(v4 + 48);
          v45 = 4;
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v37,
                      (__int64)a2,
                      11,
                      (__int64)&v48,
                      (__int64)&v60,
                      (__int64)&v45,
                      0) >= 0
            && v48 == 4
            && v45 == 4 )
          {
            v2 = v60;
          }
          v60 = v36 | v2;
          PiDevCfgSetDeviceRegProp(v38, (unsigned int)v57, 11, 4, (__int64)&v60, 4);
        }
      }
    }
  }
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_6:
  PiDevCfgFreeDeviceContext(v57);
  return (unsigned int)inited;
}
