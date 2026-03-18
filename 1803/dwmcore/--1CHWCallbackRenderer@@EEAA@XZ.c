/*
 * XREFs of ??1CHWCallbackRenderer@@EEAA@XZ @ 0x1800DA270
 * Callers:
 *     ??_GCHWCallbackRenderer@@EEAAPEAXI@Z @ 0x1800DA320 (--_GCHWCallbackRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800BCC2C (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@Z @ 0x18013F854 (-UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@.c)
 */

void __fastcall CHWCallbackRenderer::~CHWCallbackRenderer(
        CHWCallbackRenderer *this,
        struct ID2D1PrivateCompositorRenderer *a2)
{
  unsigned int v2; // r8d
  CMILRefCountBase *v4; // rcx
  __int64 v5; // rcx
  char *v6; // rcx
  char *v7; // rbx
  char *v8; // rsi
  __int64 v9; // rcx

  v2 = *((_DWORD *)this + 22);
  *(_QWORD *)this = &CHWCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CHWCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  if ( v2 != -1 )
    CCallbackRendererManager::UnlockDrawlistEntryRange(
      (CCallbackRendererManager *)(*((_QWORD *)this + 3) + 8LL),
      a2,
      v2,
      *((_DWORD *)this + 23));
  std::deque<CMegaRect>::_Tidy((_QWORD *)this + 16);
  std::_Deallocate(*((char **)this + 16), 1uLL, 0x10uLL);
  *((_QWORD *)this + 16) = 0LL;
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    *((_QWORD *)this + 15) = 0LL;
    CMILRefCountBase::Release(v4);
  }
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = (char *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    std::_Deallocate(v6, (__int64)(*((_QWORD *)this + 9) - (_QWORD)v6) >> 2, 4uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  v7 = (char *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    v8 = (char *)*((_QWORD *)this + 5);
    if ( v7 != v8 )
    {
      do
      {
        v9 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 )
        {
          *(_QWORD *)v7 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        }
        v7 += 8;
      }
      while ( v7 != v8 );
      v7 = (char *)*((_QWORD *)this + 4);
    }
    std::_Deallocate(v7, (__int64)(*((_QWORD *)this + 6) - (_QWORD)v7) >> 3, 8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
