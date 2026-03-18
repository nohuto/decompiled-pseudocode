/*
 * XREFs of RIMSearchHidTLCInfo @ 0x1C000C774
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0108550 (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C0114A4C (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000C7E8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000C81C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 */

__int64 *__fastcall RIMSearchHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 *i; // rbx
  char v6; // [rsp+40h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6, (struct RIMLOCK *)&gTLCInfoLock);
  for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable;
        i != (__int64 *)&RawInputManagerObject::gHidRequestTable;
        i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 8) == a1 && *((_WORD *)i + 9) == a2 )
      goto LABEL_6;
  }
  i = 0LL;
LABEL_6:
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6);
  return i;
}
