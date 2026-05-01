/*
 * XREFs of ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x18006AD90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2b7e715354e88d4a97496f3ccdfd0602___ @ 0x18006D9F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_2b7e715354e88d4a97496f3ccdfd0602___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::SetBackgroundColor(CFrameApplicationPresentation *this, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int128 v7; // [rsp+28h] [rbp-40h]
  _QWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)&v7 = this;
  DWORD2(v7) = a2;
  if ( *((_DWORD *)this + 16) == 2 )
  {
    v3 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59C,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  v8[0] = this;
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  v8[1] = this;
  v9 = v7;
  v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_2b7e715354e88d4a97496f3ccdfd0602___(
         v5,
         v4,
         *((unsigned int *)this + 14),
         v8,
         -2LL);
  if ( v8[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
  if ( v3 >= 0 )
    ++*((_DWORD *)this + 53);
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  if ( v3 < 0 )
    goto LABEL_8;
  return (unsigned int)v3;
}
