/*
 * XREFs of ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14002EC2C
 * Callers:
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012400 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140012AF0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140012D50 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x140034B94 (WPP_SF_DDD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::SetGraphState(unsigned __int64 a1, int a2)
{
  int v4; // edi
  int v5; // eax
  __int64 (*v6)(void); // rax
  __int128 v8; // [rsp+48h] [rbp-20h] BYREF

  v8 = *(_OWORD *)(a1 + 248);
  EtwEventActivityIdControl(4LL, &v8);
  v4 = -2147418113;
  switch ( a2 )
  {
    case 0:
      v6 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 120LL);
      goto LABEL_9;
    case 1:
      v6 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 128LL);
      goto LABEL_9;
    case 2:
      v6 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 136LL);
LABEL_9:
      v5 = v6();
      goto LABEL_10;
    case 3:
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 112LL))(
             *(_QWORD *)(a1 + 328),
             (a1 + 296) & ((unsigned __int128)-(__int128)a1 >> 64));
LABEL_10:
      v4 = v5;
      break;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)(((v4 >> 31) & 0xFFFFFFFE) + 4) )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      34LL,
      &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids,
      *(unsigned int *)(a1 + 336),
      a2,
      v4);
  }
  if ( v4 < 0 )
    a2 = *(_DWORD *)(a1 + 336);
  *(_DWORD *)(a1 + 336) = a2;
  EtwEventActivityIdControl(4LL, &v8);
  return (unsigned int)v4;
}
