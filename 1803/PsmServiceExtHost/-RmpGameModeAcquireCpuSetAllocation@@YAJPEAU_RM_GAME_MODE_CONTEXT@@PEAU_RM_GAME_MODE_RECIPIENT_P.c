/*
 * XREFs of ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180056B70
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180054C74 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 */

__int64 __fastcall RmpGameModeAcquireCpuSetAllocation(
        struct _RM_CPU_SET_MANAGER ***a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  __int64 v5; // rax
  unsigned int v6; // ebx
  const struct _TlgProvider_t *v7; // rcx
  int v8; // r9d
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  struct _RM_CPU_SET_ALLOCATION *v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h]
  int v15; // [rsp+E8h] [rbp-18h]
  unsigned int v16; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  int *v18; // [rsp+110h] [rbp+10h]
  int v19; // [rsp+118h] [rbp+18h]
  int v20; // [rsp+11Ch] [rbp+1Ch]
  int *v21; // [rsp+120h] [rbp+20h]
  int v22; // [rsp+128h] [rbp+28h]
  int v23; // [rsp+12Ch] [rbp+2Ch]
  struct _RM_CPU_SET_ALLOCATION **v24; // [rsp+130h] [rbp+30h]
  int v25; // [rsp+138h] [rbp+38h]
  int v26; // [rsp+13Ch] [rbp+3Ch]
  char *v27; // [rsp+140h] [rbp+40h]
  int v28; // [rsp+148h] [rbp+48h]
  int v29; // [rsp+14Ch] [rbp+4Ch]

  v2 = *((_DWORD *)a2 + 29);
  if ( v2 )
  {
    memset_0(&v13, 0, 0xB0uLL);
    v5 = *((_QWORD *)a2 + 15);
    v13 = v2;
    if ( v5 )
    {
      v15 |= 1u;
      v14 = v5;
    }
    v6 = *((_DWORD *)a2 + 35);
    v16 = v16 & 0xFFFFFFFD | ((v6 & 0x20 | 0x50) >> 4);
    RmpAcquireGlobalLock();
    v10 = RmpCpuSetManagerAcquireCpuSets(a1[5], (struct _RM_CPU_SET_REQUEST_INFORMATION *)&v13, (v6 >> 6) & 1, &v12);
    if ( v10 >= 0 )
    {
      v10 = 0;
      a1[15] = (struct _RM_CPU_SET_MANAGER **)v12;
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    v10 = 255;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v18 = &v10;
    v11 = *((_DWORD *)a2 + 27);
    v21 = &v11;
    LODWORD(v12) = *((_DWORD *)a2 + 29);
    v24 = &v12;
    v27 = (char *)a2 + 120;
    v19 = v8;
    v22 = v8;
    v25 = v8;
    v28 = 8;
    TlgWrite(v7, &unk_18007E61D, 0LL, 0LL, 6u, &pData);
  }
  return (unsigned int)v10;
}
