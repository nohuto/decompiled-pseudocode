/*
 * XREFs of ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180071AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     MIDL_user_allocate @ 0x18001F580 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AC2C8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CAudioSession::GetIconPath(CAudioSession *this, unsigned __int16 **a2)
{
  const wchar_t *v4; // r9
  size_t v5; // rbx
  unsigned __int16 *v6; // rax
  int v7; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 352);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (const wchar_t *)*((_QWORD *)this + 41);
  v5 = 2LL * (*((_DWORD *)v4 - 4) + 1);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, v4);
  }
  v6 = (unsigned __int16 *)MIDL_user_allocate(v5);
  *a2 = v6;
  if ( v6 )
  {
    v7 = StringCbCopyW(v6, v5, *((const unsigned __int16 **)this + 41));
    if ( v7 >= 0 )
      goto LABEL_10;
    operator delete(*a2);
    *a2 = 0LL;
  }
  else
  {
    v7 = -2147024882;
  }
  AudSrvTraceLoggingErrorHelper("CAudioSession::GetIconPath", 320, v7);
LABEL_10:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
