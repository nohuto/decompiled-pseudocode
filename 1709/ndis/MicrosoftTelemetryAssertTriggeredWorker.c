/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0022104
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00220E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011DA8 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1C0012B48 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0012B70 (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x1C0022468 (_TlgCreateSz.c)
 *     GetImageTuple @ 0x1C002249C (GetImageTuple.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  KIRQL v2; // r14
  __int64 *v3; // rcx
  __int64 *PoolWithTag; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int ImageTuple; // eax
  __int64 v12; // r10
  unsigned __int64 v13; // r11
  __int64 v14; // r15
  int v15; // r12d
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // edi
  UCHAR v19; // dl
  ULONGLONG v20; // r8
  const CHAR *v21; // r14
  const CHAR *v22; // rdx
  unsigned __int8 CurrentIrql; // al
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  __int64 v26; // r10
  int v27; // edi
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  __int64 *v30; // rax
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+74h] [rbp-8Ch] BYREF
  int v41; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v42; // [rsp+7Ch] [rbp-84h] BYREF
  int v43; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v45; // [rsp+88h] [rbp-78h] BYREF
  int v46; // [rsp+8Ch] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR v47; // [rsp+90h] [rbp-70h] BYREF
  int *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  int *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  int *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  int *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  _EVENT_DATA_DESCRIPTOR v56; // [rsp+F0h] [rbp-10h] BYREF
  int *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  int *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  int *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  int *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  int *v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  int *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  int *v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+190h] [rbp+90h] BYREF
  int *v73; // [rsp+1A0h] [rbp+A0h]
  __int64 v74; // [rsp+1A8h] [rbp+A8h]
  int *v75; // [rsp+1B0h] [rbp+B0h]
  __int64 v76; // [rsp+1B8h] [rbp+B8h]
  int *v77; // [rsp+1C0h] [rbp+C0h]
  __int64 v78; // [rsp+1C8h] [rbp+C8h]
  _EVENT_DATA_DESCRIPTOR v79; // [rsp+1D0h] [rbp+D0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v2 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v3 = &g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_3:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74727341u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_37:
      KeReleaseSpinLock(&g_AssertSpinLock, v2);
      return;
    }
    v6 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 5) = 0;
    *((_DWORD *)v5 + 6) = 0;
    v5[1] = ((__int64)((unsigned __int128)(v6 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v6 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v8 = v5 + 4;
    v9 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v8 = g_MicrosoftTelemetryAssertsTriggeredList;
    v5[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v9 + 8) = v8;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v5 + 4);
  }
  else
  {
    while ( 1 )
    {
      v3 = (__int64 *)*v3;
      v5 = v3 - 4;
      if ( *(v3 - 4) == a1 )
        break;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)*v3 )
        goto LABEL_3;
    }
  }
  ++*((_DWORD *)v5 + 4);
  ++*((_DWORD *)v5 + 5);
  v10 = MEMORY[0xFFFFF78000000320];
  if ( (unsigned __int64)(v10 * KeQueryTimeIncrement() / 10000 - v5[1]) <= 0xEA60 )
    goto LABEL_37;
  ImageTuple = GetImageTuple(0x1C0000000uLL, &v33, &v32);
  v14 = v32;
  v15 = ImageTuple;
  if ( ImageTuple && a1 >= v13 && v13 + v32 > v13 && a1 <= v13 + v32 )
    v16 = a1 - v13;
  else
    v16 = 0;
  v31 = *((_DWORD *)v5 + 4);
  v17 = *((_DWORD *)v5 + 5);
  v5[1] = v12;
  v18 = *((_DWORD *)v5 + 6);
  v32 = v17;
  KeReleaseSpinLock(&g_AssertSpinLock, v2);
  v21 = "<unknown>";
  if ( stru_1C0097470.LevelPlus1 > 5 && TlgKeywordOn(&stru_1C0097470, 0x400000000000uLL) )
  {
    v34 = 18;
    v35 = v16;
    v22 = "<unknown>";
    v36 = v15 != 0 ? v33 : 0;
    v37 = v15 != 0 ? v14 : 0;
    if ( g_ModuleName )
      v22 = g_ModuleName;
    v38 = v31;
    v39 = v32;
    CurrentIrql = KeGetCurrentIrql();
    v64 = &v34;
    v66 = (int *)&v35;
    v68 = &v36;
    v40 = CurrentIrql;
    v70 = &v37;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    TlgCreateSz(&pDesc, v22);
    v74 = 4LL;
    v75 = (int *)&v39;
    v73 = &v38;
    v77 = &v40;
    v76 = 4LL;
    v78 = 4LL;
    TlgCreateSz(&v79, "<unknown>");
    TlgWrite(&stru_1C0097470, &unk_1C0085AA6, v24, v25, 0xBu, &pData);
  }
  if ( TraceLoggingProviderEnabled(&stru_1C0097430, v19, v20) && !v18 && !KeGetCurrentIrql() )
  {
    v27 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v16, g_ModuleName, v33, v14, v26, v26, v26);
    if ( stru_1C0097470.LevelPlus1 > 5 && TlgKeywordOn(&stru_1C0097470, 0x400000000000uLL) )
    {
      v41 = 18;
      v42 = v16;
      v46 = v27;
      v49 = 4LL;
      v43 = v15 != 0 ? v33 : 0;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v44 = v15 != 0 ? v14 : 0;
      if ( g_ModuleName )
        v21 = g_ModuleName;
      v45 = v32;
      v48 = &v41;
      v50 = (int *)&v42;
      v52 = &v43;
      v54 = &v44;
      TlgCreateSz(&v56, v21);
      v58 = 4LL;
      v59 = (int *)&v45;
      v57 = &v31;
      v61 = &v46;
      v60 = 4LL;
      v62 = 4LL;
      TlgWrite(&stru_1C0097470, &unk_1C0085A3D, v28, v29, 0xAu, &v47);
    }
    if ( !v27 )
    {
      v2 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v30 = &g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( 1 )
        {
          v30 = (__int64 *)*v30;
          if ( *(v30 - 4) == a1 )
            break;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)*v30 )
            goto LABEL_37;
        }
        ++*((_DWORD *)v30 - 2);
      }
      goto LABEL_37;
    }
  }
}
