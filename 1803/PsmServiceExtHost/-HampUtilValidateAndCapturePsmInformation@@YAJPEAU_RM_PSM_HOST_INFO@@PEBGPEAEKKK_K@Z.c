/*
 * XREFs of ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x18000F6C0
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000F184 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180013070 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180062E2C (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HampUtilValidateAndCapturePsmInformation(
        struct _RM_PSM_HOST_INFO *a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  unsigned int v11; // eax
  __int64 v12; // rdx
  struct _RM_PSM_HOST_INFO *v13; // rax
  signed __int64 v14; // rbx
  __int16 v15; // cx
  __int64 result; // rax

  if ( !(unsigned __int8)PsmIsValidKey(a2) )
    return 3221225712LL;
  if ( a4 < 0xC || !RtlValidSid(a3) || RtlLengthSid(a3) != a4 )
    return 3221225713LL;
  if ( !a6 )
    return 3221225716LL;
  if ( ((a6 - 1) & a6) != 0 )
    return 3221225716LL;
  _BitScanForward(&v11, a6);
  if ( v11 >= 4 )
    return 3221225716LL;
  if ( a7 == -1LL )
    return 3221225717LL;
  memset_0(a1, 0, 0x228uLL);
  v12 = 232LL;
  v13 = a1;
  v14 = a2 - (char *)a1;
  while ( v12 != -2147483414 )
  {
    v15 = *(_WORD *)((char *)v13 + v14);
    if ( !v15 )
      break;
    *(_WORD *)v13 = v15;
    v13 = (struct _RM_PSM_HOST_INFO *)((char *)v13 + 2);
    if ( !--v12 )
    {
      v13 = (struct _RM_PSM_HOST_INFO *)((char *)v13 - 2);
      break;
    }
  }
  *(_WORD *)v13 = 0;
  RtlCopySid(0x44u, (char *)a1 + 464, a3);
  result = 0LL;
  *((_DWORD *)a1 + 133) = a5;
  *((_DWORD *)a1 + 134) = a6;
  *((_QWORD *)a1 + 68) = a7;
  return result;
}
