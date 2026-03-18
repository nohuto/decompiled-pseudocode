/*
 * XREFs of PipHardwareConfigActivateService @ 0x1405A4610
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     IoGetStackLimits @ 0x1400D9020 (IoGetStackLimits.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PipOpenServiceEnumKeys @ 0x14051A2F0 (PipOpenServiceEnumKeys.c)
 *     _RegRtlOpenKeyTransacted @ 0x140521DE8 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKey @ 0x14057E9B4 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x14057EBC4 (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall PipHardwareConfigActivateService(PCWSTR SourceString)
{
  NTSTATUS v1; // eax
  char *v2; // rdi
  signed int v3; // ebx
  unsigned int v5; // r15d
  unsigned int *PoolWithTag; // rsi
  unsigned int v7; // r9d
  unsigned int v8; // edx
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  ULONG v12; // r14d
  int v13; // eax
  int v14; // eax
  UNICODE_STRING v15; // [rsp+30h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF
  HANDLE v17; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 LowLimit; // [rsp+90h] [rbp+18h] BYREF

  Handle = 0LL;
  if ( !SourceString )
    return 3221225485LL;
  RtlInitUnicodeString(&v15, SourceString);
  v1 = PipOpenServiceEnumKeys(&v15, 0x10000u, &Handle, 0LL, 0);
  v2 = (char *)Handle;
  v3 = v1;
  if ( v1 >= 0 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
    {
      v3 = RegRtlDeleteTreeInternal((char *)Handle, L"StartOverride", *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL), 0);
    }
    else
    {
      v5 = 0;
      v17 = 0LL;
      PoolWithTag = 0LL;
      IoGetStackLimits(&LowLimit, (PULONG_PTR)&Handle);
      if ( (unsigned __int64)&Handle - LowLimit >= 0x400 )
      {
        v3 = RegRtlOpenKeyTransacted(v2, L"StartOverride", 0, 0x3001Fu, &v17, 0LL);
        if ( v3 >= 0 )
        {
          if ( (unsigned int)RegRtlQueryInfoKey(v17, 0LL, (unsigned int *)&Handle, 0LL, 0LL, 0LL) )
          {
            v11 = 0;
LABEL_27:
            while ( 1 )
            {
              v12 = 0;
              while ( 1 )
              {
                LODWORD(Handle) = v11 >> 1;
                v13 = RegRtlEnumKey(v17, v12, PoolWithTag, (unsigned int *)&Handle);
                if ( v13 == -2147483622 || v13 == -1073741444 )
                  break;
                if ( v13 == -1073741789 )
                {
                  v11 = -1;
                  v3 = 0;
                  if ( 2 * (unsigned __int64)(unsigned int)Handle > 0xFFFFFFFF )
                  {
                    v3 = -1073741675;
                    break;
                  }
                  v11 = 2 * (_DWORD)Handle;
                  if ( PoolWithTag )
                    ExFreePoolWithTag(PoolWithTag, 0);
                  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v11, 0x4C474552u);
                  if ( !PoolWithTag )
                  {
                    v3 = -1073741801;
                    goto LABEL_48;
                  }
                }
                else
                {
                  if ( v13 )
                    break;
                  *((_WORD *)PoolWithTag + ((unsigned __int64)v11 >> 1) - 1) = 0;
                  if ( !(unsigned int)RegRtlDeleteTreeInternal((char *)v17, (const WCHAR *)PoolWithTag, 0LL, 0) )
                    goto LABEL_27;
                  ++v12;
                }
              }
              if ( v3 < 0 )
                break;
              v14 = RegRtlDeleteKeyTransacted(v2, L"StartOverride", 0LL);
              if ( v14 != -1073741535 )
              {
                if ( v14 >= 0 )
                  break;
LABEL_47:
                v3 = v14;
                break;
              }
              if ( v12 || v5 >= 0xA )
                goto LABEL_47;
              ++v5;
            }
          }
          else
          {
            v7 = (unsigned int)Handle;
            if ( !(_DWORD)Handle )
              goto LABEL_20;
            v8 = (_DWORD)Handle + 1;
            v9 = -1;
            if ( (int)Handle + 1 >= (unsigned int)Handle )
              v9 = (_DWORD)Handle + 1;
            v7 = v9;
            v3 = v8 < (unsigned int)Handle ? 0xC0000095 : 0;
            if ( v8 >= (unsigned int)Handle )
            {
LABEL_20:
              v10 = 2LL * v7;
              v3 = 0;
              if ( v10 > 0xFFFFFFFF )
              {
                v3 = -1073741675;
              }
              else
              {
                v11 = 2 * v7;
                if ( !(_DWORD)v10 )
                  goto LABEL_27;
                PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x4C474552u);
                if ( PoolWithTag )
                  goto LABEL_27;
                v3 = -1073741801;
              }
            }
          }
        }
      }
      else
      {
        v3 = -1073741670;
      }
LABEL_48:
      if ( v17 )
        ZwClose(v17);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
    if ( v3 == -1073741772 )
      v3 = 0;
  }
  if ( v2 )
    ZwClose(v2);
  return (unsigned int)v3;
}
