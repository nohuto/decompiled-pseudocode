/*
 * XREFs of ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800A9B30
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180050310 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800509B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800B0A10 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     <none>
 */

struct CProcessAttribution *__fastcall CResource::GetProcessAttributionNoRef(CResource *this)
{
  struct CProcessAttribution *result; // rax

  result = (struct CProcessAttribution *)*((_QWORD *)this + 6);
  if ( result )
    return (struct CProcessAttribution *)*((_QWORD *)result + 5);
  return result;
}
