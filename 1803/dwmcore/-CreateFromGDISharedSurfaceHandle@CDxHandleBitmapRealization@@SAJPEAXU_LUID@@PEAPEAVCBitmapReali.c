/*
 * XREFs of ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800C5E5C
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x1800944D4 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x180045618 (--0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVC.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180045BD8 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CDxHandleBitmapRealization@@KAPEAX_K@Z @ 0x180082DC4 (--2CDxHandleBitmapRealization@@KAPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::CreateFromGDISharedSurfaceHandle(
        void *a1,
        struct _LUID a2,
        struct CBitmapRealization **a3)
{
  CDxHandleBitmapRealization *v6; // rax
  CDxHandleBitmapRealization *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+30h] [rbp-A8h] BYREF
  void *v12; // [rsp+38h] [rbp-A0h]
  struct _LUID v13; // [rsp+40h] [rbp-98h]
  _DWORD v14[32]; // [rsp+50h] [rbp-88h] BYREF

  memset_0(v14, 0, 0x78uLL);
  memset_0(&v11, 0, 0x20uLL);
  *a3 = 0LL;
  v14[11] = 0;
  v14[0] = 1;
  v11 = 2;
  v12 = a1;
  v13 = a2;
  v6 = (CDxHandleBitmapRealization *)CDxHandleBitmapRealization::operator new();
  if ( v6 )
    v7 = CDxHandleBitmapRealization::CDxHandleBitmapRealization(
           v6,
           (const struct CSM_BUFFER_ATTRIBUTES *)v14,
           (const struct CSM_REALIZATION_INFO *)&v11,
           0,
           0LL);
  else
    v7 = 0LL;
  if ( v7 )
  {
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = CDxHandleBitmapRealization::Initialize(v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x53u);
      (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x50u);
  }
  return v9;
}
