/*
 * XREFs of ??0?$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z @ 0x180059F60
 * Callers:
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x180059B34 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CAudioSessionManagerProvider>::CComObject<CAudioSessionManagerProvider>(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  memset_0((void *)(a1 + 16), 0, 0x28uLL);
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)a1 = &ATL::CComObject<CAudioSessionManagerProvider>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
