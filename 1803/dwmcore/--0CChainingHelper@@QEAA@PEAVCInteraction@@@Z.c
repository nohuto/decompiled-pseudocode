/*
 * XREFs of ??0CChainingHelper@@QEAA@PEAVCInteraction@@@Z @ 0x1801CBB38
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801CA52C (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTI.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CChainingHelper *__fastcall CChainingHelper::CChainingHelper(CChainingHelper *this, struct CInteraction *a2)
{
  `vector constructor iterator'(
    this,
    12LL,
    3LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis);
  *((_BYTE *)this + 36) &= 0xFCu;
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct CInteraction *))a2)(a2);
  return this;
}
