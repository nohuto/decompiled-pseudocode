/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x180019370
 * Callers:
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800262F4 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x1800770B0 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::NotifyStreamSuspensionStateChanged(
        CAudioSession *this,
        struct CAudioStream *a2,
        int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 72LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this, a2);
  }
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *((_QWORD *)this + 12);
      if ( *(struct CAudioStream **)(v9 + 8 * v8) == a2 )
        break;
      v7 = (unsigned int)(v7 + 1);
      v8 = (unsigned int)v7;
      if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this + 13) )
        goto LABEL_10;
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( v8 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 73LL, v6, v7, *(_QWORD *)(v9 + 8 * v8));
    }
    if ( v8 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v8) + 128LL) = a3 != 0;
  }
LABEL_10:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
