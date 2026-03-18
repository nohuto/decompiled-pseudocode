/*
 * XREFs of _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C00B0260
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00B00D8 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CcdRetrieveSubkeyInfoFromRegistry(HANDLE KeyHandle, ULONG Index, _QWORD *a3)
{
  void *v3; // rbx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  int v11; // edi
  __int64 v13; // rax
  ULONG Length; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  while ( 1 )
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    v7 = operator new(Length, 0x63644356u, PagedPool);
    v3 = v7;
    if ( !v7 )
      break;
    v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v7, Length, &Length);
    v11 = v10;
    if ( v10 != -2147483643 && v10 != -1073741789 )
      goto LABEL_7;
  }
  v13 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v13 + 24) = Length;
  WdLogEvent5_WdError(v13);
  v11 = -1073741801;
LABEL_7:
  if ( v11 < 0 )
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  else
  {
    *a3 = v3;
  }
  return (unsigned int)v11;
}
