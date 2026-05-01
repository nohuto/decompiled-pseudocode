/*
 * XREFs of ?RmpValidateAndCaptureUserSid@@YAJPEAXKKPEAT_RM_SID@@PEAPEAT1@@Z @ 0x180014EE0
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpValidateAndCaptureUserSid(void *Src, int a2, int a3, union _RM_SID *a4, union _RM_SID **a5)
{
  unsigned int v5; // ebx
  ULONG v8; // eax

  v5 = 0;
  if ( !a3 )
  {
    if ( !a2 )
    {
      *a5 = 0LL;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 2 && a3 != 4 && a3 != 8 || !Src || !RtlValidSid(Src) || RtlLengthSid(Src) > 0x44 )
    return (unsigned int)-1073741811;
  memset_0(a4, 0, 0x44uLL);
  v8 = RtlLengthSid(Src);
  memcpy_0(a4, Src, v8);
  *a5 = a4;
  return v5;
}
