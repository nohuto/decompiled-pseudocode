/*
 * XREFs of SeAuditHandleCreation @ 0x140458A5C
 * Callers:
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14003C360 (PsGetCurrentThreadProcessId.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwDuplicateObject @ 0x14017E6C0 (ZwDuplicateObject.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406F3EE0 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1406F462C (SepAdtClassifyObjectIntoSubCategory.c)
 */

char __fastcall SeAuditHandleCreation(__int64 a1, void *a2, void *a3)
{
  __int64 v3; // r15
  char v4; // si
  void *v5; // r14
  PVOID v7; // rbx
  char result; // al
  __int64 v9; // r8
  unsigned __int16 v10; // r13
  __int64 CurrentThreadProcessId; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // [rsp+48h] [rbp-90h]
  HANDLE TargetHandle; // [rsp+E0h] [rbp+8h] BYREF
  void *v16; // [rsp+E8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+F0h] [rbp+18h] BYREF

  v16 = a2;
  v3 = *(_QWORD *)(a1 + 72);
  v4 = 0;
  TargetHandle = 0LL;
  v5 = a3;
  v7 = 0LL;
  if ( !a3 )
  {
    v5 = *(void **)(v3 + 56);
    if ( !v5 )
      v5 = *(void **)(a1 + 64);
  }
  result = *(_BYTE *)(a1 + 9);
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 124) )
    {
      result = SepAdtPrivilegeObjectAuditAlarm(
                 (unsigned int)&SeSubsystemName,
                 (int)a1 + 144,
                 (int)a1 + 128,
                 (_DWORD)a2,
                 *(_QWORD *)(a1 + 32),
                 *(_QWORD *)(a1 + 48),
                 *(_QWORD *)(a1 + 56),
                 *(_DWORD *)(a1 + 20),
                 *(_QWORD *)v3,
                 1);
      goto LABEL_6;
    }
  }
  else if ( !*(_BYTE *)(v3 + 216) )
  {
    goto LABEL_6;
  }
  if ( ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0x200u, 2u) >= 0 )
  {
    ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &Object, 0LL);
    v7 = Object;
  }
  LOBYTE(v9) = 1;
  v10 = SepAdtClassifyObjectIntoSubCategory(v7, a1 + 144, v9, 0LL);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v4 = SepAdtOpenObjectAuditAlarm(
         v10,
         (int)&SeSubsystemName,
         (int)&v16,
         (int)a1 + 144,
         a1 + 128,
         v5,
         *(_QWORD *)(a1 + 32),
         *(_QWORD *)(a1 + 48),
         *(_DWORD *)(a1 + 24),
         *(_DWORD *)(a1 + 20),
         *(_QWORD *)v3,
         1,
         CurrentThreadProcessId,
         2,
         0LL,
         0,
         0LL,
         v3 + 32,
         a1);
  v12 = PsGetCurrentThreadProcessId();
  LOBYTE(v14) = 1;
  result = SepAdtStagingEvent(
             v10,
             v13,
             &v16,
             a1 + 144,
             a1 + 128,
             *(_QWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 48),
             *(_DWORD *)(a1 + 24),
             *(_DWORD *)(a1 + 20),
             v14,
             v12,
             a1);
LABEL_6:
  *(_BYTE *)(a1 + 10) = v4;
  return result;
}
