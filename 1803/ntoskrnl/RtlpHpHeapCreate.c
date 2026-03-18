/*
 * XREFs of RtlpHpHeapCreate @ 0x140294F54
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x140295D50 (RtlpHpMetadataHeapCreate.c)
 *     ExCreateHeap @ 0x1402BD44C (ExCreateHeap.c)
 * Callees:
 *     RtlpHpVsContextInitialize @ 0x14014BAB0 (RtlpHpVsContextInitialize.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHpHeapAllocate @ 0x140294D44 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x140295244 (RtlpHpHeapDestroy.c)
 *     RtlpHpRegisterEnvironment @ 0x140295E0C (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextInitialize @ 0x140297B68 (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x140297C58 (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextInitialize @ 0x14029A594 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 *     RtlRunOnceInitialize @ 0x1406216C0 (RtlRunOnceInitialize.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  char v8; // dl
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdi
  __int128 v12; // xmm0
  __int64 v13; // r14
  unsigned __int64 v14; // r12
  int v15; // r13d
  __int64 v16; // r15
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  __int128 v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 HeapManager; // rbx
  __int128 v25; // [rsp+40h] [rbp-69h] BYREF
  __int128 v26[3]; // [rsp+50h] [rbp-59h] BYREF
  char SystemInformation[56]; // [rsp+80h] [rbp-29h] BYREF
  char v28; // [rsp+B8h] [rbp+Fh]

  if ( (int)RtlpHpRegisterEnvironment(a4, 1LL) < 0 )
    return 0LL;
  v7 = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  v8 = v28;
  v9 = *a4;
  if ( v7 < 0 )
    v8 = 1;
  v28 = v8;
  v25 = v9;
  v10 = RtlpHpHeapAllocate(a1, v8, &v25);
  v11 = v10;
  if ( v10 )
  {
    v12 = *a4;
    *(_DWORD *)(v10 + 16) = -571548178;
    v13 = v10 + 24;
    *(_DWORD *)(v10 + 20) = a1;
    v14 = v10 + 392;
    *(_OWORD *)v10 = v12;
    v15 = v10 + 512;
    v16 = v10 + 112;
    v25 = *a4;
    RtlpHpSegContextInitialize(v10 + 112, 0x100000, v10, v10 + 512, v10 + 392, v10 + 24, (__int64)&v25);
    v25 = *a4;
    RtlpHpSegContextInitialize(v11 + 232, 0x1000000, v11, 0, 0LL, v13, (__int64)&v25);
    *(_QWORD *)(v11 + 72) = 0LL;
    *(_QWORD *)(v11 + 80) = 0LL;
    *(_QWORD *)(v11 + 88) = 0LL;
    *(_QWORD *)(v11 + 360) = 0LL;
    if ( (*(_DWORD *)(v11 + 20) & 0x20000000) != 0 )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = v17 + 1;
        if ( (__int64 (*)())RtlpInterceptorRoutines[v17] == PsGetHostSilo )
          break;
        ++v17;
        if ( v18 )
        {
          v18 = 0;
          break;
        }
      }
      *(_DWORD *)(v11 + 56) = v18;
    }
    memset(v26, 0, 0x28uLL);
    v19 = *a4;
    *(_QWORD *)&v26[2] = 0LL;
    *(_QWORD *)&v26[0] = RtlpHpSegVsAllocate;
    *((_QWORD *)&v26[0] + 1) = RtlpHpSegLfhVsFree;
    *(_QWORD *)&v26[1] = RtlpHpSegLfhVsCommit;
    *((_QWORD *)&v26[1] + 1) = RtlpHpSegLfhVsDecommit;
    v25 = v19;
    HeapManager = RtlpHpEnvGetHeapManager(&v25, v20, v21, v22);
    RtlpHpVsContextInitialize(v14, v16, v26, *(_DWORD *)a4 & 1, 0, (_DWORD *)(HeapManager + 12492));
    *(_QWORD *)&v26[0] = RtlpHpSegLfhAllocate;
    *((_QWORD *)&v26[0] + 1) = RtlpHpSegLfhVsFree;
    *(_QWORD *)&v26[1] = RtlpHpSegLfhVsCommit;
    *((_QWORD *)&v26[1] + 1) = RtlpHpSegLfhVsDecommit;
    *(_QWORD *)&v26[2] = RtlpHpSegLfhExtendContext;
    RtlpHpLfhContextInitialize(v15, v16, v28, *(_DWORD *)a4 & 1, (__int64)v26, v13, HeapManager + 12480);
    RtlRunOnceInitialize((PRTL_RUN_ONCE)(v11 + 352));
    if ( (int)RtlpHpSegContextReserve(v16, 0LL, 0LL) >= 0 )
    {
      v6 = v11;
      v11 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v11 )
      RtlpHpHeapDestroy(v11);
  }
  else
  {
    v6 = 0LL;
    RtlpHpRegisterEnvironment(a4, 0LL);
  }
  return v6;
}
