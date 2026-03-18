/*
 * XREFs of ??1CVisualReferenceController@@MEAA@XZ @ 0x180028050
 * Callers:
 *     ??_ECVisualReferenceController@@MEAAPEAXI@Z @ 0x180027F50 (--_ECVisualReferenceController@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x180027FD0 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 */

void __fastcall CVisualReferenceController::~CVisualReferenceController(CVisualReferenceController *this)
{
  *(_QWORD *)this = &CVisualReferenceController::`vftable';
  CVisualReferenceController::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
