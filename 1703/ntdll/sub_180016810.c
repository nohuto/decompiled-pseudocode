/*
 * XREFs of sub_180016810 @ 0x180016810
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_1800169B4 @ 0x1800169B4 (sub_1800169B4.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     sub_180016A78 @ 0x180016A78 (sub_180016A78.c)
 *     LdrAddRefDll @ 0x18001AD60 (LdrAddRefDll.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     LdrLockLoaderLock @ 0x1800803F0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180081C00 (LdrUnlockLoaderLock.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180016810(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  int v9; // edi
  int v10; // esi
  signed __int32 v11; // ecx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h] BYREF

  v25 = 0LL;
  v7 = a2 - 200;
  v8 = *(_QWORD *)(a2 - 200 + 136);
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    LdrLockLoaderLock(0LL, 0LL, &v25);
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
    if ( (int)LdrAddRefDll(0LL) >= 0 )
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
    LdrUnlockLoaderLock(0LL, v25);
  if ( v9 )
  {
    sub_180016A78(a1, v7);
    v18 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v14, v16, v17) )
      v19 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v19 = 2147353478LL;
    if ( *(_BYTE *)v19 )
      sub_180002FC8(*(_QWORD *)(v7 + 144), a2, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    sub_1800169EC(&v26, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(v7 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v7 + 88);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v7 + 80))(a1, *(_QWORD *)(v7 + 88), a3, a4, v7);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v20, v22, v23) )
      v18 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    if ( *(_BYTE *)v18 )
      sub_180002F48(*(_QWORD *)(v7 + 144), a2, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    return sub_1800169B4(v26);
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(v7 + 8))(v7);
  }
  return result;
}
