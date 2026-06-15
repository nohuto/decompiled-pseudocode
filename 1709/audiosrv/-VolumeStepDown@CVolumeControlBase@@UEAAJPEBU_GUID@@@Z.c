/*
 * XREFs of ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z @ 0x18006B710
 * Callers:
 *     <none>
 * Callees:
 *     floorf_0 @ 0x180036B71 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 */

__int64 __fastcall CVolumeControlBase::VolumeStepDown(CVolumeControlBase *this, const struct _GUID *a2)
{
  int v4; // ebx
  float v5; // xmm6_4
  __int64 v6; // rdx
  float v8; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_a99c65f464be33b31308c514a5524983_Traceguids);
  }
  v4 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 112LL))(this, &v8);
  if ( v4 < 0 )
    goto LABEL_9;
  v5 = (float)(*((_DWORD *)this + 14) - 1);
  v8 = floorf_0((float)((float)(v5 * v8) + 0.5) - 1.0) / v5;
  if ( v8 <= 0.0 )
    v8 = 0.0;
  v4 = (*(__int64 (__fastcall **)(CVolumeControlBase *, __int64, const struct _GUID *))(*(_QWORD *)this + 96LL))(
         this,
         v6,
         a2);
  if ( v4 < 0 )
LABEL_9:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::VolumeStepDown", 313, v4);
  return (unsigned int)v4;
}
