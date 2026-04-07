/*
 * XREFs of ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800385FC
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180038EF0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180038390 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x18009ED48 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x18009EE70 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::_UpdateAnimatedProperties(CThumbnailVisual *this, int a2)
{
  __int64 v2; // rax
  int v3; // ebp
  int started; // edi
  CThumbnailTransition *v6; // rcx
  CThumbnailTransition *v8; // rcx
  int v9; // esi
  int v10; // r14d
  int v11; // r15d
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r10d
  int v16; // r9d
  __int64 v17; // rax
  float v18; // xmm0_4
  CThumbnailTransition *v19; // rcx
  CBaseObject *v20; // rcx

  v2 = *((_QWORD *)this + 46);
  v3 = a2 & 0x30000;
  started = -2147467259;
  if ( !v2 || !v3 )
  {
    v6 = (CThumbnailTransition *)*((_QWORD *)this + 58);
    if ( !v6 )
      return (unsigned int)started;
    CThumbnailTransition::StopAnimation(v6);
    started = 0;
    goto LABEL_26;
  }
  v8 = (CThumbnailTransition *)*((_QWORD *)this + 58);
  v9 = 1;
  v10 = *(_DWORD *)(v2 + 40);
  v11 = *(_DWORD *)(v2 + 44);
  if ( v8 )
  {
    *((_BYTE *)this + 473) = 1;
    CThumbnailTransition::StopAnimation(v8);
  }
  started = -2147024882;
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          40LL);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)v12 = &CThumbnailTransition::`vftable'{for `CBaseObject'};
    *(_QWORD *)(v12 + 16) = &CThumbnailTransition::`vftable'{for `IAnimationListener'};
    *(_DWORD *)(v12 + 8) = 1;
  }
  *((_QWORD *)this + 58) = v12;
  if ( v12 )
  {
    SetRect(
      (LPRECT)this + 18,
      *((_DWORD *)this + 28),
      *((_DWORD *)this + 29),
      *((_DWORD *)this + 28) + *((_DWORD *)this + 30),
      *((_DWORD *)this + 29) + *((_DWORD *)this + 31));
    v14 = *((_QWORD *)this + 46);
    if ( (*(_BYTE *)(v14 + 36) & 1) != 0 )
    {
      v15 = 0;
      if ( *(_DWORD *)(v14 + 52) - *(_DWORD *)(v14 + 44) >= 0 )
        v15 = *(_DWORD *)(v14 + 52) - *(_DWORD *)(v14 + 44);
      v16 = 0;
      if ( *(_DWORD *)(v14 + 48) - *(_DWORD *)(v14 + 40) >= 0 )
        v16 = *(_DWORD *)(v14 + 48) - *(_DWORD *)(v14 + 40);
      SetRect((LPRECT)this + 19, v10, v11, v10 + v16, v11 + v15);
    }
    else
    {
      *((_OWORD *)this + 19) = *((_OWORD *)this + 18);
    }
    v17 = *((_QWORD *)this + 46);
    if ( v3 == 0x20000 )
      v9 = 4;
    v18 = *((double *)this + 23);
    *((_DWORD *)this + 80) = v9;
    *((float *)this + 81) = v18;
    if ( (*(_BYTE *)(v17 + 36) & 4) != 0 )
      v18 = (double)*(unsigned __int8 *)(v17 + 72) / 255.0;
    v19 = (CThumbnailTransition *)*((_QWORD *)this + 58);
    *((float *)this + 82) = v18;
    *((_BYTE *)this + 474) = 0;
    started = CThumbnailTransition::StartAnimation(v19, this, v13);
    if ( started >= 0 )
      goto LABEL_27;
    v20 = (CBaseObject *)*((_QWORD *)this + 58);
    if ( v20 )
    {
      CBaseObject::Release(v20);
      *((_QWORD *)this + 58) = 0LL;
    }
    *((_BYTE *)this + 473) = 0;
LABEL_26:
    if ( started < 0 )
      return (unsigned int)started;
LABEL_27:
    CThumbnailVisual::SetDirtyFlags(this, 4096);
  }
  return (unsigned int)started;
}
