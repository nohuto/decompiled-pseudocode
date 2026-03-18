/*
 * XREFs of TransitionResourceBarrier @ 0x1801C66E8
 * Callers:
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x1801C5C50 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TransitionResourceBarrier(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64 *, __int64, _DWORD *); // rax
  __int64 result; // rax
  _DWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+34h] [rbp-14h]
  int v14; // [rsp+38h] [rbp-10h]

  if ( a3 != a4 )
  {
    memset_0(v11, 0, 0x20uLL);
    v8 = *a1;
    v11[0] = 0;
    v11[1] = 0;
    v12 = a2;
    v9 = *(__int64 (__fastcall **)(__int64 *, __int64, _DWORD *))(v8 + 208);
    v13 = a3;
    v14 = a4;
    return v9(a1, 1LL, v11);
  }
  return result;
}
