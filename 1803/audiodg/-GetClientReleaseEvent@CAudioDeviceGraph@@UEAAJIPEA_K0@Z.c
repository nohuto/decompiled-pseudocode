/*
 * XREFs of ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K0@Z @ 0x14003F4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetClientReleaseEvent(
        CAudioDeviceGraph *this,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  int v5; // ebx

  if ( !a3 || !a4 )
  {
    v5 = -2147467261;
    goto LABEL_3;
  }
  if ( !*((_QWORD *)this + 19) )
  {
    v5 = -2005139437;
    goto LABEL_3;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 19) + 72LL))(
         *((_QWORD *)this + 19),
         a3,
         a4);
  if ( v5 < 0 )
  {
LABEL_3:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids,
        v5);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetClientReleaseEvent", 0x312u, v5);
    return (unsigned int)v5;
  }
  if ( *a3
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids, v5);
  }
  return (unsigned int)v5;
}
