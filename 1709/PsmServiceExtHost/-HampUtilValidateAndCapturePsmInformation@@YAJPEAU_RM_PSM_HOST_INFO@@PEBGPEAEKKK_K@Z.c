/*
 * XREFs of ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180042F74
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180041E14 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x1800423B4 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 * Callees:
 *     CempHostInfoInitialize @ 0x1800063B8 (CempHostInfoInitialize.c)
 */

__int64 __fastcall HampUtilValidateAndCapturePsmInformation(
        struct _RM_PSM_HOST_INFO *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  unsigned int v11; // ebx
  unsigned int v12; // eax

  v11 = 0;
  if ( (unsigned __int8)PsmIsValidKey(a2) )
  {
    if ( RtlValidSid(a3) && RtlLengthSid(a3) == a4 )
    {
      if ( a6 && ((a6 - 1) & a6) == 0 && (_BitScanForward(&v12, a6), v12 < 4) )
      {
        if ( a7 == -1LL )
          return (unsigned int)-1073741579;
        else
          CempHostInfoInitialize((__int64)a2, a3, a5, a6, a7, (char *)a1);
      }
      else
      {
        return (unsigned int)-1073741580;
      }
    }
    else
    {
      return (unsigned int)-1073741583;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v11;
}
