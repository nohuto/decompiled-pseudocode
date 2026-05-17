/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x180067770
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D9E10 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D9EB0 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     sub_180052D68 @ 0x180052D68 (sub_180052D68.c)
 *     sub_180067988 @ 0x180067988 (sub_180067988.c)
 *     sub_1800686F4 @ 0x1800686F4 (sub_1800686F4.c)
 *     RtlQueryProcessHeapInformation @ 0x180095000 (RtlQueryProcessHeapInformation.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 *     ZwOpenProcess @ 0x1800A57C0 (ZwOpenProcess.c)
 *     ZwTerminateThread @ 0x1800A5D60 (ZwTerminateThread.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D9620 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D97B0 (RtlQueryProcessLockInformation.c)
 *     sub_1800D9C04 @ 0x1800D9C04 (sub_1800D9C04.c)
 *     sub_1800D9DB4 @ 0x1800D9DB4 (sub_1800D9DB4.c)
 *     sub_1800DA0F4 @ 0x1800DA0F4 (sub_1800DA0F4.c)
 *     sub_1800DBEFC @ 0x1800DBEFC (sub_1800DBEFC.c)
 *     sub_18010072C @ 0x18010072C (sub_18010072C.c)
 *     sub_180100828 @ 0x180100828 (sub_180100828.c)
 */

__int64 __fastcall RtlQueryProcessDebugInformation(_QWORD *a1, unsigned int a2, __int64 a3)
{
  void (__fastcall __noreturn *v3)(); // r13
  int ProcessBackTraceInformation; // ebx
  _QWORD *v5; // r15
  __int64 v9; // r8
  int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 result; // rax
  unsigned int v15; // r15d
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  int v30; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  __int128 v34; // [rsp+C0h] [rbp-40h]
  _QWORD v35[18]; // [rsp+D0h] [rbp-30h] BYREF
  int v36[24]; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v37; // [rsp+1E0h] [rbp+E0h]

  v3 = RtlpQueryProcessDebugInformationRemote;
  v22 = 0LL;
  ProcessBackTraceInformation = 0;
  v5 = 0LL;
  v37 = 0;
  if ( *(_QWORD *)(a3 + 48) && *(_QWORD **)(a3 + 48) != a1 )
    return 3221225485LL;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v9 = *(_QWORD *)(a3 + 72);
  v27 = -600000000LL;
  if ( v9 )
    memset((void *)(a3 + 208), 0, v9 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  v10 = a2 & 0x41;
  if ( (a2 & 0x3FFFFFBE) == 0 && v10 != 0 && (a2 & 0x80000000) != 0 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v5 = a1;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != a1 )
    {
      v30 = 48;
      v31 = 0LL;
      v33 = 0;
      v32 = 0LL;
      v24 = a1;
      v34 = 0LL;
      v25 = 0LL;
      v11 = ZwOpenProcess(&v22, 0x1FFFFFLL, &v30, &v24);
      v12 = v22;
      v5 = v35;
      v10 = a2 & 0x41;
      if ( v11 < 0 )
        v12 = 0LL;
      v35[1] = sub_1800681C0;
      v22 = v12;
      v35[2] = ZwQueryInformationProcess;
      v35[0] = v12;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 || (a2 & 0x40000000) != 0 || v22 )
  {
    if ( (!v10 || (ProcessBackTraceInformation = sub_180067988(v5, a2, a3)) == 0)
      && ((a2 & 2) == 0 || (ProcessBackTraceInformation = RtlQueryProcessBackTraceInformation(a3)) == 0)
      && ((a2 & 0x20) == 0 || (ProcessBackTraceInformation = RtlQueryProcessLockInformation(a3)) == 0)
      && ((a2 & 0x21C) == 0 || (ProcessBackTraceInformation = RtlQueryProcessHeapInformation(a3)) == 0)
      && ((a2 & 0x80u) == 0 || (ProcessBackTraceInformation = sub_1800DBEFC(a3)) == 0)
      && (a2 & 0xC00) != 0 )
    {
      ProcessBackTraceInformation = sub_1800D9DB4(a3, a2);
    }
    v13 = v22;
    if ( !v22 )
      return (unsigned int)ProcessBackTraceInformation;
    goto LABEL_23;
  }
  if ( ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    v30 = 48;
    v31 = 0LL;
    v33 = 0;
    v32 = 0LL;
    v24 = a1;
    v34 = 0LL;
    v25 = 0LL;
    if ( (int)ZwOpenProcess(&v22, 1024LL, &v30, &v24) >= 0 )
    {
      if ( (int)ZwQueryInformationProcess(v22, 26LL, &v26, 8LL, 0LL) >= 0 && v26 )
      {
        v3 = (void (__fastcall __noreturn *)())qword_18016B300;
        if ( qword_18016B300 )
          v37 = 1;
        else
          v3 = RtlpQueryProcessDebugInformationRemote;
      }
      ZwClose(v22);
    }
    v22 = 0LL;
  }
  v15 = v37;
  v23 = 0LL;
  result = sub_1800686F4(a3, a1, v37, &v23);
  if ( (int)result >= 0 )
  {
    v16 = v23;
    v17 = v23;
    if ( !v23 )
      v17 = *(_QWORD *)(a3 + 136);
    ProcessBackTraceInformation = sub_18010072C(v17, &v29);
    v13 = v16;
    if ( ProcessBackTraceInformation >= 0 )
    {
      ProcessBackTraceInformation = sub_180052D68(
                                      v16,
                                      0LL,
                                      6,
                                      0,
                                      0LL,
                                      0LL,
                                      v21,
                                      (__int64)v3,
                                      *(_QWORD *)(a3 + 16),
                                      &v28,
                                      0LL);
      if ( ProcessBackTraceInformation >= 0 )
      {
        v19 = v28;
        LOBYTE(v18) = 1;
        v20 = ZwWaitForSingleObject(v28, v18, &v27);
        ProcessBackTraceInformation = v20;
        if ( v20 < 0 )
        {
          ZwTerminateThread(v19, (unsigned int)v20);
        }
        else
        {
          ProcessBackTraceInformation = ZwQueryInformationThread(v19, 0LL, v36, 48LL, 0LL);
          if ( ProcessBackTraceInformation >= 0 )
            ProcessBackTraceInformation = v36[0];
        }
        ZwClose(v19);
        v15 = v37;
      }
      ZwClose(v16);
      if ( v29 )
        sub_180100828();
      if ( ProcessBackTraceInformation < 0 )
        return (unsigned int)ProcessBackTraceInformation;
      if ( v15 == 1 )
      {
        ProcessBackTraceInformation = 0;
        *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a3 + 88)
                                                                                          + a3
                                                                                          + 80), 4));
      }
      else
      {
        if ( !v15 )
          ProcessBackTraceInformation = sub_1800D9C04(a3);
        if ( ProcessBackTraceInformation < 0 )
          return (unsigned int)ProcessBackTraceInformation;
      }
      if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
        ProcessBackTraceInformation = -1073741558;
      if ( (a2 & 0x40) != 0 && !*(_QWORD *)(a3 + 96) )
        ProcessBackTraceInformation = -1073741558;
      if ( ProcessBackTraceInformation >= 0 )
        return (unsigned int)sub_1800DA0F4(a3, a2, a3 + 208, *(_QWORD *)(a3 + 72) - 208LL);
      return (unsigned int)ProcessBackTraceInformation;
    }
LABEL_23:
    ZwClose(v13);
    return (unsigned int)ProcessBackTraceInformation;
  }
  return result;
}
