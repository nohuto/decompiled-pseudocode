/*
 * XREFs of PopDiagTraceFirmwareS3Stats @ 0x14041A258
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void PopDiagTraceFirmwareS3Stats()
{
  unsigned int *PoolWithTag; // rbx
  unsigned int *i; // rdi
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // kr08_8
  ULONG NumberOfBytes; // [rsp+38h] [rbp-19h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+3Ch] [rbp-15h] BYREF
  unsigned int v6; // [rsp+40h] [rbp-11h] BYREF
  int v7; // [rsp+44h] [rbp-Dh] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 *p_NumberOfBytes_4; // [rsp+68h] [rbp+17h]
  __int64 v12; // [rsp+70h] [rbp+1Fh]
  int *v13; // [rsp+78h] [rbp+27h]
  __int64 v14; // [rsp+80h] [rbp+2Fh]

  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, ULONG *))off_14033C718[0])(35LL, 0LL, 0LL, &NumberOfBytes) == -1073741820 )
  {
    if ( NumberOfBytes )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x74703353u);
      if ( PoolWithTag )
      {
        if ( ((int (__fastcall *)(__int64, _QWORD, unsigned int *, ULONG *))off_14033C718[0])(
               35LL,
               NumberOfBytes,
               PoolWithTag,
               &NumberOfBytes) >= 0 )
        {
          for ( i = PoolWithTag + 2;
                i < (unsigned int *)((char *)PoolWithTag + PoolWithTag[1]);
                i = (unsigned int *)((char *)i + *((char *)i + 2)) )
          {
            if ( *(_WORD *)i )
            {
              if ( *(_WORD *)i == 1 )
              {
                v8 = *(_QWORD *)(i + 1) / 0xF4240uLL;
                v3 = *(_QWORD *)(i + 3);
                *(_QWORD *)&UserData.Size = 8LL;
                UserData.Ptr = (ULONGLONG)&v8;
                p_NumberOfBytes_4 = &v9;
                v9 = v3 / 0xF4240;
                v12 = 8LL;
                EtwWrite(PopDiagHandle, &POP_ETW_EVENT_S3FWSTATS_SUSPEND, 0LL, 2u, &UserData);
              }
            }
            else
            {
              v6 = i[1];
              NumberOfBytes_4 = *((_QWORD *)i + 1) / 0xF4240uLL;
              v2 = *((_QWORD *)i + 2);
              *(_QWORD *)&UserData.Size = 4LL;
              UserData.Ptr = (ULONGLONG)&v6;
              p_NumberOfBytes_4 = (unsigned __int64 *)&NumberOfBytes_4;
              v13 = &v7;
              v7 = v2 / 0xF4240;
              v12 = 4LL;
              v14 = 4LL;
              EtwWrite(PopDiagHandle, &POP_ETW_EVENT_S3FWSTATS_RESUME, 0LL, 3u, &UserData);
              if ( !qword_14034B5A8 )
                qword_14034B5A8 = NumberOfBytes_4;
            }
          }
        }
        ExFreePoolWithTag(PoolWithTag, NumberOfBytes);
      }
    }
  }
}
