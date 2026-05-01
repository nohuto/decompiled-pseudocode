/*
 * XREFs of ?GetMobodyApplication@CImmersiveWindowManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18002FDF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::GetMobodyApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveApplication **a2)
{
  int v4; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IImmersiveApplication **); // rcx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(char *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplication **)))(*((_QWORD *)this + 2) + 24LL))(
         (char *)this + 16,
         &v7);
  if ( v4 >= 0 )
    v4 = (**v7)(v7, &GUID_8b14e88b_5663_4caf_b196_c31479262831, a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IImmersiveApplication **)))(*v5)[2])(v5);
  }
  return (unsigned int)v4;
}
