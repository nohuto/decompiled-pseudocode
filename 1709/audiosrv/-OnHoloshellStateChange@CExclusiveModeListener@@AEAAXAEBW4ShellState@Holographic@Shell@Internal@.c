/*
 * XREFs of ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180036448
 * Callers:
 *     ?HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800363D0 (-HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180005E94 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1800C7488 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CExclusiveModeListener::OnHoloshellStateChange(
        struct _RTL_CRITICAL_SECTION *this,
        const enum Windows::Internal::Shell::Holographic::ShellState *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  bool v6; // al
  BOOL v7; // ebx
  int updated; // eax
  __int64 v9; // r8
  __int64 v10; // [rsp+0h] [rbp-C8h] BYREF
  BOOL v11; // [rsp+30h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+38h] [rbp-90h] BYREF
  GUID v13; // [rsp+48h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  GUID *v15; // [rsp+80h] [rbp-48h]
  int v16; // [rsp+88h] [rbp-40h]
  int v17; // [rsp+8Ch] [rbp-3Ch]
  HANDLE *p_OwningThread; // [rsp+90h] [rbp-38h]
  int v19; // [rsp+98h] [rbp-30h]
  int v20; // [rsp+9Ch] [rbp-2Ch]
  BOOL *v21; // [rsp+A0h] [rbp-28h]
  int v22; // [rsp+A8h] [rbp-20h]
  int v23; // [rsp+ACh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(this + 2, lpCriticalSection);
  v6 = *(_DWORD *)a2 <= 2u || *(_DWORD *)a2 == 5;
  v13 = GUID_00000000_0000_0000_0000_000000000000;
  v7 = v6;
  v11 = v6;
  if ( (unsigned int)dword_18014A370 > 5 )
  {
    v15 = &v13;
    v16 = 16;
    v17 = 0;
    p_OwningThread = &this[3].OwningThread;
    v19 = 16;
    v20 = 0;
    v21 = &v11;
    v22 = 4;
    v23 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_180111563, v4, v5, 5u, &pData);
  }
  try
  {
    LODWORD(this[4].OwningThread) = v7 + 1;
    updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)this);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x140,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)updated);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Log_Hr(retaddr, &v10, v9, (const char *)0x8007000ELL);
  }
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
}
