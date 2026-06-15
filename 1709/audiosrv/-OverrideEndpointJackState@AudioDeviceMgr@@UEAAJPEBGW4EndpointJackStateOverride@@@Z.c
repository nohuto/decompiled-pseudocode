/*
 * XREFs of ?OverrideEndpointJackState@AudioDeviceMgr@@UEAAJPEBGW4EndpointJackStateOverride@@@Z @ 0x1800E7900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::OverrideEndpointJackState(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v9[1] = -2LL;
  v5 = 0;
  v9[0] = 0LL;
  if ( a2 && a3 <= 1 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *, _QWORD))(*a1 + 80LL))(a1, a2, v9, 0LL);
    if ( v6 < 0
      || (v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v9[0] + 64LL))(v9[0], &v11), v6 < 0)
      || (v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9[0] + 88LL))(v9[0], a3), v6 < 0)
      || (v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v9[0] + 64LL))(v9[0], &v10), v6 < 0) )
    {
      v5 = v6;
    }
    else if ( v11 != v10 )
    {
      v7 = a1[5];
      if ( v7 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 40LL))(v7, v9[0]);
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v9[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
  return v5;
}
