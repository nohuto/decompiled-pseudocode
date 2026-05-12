/*
 * XREFs of StorEtwIORequestDispatch @ 0x1C00408F0
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 * Callees:
 *     StRtlIoStorInfoGetNvCachePriority @ 0x1C000DCD8 (StRtlIoStorInfoGetNvCachePriority.c)
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     Template_pcxxpc @ 0x1C0041EE4 (Template_pcxxpc.c)
 */

char __fastcall StorEtwIORequestDispatch(__int64 a1)
{
  __int64 v1; // rax
  char v2; // di
  char v3; // bl
  char v4; // r12
  char v5; // r15
  __int64 v6; // r14
  int v8; // ecx
  unsigned __int8 v9; // al
  int v10; // r13d
  char *SrbScsiData; // rax
  char *v12; // r9
  __int64 v13; // r14
  int NvCachePriority; // eax
  void *v15; // rdx
  char v17; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 v18[3]; // [rsp+51h] [rbp-2Fh] BYREF
  int v19; // [rsp+54h] [rbp-2Ch]
  __int64 v20; // [rsp+58h] [rbp-28h]
  _QWORD v21[2]; // [rsp+68h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v17 = 0;
  v5 = -1;
  v20 = 0LL;
  v6 = *(_QWORD *)(v1 + 8);
  v19 = 0;
  v21[0] = 0LL;
  v21[1] = 0LL;
  v18[0] = -1;
  IoGetActivityIdIrp(a1, v21);
  v9 = *(_BYTE *)(v6 + 2);
  if ( v9 == 40 )
  {
    v10 = *(_DWORD *)(v6 + 20);
    SrbScsiData = (char *)GetSrbScsiData(v6, &v17, 0LL, 0LL, 0LL, 0LL);
    v12 = SrbScsiData;
    if ( SrbScsiData )
      v2 = *SrbScsiData;
    v13 = *(_QWORD *)(v6 + 104);
    LOBYTE(NvCachePriority) = v17;
  }
  else
  {
    v12 = (char *)(v6 + 72);
    v10 = v9;
    LOBYTE(NvCachePriority) = *(_BYTE *)(v6 + 10);
    v2 = *(_BYTE *)(v6 + 72);
    v13 = *(_QWORD *)(v6 + 56);
  }
  if ( v12 )
  {
    if ( (_BYTE)NvCachePriority == 16 )
    {
      HIBYTE(v20) = v12[2];
      BYTE6(v20) = v12[3];
      BYTE5(v20) = v12[4];
      BYTE4(v20) = v12[5];
      BYTE3(v20) = v12[6];
      BYTE2(v20) = v12[7];
      BYTE1(v20) = v12[8];
      LOBYTE(v20) = v12[9];
      HIBYTE(v19) = v12[10];
      BYTE2(v19) = v12[11];
      BYTE1(v19) = v12[12];
      LOBYTE(NvCachePriority) = v12[13];
    }
    else
    {
      BYTE3(v20) = v12[2];
      BYTE2(v20) = v12[3];
      BYTE1(v20) = v12[4];
      LOBYTE(v20) = v12[5];
      BYTE1(v19) = v12[7];
      LOBYTE(NvCachePriority) = v12[8];
    }
    v3 = v20;
    LOBYTE(v19) = NvCachePriority;
    v4 = NvCachePriority;
  }
  if ( v13 )
  {
    NvCachePriority = StRtlIoStorInfoGetNvCachePriority(v13, v18);
    v8 = v18[0];
    if ( NvCachePriority < 0 )
      v8 = 255;
    v5 = v8;
  }
  if ( !v10 )
  {
    if ( ((v2 - 8) & 0x5F) != 0 )
    {
      LOBYTE(NvCachePriority) = v2 - 10;
      if ( ((v2 - 10) & 0x5F) == 0 )
      {
        NvCachePriority = *(_DWORD *)(a1 + 16);
        if ( (NvCachePriority & 0x42) != 0 )
        {
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000) != 0 )
          {
            v15 = &EventPagingWriteRequest;
            goto LABEL_28;
          }
        }
        else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x400) != 0 )
        {
          v15 = &EventWriteRequest;
          goto LABEL_28;
        }
      }
    }
    else
    {
      NvCachePriority = *(_DWORD *)(a1 + 16);
      if ( (NvCachePriority & 0x42) != 0 )
      {
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800) != 0 )
        {
          v15 = &EventPagingReadRequest;
          goto LABEL_28;
        }
      }
      else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200) != 0 )
      {
        v15 = &EventReadRequest;
LABEL_28:
        LOBYTE(NvCachePriority) = Template_pcxxpc(v8, (_DWORD)v15, (unsigned int)v21, a1, v2, v4, v3, v13, v5);
      }
    }
  }
  return NvCachePriority;
}
