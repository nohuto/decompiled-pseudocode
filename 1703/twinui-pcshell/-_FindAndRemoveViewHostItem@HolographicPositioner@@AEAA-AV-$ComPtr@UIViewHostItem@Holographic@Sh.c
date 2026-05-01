/*
 * XREFs of ?_FindAndRemoveViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1800DBC30
 * Callers:
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DAC2C (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z @ 0x1800DBDD8 (-_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall HolographicPositioner::_FindAndRemoveViewHostItem(
        RTL_SRWLOCK *a1,
        _QWORD *a2,
        struct IApplicationView *a3)
{
  int ApplicationViewUniqueId; // eax
  int *Ptr; // rbx
  int *v7; // rsi
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int *v12; // rdi
  int *i; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  PSRWLOCK SRWLock[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v21; // [rsp+70h] [rbp+30h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+38h]
  int v23; // [rsp+88h] [rbp+48h] BYREF

  v22 = a2;
  SRWLock[1] = (PSRWLOCK)-2LL;
  v21 = 0;
  ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId((HolographicPositioner *)a1, a3, &v21);
  if ( ApplicationViewUniqueId < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5D8,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)ApplicationViewUniqueId);
  wil::srwlock::lock_exclusive(a1 + 32, SRWLock);
  *a2 = 0LL;
  Ptr = (int *)a1[30].Ptr;
  v7 = (int *)a1[29].Ptr;
  v8 = v21;
  while ( v7 != Ptr )
  {
    v23 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v7 + 64LL))(*(_QWORD *)v7, &v23);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E1,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
    if ( v8 == v23 )
      break;
    v7 += 2;
  }
  if ( v7 != a1[30].Ptr )
  {
    v10 = *(_QWORD *)v7;
    if ( *a2 != *(_QWORD *)v7 )
    {
      if ( v10 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)v7);
      v11 = *a2;
      *a2 = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (int *)a1[30].Ptr;
    for ( i = v7 + 2; i != v12; i += 2 )
    {
      v14 = 0LL;
      if ( &v23 != i )
      {
        v14 = *(_QWORD *)i;
        *(_QWORD *)i = 0LL;
      }
      v15 = *((_QWORD *)i - 1);
      *((_QWORD *)i - 1) = v14;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = a1[30].Ptr;
    v17 = *(v16 - 1);
    if ( v17 )
    {
      *(v16 - 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    a1[30].Ptr = (char *)a1[30].Ptr - 8;
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return a2;
}
