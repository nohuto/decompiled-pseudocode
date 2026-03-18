/*
 * XREFs of ?Thunk_UpdateManipulation_90@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180198CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x180170CBC (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x180195A6C (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateManipulation_90(
        CManipulation *a1,
        __int64 a2)
{
  struct ManipulationData *v2; // rbx
  __int64 *v3; // rdx
  struct ManipulationData *v4; // rdx
  CManipulation *v5; // rbx
  unsigned int v6; // edi
  CManipulation *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v2 = *(struct ManipulationData **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<CManipulation>::Attach((__int64 *)&v8, *v3);
  v4 = v2;
  v5 = v8;
  v6 = CManipulation::Update(v8, v4);
  if ( v5 )
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
