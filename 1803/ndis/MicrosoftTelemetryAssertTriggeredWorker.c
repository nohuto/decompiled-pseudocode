/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C007EA74
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C007EA58 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _TlgWrite @ 0x1C0012C84 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1C001EF1C (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C001EF44 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C007EA00 (GetImageTuple.c)
 *     _TlgCreateSz @ 0x1C007EF94 (_TlgCreateSz.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rcx
  KIRQL v4; // r14
  __int64 *v5; // rdi
  __int64 *PoolWithTag; // rax
  __int64 v7; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  int ImageTuple; // eax
  __int64 v13; // r11
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
  UINT32 cData; // r11d
  KIRQL v31; // al
  __int64 *v32; // rcx
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+64h] [rbp-9Ch] BYREF
  int v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v41; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+74h] [rbp-8Ch] BYREF
  int v43; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v44; // [rsp+7Ch] [rbp-84h] BYREF
  int v45; // [rsp+80h] [rbp-80h] BYREF
  int v46; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v47; // [rsp+88h] [rbp-78h] BYREF
  int v48; // [rsp+8Ch] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR v49; // [rsp+90h] [rbp-70h] BYREF
  int *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  int *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  int *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  int *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  _EVENT_DATA_DESCRIPTOR v58; // [rsp+F0h] [rbp-10h] BYREF
  int *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  int *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  int *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  int *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  int *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  int *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  int *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+190h] [rbp+90h] BYREF
  int *v75; // [rsp+1A0h] [rbp+A0h]
  __int64 v76; // [rsp+1A8h] [rbp+A8h]
  int *v77; // [rsp+1B0h] [rbp+B0h]
  __int64 v78; // [rsp+1B8h] [rbp+B8h]
  int *v79; // [rsp+1C0h] [rbp+C0h]
  __int64 v80; // [rsp+1C8h] [rbp+C8h]
  _EVENT_DATA_DESCRIPTOR v81; // [rsp+1D0h] [rbp+D0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v2 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v3 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v4 = v2;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74727341u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_35:
      KeReleaseSpinLock(&g_AssertSpinLock, v4);
      return;
    }
    v7 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 5) = 0;
    *((_DWORD *)v5 + 6) = 0;
    v5[1] = ((__int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v9 = v5 + 4;
    v10 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v9 = g_MicrosoftTelemetryAssertsTriggeredList;
    v5[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v10 + 8) = v9;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v5 + 4);
  }
  else
  {
    while ( 1 )
    {
      v5 = v3 - 4;
      if ( *(v3 - 4) == a1 )
        break;
      v3 = (__int64 *)*v3;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v3 )
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v5 + 4);
  ++*((_DWORD *)v5 + 5);
  v11 = MEMORY[0xFFFFF78000000320];
  if ( (unsigned __int64)(v11 * KeQueryTimeIncrement() / 10000 - v5[1]) <= 0xEA60 )
    goto LABEL_35;
  ImageTuple = GetImageTuple(0x1C0000000LL, &v35, &v34);
  v14 = v34;
  v15 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v34 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v34 )
  {
    v16 = a1 - 0xC0000000;
  }
  else
  {
    v16 = 0;
  }
  v33 = *((_DWORD *)v5 + 4);
  v17 = *((_DWORD *)v5 + 5);
  v5[1] = v13;
  v18 = *((_DWORD *)v5 + 6);
  v34 = v17;
  KeReleaseSpinLock(&g_AssertSpinLock, v4);
  v21 = "<unknown>";
  if ( stru_1C00AB010.LevelPlus1 > 5 && TlgKeywordOn(&stru_1C00AB010, 0x400000000000uLL) )
  {
    v36 = 10;
    v37 = v16;
    v22 = "<unknown>";
    v38 = v15 != 0 ? v35 : 0;
    v39 = v15 != 0 ? v14 : 0;
    if ( g_ModuleName )
      v22 = g_ModuleName;
    v40 = v33;
    v41 = v34;
    CurrentIrql = KeGetCurrentIrql();
    v66 = &v36;
    v68 = (int *)&v37;
    v70 = &v38;
    v42 = CurrentIrql;
    v72 = &v39;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    TlgCreateSz(&pDesc, v22);
    v76 = 4LL;
    v77 = (int *)&v41;
    v75 = &v40;
    v79 = &v42;
    v78 = 4LL;
    v80 = 4LL;
    TlgCreateSz(&v81, "<unknown>");
    TlgWrite(&stru_1C00AB010, &unk_1C0086B34, v24, v25, 0xBu, &pData);
  }
  if ( TraceLoggingProviderEnabled(&stru_1C00AB050, v19, v20) && !v18 && !KeGetCurrentIrql() )
  {
    v27 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v16, g_ModuleName, v35, v14, v26, v26, 0);
    if ( stru_1C00AB010.LevelPlus1 > 5 && TlgKeywordOn(&stru_1C00AB010, 0x400000000000uLL) )
    {
      v44 = v16;
      v48 = v27;
      v51 = 4LL;
      v43 = 10;
      v45 = v15 != 0 ? v35 : 0;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v46 = v15 != 0 ? v14 : 0;
      if ( g_ModuleName )
        v21 = g_ModuleName;
      v47 = v34;
      v50 = &v43;
      v52 = (int *)&v44;
      v54 = &v45;
      v56 = &v46;
      TlgCreateSz(&v58, v21);
      v60 = 4LL;
      v61 = (int *)&v47;
      v59 = &v33;
      v63 = &v48;
      v62 = 4LL;
      v64 = 4LL;
      TlgWrite(&stru_1C00AB010, &unk_1C0086ACB, v28, v29, cData, &v49);
    }
    if ( !v27 )
    {
      v31 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v32 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v4 = v31;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v32 - 4) != a1 )
        {
          v32 = (__int64 *)*v32;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v32 )
            goto LABEL_35;
        }
        ++*((_DWORD *)v32 - 2);
      }
      goto LABEL_35;
    }
  }
}
