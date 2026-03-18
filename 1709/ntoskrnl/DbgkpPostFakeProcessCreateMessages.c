/*
 * XREFs of DbgkpPostFakeProcessCreateMessages @ 0x1406AA2FC
 * Callers:
 *     NtDebugActiveProcess @ 0x1406AB268 (NtDebugActiveProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     DbgkpPostFakeThreadMessages @ 0x1406AA3AC (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x1406AA788 (DbgkpPostModuleMessages.c)
 */

__int64 __fastcall DbgkpPostFakeProcessCreateMessages(_KPROCESS *BugCheckParameter1, struct _KEVENT *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v10; // [rsp+40h] [rbp-58h] BYREF

  result = DbgkpPostFakeThreadMessages(BugCheckParameter1, a2, 0LL, &Object, &v9);
  v7 = 0LL;
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v10);
    DbgkpPostModuleMessages(BugCheckParameter1, Object, a2);
    KiUnstackDetachProcess(&v10, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x4F676244u);
    result = 0LL;
    v7 = v9;
  }
  *a3 = v7;
  return result;
}
