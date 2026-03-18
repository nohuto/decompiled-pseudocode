/*
 * XREFs of PipHardwareConfigActivateService @ 0x140592A80
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlQueryInfoKey @ 0x14044A174 (_RegRtlQueryInfoKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404840A0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 *     PipOpenServiceEnumKeys @ 0x1405AD84C (PipOpenServiceEnumKeys.c)
 */

__int64 __fastcall PipHardwareConfigActivateService(PCWSTR SourceString)
{
  unsigned int v1; // r13d
  int v2; // eax
  char *v3; // rdi
  signed int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r14
  PVOID PoolWithTag; // rsi
  unsigned int v8; // r12d
  unsigned int v10; // r9d
  unsigned __int64 v11; // r15
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  unsigned __int64 v16; // rcx
  void *v17; // rcx
  __int64 v18; // r12
  PVOID v19; // r15
  unsigned int v20; // r9d
  unsigned int v21; // edx
  int v22; // eax
  unsigned __int64 v23; // r14
  int v24; // eax
  unsigned __int64 v25; // r12
  int v26; // eax
  unsigned int v27; // r9d
  unsigned int v28; // edx
  int v29; // eax
  unsigned __int64 v30; // r14
  int v31; // eax
  unsigned __int64 v32; // r12
  int v33; // eax
  HANDLE v34; // [rsp+38h] [rbp-19h] BYREF
  __int64 v35; // [rsp+40h] [rbp-11h]
  unsigned __int64 v36; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1h] BYREF
  unsigned __int64 HighLimit; // [rsp+B8h] [rbp+67h] BYREF
  unsigned __int64 LowLimit; // [rsp+C0h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+77h] BYREF
  HANDLE v41; // [rsp+D0h] [rbp+7Fh] BYREF

  v1 = 0;
  HighLimit = 0LL;
  if ( !SourceString )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v2 = PipOpenServiceEnumKeys(&DestinationString, 0x10000LL, &HighLimit, 0LL, 0);
  v3 = (char *)HighLimit;
  v4 = v2;
  if ( v2 >= 0 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
    {
      v5 = **(_QWORD **)&PiPnpRtlCtx;
      if ( **(_QWORD **)&PiPnpRtlCtx )
      {
        if ( *(_BYTE *)(v5 + 16) )
        {
          v6 = *(_QWORD *)(v5 + 8);
          Handle = 0LL;
          PoolWithTag = 0LL;
          v8 = 0;
          IoGetStackLimits(&LowLimit, &HighLimit);
          if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
          {
            v4 = -1073741670;
            goto LABEL_8;
          }
          v4 = RegRtlOpenKeyTransacted(v3, L"StartOverride", 0, 0x3001Fu, &Handle, v6);
          if ( v4 >= 0 )
          {
            if ( (unsigned int)RegRtlQueryInfoKey(Handle, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL) )
            {
              LODWORD(v11) = 0;
              goto LABEL_20;
            }
            v10 = HighLimit;
            if ( !(_DWORD)HighLimit )
              goto LABEL_18;
            v14 = HighLimit + 1;
            v15 = -1;
            if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
              v15 = HighLimit + 1;
            v10 = v15;
            v4 = v14 < (unsigned int)HighLimit ? 0xC0000095 : 0;
            if ( v14 >= (unsigned int)HighLimit )
            {
LABEL_18:
              v11 = 2LL * v10;
              if ( v11 > 0xFFFFFFFF )
              {
                v4 = -1073741675;
                goto LABEL_8;
              }
              v4 = 0;
              if ( (_DWORD)v11 )
              {
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x4C474552u);
                if ( !PoolWithTag )
                {
                  v4 = -1073741801;
                  goto LABEL_8;
                }
              }
              while ( 1 )
              {
LABEL_20:
                while ( 1 )
                {
                  LODWORD(HighLimit) = (unsigned int)v11 >> 1;
                  v12 = RegRtlEnumKey(Handle, v1, PoolWithTag, &HighLimit);
                  if ( v12 != -2147483622 && v12 != -1073741444 )
                    break;
LABEL_21:
                  v13 = RegRtlDeleteKeyTransacted(v3, L"StartOverride", v6);
                  if ( v13 != -1073741535 )
                  {
                    if ( v13 >= 0 )
                      goto LABEL_8;
LABEL_26:
                    v4 = v13;
                    goto LABEL_8;
                  }
                  if ( v1 || v8 >= 0xA )
                    goto LABEL_26;
                  ++v8;
                  v1 = 0;
                }
                if ( v12 == -1073741789 )
                {
                  v16 = 2LL * (unsigned int)HighLimit;
                  HighLimit = v16;
                  if ( v16 > 0xFFFFFFFF )
                  {
                    v4 = -1073741675;
                    break;
                  }
                  LODWORD(v11) = v16;
                  v4 = 0;
                  if ( PoolWithTag )
                  {
                    ExFreePoolWithTag(PoolWithTag, 0);
                    LODWORD(v16) = HighLimit;
                  }
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v16, 0x4C474552u);
                  if ( !PoolWithTag )
                  {
                    v4 = -1073741801;
                    break;
                  }
                }
                else
                {
                  if ( v12 )
                    goto LABEL_21;
                  *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v11 >> 1) - 1) = 0;
                  if ( (unsigned int)RegRtlDeleteTreeInternal(Handle, PoolWithTag, v6, 0LL) )
                    ++v1;
                  else
                    v1 = 0;
                }
              }
            }
          }
