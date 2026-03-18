/*
 * XREFs of ?PreScribble@CD3DPhysicalSwapChainBuffer@@QEAAJPEAUID3D12CommandQueue@@AEBUtagRECT@@@Z @ 0x1801A9380
 * Callers:
 *     ?Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSuperWetStrokePartner@@@Z @ 0x18015106C (-Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSupe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pp @ 0x18016A584 (McTemplateU0pp.c)
 */

__int64 __fastcall CD3DPhysicalSwapChainBuffer::PreScribble(
        CD3DPhysicalSwapChainBuffer *this,
        struct ID3D12CommandQueue *a2,
        const struct tagRECT *a3)
{
  RTL_SRWLOCK *v3; // rdi
  char v7; // si
  __int64 v8; // rcx
  signed int v9; // eax
  unsigned int v10; // edi
  signed int v11; // eax

  v3 = (RTL_SRWLOCK *)((char *)this + 200);
  v7 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 25);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0pp(v8, &EVTDESC_POSTPRESENTSCRIBBLE_SCRIBBLE_Start, *((_QWORD *)this + 15), *((_QWORD *)this + 27));
  if ( *((_BYTE *)this + 208) )
  {
    v7 = 1;
  }
  else
  {
    *((_BYTE *)this + 208) = 1;
    *(struct tagRECT *)((char *)this + 184) = *a3;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v9 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _QWORD, _QWORD))a2->lpVtbl->Wait)(
         a2,
         *((_QWORD *)this + 17),
         *((_QWORD *)this + 27));
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xD2u);
  }
  else if ( v7 )
  {
    v11 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _QWORD, _QWORD))a2->lpVtbl->Wait)(
            a2,
            *((_QWORD *)this + 19),
            *((_QWORD *)this + 27));
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xD6u);
  }
  return v10;
}
