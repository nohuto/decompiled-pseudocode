/*
 * XREFs of ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014AABC
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800D9D7C (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 * Callees:
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800D9F60 (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800D9F98 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::RemoveCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // ebx
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax

  v2 = *((_DWORD *)this + 236);
  if ( v2 > 0 )
  {
    v4 = (__int64 *)((char *)this + 920);
    do
    {
      v5 = (unsigned int)(v2 - 1);
      v6 = *(_QWORD *)(*v4 + 8 * v5);
      v7 = *(_QWORD *)(v6 + 8);
      if ( !*(_QWORD *)(v7 + 8) || *(struct CVisual **)(v7 + 8) == a2 )
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt(v4, v5);
        CCursorVisualReference::`scalar deleting destructor'((CWeakReferenceBase **)v6);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
