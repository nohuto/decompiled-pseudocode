/*
 * XREFs of ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x140001F80
 * Callers:
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140001D44 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlStringMgr::Free(ATL::CAtlStringMgr *this, struct ATL::CStringData *a2)
{
  ATL::CWin32Heap *v2; // rcx
  void (*v3)(ATL::CWin32Heap *__hidden, void *); // rax

  v2 = (ATL::CWin32Heap *)*((_QWORD *)this + 1);
  v3 = *(void (**)(ATL::CWin32Heap *__hidden, void *))(*(_QWORD *)v2 + 8LL);
  if ( v3 == ATL::CWin32Heap::Free )
    ATL::CWin32Heap::Free(v2, a2);
  else
    ((void (__fastcall *)(ATL::CWin32Heap *, struct ATL::CStringData *))v3)(v2, a2);
}
