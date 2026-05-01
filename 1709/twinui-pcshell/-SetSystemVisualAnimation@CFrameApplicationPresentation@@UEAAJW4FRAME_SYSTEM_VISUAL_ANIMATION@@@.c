/*
 * XREFs of ?SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z @ 0x180069520
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e79e1f0f999b9aa8ee4060ee9f370fc9___ @ 0x18006CEE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e79e1f0f999b9aa8ee4060ee9f370fc9___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::SetSystemVisualAnimation(unsigned int *a1, unsigned int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int128 v7; // [rsp+28h] [rbp-40h]
  _QWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  a1[136] = a2;
  *(_QWORD *)&v7 = a1;
  DWORD2(v7) = a2;
  if ( a1[16] == 2 )
  {
    v3 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v8[0] = a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v8[1] = a1;
    v9 = v7;
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_e79e1f0f999b9aa8ee4060ee9f370fc9___(v5, v4, a1[14], v8, -2LL);
    if ( v8[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
    if ( v3 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return (unsigned int)v3;
}
