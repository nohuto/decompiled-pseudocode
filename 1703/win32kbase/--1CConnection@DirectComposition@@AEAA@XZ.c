/*
 * XREFs of ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0014714
 * Callers:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00146EC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0015728 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C001D880 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CConnection::~CConnection(DirectComposition::CConnection *this)
{
  DirectComposition::CChannel *v2; // rcx
  struct _ERESOURCE *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx

  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  v2 = (DirectComposition::CChannel *)*((_QWORD *)this + 19);
  if ( v2 )
    DirectComposition::CChannel::Release(v2);
  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    ExDeleteResourceLite(v3);
    Win32FreePool(*((_QWORD *)this + 2));
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    Win32FreePool(*((_QWORD *)this + 1));
  }
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 33);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    Win32FreePool(*((_QWORD *)this + 33));
  }
  v6 = (void *)*((_QWORD *)this + 29);
  if ( v6 )
    ObfDereferenceObject(v6);
  *((_QWORD *)this + 3) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CConnection *)((char *)this + 24));
}
