/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x180077500
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D3200 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D32A0 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     sub_1800060E8 @ 0x1800060E8 (sub_1800060E8.c)
 *     sub_180077744 @ 0x180077744 (sub_180077744.c)
 *     sub_180077F84 @ 0x180077F84 (sub_180077F84.c)
 *     RtlWow64GetProcessMachines @ 0x18007BFC0 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     ZwOpenProcess @ 0x18009AF80 (ZwOpenProcess.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009B2A0 (ZwReadVirtualMemory.c)
 *     ZwTerminateThread @ 0x18009B520 (ZwTerminateThread.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D2620 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D27B0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D2B90 (RtlQueryProcessLockInformation.c)
 *     sub_1800D2FD8 @ 0x1800D2FD8 (sub_1800D2FD8.c)
 *     sub_1800D31B0 @ 0x1800D31B0 (sub_1800D31B0.c)
 *     sub_1800D35E8 @ 0x1800D35E8 (sub_1800D35E8.c)
 *     sub_1800D56BC @ 0x1800D56BC (sub_1800D56BC.c)
 *     sub_1800FF1D0 @ 0x1800FF1D0 (sub_1800FF1D0.c)
 *     sub_1800FF2CC @ 0x1800FF2CC (sub_1800FF2CC.c)
 */

__int64 __fastcall RtlQueryProcessDebugInformation(_QWORD *a1, unsigned int a2, __int64 a3)
{
  void (__fastcall __noreturn *v3)(); // rbx
  _QWORD *v4; // r15
  __int64 v8; // r8
  bool v9; // dl
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  unsigned int v14; // r15d
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r15
  int v19; // eax
  __int64 v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v22[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v23; // [rsp+6Ch] [rbp-94h]
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall __noreturn *v26)(); // [rsp+80h] [rbp-80h]
  _QWORD *v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h]
  __int128 v37; // [rsp+D8h] [rbp-28h]
  _QWORD v38[17]; // [rsp+E8h] [rbp-18h] BYREF
  int v39[12]; // [rsp+170h] [rbp+70h] BYREF
  char v40[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  void (__fastcall __noreturn *v41)(); // [rsp+1E0h] [rbp+E0h]

  v3 = 0LL;
  v26 = RtlpQueryProcessDebugInformationRemote;
  v4 = 0LL;
  v21 = 0LL;
  v23 = 0;
  if ( *(_QWORD *)(a3 + 48) && *(_QWORD **)(a3 + 48) != a1 )
    return 3221225485LL;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v8 = *(_QWORD *)(a3 + 72);
  v30 = -600000000LL;
  if ( v8 )
    memset((void *)(a3 + 208), 0, v8 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  v9 = 0;
  if ( (a2 & 0x3FFFFFBE) == 0 )
    v9 = (a2 & 0x80000000) != 0 && (a2 & 0x41) != 0;
  if ( v9 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v4 = a1;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != a1 )
    {
      v33 = 48;
      v34 = 0LL;
      v36 = 0;
      v35 = 0LL;
      v27 = a1;
      v37 = 0LL;
      v28 = 0LL;
      v10 = ZwOpenProcess(&v21, 0x1FFFFFLL, &v33, &v27);
      v11 = v21;
      v4 = v38;
      v38[1] = sub_180077D70;
      if ( v10 < 0 )
        v11 = 0LL;
      v38[2] = ZwQueryInformationProcess;
      v21 = v11;
      v38[0] = v11;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 || (a2 & 0x40000000) != 0 || v21 )
  {
    if ( (a2 & 0x41) == 0 || (LODWORD(v3) = sub_180077744(v4, a2, a3), !(_DWORD)v3) )
    {
      if ( (a2 & 2) == 0 || (LODWORD(v3) = RtlQueryProcessBackTraceInformation(a3), !(_DWORD)v3) )
      {
        if ( (a2 & 0x20) == 0 || (LODWORD(v3) = RtlQueryProcessLockInformation(a3), !(_DWORD)v3) )
        {
          if ( (a2 & 0x21C) == 0 || (LODWORD(v3) = RtlQueryProcessHeapInformation(a3), !(_DWORD)v3) )
          {
            if ( (a2 & 0x80u) == 0 || (LODWORD(v3) = sub_1800D56BC(a3), !(_DWORD)v3) )
            {
              if ( (a2 & 0xC00) != 0 )
                LODWORD(v3) = sub_1800D31B0(a3, a2);
            }
          }
        }
      }
    }
    v12 = v21;
    if ( !v21 )
      return (unsigned int)v3;
    goto LABEL_25;
  }
  if ( ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    v33 = 48;
    v34 = 0LL;
    v36 = 0;
    v35 = 0LL;
    v27 = a1;
    v37 = 0LL;
    v28 = 0LL;
    if ( (int)ZwOpenProcess(&v21, 4096LL, &v33, &v27) >= 0 )
    {
      if ( (int)RtlWow64GetProcessMachines(v21, v22, 0LL) >= 0
        && v22[0]
        && (int)ZwDuplicateObject(-1LL, v21, -1LL, &v24, 16, 0, 0) >= 0 )
      {
        if ( (int)ZwReadVirtualMemory(v24, &LdrSystemDllInitBlock, v40, 224LL, &v29) >= 0 && v29 == 224 )
          v3 = v41;
        ZwClose(v24);
        if ( v3 )
        {
          v26 = v3;
          v23 = 1;
        }
      }
      ZwClose(v21);
    }
    v21 = 0LL;
  }
  v14 = v23;
  v25 = 0LL;
  result = sub_180077F84(a3, a1, v23, &v25);
  if ( (int)result >= 0 )
  {
    v15 = v25;
    v16 = v25;
    if ( !v25 )
      v16 = *(_QWORD *)(a3 + 136);
    LODWORD(v3) = sub_1800FF1D0(v16, &v32);
    v12 = v15;
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = sub_1800060E8(v15, 0LL, 6, 0, 0LL, 0LL, v20, (__int64)v26, *(_QWORD *)(a3 + 16), &v31, 0LL);
      if ( (int)v3 >= 0 )
      {
        v18 = v31;
        LOBYTE(v17) = 1;
        v19 = ZwWaitForSingleObject(v31, v17, &v30);
        LODWORD(v3) = v19;
        if ( v19 < 0 )
        {
          ZwTerminateThread(v18, (unsigned int)v19);
        }
        else
        {
          LODWORD(v3) = ZwQueryInformationThread(v18, 0LL, v39, 48LL, 0LL);
          if ( (int)v3 >= 0 )
            LODWORD(v3) = v39[0];
        }
        ZwClose(v18);
        v14 = v23;
      }
      ZwClose(v15);
      if ( v32 )
        sub_1800FF2CC();
      if ( (int)v3 < 0 )
        return (unsigned int)v3;
      if ( v14 == 1 )
      {
        LODWORD(v3) = 0;
        *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a3 + 88)
                                                                                          + a3
                                                                                          + 80), 4));
      }
      else
      {
        if ( !v14 )
          LODWORD(v3) = sub_1800D2FD8(a3);
        if ( (int)v3 < 0 )
          return (unsigned int)v3;
      }
      if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
        LODWORD(v3) = -1073741558;
      if ( (a2 & 0x40) != 0 && !*(_QWORD *)(a3 + 96) )
        LODWORD(v3) = -1073741558;
      if ( (int)v3 >= 0 )
        LODWORD(v3) = sub_1800D35E8(a3, a2, a3 + 208, *(_QWORD *)(a3 + 72) - 208LL);
      return (unsigned int)v3;
    }
LABEL_25:
    ZwClose(v12);
    return (unsigned int)v3;
  }
  return result;
}
