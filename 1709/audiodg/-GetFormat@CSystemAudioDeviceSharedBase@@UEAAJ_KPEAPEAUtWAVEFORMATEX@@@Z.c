/*
 * XREFs of ?GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14003A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetFormat(
        CSystemAudioDeviceSharedBase *this,
        __int64 a2,
        struct tWAVEFORMATEX **a3)
{
  int v5; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  v9 = *(_OWORD *)((char *)this + 248);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tWAVEFORMATEX **))(**((_QWORD **)this + 41) + 144LL))(
         *((_QWORD *)this + 41),
         *((_QWORD *)this + 39),
         a3);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids,
        v5);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetFormat", 0x260u, v5);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v10);
  return (unsigned int)v5;
}
