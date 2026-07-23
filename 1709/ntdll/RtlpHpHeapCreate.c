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

_DWORD *__fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  NTSTATUS v5; // eax
  char v6; // cl
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // r8
  _DWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+40h] [rbp-49h]
  __int64 (__fastcall *v20)(); // [rsp+48h] [rbp-41h]
  __int64 (__fastcall *v21)(); // [rsp+50h] [rbp-39h]
  __int64 v22; // [rsp+58h] [rbp-31h]
  char SystemInformation[56]; // [rsp+60h] [rbp-29h] BYREF
  char v24; // [rsp+98h] [rbp+Fh]

  v22 = a3;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v5 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  v6 = v24;
  if ( v5 < 0 )
    v6 = 1;
  v24 = v6;
  v7 = RtlpHpHeapAllocate(a1, v6);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = (__int64)(v7 + 6);
  v7[4] = -571548178;
  v10 = (__int64)(v7 + 28);
  v11 = (unsigned __int64)(v7 + 90);
  v7[5] = a1;
  RtlpHpSegContextInitialize(
    (_DWORD)v7 + 112,
    0x100000,
    (_DWORD)v7,
    (_DWORD)v7 + 480,
    (__int64)(v7 + 90),
    (__int64)(v7 + 6));
  RtlpHpSegContextInitialize((_DWORD)v8 + 216, 0x1000000, (_DWORD)v8, 0, 0LL, v9);
  *((_QWORD *)v8 + 9) = 0LL;
  *((_QWORD *)v8 + 10) = 0LL;
  *((_QWORD *)v8 + 11) = 0LL;
  *((_QWORD *)v8 + 41) = 0LL;
  if ( (v8[5] & 0x20000000) != 0 )
    v8[14] = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
  v21 = 0LL;
  *(_QWORD *)&v18 = RtlpHpSegVsAllocate;
  *((_QWORD *)&v18 + 1) = RtlpHpSegLfhVsFree;
  v19 = RtlpHpSegLfhVsCommit;
  v20 = RtlpHpSegLfhVsDecommit;
  RtlpHpVsContextInitialize(v11, v10, &v18);
  *(_QWORD *)&v18 = RtlpHpSegLfhAllocate;
  *((_QWORD *)&v18 + 1) = RtlpHpSegLfhVsFree;
  v19 = RtlpHpSegLfhVsCommit;
  v20 = RtlpHpSegLfhVsDecommit;
  v21 = RtlpHpSegLfhExtendContext;
  RtlpHpLfhContextInitialize((_DWORD)v8 + 480, v10, v24, (unsigned int)&v18, v9);
  v12 = v22;
  *((_QWORD *)v8 + 40) = 0LL;
  if ( (int)RtlpHpSegContextReserve(v10, a2, v12) < 0 )
  {
    v13 = 0LL;
LABEL_24:
    if ( v8 )
      RtlpHpHeapDestroy(v8);
    return v13;
  }
  v13 = v8;
  v8 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    RtlpHeapLogRangeCreate(v13, *((_QWORD *)v13 + 44) - (_QWORD)v13, a1);
  v15 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v16 = 2147353472LL;
  if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapCreateEvent(
      (_DWORD)v13,
      a1,
      *((_QWORD *)v13 + 44) - (_DWORD)v13,
      v13[86] - (_DWORD)v13,
      *(unsigned __int8 *)v15);
    goto LABEL_24;
  }
  return v13;
}
