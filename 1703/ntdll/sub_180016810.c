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

__int64 __fastcall sub_180016810(_QWORD *Instance, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  void *v8; // r15
  int v9; // edi
  int v10; // esi
  signed __int32 v11; // ecx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 result; // rax
  PVOID Cookie; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF

  Cookie = 0LL;
  v7 = a2 - 200;
  v8 = *(void **)(a2 - 200 + 136);
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    LdrLockLoaderLock(0, 0LL, &Cookie);
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
    if ( LdrAddRefDll(0, v8) >= 0 )
    {
      Instance[21] = v8;
      *((_DWORD *)Instance + 36) |= 0x100u;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v10 )
    LdrUnlockLoaderLock(0, Cookie);
  if ( v9 )
  {
    sub_180016A78((PTP_CALLBACK_INSTANCE)Instance);
    v14 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v15 = 2147353478LL;
    if ( *(_BYTE *)v15 )
      sub_180002FC8(*(_QWORD *)(v7 + 144), a2, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    sub_1800169EC(&v18, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    Instance[11] = *(_QWORD *)(v7 + 80);
    Instance[12] = *(_QWORD *)(v7 + 88);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64))(v7 + 80))(
      Instance,
      *(_QWORD *)(v7 + 88),
      a3,
      a4,
      v7);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    if ( *(_BYTE *)v14 )
      sub_180002F48(*(_QWORD *)(v7 + 144), a2, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    return sub_1800169B4(v18);
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(v7 + 8))(v7);
  }
  return result;
}
