/*
 * XREFs of ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00B238C
 * Callers:
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00B2768 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00B282C (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C00B2A10 (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C022976C (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 *     ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C0229998 (-_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z.c)
 * Callees:
 *     ?_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z @ 0x1C00B2578 (-_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryMonitorId(CCD_SET_STRING_ID *this, unsigned int a2, struct _STRING *a3)
{
  unsigned int v3; // eax
  __int64 v5; // rdi
  USHORT DescriptorLength; // ax
  __int64 v9; // rax

  v3 = *((unsigned __int16 *)this + 16);
  v5 = a2;
  if ( a2 >= v3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
    LOWORD(v3) = *((_WORD *)this + 16);
  }
  if ( (unsigned int)v5 >= (unsigned __int16)v3 )
    return 3221225485LL;
  a3->Buffer = (PCHAR)(*((_QWORD *)this + 2) + *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8 * v5));
  DescriptorLength = CCD_SET_STRING_ID::_GetDescriptorLength(this, v5);
  a3->MaximumLength = DescriptorLength;
  a3->Length = DescriptorLength;
  return 0LL;
}
