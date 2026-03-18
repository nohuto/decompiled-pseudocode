/*
 * XREFs of ?Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801C9E80
 * Callers:
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x180192FF0 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall InteractionSourceManager::Initialize(
        struct CWeakReferenceBase **this,
        struct CComposition *a2,
        struct CInteractionTracker *a3)
{
  int WeakReferenceBase; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *this = a2;
  WeakReferenceBase = CComposition::GetWeakReferenceBase(a2, a3, this + 1);
  if ( WeakReferenceBase < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x12,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\animations\\interactionsourcemanager.cpp",
      (const char *)(unsigned int)WeakReferenceBase);
    __debugbreak();
  }
}
