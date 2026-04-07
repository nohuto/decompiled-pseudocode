/*
 * XREFs of ?Create@CDesktopThumbnail@@KAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800A3694
 * Callers:
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800A3C18 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800A3318 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 */

__int64 __fastcall CDesktopThumbnail::Create(struct IDwmChannel *a1, struct CDesktopThumbnail **a2)
{
  CDesktopThumbnailBase *v3; // rax
  CDesktopThumbnailBase *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v3 = (CDesktopThumbnailBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                  WPF::g_pProcessHeap,
                                  320LL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x140uLL);
    CDesktopThumbnailBase::CDesktopThumbnailBase(v4);
    *(_QWORD *)v4 = &CDesktopThumbnail::`vftable';
    *((_QWORD *)v4 + 35) = 0LL;
    *((_QWORD *)v4 + 36) = 0LL;
    *((_DWORD *)v4 + 74) = 0;
    *((_DWORD *)v4 + 75) = 0;
    *((_DWORD *)v4 + 76) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(CDesktopThumbnailBase *, struct IDwmChannel *))(*(_QWORD *)v4 + 8LL))(v4, a1);
    v5 = v6;
    if ( v6 >= 0 )
    {
      CDesktopThumbnail::s_pThumbnailNoRef = v4;
      v4 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x41u);
    }
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x41u);
  }
  return v5;
}
