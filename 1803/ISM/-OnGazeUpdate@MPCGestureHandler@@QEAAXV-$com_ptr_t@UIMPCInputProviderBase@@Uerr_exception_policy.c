/*
 * XREFs of ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005989C
 * Callers:
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054FA0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 * Callees:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800ACD48 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800AD1A8 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGestureHandler::OnGazeUpdate(__int64 a1, _QWORD *a2)
{
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // eax

  if ( !*(_BYTE *)(a1 + 988) )
  {
    v4 = *(_DWORD *)(a1 + 168) - 1;
    if ( v4 )
    {
      v5 = v4 - 15;
      if ( !v5 || v5 == 16 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 88LL))(*a2);
        ManipulationInjector::InjectZoom((ManipulationInjector *)(a1 + 80), *(float *)(a1 + 984), v6);
      }
    }
    else if ( *(float *)(a1 + 976) != 0.0 || *(float *)(a1 + 980) != 0.0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 88LL))(*a2);
      ManipulationInjector::InjectPan((ManipulationInjector *)(a1 + 80), *(float *)(a1 + 976), *(float *)(a1 + 980), v7);
      *(float *)(a1 + 968) = fmaxf(*(float *)(a1 + 976), *(float *)(a1 + 980)) + *(float *)(a1 + 968);
    }
  }
  *(_BYTE *)(a1 + 988) = 0;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
}
