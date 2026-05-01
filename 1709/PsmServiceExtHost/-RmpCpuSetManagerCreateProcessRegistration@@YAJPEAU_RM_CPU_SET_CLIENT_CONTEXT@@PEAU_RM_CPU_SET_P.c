/*
 * XREFs of ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180036D8C
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180037A7C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800372E0 (-RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z.c)
 *     ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180037610 (-RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 */

__int64 __fastcall RmpCpuSetManagerCreateProcessRegistration(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        struct _RM_CPU_SET_PROCESS *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        struct _RM_CPU_SET_PROCESS_REGISTRATION **a4)
{
  struct _RM_CPU_SET_PROCESS_REGISTRATION *Heap; // rax
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v9; // rbx
  const GUID *v10; // r9
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  int v13; // r10d
  int v15; // [rsp+30h] [rbp-59h] BYREF
  int v16; // [rsp+34h] [rbp-55h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  int *v19; // [rsp+60h] [rbp-29h]
  int v20; // [rsp+68h] [rbp-21h]
  int v21; // [rsp+6Ch] [rbp-1Dh]
  __int64 *v22; // [rsp+70h] [rbp-19h]
  int v23; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+7Ch] [rbp-Dh]
  char *v25; // [rsp+80h] [rbp-9h]
  int v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+8Ch] [rbp+3h]
  int *v28; // [rsp+90h] [rbp+7h]
  int v29; // [rsp+98h] [rbp+Fh]
  int v30; // [rsp+9Ch] [rbp+13h]

  v17 = -1LL;
  Heap = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x70uLL);
  v9 = Heap;
  if ( Heap )
  {
    RmpCpuSetManagerInitializeProcessRegistration(Heap);
    RmpCpuSetManagerInsertProcessRegistration(a1, a2, a3, v9);
    LODWORD(v10) = 0;
    v17 = *((_QWORD *)v9 + 3);
    *a4 = v9;
  }
  else
  {
    LODWORD(v10) = -1073741801;
  }
  v15 = (int)v10;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v19 = &v15;
    v22 = &v17;
    v25 = (char *)a3 + 24;
    v16 = *((_DWORD *)a2 + 14);
    v28 = &v16;
    v20 = v13;
    v23 = v13 + 4;
    v26 = v13 + 4;
    v29 = v13;
    TlgWrite(v11, &unk_180057FB1, v12, v10, 6u, &pData);
    LODWORD(v10) = v15;
  }
  return (unsigned int)v10;
}
