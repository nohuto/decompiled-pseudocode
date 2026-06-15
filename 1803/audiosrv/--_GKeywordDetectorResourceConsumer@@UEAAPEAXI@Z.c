/*
 * XREFs of ??_GKeywordDetectorResourceConsumer@@UEAAPEAXI@Z @ 0x1801135B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 */

KeywordDetectorResourceConsumer *__fastcall KeywordDetectorResourceConsumer::`scalar deleting destructor'(
        KeywordDetectorResourceConsumer *this,
        char a2)
{
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
