/*
 * XREFs of AlpcpPortQueryServerSessionInfo @ 0x14043CC94
 * Callers:
 *     NtAlpcQueryInformation @ 0x140562440 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     AlpcpReferenceConnectedPort @ 0x14049D6B0 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpPortQueryServerSessionInfo(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  signed __int64 *v9; // rdi
  __int64 v10; // rbx
  int v11; // edi
  int SessionId; // esi
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v7 = AlpcpReferenceConnectedPort();
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return 3221225485LL;
  v9 = (signed __int64 *)(v7 + 352);
  ExAcquirePushLockSharedEx(v7 + 352, 0LL);
  v10 = v8[3];
  if ( (v10 & 1) != 0 )
    v10 = 0LL;
  if ( v10 )
    ObfReferenceObjectWithTag((PVOID)v10, 0x63706C41u);
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  ObfDereferenceObject(v8);
  if ( !v10 )
    return 3221225485LL;
  v11 = *(_DWORD *)(v10 + 736);
  SessionId = MmGetSessionIdEx(v10);
  ObfDereferenceObjectWithTag((PVOID)v10, 0x63706C41u);
  result = a3 < 8 ? 0xC0000004 : 0;
  if ( a3 >= 8 )
  {
    *a2 = SessionId;
    a2[1] = v11;
  }
  if ( a4 )
    *a4 = 8;
  return result;
}
