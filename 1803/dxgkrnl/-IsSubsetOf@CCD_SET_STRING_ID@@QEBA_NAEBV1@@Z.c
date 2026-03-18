/*
 * XREFs of ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00B282C
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B0500 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B334C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00AFBB0 (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00B238C (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsSubsetOf(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  unsigned __int16 v2; // ax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  struct _STRING v8; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING v9; // [rsp+30h] [rbp-18h] BYREF

  v2 = *((_WORD *)this + 16);
  if ( v2 <= *((_WORD *)a2 + 16) )
  {
    v5 = 0;
    v6 = 0;
    if ( !v2 )
      return 1;
    while ( 1 )
    {
      *(_QWORD *)&v9.Length = 0LL;
      v9.Buffer = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v6 + 6), &v9);
      while ( v5 < *((unsigned __int16 *)a2 + 16) )
      {
        *(_QWORD *)&v8.Length = 0LL;
        v8.Buffer = 0LL;
        CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v5 + 6), &v8);
        if ( !CCD_SET_STRING_ID::_StringCompare(&v9, &v8) )
          break;
        ++v5;
      }
      if ( v5 >= *((unsigned __int16 *)a2 + 16) )
        break;
      if ( ++v6 >= *((unsigned __int16 *)this + 16) )
        return 1;
    }
  }
  return 0;
}
