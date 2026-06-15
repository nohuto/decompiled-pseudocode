/*
 * XREFs of ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18008BF60
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800887E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CAudioSession::GetDisplayName(const wchar_t **this, unsigned __int16 **a2)
{
  size_t v4; // rsi
  unsigned __int16 *v5; // rax
  int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      this[49]);
  }
  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 53);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 2LL * (*((_DWORD *)this[49] - 4) + 1);
  v5 = (unsigned __int16 *)MIDL_user_allocate(v4);
  *a2 = v5;
  if ( v5 )
  {
    v6 = StringCbCopyW((char *)v5, v4, (char *)this[49]);
    if ( v6 >= 0 )
      goto LABEL_10;
    operator delete(*a2);
    *a2 = 0LL;
  }
  else
  {
    v6 = -2147024882;
  }
  AudSrvTraceLoggingErrorHelper("CAudioSession::GetDisplayName", 216, v6);
LABEL_10:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
