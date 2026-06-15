/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x180002040
 * Callers:
 *     AudioServerNotifyStreamSuspensionState @ 0x180001FB0 (AudioServerNotifyStreamSuspensionState.c)
 * Callees:
 *     ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x1800022E0 (-NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001A650 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::NotifyStreamSuspensionStateChanged(CAudioSession **this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v6; // edi
  __int64 (__fastcall *v7)(CVADServer *, __int64, __int64); // rax
  unsigned int v8; // eax
  struct CAudioStream *v9; // rdx
  CAudioSession *v10; // rcx
  __int64 (__fastcall *v11)(CAudioSession *__hidden, struct CAudioStream *, int); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-18h]

  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 27);
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( a3 )
  {
    v7 = (__int64 (__fastcall *)(CVADServer *, __int64, __int64))*((_QWORD *)*this + 9);
    if ( (char *)v7 == (char *)CVADServer::StopStream )
      v8 = CVADServer::StopStream(this, a2, 3LL);
    else
      v8 = v7((CVADServer *)this, a2, 3LL);
    goto LABEL_4;
  }
  if ( *((_DWORD *)this + 98) == 1 )
  {
    v8 = (*((__int64 (__fastcall **)(CAudioSession **, __int64, __int64))*this + 8))(this, a2, 3LL);
LABEL_4:
    v6 = v8;
  }
  v9 = this[24];
  v10 = this[21];
  v11 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioStream *, int))(*(_QWORD *)v10 + 304LL);
  if ( v11 == CAudioSession::NotifyStreamSuspensionStateChanged )
    CAudioSession::NotifyStreamSuspensionStateChanged(v10, v9, a3);
  else
    v11(v10, v9, a3);
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
