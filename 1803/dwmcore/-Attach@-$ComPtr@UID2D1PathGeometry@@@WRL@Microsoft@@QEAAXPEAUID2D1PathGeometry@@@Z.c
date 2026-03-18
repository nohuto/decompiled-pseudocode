/*
 * XREFs of ?Attach@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z @ 0x1801CE64C
 * Callers:
 *     ?Thunk_SetAutoReset_125@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x1801D1120 (-Thunk_SetAutoReset_125@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 *     ?Thunk_SetCaptureState_119@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x1801D1180 (-Thunk_SetCaptureState_119@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 *     ?Thunk_UpdateManipulation_111@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x1801D1270 (-Thunk_UpdateManipulation_111@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 *     ??1CPathData@@MEAA@XZ @ 0x180208B50 (--1CPathData@@MEAA@XZ.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1802093A4 (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020AB80 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ID2D1PathGeometry>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
