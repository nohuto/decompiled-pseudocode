/*
 * XREFs of ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C002E884
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0030410 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0030D64 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C002ECE8 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

MIRACAST_CHUNK_LIST *__fastcall MIRACAST_CHUNK_LIST::`scalar deleting destructor'(MIRACAST_CHUNK_LIST *this)
{
  struct MIRACAST_CHUNK *v2; // rax

  while ( 1 )
  {
    v2 = MIRACAST_CHUNK_LIST::RemoveHead(this);
    if ( !v2 )
      break;
    ExFreePoolWithTag(v2, 0);
  }
  operator delete(this);
  return this;
}
