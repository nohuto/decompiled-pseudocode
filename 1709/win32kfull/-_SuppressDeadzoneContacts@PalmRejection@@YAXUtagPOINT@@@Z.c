/*
 * XREFs of ?_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z @ 0x1C01E0794
 * Callers:
 *     ?ProcessInput@PalmRejection@@YAHPEAX@Z @ 0x1C01E006C (-ProcessInput@PalmRejection@@YAHPEAX@Z.c)
 * Callees:
 *     ?_SuppressDeadzoneContactsInFrameAndGetNext@PalmRejection@@YAPEAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z @ 0x1C01E085C (-_SuppressDeadzoneContactsInFrameAndGetNext@PalmRejection@@YAPEAXPEAUtagPOINTERINPUTFRAME@@0Utag.c)
 */

void __fastcall PalmRejection::_SuppressDeadzoneContacts(
        struct tagPOINT this,
        struct tagPOINT a2,
        __int64 a3,
        struct tagPOINT a4)
{
  __int128 v4; // rdi
  void *v5; // r10
  void *v7; // rax

  v4 = *(_OWORD *)&xmmword_1C032BA50;
  v5 = 0LL;
  if ( xmmword_1C032BA50 )
  {
    do
    {
      if ( (_QWORD)v4 == *((_QWORD *)&v4 + 1) )
        break;
      v7 = (gdwMitConfig & 4) != 0
         ? CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(gpTouchProcessor, v5, (void *)v4, this)
         : PalmRejection::_SuppressDeadzoneContactsInFrameAndGetNext(
             (PalmRejection *)v5,
             (struct tagPOINTERINPUTFRAME *)v4,
             this,
             a4);
      v5 = (void *)v4;
      *(_QWORD *)&v4 = v7;
    }
    while ( v7 );
    if ( (_QWORD)v4 )
    {
      if ( (gdwMitConfig & 4) != 0 )
        CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(gpTouchProcessor, v5, (void *)v4, this);
      else
        PalmRejection::_SuppressDeadzoneContactsInFrameAndGetNext(
          (PalmRejection *)v5,
          (struct tagPOINTERINPUTFRAME *)v4,
          this,
          a4);
    }
  }
}
