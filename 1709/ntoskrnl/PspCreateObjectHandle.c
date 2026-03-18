/*
 * XREFs of PspCreateObjectHandle @ 0x1404D5D14
 * Callers:
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 * Callees:
 *     SePrivilegeObjectAuditAlarm @ 0x14046D750 (SePrivilegeObjectAuditAlarm.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall PspCreateObjectHandle(void *a1, __int64 a2, struct _OBJECT_TYPE *a3)
{
  __int64 *v3; // rsi
  NTSTATUS v5; // edi
  int *v6; // r9

  v3 = (__int64 *)(a2 + 392);
  v5 = ObOpenObjectByPointer(
         a1,
         *(_DWORD *)(a2 + 384),
         (PACCESS_STATE)a2,
         0,
         a3,
         *(_BYTE *)(a2 + 388),
         (PHANDLE)(a2 + 392));
  if ( v5 >= 0 )
  {
    v6 = **(int ***)(a2 + 72);
    if ( v6 )
    {
      if ( *v6 )
        SePrivilegeObjectAuditAlarm(*v3, (__int64 *)(a2 + 32), *(_DWORD *)(a2 + 20), v6, 1, *(_BYTE *)(a2 + 388));
    }
  }
  return (unsigned int)v5;
}