LABEL_8:
          if ( Handle )
            ZwClose(Handle);
          if ( !PoolWithTag )
            goto LABEL_11;
          v17 = PoolWithTag;
          goto LABEL_126;
        }
        v18 = *(_QWORD *)(v5 + 8);
        v35 = v18;
        v19 = 0LL;
        v41 = 0LL;
        LODWORD(LowLimit) = 0;
        IoGetStackLimits(&v36, &HighLimit);
        if ( (unsigned __int64)&HighLimit - v36 < 0x400 )
        {
          v4 = -1073741670;
          goto LABEL_85;
        }
        v4 = RegRtlOpenKeyTransacted(v3, L"StartOverride", 0, 0x3001Fu, &v41, v18);
        if ( v4 >= 0 )
        {
          if ( (unsigned int)RegRtlQueryInfoKey(v41, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL) )
          {
            LODWORD(v23) = 0;
            goto LABEL_65;
          }
          v20 = HighLimit;
          if ( !(_DWORD)HighLimit )
            goto LABEL_59;
          v21 = HighLimit + 1;
          v22 = -1;
          if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
            v22 = HighLimit + 1;
          v20 = v22;
          v4 = v21 < (unsigned int)HighLimit ? 0xC0000095 : 0;
          if ( v21 >= (unsigned int)HighLimit )
          {
LABEL_59:
            v23 = 2LL * v20;
            if ( v23 > 0xFFFFFFFF )
            {
              v4 = -1073741675;
              goto LABEL_85;
            }
            v4 = 0;
            if ( (_DWORD)v23 )
            {
              v19 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v23, 0x4C474552u);
              if ( !v19 )
              {
                v4 = -1073741801;
                goto LABEL_85;
              }
            }
            while ( 1 )
            {
LABEL_65:
              while ( 1 )
              {
                LODWORD(HighLimit) = (unsigned int)v23 >> 1;
                v24 = RegRtlEnumKey(v41, v1, v19, &HighLimit);
                if ( v24 != -2147483622 && v24 != -1073741444 )
                  break;
LABEL_77:
                v26 = RegRtlDeleteKeyTransacted(v3, L"StartOverride", v18);
                if ( v26 != -1073741535 )
                {
                  if ( v26 >= 0 )
                    goto LABEL_85;
LABEL_84:
                  v4 = v26;
                  goto LABEL_85;
                }
                if ( v1 || (unsigned int)LowLimit >= 0xA )
                  goto LABEL_84;
                LODWORD(LowLimit) = LowLimit + 1;
                v1 = 0;
                v18 = v35;
              }
              if ( v24 == -1073741789 )
              {
                v25 = 2LL * (unsigned int)HighLimit;
                if ( v25 > 0xFFFFFFFF )
                {
                  v4 = -1073741675;
                  break;
                }
                LODWORD(v23) = 2 * HighLimit;
                v4 = 0;
                if ( v19 )
                  ExFreePoolWithTag(v19, 0);
                v19 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v25, 0x4C474552u);
                if ( !v19 )
                {
                  v4 = -1073741801;
                  break;
                }
                v18 = v35;
              }
              else
              {
                if ( v24 )
                  goto LABEL_77;
                *((_WORD *)v19 + ((unsigned __int64)(unsigned int)v23 >> 1) - 1) = 0;
                if ( (unsigned int)RegRtlDeleteTreeInternal(v41, v19, v18, 0LL) )
                  ++v1;
                else
                  v1 = 0;
              }
            }
          }
        }
