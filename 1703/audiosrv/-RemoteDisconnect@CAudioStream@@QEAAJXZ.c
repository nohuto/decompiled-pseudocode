/*
 * XREFs of ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x18009657C
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18008ACE8 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     wil::scope_exit__lambda_cbe9e4feebe37314cade45d366e33fc3___ @ 0x18002EE6C (wil--scope_exit__lambda_cbe9e4feebe37314cade45d366e33fc3___.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18007C6A4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x180096784 (-SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::RemoteDisconnect(HANDLE *this)
{
  DWORD v2; // eax
  signed int LastError; // eax
  signed int v4; // ebx
  DWORD v5; // ecx
  DWORD v6; // ecx
  int v7; // eax
  HANDLE Handles; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+40h] [rbp-18h]
  HANDLE *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = this;
  wil::scope_exit__lambda_cbe9e4feebe37314cade45d366e33fc3___((__int64)&v11, &v13);
  v2 = WaitForSingleObject(this[65], 0x3E8u);
  if ( v2 == -1 )
    goto LABEL_2;
  if ( v2 == 258 )
  {
    v4 = -2147467259;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids,
        this[8],
        -2LL);
    }
    if ( g_SpatialAudioResourceManager )
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *, char *))(*(_QWORD *)g_SpatialAudioResourceManager
                                                                           + 32LL))(
        g_SpatialAudioResourceManager,
        (char *)this + 8);
    if ( !this[8] )
    {
      v4 = 0;
      goto LABEL_23;
    }
    v4 = CAudioStream::SendRemoteDisconnectionRequest((CAudioStream *)this);
    if ( v4 >= 0 )
    {
      Handles = this[64];
      v5 = 1;
      if ( this[9] )
        v5 = 2;
      v6 = WaitForMultipleObjects(v5, &Handles, 0, 0x3E8u);
      if ( v6 != -1 )
      {
        v7 = v4;
        if ( v6 == 258 )
          v7 = -2147467259;
        v4 = v7;
LABEL_21:
        if ( v4 >= 0 )
          goto LABEL_23;
        goto LABEL_22;
      }
LABEL_2:
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      goto LABEL_21;
    }
  }
LABEL_22:
  AudSrvTraceLoggingErrorHelper("CAudioStream::RemoteDisconnect", 2124, v4);
LABEL_23:
  if ( v12 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(v11 + 72),
      0LL);
  return (unsigned int)v4;
}
