/*
 * XREFs of ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00F6DB4
 * Callers:
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00DA838 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00DA8FC (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C01FBD54 (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 * Callees:
 *     memcmp @ 0x1C0016620 (memcmp.c)
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
