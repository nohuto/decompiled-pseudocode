/*
 * XREFs of ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBGPEBU_TlgProvider_t@@@Z @ 0x180060240
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ReportHangInternal2 @ 0x1800603FC (ReportHangInternal2.c)
 *     ?ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHXZ @ 0x180060594 (-ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHXZ.c)
 */

void __fastcall CAudioHealthMonitor::LooksLikeWeAreHung(
        CAudioHealthMonitor *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        const struct _TlgProvider_t *a4)
{
  unsigned int v8; // ecx
  __int64 v9; // r11
  __int64 v10; // r10
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  bool v15; // cc
  const GUID *v16; // r9
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  HANDLE CurrentProcess; // rax
  DWORD CurrentProcessId; // [rsp+30h] [rbp-59h] BYREF
  int v21; // [rsp+34h] [rbp-55h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-51h] BYREF
  char v23; // [rsp+40h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  DWORD *v26; // [rsp+80h] [rbp-9h]
  int v27; // [rsp+88h] [rbp-1h]
  int v28; // [rsp+8Ch] [rbp+3h]
  __int64 v29; // [rsp+90h] [rbp+7h]
  int v30; // [rsp+98h] [rbp+Fh]
  int v31; // [rsp+9Ch] [rbp+13h]
  __int64 v32; // [rsp+A0h] [rbp+17h]
  int v33; // [rsp+A8h] [rbp+1Fh]
  int v34; // [rsp+ACh] [rbp+23h]

  v23 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)CAudioHealthMonitor::ShouldUpdateCounter(this) )
  {
    v8 = *((_DWORD *)this + 2);
    if ( v8 + 1 >= v8 )
      *((_DWORD *)this + 2) = v8 + 1;
  }
  if ( *((_DWORD *)this + 2) >= *((_DWORD *)this + 3) && *((_DWORD *)this + 4) == 16 && !*((_DWORD *)this + 17) )
  {
    if ( *(_DWORD *)a4 > 4u && TlgKeywordOn(a4, 0x400000000002uLL) )
    {
      TlgCreateWsz(&pDesc, a3);
      CurrentProcessId = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v26 = &CurrentProcessId;
      v27 = 4;
      v29 = v9;
      v30 = 4;
      v32 = v10;
      v33 = 4;
      TlgWrite(a4, &unk_18010EAF2, v11, v12, 6u, &pData);
    }
    *((_DWORD *)this + 17) = 1;
    CurrentProcessId = GetCurrentProcessId();
    v14 = ReportHangInternal2(&CurrentProcessId, v13, a2);
    v15 = *(_DWORD *)a4 <= 4u;
    LODWORD(v16) = v14;
    v21 = v14;
    if ( !v15 && TlgKeywordOn(a4, 2uLL) )
    {
      pDesc.Reserved = 0;
      pDesc.Ptr = (ULONGLONG)&v21;
      pDesc.Size = 4;
      TlgWrite(v17, &unk_18010EACE, v18, v16, 3u, &pData);
      LODWORD(v16) = v21;
    }
    if ( (int)v16 >= 0 )
      Sleep(0xEA60u);
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, 0);
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
}
