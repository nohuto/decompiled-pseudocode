/*
 * XREFs of ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00349C0
 * Callers:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0034998 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0033F80 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C0080070 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CConnection::~CConnection(DirectComposition::CConnection *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  DirectComposition::CChannel *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  void *v14; // rcx
  __int64 v15; // rcx

  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  v4 = (DirectComposition::CChannel *)*((_QWORD *)this + 19);
  if ( v4 )
    DirectComposition::CChannel::Release(v4);
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    Win32FreePool(*((_QWORD *)this + 2), v6, v7);
  }
  v8 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  if ( v8 )
  {
    ExDeleteResourceLite(v8);
    Win32FreePool(*((_QWORD *)this + 1), v9, v10);
  }
  v11 = (struct _ERESOURCE *)*((_QWORD *)this + 33);
  if ( v11 )
  {
    ExDeleteResourceLite(v11);
    Win32FreePool(*((_QWORD *)this + 33), v12, v13);
  }
  v14 = (void *)*((_QWORD *)this + 29);
  if ( v14 )
    ObfDereferenceObject(v14);
  v15 = *((_QWORD *)this + 3);
  if ( v15 )
    Win32FreePool(v15, v2, v3);
}
