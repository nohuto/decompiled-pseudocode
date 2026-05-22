/*
 * XREFs of ?Unregister3DCompositor@@YAHXZ @ 0x1800053B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000771C (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z @ 0x180007918 (-On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 Unregister3DCompositor(void)
{
  RTL_SRWLOCK *InstanceOffInputThread; // rbx
  DWORD v1; // eax
  const char *v2; // r9
  PVOID Ptr; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  if ( MPC3DStateHelper::On3DCompositorStateChanged(InstanceOffInputThread, 0) )
  {
    v1 = WaitForSingleObjectEx(InstanceOffInputThread[9].Ptr, 0xFFFFFFFF, 0);
    if ( v1 != 258 )
    {
      if ( v1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x967,
          (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
          v2);
        JUMPOUT(0x18000543ALL);
      }
    }
  }
  AcquireSRWLockExclusive(InstanceOffInputThread);
  Ptr = InstanceOffInputThread[3].Ptr;
  if ( Ptr )
  {
    InstanceOffInputThread[3].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  if ( InstanceOffInputThread )
    ReleaseSRWLockExclusive(InstanceOffInputThread);
  return 1LL;
}
