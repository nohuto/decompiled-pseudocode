/*
 * XREFs of ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00F5784
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIHPEAUD3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F53A0 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConvertDisplayConfigScalingToPathModalityForPath(
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        int *a3)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi

  if ( (*(_DWORD *)a1 & 0x10000) != 0 )
  {
    v4 = *((unsigned int *)a1 + 28);
    v5 = (_DWORD *)((char *)a2 + 140);
    if ( (_DWORD)v4 == 128 )
    {
      *v5 = 253;
      if ( a3 )
        *a3 = 1;
    }
    else if ( (int)((__int64 (__fastcall *)(__int64, char *, _DWORD *))qword_1C01906F8)(v4, (char *)a2 + 16, v5) < 0 )
    {
      return 3221225485LL;
    }
    *((_DWORD *)a2 + 34) = *v5;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  return 0LL;
}
