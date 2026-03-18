/*
 * XREFs of ?PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x180130C50
 * Callers:
 *     ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x180128D9C (-PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 */

__int64 __fastcall CRenderTargetManager::PresentFollowup(CRenderTargetManager *this, unsigned int a2, unsigned int *a3)
{
  signed int v3; // ebx
  __int64 v4; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned int v9; // r12d
  _QWORD *v10; // r14

  v3 = 0;
  v4 = 0LL;
  if ( *((_DWORD *)this + 12) )
  {
    v7 = *((unsigned int *)this + 12);
    v8 = 0LL;
    do
    {
      v9 = 0;
      v10 = *(_QWORD **)(v8 + *((_QWORD *)this + 3));
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 70LL) && (unsigned int)v4 < a2 )
      {
        v9 = a3[v4];
        v4 = (unsigned int)(v4 + 1);
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 208LL))(v10) )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v10[8] + 64LL))(v10 + 8, 0LL, v9);
        if ( v3 == 142213130 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_PRESENT_POSTPONED);
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 528LL) + 104LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
            0LL,
            0x2000LL);
        }
        if ( v3 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x16Fu);
      }
      v8 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  return (unsigned int)v3;
}
