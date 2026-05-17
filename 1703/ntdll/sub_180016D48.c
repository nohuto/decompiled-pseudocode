/*
 * XREFs of sub_180016D48 @ 0x180016D48
 * Callers:
 *     sub_180011A40 @ 0x180011A40 (sub_180011A40.c)
 *     sub_180014090 @ 0x180014090 (sub_180014090.c)
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 *     sub_1800165B0 @ 0x1800165B0 (sub_1800165B0.c)
 * Callees:
 *     sub_1800037A4 @ 0x1800037A4 (sub_1800037A4.c)
 *     sub_1800144B8 @ 0x1800144B8 (sub_1800144B8.c)
 *     sub_180017034 @ 0x180017034 (sub_180017034.c)
 *     RtlSetThreadSubProcessTag @ 0x180017240 (RtlSetThreadSubProcessTag.c)
 *     LdrAddRefDll @ 0x18001AD60 (LdrAddRefDll.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     sub_180073730 @ 0x180073730 (sub_180073730.c)
 *     TpCallbackMayRunLong @ 0x180078F20 (TpCallbackMayRunLong.c)
 *     LdrLockLoaderLock @ 0x1800803F0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180081C00 (LdrUnlockLoaderLock.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180016D48(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v4; // r12d
  unsigned __int32 v8; // ecx
  signed __int32 v9; // eax
  int v10; // r14d
  int v11; // ebp
  unsigned __int32 v12; // ecx
  _DWORD *HotpatchInformation; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void **v16; // rbx
  int v18; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 136);
  v4 = 0;
  v20 = 0LL;
  if ( v3 )
    LdrLockLoaderLock(0LL, 0LL, &v20);
  _m_prefetchw((const void *)(a2 + 232));
  v8 = *(_DWORD *)(a2 + 232);
  do
  {
    v9 = v8;
    if ( v8 >> 1 )
    {
      v10 = 1;
      v11 = 1;
      v12 = v8 & 1 | (2 * (v8 >> 1) - 2);
      if ( v12 < 2 )
      {
        v11 = 0;
        v12 |= 1u;
      }
    }
    else
    {
      v10 = 0;
      v11 = 0;
      v12 = v8 | 1;
    }
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v12, v9);
  }
  while ( v9 != v8 );
  if ( v3 )
  {
    if ( v10 )
    {
      if ( (int)LdrAddRefDll(0LL) < 0 )
      {
        v10 = 0;
        v11 = 0;
        v4 = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 144) |= 0x100u;
        *(_QWORD *)(a1 + 168) = v3;
      }
    }
    LdrUnlockLoaderLock(0LL, v20);
    if ( v4 )
    {
      sub_18007358C(a2 + 56, 0xFFFFFFFFLL, 0LL);
      sub_180073730(a2);
    }
  }
  if ( v11 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a2, 2u);
    HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
    if ( HotpatchInformation && *HotpatchInformation )
      v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v14 = 2147353478LL;
    if ( *(_BYTE *)v14 )
      sub_1800037A4(*(_QWORD *)(a2 + 144), a2 + 200, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    sub_180017034(a2 + 200, *(_QWORD *)(a2 + 144), *(unsigned int *)(a2 + 192), 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
  }
  if ( a3 )
  {
    LOBYTE(v18) = sub_1800144B8(a2, 0LL);
    if ( v18 )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v10 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)a1 = 72LL;
      *(_DWORD *)(a1 + 8) = 1;
      RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
      *(_BYTE *)(a1 + 76) |= 1u;
    }
    *(_DWORD *)(a1 + 144) |= 0x240u;
    *(_QWORD *)(a1 + 184) = a2;
    if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
      TpCallbackMayRunLong(a1);
    v15 = *(_QWORD *)(a2 + 104);
    if ( v15 )
    {
      *(_QWORD *)(a1 + 80) = v15;
      RtlSetThreadSubProcessTag(v15);
    }
    NtCurrentTeb()->ActivityId = *(struct _GUID *)(a2 + 112);
    v16 = (void **)(a2 + 128);
    if ( v16 && NtCurrentTeb()->SystemReserved1[53] != *v16 && (int)ZwSetInformationThread(-2LL, 44LL, v16) >= 0 )
      NtCurrentTeb()->SystemReserved1[53] = *v16;
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    return 0LL;
  }
}
