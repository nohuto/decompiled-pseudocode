/*
 * XREFs of ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180055254
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005647C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800557EC (-RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z.c)
 *     ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180055B84 (-RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 */

__int64 __fastcall RmpCpuSetManagerCreateProcessRegistration(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        struct _RM_CPU_SET_PROCESS *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        struct _RM_CPU_SET_PROCESS_REGISTRATION **a4)
{
  struct _RM_CPU_SET_PROCESS_REGISTRATION *Heap; // rax
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v9; // rbx
  unsigned int v10; // r9d
  int v11; // edx
  int v12; // r10d
  unsigned int v14; // [rsp+30h] [rbp-59h] BYREF
  int v15; // [rsp+34h] [rbp-55h] BYREF
  __int64 v16; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  unsigned int *v18; // [rsp+60h] [rbp-29h]
  int v19; // [rsp+68h] [rbp-21h]
  int v20; // [rsp+6Ch] [rbp-1Dh]
  __int64 *v21; // [rsp+70h] [rbp-19h]
  int v22; // [rsp+78h] [rbp-11h]
  int v23; // [rsp+7Ch] [rbp-Dh]
  char *v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  int *v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+98h] [rbp+Fh]
  int v29; // [rsp+9Ch] [rbp+13h]

  v16 = -1LL;
  Heap = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v9 = Heap;
  if ( Heap )
  {
    RmpCpuSetManagerInitializeProcessRegistration(Heap);
    RmpCpuSetManagerInsertProcessRegistration(a1, a2, a3, v9);
    v10 = 0;
    v16 = *((_QWORD *)v9 + 4);
    *a4 = v9;
  }
  else
  {
    v10 = -1073741801;
  }
  v14 = v10;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v18 = &v14;
    v21 = &v16;
    v24 = (char *)a3 + 32;
    v15 = *((_DWORD *)a2 + 14);
    v27 = &v15;
    v19 = v12;
    v22 = v11 + 7;
    v25 = v11 + 7;
    v28 = v12;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007E398, 0LL, 0LL, 6u, &pData);
    return v14;
  }
  return v10;
}
