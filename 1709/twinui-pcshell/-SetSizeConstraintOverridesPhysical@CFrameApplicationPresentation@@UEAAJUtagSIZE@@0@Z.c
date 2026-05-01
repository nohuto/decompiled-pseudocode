/*
 * XREFs of ?SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x18006AF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___ @ 0x18006DBE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::SetSizeConstraintOverridesPhysical(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v8; // [rsp+28h] [rbp-48h]
  _QWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h]
  struct tagSIZE v12; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *(_QWORD *)&v8 = this;
  *((struct tagSIZE *)&v8 + 1) = a2;
  if ( *((_DWORD *)this + 16) == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v10[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v10[1] = this;
    v11 = v8;
    v12 = a3;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___(
           v6,
           v5,
           *((unsigned int *)this + 14),
           v10,
           -2LL);
    if ( v10[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
    if ( v4 >= 0 )
      ++*((_DWORD *)this + 53);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  return (unsigned int)v4;
}
