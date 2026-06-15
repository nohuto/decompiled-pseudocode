/*
 * XREFs of ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180055A50
 * Callers:
 *     ?Initialize@PhoneCallAudio@@AEAAJXZ @ 0x180055AF8 (-Initialize@PhoneCallAudio@@AEAAJXZ.c)
 *     ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1800FAC20 (-OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z @ 0x180055F40 (-GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::InitPhoneTopology(PhoneCallAudio *this)
{
  int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  AudioDeviceMgr *v4; // rcx
  __int64 *v5; // r14
  __int64 (__fastcall *v6)(AudioDeviceMgr *__hidden, struct IPhoneTopology **); // rax
  struct IPhoneTopology **v7; // rdx
  int PhoneTopology; // eax
  __int64 v9; // rcx

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 208);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  if ( !*((_DWORD *)this + 20) )
  {
    v4 = (AudioDeviceMgr *)*((_QWORD *)this + 8);
    v5 = (__int64 *)((char *)this + 56);
    v6 = *(__int64 (__fastcall **)(AudioDeviceMgr *__hidden, struct IPhoneTopology **))(*(_QWORD *)v4 + 32LL);
    v7 = (struct IPhoneTopology **)((char *)this + 56);
    if ( v6 == AudioDeviceMgr::GetPhoneTopology )
      PhoneTopology = AudioDeviceMgr::GetPhoneTopology(v4, v7);
    else
      PhoneTopology = v6(v4, v7);
    if ( PhoneTopology < 0
      || (PhoneTopology = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 120LL))((char *)this + 8),
          PhoneTopology < 0) )
    {
      v2 = PhoneTopology;
    }
    else
    {
      *((_DWORD *)this + 20) = 1;
    }
    if ( v2 < 0 )
    {
      v9 = *v5;
      if ( *v5 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  LeaveCriticalSection(v3);
  return (unsigned int)v2;
}
