/*
 * XREFs of ?AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItem@@@Z @ 0x180148D70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z @ 0x18014BDB8 (-AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::AddResponseItem(
        CPartitionVerticalBlankScheduler *this,
        struct CResponseItem *a2)
{
  CFrameInfo *v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax

  v2 = (CFrameInfo *)*((_QWORD *)this + 3230);
  v3 = -2003292412;
  if ( v2 )
  {
    v4 = CFrameInfo::AddResponse(v2, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x861u);
  }
  return v3;
}
