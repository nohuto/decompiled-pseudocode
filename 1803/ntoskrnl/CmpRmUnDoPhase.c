/*
 * XREFs of CmpRmUnDoPhase @ 0x1406FA4C8
 * Callers:
 *     CmpStartRMLog @ 0x1405F4564 (CmpStartRMLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenTransaction @ 0x1401A99E0 (ZwOpenTransaction.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpTransMgrRollback @ 0x14054BC94 (CmpTransMgrRollback.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmpTransMgrPrepare @ 0x1405DEE1C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405DEFD8 (CmpTransMgrCommit.c)
 */

char *__fastcall CmpRmUnDoPhase(__int64 a1)
{
  char *result; // rax
  __int64 v3; // r8
  char *v4; // rbx
  __int64 v5; // rcx
  char **v6; // rax
  __int64 v7; // [rsp+28h] [rbp-39h]
  char v8[4]; // [rsp+38h] [rbp-29h] BYREF
  int v9; // [rsp+3Ch] [rbp-25h] BYREF
  _QWORD *v10; // [rsp+40h] [rbp-21h] BYREF
  HANDLE TransactionHandle; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v13[48]; // [rsp+80h] [rbp+1Fh] BYREF

LABEL_1:
  v10 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement((_QWORD **)(a1 + 16), &v10, 0);
    v4 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 12) & 2) != 0 )
    {
      CmpTransMgrRollback((__int64)result, &v9);
      CmpAttachToRegistryProcess((__int64)v13);
      CmpTransMgrFreeVolatileData((__int64)v4, 8);
      KiUnstackDetachProcess((__int64)v13, 0LL);
      v5 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = (char **)*((_QWORD *)v4 + 1), *v6 != v4) )
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
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, &v9, v8) < 0 || (int)CmpTransMgrCommit(a1, (__int64)v4, &v9) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_1;
      }
      CmpAttachToRegistryProcess((__int64)v13);
      CmpTransMgrFreeVolatileData((__int64)v4, 4);
      KiUnstackDetachProcess((__int64)v13, 0LL);
      v5 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = (char **)*((_QWORD *)v4 + 1), *v6 != v4) )
        __fastfail(3u);
      goto LABEL_14;
    }
    ZwClose(TransactionHandle);
  }
}
