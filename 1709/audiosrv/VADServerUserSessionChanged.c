/*
 * XREFs of VADServerUserSessionChanged @ 0x180064984
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x1800A1D80 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180013188 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180013220 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x18007C064 (-NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x18007C0F4 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800E033C (-GetTsAudioProtocol@@YAIK@Z.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, __int64 a2)
{
  DWORD v2; // ebp
  unsigned int TsAudioProtocol; // esi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v7; // rbx
  __int64 (__fastcall *v8)(volatile signed __int32 *); // rax
  int v9; // eax
  struct CAudioSessionManagerProvider *v10; // rbx
  __int64 (__fastcall *v11)(volatile signed __int32 *); // rax
  unsigned int v13; // [rsp+50h] [rbp+8h]
  struct CAudioSessionManagerProvider *v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
    TsAudioProtocol = GetTsAudioProtocol(v2);
  else
    TsAudioProtocol = v13;
  v14 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v14);
  v7 = v14;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifySessionAudioProtocol(v14, v2, TsAudioProtocol);
  if ( v7 )
  {
    v8 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL);
    if ( v8 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v7);
    else
      v8((volatile signed __int32 *)v7);
  }
  if ( g_pVolumeProvider )
    (*(void (__fastcall **)(CVolumeProvider *, _QWORD, _QWORD))(*(_QWORD *)g_pVolumeProvider + 32LL))(
      g_pVolumeProvider,
      v2,
      TsAudioProtocol);
  if ( a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 && a1 != 5 )
  {
    if ( a1 <= 6 )
      goto LABEL_28;
    if ( a1 <= 9 )
      return 0LL;
    if ( a1 == 11 )
    {
      v14 = 0LL;
      v9 = GetAudioSessionManagerProvider(&v14);
      v10 = v14;
      if ( v9 >= 0 )
        CAudioSessionManagerProvider::NotifySessionTerminate(v14, *(_DWORD *)(a2 + 4));
      if ( v10 )
      {
        v11 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL);
        if ( v11 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v10);
        else
          v11((volatile signed __int32 *)v10);
      }
    }
    else
    {
LABEL_28:
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids, a1);
      }
    }
  }
  return 0LL;
}
