/*
 * XREFs of ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x180092B20
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180091210 (-Release@CDirtyRegion@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CDirtyRegion *__fastcall CDirtyRegion::`vector deleting destructor'(CDirtyRegion *this, char a2)
{
  char *v3; // rbx
  char **v5; // rcx
  char **v6; // rax
  __int64 *v7; // rcx
  char **v8; // rcx
  char **v9; // rax
  __int64 *v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  *(_QWORD *)this = &CDirtyRegion::`vftable';
  v3 = (char *)this + 1128;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 38) = (char *)this + 296;
  *((_QWORD *)this + 37) = (char *)this + 296;
  *((_QWORD *)this + 40) = (char *)this + 312;
  *((_QWORD *)this + 39) = (char *)this + 312;
  *((_QWORD *)this + 42) = (char *)this + 328;
  *((_QWORD *)this + 41) = (char *)this + 328;
  *((_QWORD *)this + 44) = (char *)this + 344;
  *((_QWORD *)this + 43) = (char *)this + 344;
  *((_QWORD *)this + 46) = (char *)this + 360;
  *((_QWORD *)this + 45) = (char *)this + 360;
  *((_QWORD *)this + 48) = (char *)this + 376;
  *((_QWORD *)this + 47) = (char *)this + 376;
  *((_QWORD *)this + 50) = (char *)this + 392;
  *((_QWORD *)this + 49) = (char *)this + 392;
  v5 = (char **)*((_QWORD *)this + 142);
  v6 = (char **)v5[1];
  if ( *v5 != v3 || *v6 != (char *)v5 )
    __fastfail(3u);
  *((_QWORD *)v3 + 1) = v6;
  *v6 = v3;
  while ( 1 )
  {
    v7 = *(__int64 **)v3;
    if ( *(char **)v3 == v3 )
      break;
    v12 = *v7;
    if ( (char *)v7[1] != v3 || *(__int64 **)(v12 + 8) != v7 )
      __fastfail(3u);
    *(_QWORD *)v3 = v12;
    *(_QWORD *)(v12 + 8) = v3;
    WPF::ProcessHeapImpl::Free(v7);
  }
  *((_QWORD *)v3 + 1) = v3;
  *(_QWORD *)v3 = v3;
  *((_QWORD *)v3 + 2) = v3;
  *((_QWORD *)v3 + 3) = v3;
  *((_QWORD *)v3 + 1) = v3 + 16;
  *(_QWORD *)v3 = v3 + 16;
  *((_DWORD *)v3 + 392) = 0;
  v8 = (char **)*((_QWORD *)v3 + 1);
  v9 = (char **)v8[1];
  if ( *v8 != v3 || *v9 != (char *)v8 )
    __fastfail(3u);
  *((_QWORD *)v3 + 1) = v9;
  *v9 = v3;
  while ( 1 )
  {
    v10 = *(__int64 **)v3;
    if ( *(char **)v3 == v3 )
      break;
    v13 = *v10;
    if ( (char *)v10[1] != v3 || *(__int64 **)(v13 + 8) != v10 )
      __fastfail(3u);
    *(_QWORD *)v3 = v13;
    *(_QWORD *)(v13 + 8) = v3;
    WPF::ProcessHeapImpl::Free(v10);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
