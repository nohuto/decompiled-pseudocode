/*
 * XREFs of BapdRecordFirmwareBootStats @ 0x14040ECB0
 * Callers:
 *     PopBootLoaderTraceProcess @ 0x140577ADC (PopBootLoaderTraceProcess.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     BapdRegisterEtwProvider @ 0x14014CE90 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BapdpWriteEventDataToRegistry @ 0x14040F264 (BapdpWriteEventDataToRegistry.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     TraceLoggingRegisterEx @ 0x14058919C (TraceLoggingRegisterEx.c)
 */

void BapdRecordFirmwareBootStats()
{
  _QWORD *PoolWithTag; // rbx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 Data; // [rsp+38h] [rbp-C8h] BYREF
  REGHANDLE RegHandle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v4; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v5; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v6; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v7; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v8; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v9; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v10; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v11; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v12; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 *v15; // [rsp+B0h] [rbp-50h]
  int v16; // [rsp+B8h] [rbp-48h]
  int v17; // [rsp+BCh] [rbp-44h]
  unsigned __int64 *p_Data; // [rsp+C0h] [rbp-40h]
  int v19; // [rsp+C8h] [rbp-38h]
  int v20; // [rsp+CCh] [rbp-34h]
  unsigned __int64 *v21; // [rsp+D0h] [rbp-30h]
  int v22; // [rsp+D8h] [rbp-28h]
  int v23; // [rsp+DCh] [rbp-24h]
  unsigned __int64 *v24; // [rsp+E0h] [rbp-20h]
  int v25; // [rsp+E8h] [rbp-18h]
  int v26; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 *v28; // [rsp+120h] [rbp+20h]
  int v29; // [rsp+128h] [rbp+28h]
  int v30; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *v31; // [rsp+130h] [rbp+30h]
  int v32; // [rsp+138h] [rbp+38h]
  int v33; // [rsp+13Ch] [rbp+3Ch]
  unsigned __int64 *v34; // [rsp+140h] [rbp+40h]
  int v35; // [rsp+148h] [rbp+48h]
  int v36; // [rsp+14Ch] [rbp+4Ch]
  unsigned __int64 *v37; // [rsp+150h] [rbp+50h]
  int v38; // [rsp+158h] [rbp+58h]
  int v39; // [rsp+15Ch] [rbp+5Ch]
  unsigned __int64 *v40; // [rsp+160h] [rbp+60h]
  int v41; // [rsp+168h] [rbp+68h]
  int v42; // [rsp+16Ch] [rbp+6Ch]

  LODWORD(NumberOfBytes) = 0;
  if ( BapdRegisterEtwProvider((const GUID *)&BOOTENV_ETW_PROVIDER, 1, &RegHandle) >= 0
    && ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_14033C718[0])(
         34LL,
         0LL,
         0LL,
         &NumberOfBytes) == -1073741820 )
  {
    if ( (_DWORD)NumberOfBytes )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x73627746u);
      if ( PoolWithTag )
      {
        if ( ((int (__fastcall *)(__int64, _QWORD, _QWORD *, SIZE_T *))off_14033C718[0])(
               34LL,
               (unsigned int)NumberOfBytes,
               PoolWithTag,
               &NumberOfBytes) >= 0 )
        {
          v4 = PoolWithTag[2] / 0xF4240uLL;
          v5 = PoolWithTag[3] / 0xF4240uLL;
          Data = PoolWithTag[4] / 0xF4240uLL;
          v6 = PoolWithTag[5] / 0xF4240uLL;
          v7 = PoolWithTag[6] / 0xF4240uLL;
          RtlInitUnicodeString(&DestinationString, L"FwPOSTTime");
          BapdpWriteEventDataToRegistry(&Data);
          UserData.Reserved = 0;
          v17 = 0;
          v20 = 0;
          v23 = 0;
          v26 = 0;
          UserData.Ptr = (ULONGLONG)&v4;
          UserData.Size = 8;
          v15 = &v5;
          p_Data = &Data;
          v21 = &v6;
          v24 = &v7;
          v16 = 8;
          v19 = 8;
          v22 = 8;
          v25 = 8;
          EtwWrite(RegHandle, &BOOT_FW_BOOT_PERF_DATA, 0LL, 5u, &UserData);
          TraceLoggingRegisterEx(&stru_14033C6D0, 0LL, 0LL);
          if ( stru_14033C6D0.LevelPlus1 > 4 )
          {
            if ( TlgKeywordOn(&stru_14033C6D0, 0x400000000000uLL) )
            {
              v30 = 0;
              v33 = 0;
              v36 = 0;
              v39 = 0;
              v42 = 0;
              v8 = v4;
              v9 = v5;
              v10 = Data;
              v11 = v6;
              v12 = v7;
              v28 = &v8;
              v31 = &v9;
              v34 = &v10;
              v37 = &v11;
              v40 = &v12;
              v29 = 8;
              v32 = 8;
              v35 = 8;
              v38 = 8;
              v41 = 8;
              TlgWrite(&stru_14033C6D0, &unk_1402AFA04, 0LL, 0LL, 7u, &pData);
            }
          }
        }
        ExFreePoolWithTag(PoolWithTag, NumberOfBytes);
      }
    }
  }
  if ( RegHandle )
    EtwUnregister(RegHandle);
}
