/*
 * XREFs of ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x18012B484
 * Callers:
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B3B6C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180085500 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 */

struct CVisual *__fastcall CVisual::GetTransformParentNoRef(CVisual *this)
{
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x10000000) != 0 )
    return *(struct CVisual **)(*(_QWORD *)CVisual::GetTransformParentDataInternal(this) + 8LL);
  else
    return 0LL;
}
