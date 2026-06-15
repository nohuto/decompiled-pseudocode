/*
 * XREFs of ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180019828
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x180004EB4 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamClassPolicyManager::CreateInstance(struct CStreamClassPolicyManager **a1)
{
  HANDLE ProcessHeap; // rax
  struct CStreamClassPolicyManager *v3; // rax
  struct CStreamClassPolicyManager *v4; // rbx
  unsigned int v5; // edi

  ProcessHeap = GetProcessHeap();
  v3 = (struct CStreamClassPolicyManager *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v4 = v3;
  if ( v3 )
  {
    *((_QWORD *)v3 + 1) = 0LL;
    *(_QWORD *)v3 = &CStreamClassPolicyManager::`vftable'{for `CRefCountedObject'};
    *((_QWORD *)v3 + 2) = &CStreamClassPolicyManager::`vftable'{for `IStreamClassPolicyManager'};
    *((_DWORD *)v3 + 2) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    *a1 = v4;
  v5 = v4 == 0LL ? 0x8007000E : 0;
  if ( !v4 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_4ded2bb3714e38485bdee795a2f1ce42_Traceguids, v5);
    }
    AudPolicyLogError("CStreamClassPolicyManager::CreateInstance", 59, v5);
  }
  return v5;
}
