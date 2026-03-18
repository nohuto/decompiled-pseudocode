/*
 * XREFs of ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00B12D4
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B03E0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00AF24C (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00B0F50 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsEnabledSetEqual(
        CCD_SET_STRING_ID *this,
        const struct CCD_SET_STRING_ID *a2,
        __int64 a3,
        __int64 a4)
{
  __int16 v4; // ax
  unsigned int v7; // edi
  __int64 v8; // r9
  struct _STRING v10; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING v11; // [rsp+30h] [rbp-18h] BYREF

  v4 = *((_WORD *)this + 16);
  if ( v4 == *((_WORD *)a2 + 16) )
  {
    v7 = 0;
    if ( !v4 )
      return 1;
    while ( 1 )
    {
      *(_QWORD *)&v11.Length = 0LL;
      v11.Buffer = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v7 + 6), &v11, a4);
      *(_QWORD *)&v10.Length = 0LL;
      v10.Buffer = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v7 + 6), &v10, v8);
      if ( CCD_SET_STRING_ID::_StringCompare(&v11, &v10) )
        break;
      if ( ++v7 >= *((unsigned __int16 *)this + 16) )
        return 1;
    }
  }
  return 0;
}
