/*
 * XREFs of ?Thunk_UpdateManipulation_111@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x1801D1270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x180199B2C (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 *     ?Attach@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z @ 0x1801CE64C (-Attach@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateManipulation_111(
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
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::Attach((__int64 *)&v8, *v3);
  v4 = v2;
  v5 = v8;
  v6 = CManipulation::Update(v8, v4);
  if ( v5 )
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
