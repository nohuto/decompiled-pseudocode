/*
 * XREFs of ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x1800367A0
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180036740 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800130F0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180013820 (-Initialize@CThumbnailVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x1800139D4 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailData::EnsureThumbnailVisual(CThumbnailData *this)
{
  CThumbnailVisual *v1; // rbx
  int v2; // edi
  struct IDwmChannel *v4; // rdi
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *, size_t); // rax
  CThumbnailVisual *v6; // rax
  CThumbnailVisual *v7; // rsi
  int v8; // eax
  int updated; // eax
  CBaseObject *v11; // [rsp+40h] [rbp+8h]

  v1 = 0LL;
  v2 = 0;
  v11 = 0LL;
  if ( *((_QWORD *)this + 11) )
    return (unsigned int)v2;
  v4 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = (CThumbnailVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x228uLL);
  else
    v6 = (CThumbnailVisual *)v5(WPF::g_pProcessHeap, 552LL);
  if ( v6 )
    v7 = CThumbnailVisual::CThumbnailVisual(v6);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Bu);
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1E92u);
    goto LABEL_14;
  }
  v8 = CThumbnailVisual::Initialize(v7, v4);
  v2 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1Bu);
  }
  else
  {
    v1 = v7;
    v7 = 0LL;
    v11 = v1;
  }
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v2 < 0 )
    goto LABEL_20;
  *((_QWORD *)v1 + 46) = this;
  updated = CThumbnailVisual::UpdateProperties((CSecondaryWindowRepresentation **)v1, *((_DWORD *)this + 9));
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1E96u);
  }
  else
  {
    *((_QWORD *)this + 11) = v1;
    _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
    v1 = v11;
  }
LABEL_14:
  if ( v1 )
    CBaseObject::Release(v1);
  return (unsigned int)v2;
}
