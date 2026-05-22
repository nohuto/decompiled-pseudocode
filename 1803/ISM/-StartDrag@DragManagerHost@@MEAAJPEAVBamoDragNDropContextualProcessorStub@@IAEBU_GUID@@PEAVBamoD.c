/*
 * XREFs of ?StartDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IAEBU_GUID@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180062990
 * Callers:
 *     <none>
 * Callees:
 *     ?StartDrag@DragNDropProcessor@@QEAAJKU_GUID@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180064C08 (-StartDrag@DragNDropProcessor@@QEAAJKU_GUID@@PEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall DragManagerHost::StartDrag(
        DragManagerHost *this,
        struct BamoDragNDropContextualProcessorStub *a2,
        unsigned int a3,
        const struct _GUID *a4,
        struct BamoDragManagerClientProxy *a5)
{
  DragNDropProcessor *v5; // rcx
  struct _GUID v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = (DragNDropProcessor *)*((_QWORD *)this + 7);
  v7 = *a4;
  DragNDropProcessor::StartDrag(v5, a3, &v7, a5);
  return 0LL;
}
