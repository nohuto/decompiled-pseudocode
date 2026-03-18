/*
 * XREFs of ?RemoveAll@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1801B9A60
 * Callers:
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18002AA88 (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAll(__int64 a1)
{
  void *v1; // rdi
  void *v3; // rcx

  v1 = (void *)(a1 + 16);
  v3 = *(void **)a1;
  if ( v3 != v1 && v3 )
    WPF::ProcessHeapImpl::Free(v3);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = v1;
  *(_DWORD *)(a1 + 12) = 8;
}
