/*
 * XREFs of ?Start@CPipeInstance@@QEAAJXZ @ 0x1400088C0
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000E540 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140008800 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::Start(CPipeInstance *this)
{
  int v2; // edi
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 31) )
    return (unsigned int)v2;
  v3 = 0LL;
  v7 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !v4 )
  {
LABEL_5:
    if ( v3 )
      goto LABEL_13;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( *(_DWORD *)(v5 + 40) == 1 )
      break;
LABEL_4:
    if ( !v4 )
      goto LABEL_5;
  }
  v2 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v5 + 32))(
         **(_QWORD **)(v5 + 32),
         &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
         &v7);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    if ( v2 >= 0 )
    {
      v3 = v7;
      if ( v7 )
      {
        v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        v3 = v7;
      }
      goto LABEL_4;
    }
  }
  v3 = v7;
  if ( v7 )
LABEL_13:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
LABEL_6:
  if ( v2 < 0 )
  {
    CPipeInstance::Stop(this);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        53LL,
        &WPP_0100469152753b0964101f667eb0634c_Traceguids,
        (unsigned int)v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::Start", 0xFB4u, v2);
  }
  return (unsigned int)v2;
}
