/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180001738
 * Callers:
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x18002A080 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x18002A140 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECThreadPool@@UEAAPEAXI@Z @ 0x18002A910 (--_ECThreadPool@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180035510 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
