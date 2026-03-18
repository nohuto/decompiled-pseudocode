/*
 * XREFs of NtQueryAttributesFile @ 0x140542900
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x140542B00 (FsRtlpCleanupEcps.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  char PreviousMode; // di
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _QWORD v10[28]; // [rsp+50h] [rbp-258h] BYREF
  _BYTE v11[64]; // [rsp+130h] [rbp-178h] BYREF
  char v12; // [rsp+170h] [rbp-138h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = (__int64)FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 39) = *(_BYTE *)(v5 + 39);
  }
  memset(v10, 0, 0xD8uLL);
  memset(v11, 0, 0x38uLL);
  LODWORD(v10[0]) = 14155784;
  HIWORD(v10[8]) = 7;
  LODWORD(v10[11]) = 1;
  LODWORD(v10[8]) = 2113536;
  v10[12] = FileInformation;
  v10[13] = v11;
  BYTE1(v10[17]) = 1;
  v10[18] = &v12;
  v10[6] = ObjectAttributes;
  LODWORD(v10[19]) = 32;
  memset(&v10[20], 0, 0x28uLL);
  LOWORD(v10[20]) = 40;
  v10[24] = 1LL;
  v10[24] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x80u,
         (__int64)v10,
         v10[24],
         Handle);
  if ( v10[21] && (unsigned __int8)FsRtlpCleanupEcps((PVOID)v10[21]) )
    v10[21] = 0LL;
  if ( LODWORD(v10[4]) == -1096154543 )
    return v10[2];
  if ( v7 >= 0 )
  {
    ObCloseHandle(Handle[0], PreviousMode);
    return -1073741788;
  }
  return v7;
}
