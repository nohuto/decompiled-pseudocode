/*
 * XREFs of ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x1800C62C0
 * Callers:
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x18009EE88 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Create(struct ICoverageSet **a1)
{
  char *v2; // rax
  struct ICoverageSet *v3; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)WPF::ProcessHeapImpl::AllocClear(0x120uLL);
  v3 = (struct ICoverageSet *)v2;
  if ( !v2 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *((_DWORD *)v2 + 4) = 0;
  *(_QWORD *)v2 = &CArrayBasedCoverageSet::`vftable'{for `ICoverageSet'};
  *((_QWORD *)v2 + 1) = &CArrayBasedCoverageSet::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v2 + 3) = v2 + 56;
  *((_QWORD *)v2 + 4) = v2 + 56;
  *((_DWORD *)v2 + 10) = 10;
  *(_QWORD *)(v2 + 44) = 10LL;
  *((_QWORD *)v2 + 32) = 0LL;
  *((_QWORD *)v2 + 33) = 0LL;
  *((_QWORD *)v2 + 34) = 0LL;
  *((_DWORD *)v2 + 70) = 0;
  CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(v2 + 8));
  *a1 = v3;
  return 0LL;
}
