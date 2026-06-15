/*
 * XREFs of ?PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x18008EBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x180083DB0 (WPP_SF_qS.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x180088F20 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreSetValue(
        CAudioSession *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r10

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAAu,
      (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      this,
      0LL);
  }
  v6 = &AllowedSessionPropertyKeys;
  do
  {
    if ( (unsigned int)operator==((__int64)a2, (__int64)v6) )
      break;
    ++v8;
    v6 = (void *)(v7 + 20);
  }
  while ( (unsigned __int64)(v9 + 20) < 0x28 );
  if ( v8 != 2 )
    return (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, const struct tagPROPVARIANT *))(**((_QWORD **)this + 78) + 48LL))(
             *((_QWORD *)this + 78),
             a2,
             a3);
  AudSrvTraceLoggingErrorHelper("CAudioSession::PropertyStoreSetValue", 6045, -2147024809);
  return 2147942487LL;
}
