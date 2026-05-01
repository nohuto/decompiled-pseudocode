/*
 * XREFs of ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006479C
 * Callers:
 *     ?HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180034170 (-HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180041DDC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

void __fastcall HamRmHostLogRundownEvents(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // r9d
  struct _HAM_ACTIVITY *i; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // r9d
  __int64 v8; // r10
  char v9; // al
  struct _HAM_ACTIVITY *v10; // rbx
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  char v13; // [rsp+32h] [rbp-CEh] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+B0h] [rbp-50h] BYREF
  int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  char *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  __int64 *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  char *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  __int64 *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  __int64 v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  __int64 v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]

  HampHostAcquireLockExclusiveEx(a1, 0);
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v17, (union _RM_OPTIMIZATION_STATE *)&v19);
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
    v2 = *((_DWORD *)a1 + 140);
    v25.Ptr = (ULONGLONG)&v16;
    v20 = *((_QWORD *)a1 - 4);
    v26.Ptr = (ULONGLONG)&v20;
    v18 = v17;
    v27 = &v18;
    v14 = v19;
    v29 = &v14;
    v15 = *((_DWORD *)a1 + 156);
    v31 = &v15;
    v11 = *((_BYTE *)a1 + 632);
    v33 = (int *)&v11;
    v35 = (char *)a1 + 768;
    v16 = v2;
    *(_QWORD *)&v25.Size = 4LL;
    *(_QWORD *)&v26.Size = 8LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 1LL;
    v36 = 8LL;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008271F, 0LL, 0LL, 0xAu, &pData);
  }
  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v10) )
  {
    v10 = i;
    if ( !i )
      break;
    v22 = *(_QWORD *)(*((_QWORD *)i + 11) + 16LL);
    v4 = *((_QWORD *)i + 9);
    if ( v4 )
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL);
    else
      v5 = -1LL;
    v21 = v5;
    if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
    {
      *(_QWORD *)&pDesc.Size = v6;
      pDesc.Ptr = (ULONGLONG)v10 + 40;
      TlgCreateWsz(&v25, (LPCWSTR)v10 + 126);
      TlgCreateWsz(&v26, (LPCWSTR)v10 + 62);
      v7 = *((_DWORD *)v10 + 28);
      v27 = &v15;
      v11 = *((_BYTE *)v10 + 540);
      v29 = (int *)&v11;
      v12 = *((_BYTE *)v10 + 541);
      v31 = (int *)&v12;
      v14 = *(_DWORD *)(v8 + 32);
      v33 = &v14;
      v9 = *((_BYTE *)v10 + 536) & 1;
      v15 = v7;
      v13 = v9;
      v35 = &v13;
      v37 = &v21;
      v39 = (char *)v10 + 504;
      v41 = &v22;
      v45 = v8 + 8;
      v28 = 4LL;
      v30 = 1LL;
      v32 = 1LL;
      v34 = 4LL;
      v36 = 1LL;
      v38 = 8LL;
      v40 = 8LL;
      v42 = 8LL;
      v43 = v8;
      v44 = 8LL;
      v46 = 8LL;
      TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082822, 0LL, 0LL, 0xFu, &pData);
    }
  }
  HampHostReleaseLockExclusiveEx(a1);
  RmHamHostActOnProcesses(
    (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
    0,
    1,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampHostLogProcess,
    0LL);
}
