/*
 * XREFs of StorEtwLogoRequestServiceTimeEventData @ 0x1C0040E58
 * Callers:
 *     StorPortNotification @ 0x1C0005A70 (StorPortNotification.c)
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 *     Template_ccccxqbcppxxx @ 0x1C0041D9C (Template_ccccxqbcppxxx.c)
 */

unsigned __int64 __fastcall StorEtwLogoRequestServiceTimeEventData(_QWORD *a1, char a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdi
  int v5; // ebp
  char v6; // r14
  char v7; // r12
  char v8; // si
  unsigned __int64 v9; // r15
  LARGE_INTEGER v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rtt
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned __int64 v18; // rtt
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rtt
  __int64 v23; // r8
  __int64 v24; // rcx
  char v25; // dl
  char v26; // r9
  char v27; // r10
  void *v28; // rdx
  char v29; // [rsp+20h] [rbp-98h]
  char v30; // [rsp+28h] [rbp-90h]
  char v31; // [rsp+30h] [rbp-88h]
  char v32; // [rsp+38h] [rbp-80h]
  int v33; // [rsp+40h] [rbp-78h]
  __int64 v34; // [rsp+48h] [rbp-70h]
  char v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h]
  __int64 v37; // [rsp+60h] [rbp-58h]
  char v38; // [rsp+68h] [rbp-50h]
  char v39; // [rsp+70h] [rbp-48h]
  __int64 v40; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF
  union _LARGE_INTEGER v42; // [rsp+C0h] [rbp+8h] BYREF
  int v43; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+18h]

  result = (unsigned __int64)&retaddr;
  v44 = a3;
  v4 = a1[21];
  v5 = 0;
  v6 = 0;
  v43 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( a2 )
    goto LABEL_39;
  if ( UseQPCTime )
    v12 = KeQueryPerformanceCounter(&v42);
  else
    v12.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v12.QuadPart <= 0 || (v13 = a1[87], v12.QuadPart >= v13) )
    result = v12.QuadPart - a1[87];
  else
    result = v12.QuadPart - v13 - 1;
  if ( UseQPCTime )
  {
    if ( v42.QuadPart && result )
    {
      v14 = 1000 * (result % v42.QuadPart);
      v15 = v14 / v42.QuadPart + 1000 * (result / v42.QuadPart);
      result = 10000 * (v14 % v42.QuadPart) / v42.QuadPart;
      v6 = result + 16 * v15;
    }
  }
  else
  {
    v6 = result;
  }
  v16 = a1[88];
  v17 = a1[87];
  if ( v16 >= v17 )
  {
    if ( v16 <= 0 || v16 >= v17 )
      result = v16 - v17;
    else
      result = v16 - v17 - 1;
    if ( UseQPCTime )
    {
      if ( v42.QuadPart && result )
      {
        v18 = 1000 * (result % v42.QuadPart);
        v19 = v18 / v42.QuadPart + 1000 * (result / v42.QuadPart);
        result = 10000 * (v18 % v42.QuadPart) / v42.QuadPart;
        v7 = result + 16 * v19;
      }
    }
    else
    {
      v7 = result;
    }
  }
  if ( v16 && a1[89] >= v16 )
  {
    v20 = a1[89];
    if ( v20 <= 0 || (v21 = a1[88], v20 >= v16) )
    {
      result = v20 - v16;
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  if ( a1[89] < v17 )
    goto LABEL_39;
  v20 = a1[89];
  if ( v20 > 0 )
  {
    v21 = a1[87];
    if ( v20 < v17 )
    {
LABEL_32:
      result = v20 - v21 - 1;
      goto LABEL_34;
    }
  }
  result = v20 - v17;
LABEL_34:
  if ( UseQPCTime )
  {
    if ( v42.QuadPart && result )
    {
      v22 = 1000 * (result % v42.QuadPart);
      v23 = v22 / v42.QuadPart + 1000 * (result / v42.QuadPart);
      result = 10000 * (v22 % v42.QuadPart) / v42.QuadPart;
      v8 = result + 16 * v23;
    }
  }
  else
  {
    v8 = result;
  }
LABEL_39:
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v4 + 20) )
    {
      result = GetSrbScsiData(v4, &v43, &v43, 0LL, 0LL, 0LL);
      v5 = v43;
      v9 = result;
    }
    v24 = *(unsigned int *)(v4 + 52);
    v25 = *(_BYTE *)(v24 + v4 + 8);
    v26 = *(_BYTE *)(v24 + v4 + 9);
    v27 = *(_BYTE *)(v24 + v4 + 10);
  }
  else
  {
    v25 = *(_BYTE *)(v4 + 5);
    v9 = v4 + 72;
    v26 = *(_BYTE *)(v4 + 6);
    v5 = 16;
    v27 = *(_BYTE *)(v4 + 7);
  }
  if ( a2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) == 0 )
      return result;
    LOBYTE(v40) = 0;
    v39 = 0;
    v38 = 0;
    v37 = a1[96];
    v36 = a1[20];
    v35 = *(_BYTE *)(v4 + 3);
    v34 = v9;
    v33 = v5;
    v32 = v44;
    v31 = v27;
    v30 = v26;
    v29 = v25;
    v28 = &EventLogoPerformanceMeasurementTarget;
  }
  else
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) == 0 )
      return result;
    v40 = a1[90];
    v39 = v8;
    v38 = v7;
    v37 = a1[96];
    v36 = a1[20];
    v35 = *(_BYTE *)(v4 + 3);
    v34 = v9;
    v33 = v5;
    v32 = v6;
    v31 = v27;
    v30 = v26;
    v29 = v25;
    v28 = &EventLogoPerformanceMeasurement;
  }
  return Template_ccccxqbcppxxx(
           a1[27],
           (_DWORD)v28,
           (int)a1 + 728,
           *(_BYTE *)(a1[27] + 56LL),
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40);
}
