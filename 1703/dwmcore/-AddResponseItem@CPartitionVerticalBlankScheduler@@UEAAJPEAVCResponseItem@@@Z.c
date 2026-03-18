/*
 * XREFs of ?AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItem@@@Z @ 0x18013BB00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z @ 0x180140C14 (-AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::AddResponseItem(
        CPartitionVerticalBlankScheduler *this,
        struct CResponseItem *a2)
{
  CFrameInfo *v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax

  v2 = (CFrameInfo *)*((_QWORD *)this + 2685);
  v3 = -2003292412;
  if ( v2 )
  {
    v4 = CFrameInfo::AddResponse(v2, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x877u);
  }
  return v3;
}
