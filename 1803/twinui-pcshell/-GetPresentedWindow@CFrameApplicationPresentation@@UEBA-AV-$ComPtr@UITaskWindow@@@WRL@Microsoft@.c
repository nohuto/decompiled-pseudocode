/*
 * XREFs of ?GetPresentedWindow@CFrameApplicationPresentation@@UEBA?AV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@XZ @ 0x1800148E0
 * Callers:
 *     _lambda_0d74f069fa796de4b01adcedcd59308d_::operator() @ 0x18000EA38 (_lambda_0d74f069fa796de4b01adcedcd59308d_--operator().c)
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50 (_lambda_8e77f3627fbb508724cf2b62e627d849_--operator().c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180014950 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CFrameApplicationPresentation::GetPresentedWindow(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx

  if ( !*(_DWORD *)(a1 + 208)
    && *(_BYTE *)(a1 + 528)
    && *(_QWORD *)(a1 + 80)
    && *(_QWORD *)(a1 + 88)
    && *(_BYTE *)(a1 + 96) )
  {
    v4 = *(__int64 **)(a1 + 104);
    v5 = *v4;
    *a2 = *v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
