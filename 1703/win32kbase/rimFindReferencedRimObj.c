/*
 * XREFs of rimFindReferencedRimObj @ 0x1C00FF52C
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0109F10 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C010A148 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 */

__int64 __fastcall rimFindReferencedRimObj(int a1, __int16 a2, unsigned __int16 a3, struct _LIST_ENTRY **a4)
{
  struct _LIST_ENTRY **v5; // r14
  struct _LIST_ENTRY *Flink; // r10
  struct _LIST_ENTRY *v9; // r8
  struct _LIST_ENTRY *v10; // rbx
  int Blink_high; // ecx
  struct _LIST_ENTRY *v12; // r8
  int v13; // ecx
  NTSTATUS v14; // edi

  v5 = a4;
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v9 = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      v10 = v9 - 1;
      if ( !LOBYTE(v9[3].Blink) && !BYTE1(v10[4].Blink) )
      {
        Blink_high = HIDWORD(v10[4].Blink);
        if ( (Blink_high & a1) != 0
          && !HIDWORD(v10[61].Flink)
          && ((unsigned int)(Blink_high - 1) <= 1
           || (Blink_high & 3) != 0
           || (Blink_high & 0x1C) == 4 && a2 == 13 && (unsigned __int16)(a3 - 1) <= 1u
           || (Blink_high & 0x1C) == 8 && a2 == 13 && a3 == 5
           || (Blink_high & 0x1C) == 0x10 && a2 == 13 && a3 == 4) )
        {
          break;
        }
      }
      v9 = v9->Flink;
      v10 = 0LL;
    }
    while ( v9 != &gObRimList );
    if ( v10 )
      goto LABEL_51;
  }
  v12 = gObRimList.Flink;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_53;
  do
  {
    v10 = v12 - 1;
    if ( !LOBYTE(v12[3].Blink) && !BYTE1(v10[4].Blink) )
    {
      v13 = HIDWORD(v10[4].Blink);
      if ( (v13 & a1) != 0
        && !HIDWORD(v10[61].Flink)
        && ((v13 & 0x1C) == 0xC && a2 == 13 && ((a3 - 1) & 0xFFFA) == 0 && a3 != 6
         || (v13 & 0x1C) == 0x18 && a2 == 13 && (unsigned __int16)(a3 - 4) <= 1u
         || (v13 & 0x1C) == 0x14 && a2 == 13 && ((a3 - 1) & 0xFFFC) == 0 && a3 != 3
         || (v13 & 0x1C) == 0x1C && (a2 == 13 && a3 != 3 && a3 && a3 < 6u || a2 == 1 && a3 == 14)) )
      {
        break;
      }
    }
    v12 = v12->Flink;
    v10 = 0LL;
  }
  while ( v12 != &gObRimList );
  v5 = a4;
  if ( v10 )
    goto LABEL_51;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_53;
  do
  {
    v10 = Flink - 1;
    if ( !LOBYTE(Flink[3].Blink)
      && !BYTE1(v10[4].Blink)
      && (HIDWORD(v10[4].Blink) & 0x20) != 0
      && LODWORD(v10[61].Flink) )
    {
      break;
    }
    Flink = Flink->Flink;
    v10 = 0LL;
  }
  while ( Flink != &gObRimList );
  if ( !v10 )
  {
LABEL_53:
    v14 = -1073741637;
  }
  else
  {
LABEL_51:
    v14 = ObReferenceObjectByPointer(v10, 3u, ExRawInputManagerObjectType, 1);
    if ( v14 >= 0 )
      *v5 = v10;
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
