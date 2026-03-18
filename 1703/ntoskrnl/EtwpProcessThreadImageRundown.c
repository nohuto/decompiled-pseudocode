/*
 * XREFs of EtwpProcessThreadImageRundown @ 0x1404B01BC
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x14006B3C0 (KeQueryTimeIncrement.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpIsStackWalkingEnabled @ 0x14045EE0C (EtwpIsStackWalkingEnabled.c)
 *     PsEnumProcesses @ 0x1404B0354 (PsEnumProcesses.c)
 *     EtwpProcessEnumCallback @ 0x1404B03C0 (EtwpProcessEnumCallback.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     PsLookupProcessByProcessId @ 0x14050F8F0 (PsLookupProcessByProcessId.c)
 */

__int64 __fastcall EtwpProcessThreadImageRundown(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int **a4,
        unsigned int a5)
{
  NTSTATUS v8; // r14d
  __int64 v10; // rax
  __int16 v11; // dx
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  ULONG TimeIncrement; // eax
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v19; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v25[14]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v27; // [rsp+F0h] [rbp-10h]
  int v28; // [rsp+F8h] [rbp-8h]
  int v29; // [rsp+FCh] [rbp-4h]
  ULONG *v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  int v32; // [rsp+10Ch] [rbp+Ch]
  __int64 *v33; // [rsp+110h] [rbp+10h]
  int v34; // [rsp+118h] [rbp+18h]
  int v35; // [rsp+11Ch] [rbp+1Ch]
  char *v36; // [rsp+120h] [rbp+20h]
  int v37; // [rsp+128h] [rbp+28h]
  int v38; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v39; // [rsp+130h] [rbp+30h]
  int v40; // [rsp+138h] [rbp+38h]
  int v41; // [rsp+13Ch] [rbp+3Ch]
  char *v42; // [rsp+140h] [rbp+40h]
  int v43; // [rsp+148h] [rbp+48h]
  int v44; // [rsp+14Ch] [rbp+4Ch]
  PEPROCESS *p_Process; // [rsp+150h] [rbp+50h]
  int v46; // [rsp+158h] [rbp+58h]
  int v47; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v48; // [rsp+160h] [rbp+60h]
  int v49; // [rsp+168h] [rbp+68h]
  int v50; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v51; // [rsp+170h] [rbp+70h]
  int v52; // [rsp+178h] [rbp+78h]
  int v53; // [rsp+17Ch] [rbp+7Ch]

  v8 = 0;
  memset(v25, 0, 0x68uLL);
  v25[0] = a1;
  HIDWORD(v25[3]) = a2;
  LOBYTE(v25[12]) = a3;
  v10 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, a2, 0LL);
  if ( !v10 )
    return 3221226134LL;
  v11 = 1283;
  if ( !a3 )
    v11 = 1284;
  BYTE2(v25[12]) = EtwpIsStackWalkingEnabled(v10, v11);
  if ( a1 && (*(_DWORD *)(a1 + 16) & 0x40) != 0 && (*(_DWORD *)(v12 + 12) & 0x2000000) != 0 )
    v25[1] = &EtwpObjectTypeFilter[10 * *(unsigned __int8 *)(v12 + 818)];
  EtwpReleaseLoggerContext(v12, 0LL);
  v25[2] = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x74777445u);
  if ( v25[2] )
    LOWORD(v25[3]) = 0x2000;
  v13 = EtwpOneMs / -4 * (unsigned int)EtwpStackCaptureTimeout / KeQueryTimeIncrement();
  if ( !(_DWORD)v13 )
    LODWORD(v13) = 1;
  LODWORD(v25[7]) = v13;
  if ( a5 && a4 )
  {
    v15 = 0;
    v16 = (_DWORD *)a4 + 3;
    while ( *v16 != -2147483644 )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= a5 )
        goto LABEL_11;
    }
    v8 = PsLookupProcessByProcessId((HANDLE)**a4, &Process);
    if ( v8 < 0 )
      goto LABEL_13;
    EtwpProcessEnumCallback((ULONG_PTR)Process);
  }
  else
  {
LABEL_11:
    EtwpProcessEnumCallback((ULONG_PTR)PsIdleProcess);
    PsEnumProcesses(EtwpProcessEnumCallback, v25);
  }
  if ( BYTE2(v25[12]) && stru_14033C690.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C690, 0x200000000000uLL) )
  {
    v18 = EtwpStackCaptureTimeout;
    TimeIncrement = KeQueryTimeIncrement();
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v53 = 0;
    v19 = TimeIncrement;
    v20 = v25[8];
    v21 = v25[9];
    LODWORD(Process) = HIDWORD(v25[7]);
    v23 = v25[10];
    v24 = v25[11];
    v27 = &v18;
    v30 = &v19;
    v33 = &v20;
    v36 = (char *)&v20 + 4;
    v39 = &v21;
    v42 = (char *)&v21 + 4;
    p_Process = &Process;
    v48 = &v23;
    v51 = &v24;
    v28 = 4;
    v31 = 4;
    v34 = 4;
    v37 = 4;
    v40 = 4;
    v43 = 4;
    v46 = 4;
    v49 = 8;
    v52 = 8;
    TlgWrite(&stru_14033C690, &unk_1402AF950, 0LL, 0LL, 0xBu, &pData);
  }
LABEL_13:
  if ( v25[2] )
    ExFreePoolWithTag((PVOID)v25[2], 0);
  if ( v25[5] )
    ExFreePoolWithTag((PVOID)v25[5], 0);
  return (unsigned int)v8;
}
