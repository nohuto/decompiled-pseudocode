/*
 * XREFs of ?ReceiveHang@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z @ 0x180080080
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHPEBG@Z @ 0x18007BA30 (-ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHPEBG@Z.c)
 *     ?UpdateServiceActionToRestart@CAudioHealthMonitor@@QEAAJXZ @ 0x1800801D0 (-UpdateServiceActionToRestart@CAudioHealthMonitor@@QEAAJXZ.c)
 */

void __fastcall CAudioHealthMonitor::ReceiveHang(
        CAudioHealthMonitor *this,
        const unsigned __int16 *a2,
        TraceLoggingHProvider hProvider)
{
  CAudioHealthMonitor *v6; // rcx
  int v7; // r10d
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  HANDLE CurrentProcess; // rax
  int v11; // [rsp+30h] [rbp-69h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-61h] BYREF
  char v13; // [rsp+40h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-29h] BYREF
  int *v16; // [rsp+80h] [rbp-19h]
  int v17; // [rsp+88h] [rbp-11h]
  int v18; // [rsp+8Ch] [rbp-Dh]
  char *v19; // [rsp+90h] [rbp-9h]
  int v20; // [rsp+98h] [rbp-1h]
  int v21; // [rsp+9Ch] [rbp+3h]
  char *v22; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A8h] [rbp+Fh]
  int v24; // [rsp+ACh] [rbp+13h]

  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( CAudioHealthMonitor::ShouldUpdateCounter(this, a2) )
  {
    v6 = (CAudioHealthMonitor *)*((unsigned int *)this + 2);
    if ( (int)v6 + 1 >= (unsigned int)v6 )
      *((_DWORD *)this + 2) = (_DWORD)v6 + 1;
  }
  if ( *((_DWORD *)this + 2) >= *((_DWORD *)this + 3)
    && *((_DWORD *)this + 4) == 16
    && (int)CAudioHealthMonitor::UpdateServiceActionToRestart(v6) >= 0 )
  {
    if ( *(_DWORD *)hProvider > 4u && TlgKeywordOn(hProvider, 0x400000000002uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      v11 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = &v11;
      v17 = v7;
      v19 = (char *)this + 8;
      v20 = v7;
      v22 = (char *)this + 12;
      v23 = v7;
      TlgWrite(hProvider, &unk_1800F8BE6, v8, v9, 6u, &pData);
    }
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, 0);
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
}
