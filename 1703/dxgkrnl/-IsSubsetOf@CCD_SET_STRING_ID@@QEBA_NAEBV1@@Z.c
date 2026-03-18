/*
 * XREFs of ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00B1398
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B03E0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00AF24C (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00B0F50 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsSubsetOf(
        CCD_SET_STRING_ID *this,
        const struct CCD_SET_STRING_ID *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v4; // ax
  unsigned int v7; // ebx
  unsigned int v8; // esi
  struct _STRING v10; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING v11; // [rsp+30h] [rbp-18h] BYREF

  v4 = *((_WORD *)this + 16);
  if ( v4 <= *((_WORD *)a2 + 16) )
  {
    v7 = 0;
    v8 = 0;
    if ( !v4 )
      return 1;
    while ( 1 )
    {
      *(_QWORD *)&v11.Length = 0LL;
      v11.Buffer = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v8 + 6), &v11, a4);
      while ( v7 < *((unsigned __int16 *)a2 + 16) )
      {
        *(_QWORD *)&v10.Length = 0LL;
        v10.Buffer = 0LL;
        CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v7 + 6), &v10, a4);
        if ( !CCD_SET_STRING_ID::_StringCompare(&v11, &v10) )
          break;
        ++v7;
      }
      if ( v7 >= *((unsigned __int16 *)a2 + 16) )
        break;
      if ( ++v8 >= *((unsigned __int16 *)this + 16) )
        return 1;
    }
  }
  return 0;
}
