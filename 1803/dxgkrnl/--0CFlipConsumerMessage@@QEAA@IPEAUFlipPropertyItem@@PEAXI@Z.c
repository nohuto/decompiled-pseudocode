/*
 * XREFs of ??0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x1C004DA6C
 * Callers:
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipConsumerMessage@@@Z @ 0x1C004D2B8 (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipCo.c)
 * Callees:
 *     <none>
 */

CFlipConsumerMessage *__fastcall CFlipConsumerMessage::CFlipConsumerMessage(
        CFlipConsumerMessage *this,
        int a2,
        struct FlipPropertyItem *a3,
        void *a4,
        unsigned int a5)
{
  *((_DWORD *)this + 8) = a5;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = a4;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  *(_QWORD *)this = &CFlipConsumerMessage::`vftable'{for `CFlipPropertySetBase'};
  *((_QWORD *)this + 5) = &CFlipConsumerMessage::`vftable'{for `CFlipQueuedObject'};
  return this;
}
