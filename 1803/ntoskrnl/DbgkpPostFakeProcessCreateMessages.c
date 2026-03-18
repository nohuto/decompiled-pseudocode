/*
 * XREFs of DbgkpPostFakeProcessCreateMessages @ 0x14070EA5C
 * Callers:
 *     NtDebugActiveProcess @ 0x14070F9D8 (NtDebugActiveProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     DbgkpPostFakeThreadMessages @ 0x14070EB0C (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x14070EEF8 (DbgkpPostModuleMessages.c)
 */

__int64 __fastcall DbgkpPostFakeProcessCreateMessages(_KPROCESS *BugCheckParameter1, struct _KEVENT *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v10[48]; // [rsp+40h] [rbp-58h] BYREF

  result = DbgkpPostFakeThreadMessages(BugCheckParameter1, a2, 0LL, &Object, &v9);
  v7 = 0LL;
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v10);
    DbgkpPostModuleMessages(BugCheckParameter1, Object, a2);
    KiUnstackDetachProcess((__int64)v10, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x4F676244u);
    result = 0LL;
    v7 = v9;
  }
  *a3 = v7;
  return result;
}
