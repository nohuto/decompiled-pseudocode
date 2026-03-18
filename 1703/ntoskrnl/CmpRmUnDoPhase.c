/*
 * XREFs of CmpRmUnDoPhase @ 0x14066C3E0
 * Callers:
 *     CmpStartRMLog @ 0x14042EC9C (CmpStartRMLog.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenTransaction @ 0x1401803E0 (ZwOpenTransaction.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpTransMgrRollback @ 0x14042E45C (CmpTransMgrRollback.c)
 *     CmpTransMgrPrepare @ 0x14042E724 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1404CD8C4 (CmpTransMgrCommit.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 */

char *__fastcall CmpRmUnDoPhase(__int64 a1)
{
  char *result; // rax
  __int64 v3; // r8
  char *v4; // rbx
  __int64 v5; // rcx
  char **v6; // rax
  __int64 v7; // [rsp+20h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  char v9; // [rsp+90h] [rbp+28h] BYREF
  int v10; // [rsp+98h] [rbp+30h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  HANDLE TransactionHandle; // [rsp+A8h] [rbp+40h] BYREF

LABEL_1:
  v11 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement((_QWORD *)(a1 + 16), &v11, 0);
    v4 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 12) & 2) != 0 )
    {
      CmpTransMgrRollback((__int64)result, &v10);
      CmpTransMgrFreeVolatileData((__int64)v4, 8);
      v5 = *(_QWORD *)v4;
      v6 = (char **)*((_QWORD *)v4 + 1);
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
        __fastfail(3u);
LABEL_14:
      *v6 = (char *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_1;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction(&TransactionHandle, 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), (HANDLE)(v3 & v7)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, &v10, &v9) < 0 || (int)CmpTransMgrCommit(a1, (__int64)v4, &v10) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_1;
      }
      CmpTransMgrFreeVolatileData((__int64)v4, 4);
      v5 = *(_QWORD *)v4;
      v6 = (char **)*((_QWORD *)v4 + 1);
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
        __fastfail(3u);
      goto LABEL_14;
    }
    ZwClose(TransactionHandle);
  }
}
