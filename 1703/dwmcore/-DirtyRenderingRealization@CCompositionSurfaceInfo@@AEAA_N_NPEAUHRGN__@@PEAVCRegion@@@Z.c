/*
 * XREFs of ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800765A0
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180076744 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x180036D60 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180036DB0 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180073B0C (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180073B6C (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180074640 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x180079B40 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceInfo::DirtyRenderingRealization(
        CCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        struct CRegion *a4)
{
  char v4; // si
  CDxHandleBitmapRealization *v9; // rcx
  void (__fastcall *v10)(CDxHandleBitmapRealization *__hidden, unsigned int *, unsigned int *); // rax
  unsigned int *v11; // r8
  _DWORD *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  CBitmapRealization *v15; // rcx
  void (*v16)(void); // rax
  CBitmapRealization *v18; // rcx
  __int64 (__fastcall *v19)(CBitmapRealization *, const struct CRegion *); // rax
  unsigned int v20; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+24h] [rbp-1Ch] BYREF
  int v22; // [rsp+28h] [rbp-18h] BYREF
  int v23; // [rsp+2Ch] [rbp-14h]
  unsigned int v24; // [rsp+30h] [rbp-10h]
  unsigned int v25; // [rsp+34h] [rbp-Ch]

  v4 = 0;
  if ( a3 )
  {
    v9 = (CDxHandleBitmapRealization *)(*((_QWORD *)this + 15) + 104LL);
    v10 = *(void (__fastcall **)(CDxHandleBitmapRealization *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v9 + 24LL);
    if ( v10 == CDxHandleBitmapRealization::GetSize )
      CDxHandleBitmapRealization::GetSize(v9, &v20, &v21);
    else
      v10(v9, &v20, &v21);
    if ( a3 == (HRGN)1 )
    {
      v22 = 0;
      v23 = 0;
      v24 = v20;
      v25 = v21;
      CRegion::SetRectangle(a4, (const struct MilRectU *)&v22);
    }
    else
    {
      CRegion::SetHRGN(a4, a3, v11);
      CRegion::GetBoundingRect(a4, (struct MilRectU *)&v22);
      v12 = *(_DWORD **)a4;
      if ( !**(_DWORD **)a4
        || (v13 = (__int64)&v12[2 * *v12 + 1],
            v14 = (v13 + *(int *)(v13 + 4) - (__int64)(int)v12[4] - (__int64)(v12 + 3)) >> 3,
            v22)
        || (_DWORD)v14 != 1
        || v23
        || v24 != v20
        || v25 != v21 )
      {
        *((_BYTE *)this + 196) = 1;
      }
    }
    v4 = 1;
  }
  if ( a3 == (HRGN)1 || a2 && *((_DWORD *)this + 26) > 1u )
  {
    v15 = (CBitmapRealization *)*((_QWORD *)this + 15);
    v16 = *(void (**)(void))(*(_QWORD *)v15 + 64LL);
    if ( (char *)v16 == (char *)CBitmapRealization::MarkFullDirty )
      CBitmapRealization::MarkFullDirty(v15);
    else
      v16();
  }
  else if ( v4 )
  {
    v18 = (CBitmapRealization *)*((_QWORD *)this + 15);
    v19 = *(__int64 (__fastcall **)(CBitmapRealization *, const struct CRegion *))(*(_QWORD *)v18 + 56LL);
    if ( v19 == CBitmapRealization::AddDirtyRegion )
      CBitmapRealization::AddDirtyRegion(v18, a4);
    else
      v19(v18, a4);
  }
  return v4;
}
