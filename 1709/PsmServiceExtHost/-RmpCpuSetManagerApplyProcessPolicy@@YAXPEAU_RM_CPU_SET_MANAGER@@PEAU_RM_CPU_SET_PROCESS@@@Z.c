/*
 * XREFs of ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180036AB4
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180024050 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180037A7C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x18002427C (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180036EC0 (-RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

void __fastcall RmpCpuSetManagerApplyProcessPolicy(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rdx
  _QWORD *v6; // rcx
  _BYTE *v7; // rdi
  struct _RM_CPU_SET_PROCESS *i; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  const GUID *v15; // r8
  const GUID *cData; // r9
  __int16 v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  NTSTATUS v19; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS *v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+6Ch] [rbp-94h]
  int *v24; // [rsp+70h] [rbp-90h]
  int v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+7Ch] [rbp-84h]
  __int16 *v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+8Ch] [rbp-74h]
  _BYTE *v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+9Ch] [rbp-64h]
  _BYTE v33[160]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = (_QWORD *)((char *)a2 + 40);
  v4 = *((_QWORD *)a2 + 5);
  if ( *(_QWORD **)(v4 + 8) != v2 || (v6 = (_QWORD *)v2[1], (_QWORD *)*v6 != v2) )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  *v2 = 0LL;
  v2[1] = 0LL;
  memset_0(v33, 0, sizeof(v33));
  v7 = 0LL;
  for ( i = (struct _RM_CPU_SET_PROCESS *)*((_QWORD *)a2 + 3);
        i != (struct _RM_CPU_SET_PROCESS *)((char *)a2 + 24);
        i = *(struct _RM_CPU_SET_PROCESS **)i )
  {
    v9 = *((_QWORD *)i - 3);
    if ( *(_DWORD *)(v9 + 256) )
    {
      v10 = 20LL;
      v11 = v9 - (_QWORD)v33;
      v12 = v33;
      do
      {
        *v12 |= *(_QWORD *)((char *)v12 + v11 + 96);
        ++v12;
        --v10;
      }
      while ( v10 );
      v7 = v33;
    }
  }
  v19 = RmpSystemSetProcessAllowedCpuSets(*((HANDLE *)a2 + 2), v7);
  if ( v7 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v21 = &v19;
      v18 = *((_DWORD *)a2 + 14);
      v24 = &v18;
      v27 = &v17;
      v22 = (int)v14;
      v25 = (int)v14;
      v17 = 20;
      v28 = 2;
      v30 = v7;
      v31 = 160;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057F02, v13, v14, 6u, &pData);
    }
  }
  else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v23 = 0;
    v26 = 0;
    v21 = &v19;
    v18 = *((_DWORD *)a2 + 14);
    v24 = &v18;
    v22 = (int)cData;
    v25 = (int)cData;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057EC5, v15, cData, (UINT32)cData, &pData);
  }
  if ( !*((_DWORD *)a2 + 15) )
    RmpCpuSetManagerDestroyProcess(a1, a2);
}
