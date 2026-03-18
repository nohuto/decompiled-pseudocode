/*
 * XREFs of DpiMiracastDdiMiracastIoControl @ 0x1C01C7370
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C01C8674 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_ppqqq @ 0x1C00411B0 (Template_ppqqq.c)
 */

__int64 __fastcall DpiMiracastDdiMiracastIoControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned int v8; // edi
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // ebp
  int v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+38h] [rbp-20h]

  v8 = a3;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    v20 = 0;
    v15 = a3;
    Template_ppqqq(a1, &EventEnterDxgkDdiMiracastIoControl, a3, *(_QWORD *)(a1 + 48), a2, v15, a5, v20);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, __int64, _DWORD *))(a1 + 3040))(
          *(_QWORD *)(a1 + 48),
          a2,
          v8,
          a4,
          a5,
          a6,
          a7);
  v13 = v11;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    LODWORD(v19) = v11;
    LODWORD(v18) = *a7;
    LODWORD(v16) = v8;
    Template_ppqqq((unsigned int)*a7, &EventLeaveDxgkDdiMiracastIoControl, v12, *(_QWORD *)(a1 + 48), a2, v16, v18, v19);
  }
  return v13;
}
