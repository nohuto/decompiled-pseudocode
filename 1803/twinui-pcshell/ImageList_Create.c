/*
 * XREFs of ImageList_Create @ 0x180101728
 * Callers:
 *     CreateBitmapFromIcon @ 0x18026F380 (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x18010187C (_GetProcFromComCtl32.c)
 */

HIMAGELIST __stdcall ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow)
{
  HIMAGELIST result; // rax

  result = (HIMAGELIST)qword_180437590;
  if ( qword_180437590 == -1 )
  {
    GetProcFromComCtl32(&qword_180437590, "ImageList_Create");
    result = (HIMAGELIST)qword_180437590;
  }
  if ( result )
    return (HIMAGELIST)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))result)(
                         (unsigned int)cx,
                         (unsigned int)cy,
                         33LL);
  return result;
}
