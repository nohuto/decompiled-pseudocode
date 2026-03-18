/*
 * XREFs of ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0231E30
 * Callers:
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0233B30 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DxgkRetrieveSubkeyInfoFromRegistry(
        HANDLE KeyHandle,
        ULONG Index,
        struct _KEY_BASIC_INFORMATION **a3)
{
  struct _KEY_BASIC_INFORMATION *v3; // rbx
  ULONG Length; // ebp
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  int v10; // edi
  __int64 v11; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  Length = 1024;
  do
  {
    if ( v3 )
      operator delete[](v3);
    v3 = (struct _KEY_BASIC_INFORMATION *)operator new[](Length, 0x4D677844u, PagedPool);
    if ( v3 )
    {
      ResultLength = 0;
      v9 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v3, Length, &ResultLength);
      Length = ResultLength;
      v10 = v9;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v11 + 24) = Length;
      WdLogEvent5_WdError(v11);
      v10 = -1073741801;
    }
  }
  while ( v10 == -2147483643 || v10 == -1073741789 );
  if ( v10 < 0 )
  {
    if ( v3 )
      operator delete[](v3);
    v3 = 0LL;
  }
  *a3 = v3;
  return (unsigned int)v10;
}
