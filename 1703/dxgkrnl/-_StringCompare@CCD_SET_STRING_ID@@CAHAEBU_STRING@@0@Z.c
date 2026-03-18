/*
 * XREFs of ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00AF24C
 * Callers:
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00B12D4 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00B1398 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C01DE3AC (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CCD_SET_STRING_ID::_StringCompare(const struct _STRING *a1, const struct _STRING *a2)
{
  USHORT Length; // ax

  Length = a2->Length;
  if ( a1->Length < a2->Length )
    return -1;
  if ( a1->Length > Length )
    return 1;
  return memcmp(a1->Buffer, a2->Buffer, Length);
}
