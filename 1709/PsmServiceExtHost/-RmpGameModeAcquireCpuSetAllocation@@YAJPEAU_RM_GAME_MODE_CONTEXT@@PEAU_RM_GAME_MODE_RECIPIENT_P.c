/*
 * XREFs of ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180038160
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180036754 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 */

__int64 __fastcall RmpGameModeAcquireCpuSetAllocation(
        struct _RM_CPU_SET_MANAGER ***a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  __int64 v5; // rax
  unsigned int v6; // ebx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+30h] [rbp-89h] BYREF
  int v12; // [rsp+34h] [rbp-85h] BYREF
  struct _RM_CPU_SET_ALLOCATION *v13; // [rsp+38h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-79h] BYREF
  int *v15; // [rsp+60h] [rbp-59h]
  int v16; // [rsp+68h] [rbp-51h]
  int v17; // [rsp+6Ch] [rbp-4Dh]
  int *v18; // [rsp+70h] [rbp-49h]
  int v19; // [rsp+78h] [rbp-41h]
  int v20; // [rsp+7Ch] [rbp-3Dh]
  struct _RM_CPU_SET_ALLOCATION **v21; // [rsp+80h] [rbp-39h]
  int v22; // [rsp+88h] [rbp-31h]
  int v23; // [rsp+8Ch] [rbp-2Dh]
  char *v24; // [rsp+90h] [rbp-29h]
  int v25; // [rsp+98h] [rbp-21h]
  int v26; // [rsp+9Ch] [rbp-1Dh]
  int v27; // [rsp+E8h] [rbp+2Fh]
  int v28; // [rsp+ECh] [rbp+33h]

  v2 = *((_DWORD *)a2 + 25);
  if ( v2 )
  {
    memset_0(&pData, 0, 0xB0uLL);
    v5 = *((_QWORD *)a2 + 13);
    LODWORD(pData.Ptr) = v2;
    if ( v5 )
    {
      v27 |= 1u;
      *(_QWORD *)&pData.Size = v5;
    }
    v6 = *((_DWORD *)a2 + 31);
    v28 = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(v6 >> 4)) & 2 | 1;
    RmpAcquireGlobalLock();
    v11 = RmpCpuSetManagerAcquireCpuSets(a1[5], (struct _RM_CPU_SET_REQUEST_INFORMATION *)&pData, (v6 >> 6) & 1, &v13);
    if ( v11 >= 0 )
    {
      v11 = 0;
      a1[15] = (struct _RM_CPU_SET_MANAGER **)v13;
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    v11 = 255;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v15 = &v11;
    v12 = *((_DWORD *)a2 + 23);
    v18 = &v12;
    LODWORD(v13) = *((_DWORD *)a2 + 25);
    v21 = &v13;
    v24 = (char *)a2 + 104;
    v16 = (int)v9;
    v19 = (int)v9;
    v22 = (int)v9;
    v25 = 8;
    TlgWrite(v7, &unk_1800581D6, v8, v9, 6u, &pData);
  }
  return (unsigned int)v11;
}
