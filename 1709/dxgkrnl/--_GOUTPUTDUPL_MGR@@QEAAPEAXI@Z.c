/*
 * XREFs of ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C002AB10
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0107378 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01C6124 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C01C5558 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 */

OUTPUTDUPL_MGR *__fastcall OUTPUTDUPL_MGR::`scalar deleting destructor'(OUTPUTDUPL_MGR *this)
{
  OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(this);
  operator delete(this);
  return this;
}
