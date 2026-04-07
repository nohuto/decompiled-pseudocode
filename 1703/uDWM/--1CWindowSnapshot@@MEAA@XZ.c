/*
 * XREFs of ??1CWindowSnapshot@@MEAA@XZ @ 0x18003B954
 * Callers:
 *     ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x18003B590 (--_GCWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x180035B60 (--1CWindowData@@QEAA@XZ.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z @ 0x18003BAF8 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowSnapshot::~CWindowSnapshot(CWindowSnapshot *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  _DWORD *v8; // rax
  int v9; // r8d
  int v10; // ecx
  unsigned int v11; // eax
  __m128i v12; // xmm0
  int v13; // eax
  float v14; // xmm0_4
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  void *v19; // rdi
  void (__fastcall *v20)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CWindowSnapshot::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 10);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (_DWORD *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    v9 = v8[14] - v8[12];
    v10 = v8[15] - v8[13];
    v11 = 0;
    if ( v10 >= 0 )
      v11 = v10;
    v12 = _mm_cvtsi32_si128(v11);
    v13 = 0;
    LODWORD(v14) = _mm_cvtepi32_ps(v12).m128_u32[0];
    if ( v9 >= 0 )
      v13 = v9;
    CDesktopManager::FreeCVIIntoCache(
      (int)(float)((float)v13 * *((float *)this + 18)),
      (int)(float)(v14 * *((float *)this + 18)),
      *((struct CResource **)this + 6));
    v15 = *(CBaseObject **)(*((_QWORD *)this + 4) + 400LL);
    if ( v15 )
      CBaseObject::Release(v15);
    v16 = *(CBaseObject **)(*((_QWORD *)this + 4) + 368LL);
    if ( v16 )
      CBaseObject::Release(v16);
    v17 = *(CBaseObject **)(*((_QWORD *)this + 4) + 384LL);
    if ( v17 )
      CBaseObject::Release(v17);
  }
  v18 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v18 )
    CBaseObject::Release(v18);
  v19 = (void *)*((_QWORD *)this + 4);
  if ( v19 )
  {
    CWindowData::~CWindowData(*((CWindowData **)this + 4));
    v20 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v20 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v19);
    else
      v20(WPF::g_pProcessHeap, v19);
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
