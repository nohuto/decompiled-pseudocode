/*
 * XREFs of ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800390B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180024208 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180037A7C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180037DB0 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180037E84 (-RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z.c)
 *     ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x1800413A0 (-RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z.c)
 */

__int64 __fastcall RmpGameModeTryApplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v4; // ebx
  UINT32 cData; // esi
  char v6; // r15
  const GUID *v7; // r8
  const GUID *v8; // r9
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v9; // r14
  unsigned int v10; // esi
  int v11; // esi
  NTSTATUS v12; // eax
  const GUID *v13; // r9
  const GUID *v14; // r8
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  const GUID *v24; // r8
  const GUID *v25; // r9
  const GUID *v26; // r8
  const GUID *v27; // r9
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v31[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B0h]
  __int128 v33; // [rsp+60h] [rbp-A0h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int128 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+E0h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  int *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  PVOID *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  PVOID *p_P; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]

  P = 0LL;
  v4 = 0;
  cData = 4;
  if ( *((_DWORD *)a2 + 22) && (*((_BYTE *)a2 + 128) & 2) == 0 )
  {
    v29 = 255;
    goto LABEL_35;
  }
  v6 = 1;
  RmpAcquireGlobalLock();
  v29 = RmpCpuSetManagerRegisterProcessWithAllocation(
          *((struct _RM_CPU_SET_MANAGER ***)a1 + 5),
          *((void **)a2 + 5),
          *((struct _RM_CPU_SET_ALLOCATION **)a1 + 15),
          &P);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v44 = 4LL;
    v43 = &v29;
    v31[0] = *((_DWORD *)a2 + 23);
    v45 = (PVOID *)v31;
    v46 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800584C3, v7, v8, 4u, &pData);
  }
  v9 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)P;
  if ( v29 >= 0 )
  {
    v10 = *((_DWORD *)a2 + 31);
    if ( (v10 & 2) != 0 || (v10 & 1) != 0 && (*((_BYTE *)a2 + 155) & 2) == 0 )
    {
      v11 = (v10 >> 3) & 1;
      v12 = RmpCpuSetManagerSetProcessDefaultMaskForGameMode((struct _RM_CPU_SET_PROCESS_REGISTRATION *)P, v11);
      LODWORD(v13) = 4;
      v29 = v12;
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        LODWORD(P) = v11;
        v43 = &v29;
        cData = (unsigned int)v13;
        v31[0] = *((_DWORD *)a2 + 23);
        v45 = (PVOID *)v31;
        p_P = &P;
        v44 = (__int64)v13;
        v46 = (__int64)v13;
        v48 = (unsigned int)v13;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005847C, v14, v13, 5u, &pData);
      }
      else
      {
        cData = (unsigned int)v13;
      }
      if ( v29 < 0 )
        goto LABEL_27;
      v4 = 1;
    }
    v15 = (_OWORD *)*((_QWORD *)a1 + 15);
    v16 = v15[7];
    v32 = v15[6];
    v17 = v15[8];
    v33 = v16;
    v18 = v15[9];
    v34 = v17;
    v19 = v15[10];
    v35 = v18;
    v20 = v15[11];
    v36 = v19;
    v21 = v15[12];
    v37 = v20;
    v22 = v15[14];
    v38 = v21;
    v39 = v15[13];
    v23 = v15[15];
    v40 = v22;
    v41 = v23;
    RmpReleaseGlobalLock();
    v6 = 0;
    if ( (*((_BYTE *)a2 + 124) & 0x10) != 0 )
    {
      cData = 4;
      v29 = RmpSystemSetProcessConstrainedCpuSets(*((HANDLE *)a2 + 5), 1u);
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v44 = 4LL;
        v43 = &v29;
        LODWORD(P) = *((_DWORD *)a2 + 23);
        v45 = &P;
        v46 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800582B9, v24, v25, 4u, &pData);
      }
      if ( v29 < 0 )
        goto LABEL_27;
    }
    else
    {
      cData = 4;
    }
    if ( *((_DWORD *)a2 + 22) != 1 )
      *((_QWORD *)a2 + 13) = v32;
    *((_BYTE *)a2 + 155) |= 2u;
    v4 = 0;
    *((_QWORD *)a2 + 17) = v9;
    v9 = 0LL;
    v29 = 0;
  }
LABEL_27:
  if ( v9 )
  {
    if ( !v6 )
    {
      v6 = 1;
      RmpAcquireGlobalLock();
    }
    RmpCpuSetManagerReleaseProcessRegistrationEx((struct _RM_CPU_SET_MANAGER *)(*(_QWORD *)a1 + 680LL), v9, 1);
  }
  if ( v6 )
    RmpReleaseGlobalLock();
  if ( v4 )
    v29 = RmpSystemSetProcessDefaultCpuSets(*((HANDLE *)a2 + 5), 0LL);
LABEL_35:
  if ( hProvider > cData && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v44 = 4LL;
    v43 = &v29;
    LODWORD(P) = *((_DWORD *)a2 + 23);
    v45 = &P;
    v46 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058445, v26, v27, cData, &pData);
  }
  return (unsigned int)v29;
}
