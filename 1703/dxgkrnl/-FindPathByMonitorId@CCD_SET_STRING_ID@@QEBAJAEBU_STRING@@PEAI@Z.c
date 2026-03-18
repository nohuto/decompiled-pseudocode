/*
 * XREFs of ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C01DE3AC
 * Callers:
 *     ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C01DEEC0 (-_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z.c)
 * Callees:
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00AF24C (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00B0F50 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::FindPathByMonitorId(
        CCD_SET_STRING_ID *this,
        const struct _STRING *a2,
        unsigned int *a3,
        __int64 a4)
{
  unsigned int v7; // ebx
  _QWORD *v9; // rax
  struct _STRING v10; // [rsp+20h] [rbp-18h] BYREF

  if ( a2->Buffer && a2->Length && a3 )
  {
    v7 = 0;
    if ( *((_WORD *)this + 16) )
    {
      while ( 1 )
      {
        *(_QWORD *)&v10.Length = 0LL;
        v10.Buffer = 0LL;
        CCD_SET_STRING_ID::QueryMonitorId(this, v7, &v10, a4);
        if ( !CCD_SET_STRING_ID::_StringCompare(a2, &v10) )
          break;
        if ( ++v7 >= *((unsigned __int16 *)this + 16) )
          return 3221226021LL;
      }
      *a3 = v7;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    v9[3] = this;
    v9[4] = a2->Buffer;
    v9[5] = a2->Length;
    v9[6] = a3;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
}
