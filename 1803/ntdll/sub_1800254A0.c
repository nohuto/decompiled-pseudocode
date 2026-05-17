/*
 * XREFs of sub_1800254A0 @ 0x1800254A0
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002050 @ 0x180002050 (sub_180002050.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180025644 @ 0x180025644 (sub_180025644.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 *     sub_180025A28 @ 0x180025A28 (sub_180025A28.c)
 *     LdrUnlockLoaderLock @ 0x180047B80 (LdrUnlockLoaderLock.c)
 *     LdrLockLoaderLock @ 0x180047C20 (LdrLockLoaderLock.c)
 *     LdrAddRefDll @ 0x1800590F0 (LdrAddRefDll.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800254A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  int v9; // edi
  int v10; // esi
  signed __int32 v11; // ecx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF

  v17 = 0LL;
  v7 = a2 - 200;
  v8 = *(_QWORD *)(a2 - 200 + 136);
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    LdrLockLoaderLock(0LL, 0LL, &v17);
  }
  else
  {
    v10 = 0;
  }
  _m_prefetchw((const void *)(v7 + 280));
  v11 = *(_DWORD *)(v7 + 280);
  while ( v11 > 0 )
  {
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 280), v11 - 1, v11);
    v12 = v11 == v13;
    v11 = v13;
    if ( v12 )
      goto LABEL_6;
  }
  v9 = 0;
LABEL_6:
  if ( v10 && v9 )
  {
    if ( (int)LdrAddRefDll(0LL, v8) >= 0 )
    {
      *(_QWORD *)(a1 + 168) = v8;
      *(_DWORD *)(a1 + 144) |= 0x100u;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v10 )
    LdrUnlockLoaderLock(0LL, v17);
  if ( v9 )
  {
    sub_180025A28(a1, v7);
    v14 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v15 = 2147353478LL;
    if ( *(_BYTE *)v15 )
      sub_180001FD0(*(_QWORD *)(v7 + 144), a2, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    sub_18002567C(&v18, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(v7 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v7 + 88);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v7 + 80))(a1, *(_QWORD *)(v7 + 88), a3, a4, v7);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    if ( *(_BYTE *)v14 )
      sub_180002050(*(_QWORD *)(v7 + 144), a2, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    return sub_180025644(v18);
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(v7 + 8))(v7);
  }
  return result;
}
