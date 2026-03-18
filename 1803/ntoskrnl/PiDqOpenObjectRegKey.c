/*
 * XREFs of PiDqOpenObjectRegKey @ 0x14051C2CC
 * Callers:
 *     PiDqPropertyCallback @ 0x1405012E0 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14050D84C (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x1405C24A0 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405E8B2C (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14072A15C (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14072A3E8 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x1405038FC (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x14051A080 (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6,
        _QWORD *a7)
{
  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7, 0LL, 0);
  if ( a1 == 1 )
    return PiDqOpenUserObjectRegKey(a2, a3, a4, a5, a6, a7, 0LL, 0);
  return 3221225485LL;
}
