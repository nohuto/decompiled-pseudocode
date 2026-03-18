/*
 * XREFs of CmpCmdHiveClose @ 0x1404CD78C
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14066AB34 (CmpFlushBackupHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140085310 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017E160 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14017E420 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14017EAC0 (ZwSetInformationObject.c)
 */

BOOLEAN __fastcall CmpCmdHiveClose(__int64 a1)
{
  HANDLE *v2; // rbx
  BOOLEAN v3; // r14
  HANDLE v4; // rsi
  __int64 v5; // rdx
  unsigned int i; // edi
  HANDLE v7; // rcx
  __int16 *p_ObjectInformation; // r8
  __int16 v10; // [rsp+30h] [rbp-50h] BYREF
  __int16 ObjectInformation; // [rsp+34h] [rbp-4Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  _BYTE FileInformation[8]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]

  v2 = (HANDLE *)(a1 + 2664);
  v3 = IoSetThreadHardErrorMode(0);
  v4 = *v2;
  if ( *v2 && ZwQueryInformationFile(v4, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
  {
    if ( *(_BYTE *)(a1 + 125) )
    {
      v15 = MEMORY[0xFFFFF78000000014];
    }
    else
    {
      v5 = v15;
      if ( *(_QWORD *)(a1 + 5432) )
        v5 = *(_QWORD *)(a1 + 5432);
      v15 = v5;
    }
    v14 = MEMORY[0xFFFFF78000000014];
    ZwSetInformationFile(v4, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  }
  for ( i = 0; i < 6; ++i )
  {
    v7 = *v2;
    if ( *v2 )
    {
      if ( i )
      {
        ObjectInformation = 0;
        p_ObjectInformation = &ObjectInformation;
      }
      else
      {
        v10 = 0;
        p_ObjectInformation = &v10;
      }
      ZwSetInformationObject(v7, ObjectHandleFlagInformation, p_ObjectInformation, 2u);
      ZwClose(*v2);
      *v2 = 0LL;
    }
    ++v2;
  }
  return IoSetThreadHardErrorMode(v3);
}
