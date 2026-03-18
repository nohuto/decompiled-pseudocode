/*
 * XREFs of NtDeleteFile @ 0x1405E61C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x1405E630C (IopCleanupExtraCreateParameters.c)
 */

NTSTATUS __stdcall NtDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // bl
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v7[28]; // [rsp+58h] [rbp-B0h] BYREF
  char v8; // [rsp+138h] [rbp+30h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v7, 0, 0xD8uLL);
  LODWORD(v7[0]) = 14155784;
  HIWORD(v7[8]) = 7;
  LODWORD(v7[8]) = 4096;
  v7[18] = &v8;
  LODWORD(v7[11]) = 1;
  BYTE2(v7[17]) = 1;
  v7[6] = ObjectAttributes;
  LODWORD(v7[19]) = 32;
  memset(&v7[20], 0, 0x28uLL);
  LOWORD(v7[20]) = 40;
  v7[24] = 1LL;
  v7[24] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v4 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x10000u,
         (__int64)v7,
         v7[24],
         &v6);
  IopCleanupExtraCreateParameters(v7);
  result = v7[2];
  if ( LODWORD(v7[4]) != -1096154543 )
    return v4;
  return result;
}
