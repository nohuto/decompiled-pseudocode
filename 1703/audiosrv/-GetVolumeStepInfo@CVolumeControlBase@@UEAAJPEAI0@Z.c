/*
 * XREFs of ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180085300
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     floorf_0 @ 0x180057F82 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_g @ 0x180087868 (WPP_SF_g.c)
 *     WPP_SF_dd @ 0x180090690 (WPP_SF_dd.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeStepInfo(CVolumeControlBase *this, unsigned int *a2, unsigned int *a3)
{
  int v6; // ebx
  unsigned int v8; // esi
  unsigned int v9; // eax
  float v10; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
  {
    v6 = -2147467261;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeStepInfo", 245, v6);
    return (unsigned int)v6;
  }
  *a2 = 0;
  *a3 = *((_DWORD *)this + 14);
  v6 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 112LL))(this, &v10);
  if ( v6 < 0 )
    goto LABEL_3;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_14242717b50d32756585d53851505e56_Traceguids);
  }
  v8 = *((_DWORD *)this + 14) - 1;
  v9 = (int)floorf_0((float)((float)(int)v8 * v10) + 0.5);
  if ( v9 < v8 )
    v8 = v9;
  *a2 = v8;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, v8, *a3);
  }
  return (unsigned int)v6;
}
