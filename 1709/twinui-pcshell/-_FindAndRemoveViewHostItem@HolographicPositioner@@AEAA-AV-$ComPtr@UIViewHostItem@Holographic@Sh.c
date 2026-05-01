/*
 * XREFs of ?_FindAndRemoveViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18010058C
 * Callers:
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FE4DC (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall HolographicPositioner::_FindAndRemoveViewHostItem(RTL_SRWLOCK *a1, _QWORD *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // r12
  _QWORD *Ptr; // rbx
  _QWORD *i; // rdi
  int v9; // eax
  int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  int *v14; // r15
  int *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+40h]
  int v22; // [rsp+80h] [rbp+48h] BYREF
  _QWORD *v23; // [rsp+88h] [rbp+50h]
  __int64 v24; // [rsp+90h] [rbp+58h] BYREF
  RTL_SRWLOCK *v25; // [rsp+98h] [rbp+60h]

  v23 = a2;
  v6 = a1 + 39;
  AcquireSRWLockExclusive(a1 + 39);
  v25 = v6;
  *a2 = 0LL;
  Ptr = a1[37].Ptr;
  for ( i = a1[36].Ptr; i != Ptr; ++i )
  {
    v22 = 0;
    v24 = 0LL;
    if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*i)(*i, &GUID_86ccf8b6_d952_45b2_b3ad_bf46c2eec142, &v24) >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v24 + 24LL))(v24, a3, &v22);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x739,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v9);
    }
    v10 = v22;
    v11 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v10 )
      break;
  }
  if ( i != a1[37].Ptr )
  {
    v12 = *i;
    if ( *a2 != *i )
    {
      if ( v12 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*i);
      v13 = *a2;
      *a2 = v12;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = (int *)a1[37].Ptr;
    v15 = (int *)(i + 1);
    if ( i + 1 != (_QWORD *)v14 )
    {
      do
      {
        v16 = 0LL;
        if ( &v22 != v15 )
        {
          v16 = *(_QWORD *)v15;
          *(_QWORD *)v15 = 0LL;
        }
        v17 = *((_QWORD *)v15 - 1);
        *((_QWORD *)v15 - 1) = v16;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v15 += 2;
      }
      while ( v15 != v14 );
    }
    v18 = a1[37].Ptr;
    v19 = *(v18 - 1);
    if ( v19 )
    {
      *(v18 - 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    a1[37].Ptr = (char *)a1[37].Ptr - 8;
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return a2;
}
