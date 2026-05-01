/*
 * XREFs of ??1CAppTransitionTagger@@QEAA@XZ @ 0x1802ABB8C
 * Callers:
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1802AD9BC (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAppTransitionTagger::~CAppTransitionTagger(CAppTransitionTagger *this)
{
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