LABEL_85:
        if ( v41 )
          ZwClose(v41);
        if ( !v19 )
          goto LABEL_11;
LABEL_125:
        v17 = v19;
LABEL_126:
        ExFreePoolWithTag(v17, 0);
LABEL_11:
        if ( v4 == -1073741772 )
          v4 = 0;
        goto LABEL_13;
      }
    }
    v34 = 0LL;
    LODWORD(LowLimit) = 0;
    v19 = 0LL;
    IoGetStackLimits((PULONG_PTR)&Handle, &HighLimit);
    if ( (unsigned __int64)((char *)&HighLimit - (_BYTE *)Handle) < 0x400 )
    {
      v4 = -1073741670;
      goto LABEL_122;
    }
    v4 = RegRtlOpenKeyTransacted(v3, L"StartOverride", 0, 0x3001Fu, &v34, 0LL);
    if ( v4 < 0 )
      goto LABEL_122;
    if ( (unsigned int)RegRtlQueryInfoKey(v34, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL) )
    {
      LODWORD(v30) = 0;
      goto LABEL_103;
    }
    v27 = HighLimit;
    if ( (_DWORD)HighLimit )
    {
      v28 = HighLimit + 1;
      v29 = -1;
      if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
        v29 = HighLimit + 1;
      v27 = v29;
      v4 = v28 < (unsigned int)HighLimit ? 0xC0000095 : 0;
      if ( v28 < (unsigned int)HighLimit )
      {
LABEL_122:
        if ( v34 )
          ZwClose(v34);
        if ( !v19 )
          goto LABEL_11;
        goto LABEL_125;
      }
    }
    v30 = 2LL * v27;
    if ( v30 > 0xFFFFFFFF )
    {
      v4 = -1073741675;
      goto LABEL_122;
    }
    v4 = 0;
    if ( (_DWORD)v30 )
    {
      v19 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v30, 0x4C474552u);
      if ( !v19 )
      {
        v4 = -1073741801;
        goto LABEL_122;
      }
    }
    while ( 1 )
    {
LABEL_103:
      while ( 1 )
      {
        LODWORD(HighLimit) = (unsigned int)v30 >> 1;
        v31 = RegRtlEnumKey(v34, v1, v19, &HighLimit);
        if ( v31 != -2147483622 && v31 != -1073741444 )
          break;
LABEL_115:
        v33 = RegRtlDeleteKeyTransacted(v3, L"StartOverride", 0LL);
        if ( v33 != -1073741535 )
        {
          if ( v33 >= 0 )
            goto LABEL_122;
LABEL_121:
          v4 = v33;
          goto LABEL_122;
        }
        if ( v1 || (unsigned int)LowLimit >= 0xA )
          goto LABEL_121;
        LODWORD(LowLimit) = LowLimit + 1;
        v1 = 0;
      }
      if ( v31 == -1073741789 )
      {
        v32 = 2LL * (unsigned int)HighLimit;
        if ( v32 > 0xFFFFFFFF )
        {
          v4 = -1073741675;
          goto LABEL_122;
        }
        LODWORD(v30) = 2 * HighLimit;
        v4 = 0;
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        v19 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v32, 0x4C474552u);
        if ( !v19 )
        {
          v4 = -1073741801;
          goto LABEL_122;
        }
      }
      else
      {
        if ( v31 )
          goto LABEL_115;
        *((_WORD *)v19 + ((unsigned __int64)(unsigned int)v30 >> 1) - 1) = 0;
        if ( (unsigned int)RegRtlDeleteTreeInternal(v34, v19, 0LL, 0LL) )
          ++v1;
        else
          v1 = 0;
      }
    }
  }
LABEL_13:
  if ( v3 )
    ZwClose(v3);
  return (unsigned int)v4;
}
