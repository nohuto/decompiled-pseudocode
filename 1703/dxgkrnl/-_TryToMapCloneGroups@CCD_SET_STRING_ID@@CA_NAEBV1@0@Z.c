/*
 * XREFs of ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C01DEEC0
 * Callers:
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C01DE678 (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00B0F50 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C01DE3AC (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::_TryToMapCloneGroups(
        const struct CCD_SET_STRING_ID *this,
        const struct CCD_SET_STRING_ID *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // esi
  unsigned int v7; // ebx
  int v8; // r15d
  __int64 v9; // r9
  int PathByMonitorId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v16; // rax
  struct _STRING v17; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = -1;
  v7 = 0;
  v8 = -1;
  if ( !*((_WORD *)this + 16) )
    return 1;
  while ( !*(_WORD *)(*((_QWORD *)this + 3) + 8LL * v7 + 4) )
  {
    *(_QWORD *)&v17.Length = 0LL;
    v17.Buffer = 0LL;
    CCD_SET_STRING_ID::QueryMonitorId(this, v7, &v17, a4);
    PathByMonitorId = CCD_SET_STRING_ID::FindPathByMonitorId(a2, &v17, &v18, v9);
    if ( PathByMonitorId < 0 )
    {
      if ( PathByMonitorId != -1073741275 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v12, v11, v13, a4);
        WdLogEvent5_WdAssertion(v16);
      }
      return 0;
    }
    v14 = *((_QWORD *)a2 + 3);
    if ( v4 == *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v7 + 2) )
    {
      if ( v8 != *(unsigned __int16 *)(v14 + 8LL * v18 + 2) )
        return 0;
    }
    else
    {
      v4 = *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v7 + 2);
      v8 = *(unsigned __int16 *)(v14 + 8LL * v18 + 2);
    }
    if ( ++v7 >= *((unsigned __int16 *)this + 16) )
      return 1;
  }
  return 0;
}
