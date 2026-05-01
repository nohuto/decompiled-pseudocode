/*
 * XREFs of ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x1800252D0
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180014B10 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpMemoryMonitorStartThread@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x1800253CC (-RmpMemoryMonitorStartThread@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180025474 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPartitionStart(struct _RM_PARTITION *a1, void *a2, __int64 a3)
{
  const GUID *v4; // r9
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  UINT32 cData; // r10d
  int started; // [rsp+30h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *p_started; // [rsp+60h] [rbp+27h]
  UINT32 v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  __int64 *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]
  __int64 v17; // [rsp+B0h] [rbp+77h] BYREF

  v17 = a3;
  *((_QWORD *)a1 + 27) = a3;
  started = RmpSystemDuplicateHandle(a2, 1u, (PHANDLE)a1 + 4);
  LODWORD(v4) = started;
  if ( started >= 0 )
  {
    started = RmpMemoryMonitorStartThread((struct _RM_PARTITION *)((char *)a1 + 40));
    LODWORD(v4) = started;
    if ( started >= 0 )
    {
      *((_DWORD *)a1 + 56) &= ~2u;
      *((_DWORD *)a1 + 56) |= 1u;
      LODWORD(v4) = 0;
      started = 0;
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v13 = 0;
    v16 = 0;
    p_started = &started;
    v14 = &v17;
    v12 = cData;
    v15 = 8;
    TlgWrite(v5, &unk_18005866E, v6, v4, cData, &pData);
    LODWORD(v4) = started;
  }
  return (unsigned int)v4;
}
