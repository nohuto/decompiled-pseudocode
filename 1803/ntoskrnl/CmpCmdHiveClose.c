/*
 * XREFs of CmpCmdHiveClose @ 0x14054DC44
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14006CE40 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401A76E0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401A79A0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x1401A8040 (ZwSetInformationObject.c)
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

  v2 = (HANDLE *)(a1 + 1536);
  v3 = IoSetThreadHardErrorMode(0);
  v4 = *v2;
  if ( *v2 && ZwQueryInformationFile(v4, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
  {
    if ( *(_BYTE *)(a1 + 141) )
    {
      v15 = MEMORY[0xFFFFF78000000014];
    }
    else
    {
      v5 = v15;
      if ( *(_QWORD *)(a1 + 4224) )
        v5 = *(_QWORD *)(a1 + 4224);
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
