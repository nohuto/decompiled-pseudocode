/*
 * XREFs of MiGetTopLevelPfn @ 0x140079090
 * Callers:
 *     MiStoreCheckCandidatePage @ 0x140056BA4 (MiStoreCheckCandidatePage.c)
 *     MiAttachToOwningSession @ 0x140076418 (MiAttachToOwningSession.c)
 *     MiCapturePfnVm @ 0x140078F10 (MiCapturePfnVm.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiRecheckCombineVm @ 0x14013055C (MiRecheckCombineVm.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiGetTopLevelPfn(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  int v6; // ebp
  __int64 v7; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-50h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v6 = 0;
  if ( v5 != (a1 + 0x58000000000LL) / 48 )
  {
    do
    {
      if ( v5 == 0xFFFFFFFFFLL )
        break;
      ++v6;
      v7 = v5;
      a1 = 48 * v5 - 0x58000000000LL;
      v11 = 0;
      v12[v6 - 1] = a1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
      v5 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
    }
    while ( v5 != v7 );
  }
  if ( a2 )
    *a2 = v6;
  v8 = v12;
  do
  {
    v9 = *v8;
    if ( !*v8 )
      break;
    if ( v9 != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v4;
    ++v8;
  }
  while ( v4 < 4 );
  return a1;
}
