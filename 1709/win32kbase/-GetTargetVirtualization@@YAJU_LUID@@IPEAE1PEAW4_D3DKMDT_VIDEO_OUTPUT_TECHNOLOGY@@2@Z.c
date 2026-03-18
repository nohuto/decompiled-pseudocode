/*
 * XREFs of ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00F8D70
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00ABC7C (DrvSetDisplayConfigValidateParams.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIHPEAUD3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F53A0 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetTargetVirtualization(
        struct _LUID a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  struct _LUID v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v16 = a1;
  v8 = ((__int64 (__fastcall *)(struct _LUID *, __int64, struct _LUID *, unsigned int *))qword_1C0190A30)(
         &v16,
         a2,
         &v16,
         &v17);
  v12 = v8;
  if ( v8 < 0
    || (v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C0190A40)(
                v16,
                v17,
                a3,
                a4,
                a5,
                a6),
        v12 = v13,
        v13 < 0) )
  {
    v14 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v14 + 24) = v12;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v12;
}
