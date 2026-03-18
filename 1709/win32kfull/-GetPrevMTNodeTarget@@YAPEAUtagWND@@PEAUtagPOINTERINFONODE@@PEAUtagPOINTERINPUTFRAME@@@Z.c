/*
 * XREFs of ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A51F4
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00F8798 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01A4E28 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

struct tagWND *__fastcall GetPrevMTNodeTarget(struct tagPOINTERINFONODE *a1, struct _LIST_ENTRY **a2)
{
  struct _LIST_ENTRY *v2; // rax
  __int64 v3; // rdi
  struct _LIST_ENTRY *v4; // rbx
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = *a2;
  v3 = 0LL;
  if ( *a2 != &gFrameListHead )
  {
    do
    {
      v4 = v2;
      if ( v2[3].Blink == a2[7] )
        break;
      v2 = v2->Flink;
    }
    while ( v2 != &gFrameListHead );
    if ( v2 != &gFrameListHead && HIDWORD(v4[2].Blink) != LODWORD(v4[2].Blink) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v4[2].Flink + 1);
      ValidNodeInFrame = FindValidNodeInFrame((const struct tagPOINTERINPUTFRAME *)v4, *((_WORD *)a1 + 30), 0LL);
      if ( ValidNodeInFrame )
      {
        LOBYTE(v6) = 1;
        v3 = HMValidateHandleNoSecure(*((_QWORD *)ValidNodeInFrame + 10), v6, v7, v8);
      }
      UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v4);
    }
  }
  return (struct tagWND *)v3;
}
