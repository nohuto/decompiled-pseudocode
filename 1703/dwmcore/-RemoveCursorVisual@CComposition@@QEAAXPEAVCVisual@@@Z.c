/*
 * XREFs of ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18013FADC
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800CF198 (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x180005B8C (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800CF27C (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 */

void __fastcall CComposition::RemoveCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // ebx
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax

  v2 = *((_DWORD *)this + 238);
  if ( v2 > 0 )
  {
    v4 = (__int64 *)((char *)this + 928);
    do
    {
      v5 = (unsigned int)(v2 - 1);
      v6 = *(_QWORD *)(*v4 + 8 * v5);
      v7 = *(_QWORD *)(v6 + 8);
      if ( !*(_QWORD *)(v7 + 8) || *(struct CVisual **)(v7 + 8) == a2 )
      {
        DynArray<CCursorVisual *,0>::RemoveAt(v4, v5);
        CCursorVisual::`scalar deleting destructor'((CWeakReferenceBase **)v6);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
