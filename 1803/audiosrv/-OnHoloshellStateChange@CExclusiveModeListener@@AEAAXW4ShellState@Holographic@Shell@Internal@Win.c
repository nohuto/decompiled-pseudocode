/*
 * XREFs of ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x1800F8F58
 * Callers:
 *     ?HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800F84F0 (-HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1800F9AE8 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CExclusiveModeListener::OnHoloshellStateChange(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  const GUID *v6; // r8
  const GUID *v7; // r9
  bool v8; // al
  BOOL v9; // r14d
  int updated; // eax
  BOOL v11; // [rsp+30h] [rbp-A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+38h] [rbp-A0h]
  __int64 v13; // [rsp+48h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp-88h]
  GUID v15; // [rsp+58h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-68h] BYREF
  GUID *v17; // [rsp+90h] [rbp-48h]
  int v18; // [rsp+98h] [rbp-40h]
  int v19; // [rsp+9Ch] [rbp-3Ch]
  __int64 v20; // [rsp+A0h] [rbp-38h]
  int v21; // [rsp+A8h] [rbp-30h]
  int v22; // [rsp+ACh] [rbp-2Ch]
  BOOL *v23; // [rsp+B0h] [rbp-28h]
  int v24; // [rsp+B8h] [rbp-20h]
  int v25; // [rsp+BCh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v13 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
  v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v14 = v5;
  v8 = a2 <= 2 || a2 == 5;
  v15 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = v8;
  v11 = v8;
  if ( (unsigned int)dword_180188330 > 5 )
  {
    v17 = &v15;
    v18 = 16;
    v19 = 0;
    v20 = a1 + 128;
    v21 = 16;
    v22 = 0;
    v23 = &v11;
    v24 = 4;
    v25 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_180188330, &unk_1801481BE, v6, v7, 5u, &pData);
  }
  try
  {
    *(_DWORD *)(a1 + 168) = v9 + 1;
    updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)a1);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        313LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)updated);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      318LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)0x8007000ELL);
    v5 = v12;
    v4 = v12;
  }
  if ( v4 )
    LeaveCriticalSection(v5);
}
