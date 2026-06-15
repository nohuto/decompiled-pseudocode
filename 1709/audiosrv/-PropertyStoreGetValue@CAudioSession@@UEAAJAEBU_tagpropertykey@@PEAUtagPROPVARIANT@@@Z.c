/*
 * XREFs of ?PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180074DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qS @ 0x180066790 (WPP_SF_qS.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreGetValue(
        CAudioSession *this,
        const struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xA2u,
      (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      this,
      0LL);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 69)
                                                                                                  + 40LL))(
         *((_QWORD *)this + 69),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::PropertyStoreGetValue", 5949, v6);
  return v7;
}
