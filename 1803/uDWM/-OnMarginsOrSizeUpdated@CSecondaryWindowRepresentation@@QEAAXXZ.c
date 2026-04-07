/*
 * XREFs of ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002ED14
 * Callers:
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180015640 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180016664 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002E97C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800135A0 (-OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180021180 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18002F620 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(CSecondaryWindowRepresentation *this)
{
  CWindowData *v1; // rdi
  CWindowData *v3; // rsi
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rsi
  char v7; // r8
  _DWORD *v9; // rdx
  __int128 v10; // xmm0
  CTopLevelWindow3D *v11; // rcx
  void (__fastcall *v12)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *); // rax
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+38h] [rbp-20h] BYREF

  v1 = (CWindowData *)*((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 18) - 1;
  if ( !v4 )
    goto LABEL_21;
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_5;
    if ( !CWindowData::IsImmersiveWindow(v1) )
    {
      v3 = *(CWindowData **)(*((_QWORD *)v1 + 54) + 80LL);
      goto LABEL_5;
    }
    goto LABEL_21;
  }
  v6 = *((_QWORD *)v1 + 53);
  if ( !v6 )
  {
LABEL_21:
    v3 = v1;
    goto LABEL_5;
  }
  v3 = *(CWindowData **)(v6 + 32);
LABEL_5:
  if ( (unsigned __int8)CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
                          (_DWORD)v3,
                          *((_DWORD *)this + 10),
                          *((_QWORD *)this + 6) != 0LL,
                          (unsigned int)&v13,
                          (__int64)&v14) )
  {
    if ( v13 != *((_QWORD *)this + 10) )
      goto LABEL_19;
    v7 = 1;
    if ( *((_DWORD *)this + 22) != (_DWORD)v14
      || *(_QWORD *)((char *)this + 92) != *(_QWORD *)((char *)&v14 + 4)
      || *((_DWORD *)this + 25) != HIDWORD(v14) )
    {
      goto LABEL_19;
    }
    v9 = (_DWORD *)*((_QWORD *)v3 + 49);
    if ( *((_DWORD *)this + 26) == v9[151]
      && *((_DWORD *)this + 27) == v9[152]
      && *((_DWORD *)this + 28) == v9[153]
      && *((_DWORD *)this + 29) == v9[154] )
    {
      v7 = 0;
    }
    if ( v7 )
    {
LABEL_19:
      v10 = v14;
      v11 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
      *((_QWORD *)this + 10) = v13;
      *(_OWORD *)((char *)this + 88) = v10;
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)(*((_QWORD *)v3 + 49) + 604LL);
      v12 = *(void (__fastcall **)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *))(*(_QWORD *)v11 + 8LL);
      if ( v12 == CTopLevelWindow3D::OnSizeChanged )
      {
        CTopLevelWindow3D::OnSizeChanged(v11, this);
      }
      else if ( v12 == CThumbnailVisual::OnSizeChanged )
      {
        CThumbnailVisual::OnSizeChanged(v11, this);
      }
      else
      {
        v12(v11, this);
      }
    }
  }
}
