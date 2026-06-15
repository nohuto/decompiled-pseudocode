/*
 * XREFs of ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180017DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18002D3E0 (-InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::InitializeAPOs(
        CMeterSoftware **this,
        unsigned __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v8; // ebx
  CMeterSoftware *v9; // rcx
  CMeterSoftware *v10; // rcx
  __int64 (__fastcall *v11)(CMeterSoftware *__hidden, unsigned __int64, unsigned int, struct IAudioProcessingObject **); // rax
  int v12; // eax
  CMeterSoftware *v13; // rcx

  v8 = -2147023537;
  if ( a4 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids, this);
    }
    v9 = this[30];
    if ( v9 )
      v8 = (*(__int64 (__fastcall **)(CMeterSoftware *, unsigned __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v9 + 64LL))(
             v9,
             a2,
             a3,
             a4);
    v10 = this[32];
    if ( v10 && v8 >= 0 )
    {
      v11 = *(__int64 (__fastcall **)(CMeterSoftware *__hidden, unsigned __int64, unsigned int, struct IAudioProcessingObject **))(*(_QWORD *)v10 + 64LL);
      if ( v11 == CMeterSoftware::InitializeAPOs )
        v12 = CMeterSoftware::InitializeAPOs(v10, a2, a3, a4);
      else
        v12 = v11(v10, a2, a3, a4);
      v8 = v12;
    }
    v13 = this[31];
    if ( v13 )
    {
      if ( v8 < 0 )
        goto LABEL_21;
      v8 = (*(__int64 (__fastcall **)(CMeterSoftware *, unsigned __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v13 + 88LL))(
             v13,
             a2,
             a3,
             a4);
    }
    if ( v8 >= 0 )
      return (unsigned int)v8;
LABEL_21:
    AudSrvTraceLoggingErrorHelper("CVolumeStrip::InitializeAPOs", 0x2EFu, v8);
    return (unsigned int)v8;
  }
  return 2147500035LL;
}
