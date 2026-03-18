/*
 * XREFs of ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@PEAPEAV1@@Z @ 0x1C000EB5C
 * Callers:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z @ 0x1C00104E0 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C00103F8 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall CInputQueue::Create(int a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  __int128 v12; // xmm1
  int v13; // edi
  _OWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF

  *a4 = 0LL;
  v8 = Win32AllocPool(80LL, 1902660937LL);
  v9 = v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)v8 = &CInputQueue::`vftable';
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = a1;
    memset(v15, 0, 0x28uLL);
    v10 = v15[1];
    *(_OWORD *)(v9 + 40) = v15[0];
    v11 = *(_QWORD *)&v15[2];
    *(_OWORD *)(v9 + 56) = v10;
    *(_QWORD *)(v9 + 72) = v11;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v12 = *(_OWORD *)(a3 + 16);
    v15[0] = *(_OWORD *)a3;
    *(_QWORD *)&v15[2] = *(_QWORD *)(a3 + 32);
    v15[1] = v12;
    v13 = CInputQueue::Initialize(v9, a2, v15);
    if ( v13 < 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    else
      *a4 = v9;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v13;
}
