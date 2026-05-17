/*
 * XREFs of RtlpHpHeapCreate @ 0x180003E00
 * Callers:
 *     RtlpHpMetadataHeapInit @ 0x1800036A0 (RtlpHpMetadataHeapInit.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHpHeapAllocate @ 0x180003B70 (RtlpHpHeapAllocate.c)
 *     RtlpHpVsContextInitialize @ 0x180003D48 (RtlpHpVsContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x180004040 (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x1800040FC (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextInitialize @ 0x180004254 (RtlpHpLfhContextInitialize.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapDestroy @ 0x1800615DC (RtlpHpHeapDestroy.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A0780 (NtQuerySystemInformation.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1800FF8BC (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapLogRangeCreate @ 0x1800FF970 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCreateEvent @ 0x18010153C (RtlpLogHeapCreateEvent.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  NTSTATUS v5; // eax
  char v6; // cl
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rcx
  __int128 v22; // [rsp+30h] [rbp-59h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+40h] [rbp-49h]
  __int64 (__fastcall *v24)(); // [rsp+48h] [rbp-41h]
  __int64 (__fastcall *v25)(); // [rsp+50h] [rbp-39h]
  __int64 v26; // [rsp+58h] [rbp-31h]
  char SystemInformation[56]; // [rsp+60h] [rbp-29h] BYREF
  char v28; // [rsp+98h] [rbp+Fh]

  v26 = a3;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v5 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  v6 = v28;
  if ( v5 < 0 )
    v6 = 1;
  v28 = v6;
  v7 = RtlpHpHeapAllocate(a1, v6);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = v7 + 24;
  *(_DWORD *)(v7 + 16) = -571548178;
  v10 = v7 + 112;
  v11 = v7 + 360;
  *(_DWORD *)(v7 + 20) = a1;
  RtlpHpSegContextInitialize(v7 + 112, 0x100000, v7, v7 + 480, v7 + 360, v7 + 24);
  RtlpHpSegContextInitialize(v8 + 216, 0x1000000, v8, 0, 0LL, v9);
  *(_QWORD *)(v8 + 72) = 0LL;
  *(_QWORD *)(v8 + 80) = 0LL;
  *(_QWORD *)(v8 + 88) = 0LL;
  *(_QWORD *)(v8 + 328) = 0LL;
  if ( (*(_DWORD *)(v8 + 20) & 0x20000000) != 0 )
    *(_DWORD *)(v8 + 56) = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
  v25 = 0LL;
  *(_QWORD *)&v22 = RtlpHpSegVsAllocate;
  *((_QWORD *)&v22 + 1) = RtlpHpSegLfhVsFree;
  v23 = RtlpHpSegLfhVsCommit;
  v24 = RtlpHpSegLfhVsDecommit;
  RtlpHpVsContextInitialize(v11, v10, &v22);
  *(_QWORD *)&v22 = RtlpHpSegLfhAllocate;
  *((_QWORD *)&v22 + 1) = RtlpHpSegLfhVsFree;
  v23 = RtlpHpSegLfhVsCommit;
  v24 = RtlpHpSegLfhVsDecommit;
  v25 = RtlpHpSegLfhExtendContext;
  RtlpHpLfhContextInitialize(v8 + 480, v10, v28, (unsigned int)&v22, v9);
  v12 = v26;
  *(_QWORD *)(v8 + 320) = 0LL;
  if ( (int)RtlpHpSegContextReserve(v10, a2, v12) < 0 )
  {
    v15 = 0LL;
LABEL_24:
    if ( v8 )
      RtlpHpHeapDestroy(v8);
    return v15;
  }
  v15 = v8;
  v8 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v13) )
    v17 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v17 = 2147353480LL;
  if ( *(_BYTE *)v17 )
    RtlpHeapLogRangeCreate(v15, *(_QWORD *)(v15 + 352) - v15, a1);
  v19 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v16) )
    v20 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v20 = 2147353472LL;
  if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v18) )
      v19 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapCreateEvent(v15, a1, *(_QWORD *)(v15 + 352) - v15, *(_DWORD *)(v15 + 344) - v15, *(unsigned __int8 *)v19);
    goto LABEL_24;
  }
  return v15;
}
