/*
 * XREFs of ?Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSuperWetStrokePartner@@@Z @ 0x18015106C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?DrawSuperWetPassForFrame@CWetInkManager@@AEAAJ_K@Z @ 0x18011D224 (-DrawSuperWetPassForFrame@CWetInkManager@@AEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134D64 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     DebugReadSurface @ 0x180150C0C (DebugReadSurface.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180151528 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     TransitionResourceBarrier @ 0x180151554 (TransitionResourceBarrier.c)
 *     ?PostScribble@CD3DPhysicalSwapChainBuffer@@QEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801A91D4 (-PostScribble@CD3DPhysicalSwapChainBuffer@@QEAAJPEAUID3D12CommandQueue@@@Z.c)
 *     ?PreScribble@CD3DPhysicalSwapChainBuffer@@QEAAJPEAUID3D12CommandQueue@@AEBUtagRECT@@@Z @ 0x1801A9380 (-PreScribble@CD3DPhysicalSwapChainBuffer@@QEAAJPEAUID3D12CommandQueue@@AEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CSuperWetInkRenderer::Draw(
        CSuperWetInkRenderer *this,
        struct CD3DPhysicalSwapChainBuffer *a2,
        struct IDCompositionDirectInkSuperWetStrokePartner *a3)
{
  _QWORD *v4; // rsi
  struct ID3D12CommandQueue *v6; // rbx
  const struct tagRECT *v8; // rax
  int v9; // eax
  void *v10; // rdx
  unsigned int v11; // ebx
  DWORD v12; // eax
  const char *v13; // r9
  signed int LastError; // eax
  DWORD v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(struct IDCompositionDirectInkSuperWetStrokePartner *, __int64, _QWORD *, __m128i *, unsigned int *); // rax
  __int64 v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-58h]
  unsigned int v22; // [rsp+30h] [rbp-48h] BYREF
  __m128i si128; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (_QWORD *)*((_QWORD *)a2 + 15);
  v6 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 1);
  v8 = (const struct tagRECT *)(*(__int64 (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *, __m128i *))(*(_QWORD *)a3 + 24LL))(
                                 a3,
                                 &si128);
  v9 = CD3DPhysicalSwapChainBuffer::PreScribble(a2, v6, v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    v21 = 260;
    goto LABEL_30;
  }
  if ( *((_QWORD *)this + 6) )
  {
    wil::details::ResetEvent(*((wil::details **)this + 5), v10);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 72LL))(
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 6),
           *((_QWORD *)this + 5));
    v11 = v9;
    if ( v9 < 0 )
    {
      v21 = 266;
LABEL_30:
      v15 = v9;
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, v21);
      return v11;
    }
    SetLastError(0);
    v12 = WaitForSingleObjectEx(*((HANDLE *)this + 5), 0xFFFFFFFF, 0);
    if ( v12 == 258 )
    {
      LastError = GetLastError();
      v11 = LastError;
      if ( LastError > 0 )
        v11 = (unsigned __int16)LastError | 0x80070000;
      v21 = 267;
      if ( (v11 & 0x80000000) == 0 )
        v11 = -2003304445;
      v15 = v11;
      goto LABEL_31;
    }
    if ( v12 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93C,
        (__int64)"internal\\sdk\\inc\\wil/resource.h",
        v13);
      __debugbreak();
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2));
  v11 = v9;
  if ( v9 < 0 )
  {
    v21 = 270;
    goto LABEL_30;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 3) + 80LL))(
         *((_QWORD *)this + 3),
         *((_QWORD *)this + 2),
         0LL);
  v11 = v9;
  if ( v9 < 0 )
  {
    v21 = 271;
    goto LABEL_30;
  }
  v16 = *(_QWORD *)a3;
  v17 = *((_QWORD *)this + 3);
  v22 = 0;
  v18 = *(__int64 (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *, __int64, _QWORD *, __m128i *, unsigned int *))(v16 + 40);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = v18(a3, v17, v4, &si128, &v22);
  v11 = v9;
  if ( v9 < 0 )
  {
    v21 = 278;
    goto LABEL_30;
  }
  if ( v22 )
  {
    TransitionResourceBarrier(*((_QWORD *)this + 3), v4, v22, 0LL);
    v22 = 0;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 72LL))(*((_QWORD *)this + 3));
  v11 = v9;
  if ( v9 < 0 )
  {
    v21 = 289;
    goto LABEL_30;
  }
  v19 = *((_QWORD *)this + 1);
  si128.m128i_i64[0] = *((_QWORD *)this + 3);
  (*(void (__fastcall **)(__int64, __int64, __m128i *))(*(_QWORD *)v19 + 80LL))(v19, 1LL, &si128);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 112LL))(
         *((_QWORD *)this + 1),
         *((_QWORD *)this + 4),
         ++*((_QWORD *)this + 6));
  v11 = v9;
  if ( v9 < 0 )
  {
    v21 = 297;
    goto LABEL_30;
  }
  if ( g_LockAndReadSuperWetInk )
    DebugReadSurface(*((__int64 **)this + 1), v4, v22);
  v9 = CD3DPhysicalSwapChainBuffer::PostScribble(a2, *((struct ID3D12CommandQueue **)this + 1));
  v11 = v9;
  if ( v9 < 0 )
  {
    v21 = 305;
    goto LABEL_30;
  }
  return v11;
}
