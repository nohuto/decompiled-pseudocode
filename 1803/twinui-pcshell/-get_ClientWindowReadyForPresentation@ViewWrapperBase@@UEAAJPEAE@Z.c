/*
 * XREFs of ?get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180053570
 * Callers:
 *     ?IsPresentationReady@CTaskWindow@@UEAA_NXZ @ 0x180047510 (-IsPresentationReady@CTaskWindow@@UEAA_NXZ.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006ABC8 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::get_ClientWindowReadyForPresentation(ViewWrapperBase *this, bool *a2)
{
  RTL_SRWLOCK *v4; // rbx
  bool v5; // al

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 17) + 296LL);
  AcquireSRWLockShared(v4);
  v5 = *((_QWORD *)this + 40) && !*((_DWORD *)this + 82);
  *a2 = v5;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
