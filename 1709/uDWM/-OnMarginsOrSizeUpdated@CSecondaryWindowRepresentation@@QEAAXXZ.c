/*
 * XREFs of ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18000EB30
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E800 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180011C58 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800263D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18000F368 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180010650 (-OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180020E80 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(CSecondaryWindowRepresentation *this)
{
  CWindowData *v1; // rdi
  CWindowData *v3; // rsi
  int v4; // ecx
  char v5; // r8
  _DWORD *v7; // rdx
  __int128 v8; // xmm0
  CTopLevelWindow3D *v9; // rcx
  void (__fastcall *v10)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *); // rax
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+38h] [rbp-20h] BYREF

  v1 = (CWindowData *)*((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 18) - 1;
  if ( v4 )
  {
    v11 = v4 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_3;
      if ( !CWindowData::IsImmersiveWindow(v1) )
      {
        v3 = *(CWindowData **)(*((_QWORD *)v1 + 54) + 80LL);
        goto LABEL_3;
      }
    }
    else
    {
      v12 = *((_QWORD *)v1 + 53);
      if ( v12 )
      {
        v3 = *(CWindowData **)(v12 + 32);
        goto LABEL_3;
      }
    }
  }
  v3 = v1;
LABEL_3:
  if ( (unsigned __int8)CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
                          (_DWORD)v3,
                          *((_DWORD *)this + 10),
                          *((_QWORD *)this + 6) != 0LL,
                          (unsigned int)&v13,
                          (__int64)&v14) )
  {
    if ( v13 != *((_QWORD *)this + 10) )
      goto LABEL_17;
    v5 = 1;
    if ( *((_DWORD *)this + 22) != (_DWORD)v14
      || *(_QWORD *)((char *)this + 92) != *(_QWORD *)((char *)&v14 + 4)
      || *((_DWORD *)this + 25) != HIDWORD(v14) )
    {
      goto LABEL_17;
    }
    v7 = (_DWORD *)*((_QWORD *)v3 + 50);
    if ( *((_DWORD *)this + 26) == v7[151]
      && *((_DWORD *)this + 27) == v7[152]
      && *((_DWORD *)this + 28) == v7[153]
      && *((_DWORD *)this + 29) == v7[154] )
    {
      v5 = 0;
    }
    if ( v5 )
    {
LABEL_17:
      v8 = v14;
      v9 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
      *((_QWORD *)this + 10) = v13;
      *(_OWORD *)((char *)this + 88) = v8;
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)(*((_QWORD *)v3 + 50) + 604LL);
      v10 = *(void (__fastcall **)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *))(*(_QWORD *)v9 + 8LL);
      if ( v10 == CTopLevelWindow3D::OnSizeChanged )
      {
        CTopLevelWindow3D::OnSizeChanged(v9, this);
      }
      else if ( v10 == CThumbnailVisual::OnSizeChanged )
      {
        CThumbnailVisual::OnSizeChanged(v9, this);
      }
      else
      {
        v10(v9, this);
      }
    }
  }
}
