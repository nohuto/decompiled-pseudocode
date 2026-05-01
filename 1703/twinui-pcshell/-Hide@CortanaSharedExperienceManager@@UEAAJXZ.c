/*
 * XREFs of ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800BAD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800BC718 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDCA4 (-_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Hide(CortanaSharedExperienceManager *this)
{
  int started; // eax
  unsigned int v3; // edi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 512)
    && (started = CortanaSharedExperienceManager::_StartDeferredSuspensionTimer(this), v3 = started, started < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1BB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)started);
    return v3;
  }
  else
  {
    CortanaSharedExperienceManager::TryGetDesktopViewIfActive(this, &v8);
    if ( v8 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
      v6 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return v5;
    }
    else
    {
      return 0LL;
    }
  }
}
