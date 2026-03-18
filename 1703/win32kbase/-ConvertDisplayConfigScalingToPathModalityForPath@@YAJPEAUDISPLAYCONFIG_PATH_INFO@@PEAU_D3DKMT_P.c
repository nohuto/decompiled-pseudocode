/*
 * XREFs of ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00F4754
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F41A0 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConvertDisplayConfigScalingToPathModalityForPath(
        struct DISPLAYCONFIG_PATH_INFO *a1,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        int *a3)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi

  if ( *((_DWORD *)a1 + 11) == 1 )
    *((_DWORD *)a1 + 11) = 128;
  v4 = *((unsigned int *)a1 + 11);
  v5 = (_DWORD *)((char *)a2 + 140);
  if ( (_DWORD)v4 == 128 )
  {
    *v5 = 253;
    if ( a3 )
      *a3 = 1;
  }
  else if ( (int)((__int64 (__fastcall *)(__int64, char *, _DWORD *))qword_1C018BA90)(v4, (char *)a2 + 16, v5) < 0 )
  {
    return 3221225485LL;
  }
  *((_DWORD *)a2 + 34) = *v5;
  *(_QWORD *)a2 |= 0x40000010000uLL;
  return 0LL;
}
