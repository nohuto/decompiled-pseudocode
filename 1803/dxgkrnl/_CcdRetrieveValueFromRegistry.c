/*
 * XREFs of _CcdRetrieveValueFromRegistry @ 0x1C00AFD50
 * Callers:
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C00AFE04 (_CcdRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall CcdRetrieveValueFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, _QWORD *a3, __int64 a4)
{
  void *v4; // rdi
  PVOID v8; // rax
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  int v11; // ebx
  __int64 v13; // rax
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF
  int v15; // [rsp+6Ch] [rbp+24h]

  v15 = HIDWORD(a4);
  v4 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  while ( 1 )
  {
    operator delete[](v4);
    v8 = operator new[](Length, 0x63644356u, PagedPool);
    v4 = v8;
    if ( !v8 )
      break;
    v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v8, Length, &Length);
    v11 = v10;
    if ( v10 != -2147483643 && v10 != -1073741789 )
      goto LABEL_5;
  }
  v13 = WdLogNewEntry5_WdLowResource(v9);
  *(_QWORD *)(v13 + 24) = Length;
  WdLogEvent5_WdLowResource(v13);
  v11 = -1073741801;
LABEL_5:
  if ( v11 < 0 )
    operator delete[](v4);
  else
    *a3 = v4;
  return (unsigned int)v11;
}
