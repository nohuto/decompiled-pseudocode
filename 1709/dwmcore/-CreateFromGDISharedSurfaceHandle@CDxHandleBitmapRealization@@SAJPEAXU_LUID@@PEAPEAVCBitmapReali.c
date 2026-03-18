/*
 * XREFs of ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x180075E08
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x18009DBA4 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x18004D118 (--0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVC.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18004DCC0 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??2CDxHandleBitmapRealization@@KAPEAX_K@Z @ 0x1800768B8 (--2CDxHandleBitmapRealization@@KAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::CreateFromGDISharedSurfaceHandle(
        void *a1,
        struct _LUID a2,
        struct CBitmapRealization **a3)
{
  unsigned __int64 v6; // rcx
  CDxHandleBitmapRealization *v7; // rax
  CDxHandleBitmapRealization *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // edi
  int v14; // [rsp+30h] [rbp-A8h] BYREF
  void *v15; // [rsp+38h] [rbp-A0h]
  struct _LUID v16; // [rsp+40h] [rbp-98h]
  _DWORD v17[32]; // [rsp+50h] [rbp-88h] BYREF

  memset_0(v17, 0, 0x78uLL);
  memset_0(&v14, 0, 0x20uLL);
  *a3 = 0LL;
  v17[11] = 0;
  v17[0] = 1;
  v14 = 2;
  v15 = a1;
  v16 = a2;
  v7 = (CDxHandleBitmapRealization *)CDxHandleBitmapRealization::operator new(v6);
  if ( v7 )
    v8 = CDxHandleBitmapRealization::CDxHandleBitmapRealization(
           v7,
           (const struct CSM_BUFFER_ATTRIBUTES *)v17,
           (const struct CSM_REALIZATION_INFO *)&v14,
           0,
           0LL);
  else
    v8 = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v8 + 8LL))(v8);
    v11 = CDxHandleBitmapRealization::Initialize(v8, v9, v10);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x53u);
      (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x50u);
  }
  return v12;
}
