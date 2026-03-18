/*
 * XREFs of ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0036C3C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C01D44F4 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01DB434 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXGWORKQUEUE::QueueWork(PLIST_ENTRY ListHead, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rbx

  v6 = (struct _LIST_ENTRY *)operator new[](0x20uLL, 0x4B677844u, (POOL_TYPE)512);
  v7 = v6;
  if ( v6 )
    memset(v6, 0, 0x20uLL);
  else
    v7 = 0LL;
  if ( !v7 )
    return 3221225495LL;
  v7[1].Flink = a2;
  v7[1].Blink = a3;
  ExInterlockedInsertTailList(ListHead, v7, (PKSPIN_LOCK)&ListHead[1]);
  return 0LL;
}
