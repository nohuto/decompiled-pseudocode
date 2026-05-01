/*
 * XREFs of ?DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z @ 0x180069660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___ @ 0x18006CFE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CFrameApplicationPresentation::DropForeground(unsigned int *a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edi
  __int128 v6; // [rsp+28h] [rbp-40h]
  _QWORD v7[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)&v6 = a1;
  DWORD2(v6) = a2;
  if ( a1[16] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v7[0] = a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v7[1] = a1;
    v8 = v6;
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___(v4, v3, a1[14], v7, -2LL);
    if ( v7[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7[0] + 16LL))(v7[0]);
    if ( v5 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 16LL))(a1);
  }
}
