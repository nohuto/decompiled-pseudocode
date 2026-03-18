/*
 * XREFs of BiGetSystemStorePath @ 0x1405AE5C8
 * Callers:
 *     BiLoadSystemStore @ 0x1405ADDCC (BiLoadSystemStore.c)
 * Callees:
 *     wcscat_s @ 0x140164BF0 (wcscat_s.c)
 *     wcscpy_s @ 0x140164CA0 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     BiGetFirmwareType @ 0x1405B0290 (BiGetFirmwareType.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BiGetSystemPartition @ 0x1405B1A94 (BiGetSystemPartition.c)
 */

__int64 __fastcall BiGetSystemStorePath(wchar_t **a1)
{
  wchar_t *v2; // rdi
  int FirmwareType; // eax
  const wchar_t *v4; // rbp
  int SystemPartition; // eax
  wchar_t *v6; // rsi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r14d
  wchar_t *PoolWithTag; // rax
  wchar_t *Src; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  Src = 0LL;
  FirmwareType = BiGetFirmwareType();
  if ( FirmwareType == 1 )
  {
    v4 = L"\\Boot\\BCD";
  }
  else
  {
    if ( (unsigned int)(FirmwareType - 2) > 1 )
    {
      v7 = -1073741637;
      BiLogMessage(4LL, L"Failed to get system store path. Status: %x", 3221225659LL);
      return (unsigned int)v7;
    }
    v4 = L"\\EFI\\Microsoft\\Boot\\BCD";
  }
  BiLogMessage(2LL, L"System store path: %s", v4);
  SystemPartition = BiGetSystemPartition(&Src);
  v6 = Src;
  v7 = SystemPartition;
  if ( SystemPartition < 0 )
  {
    BiLogMessage(4LL, L"Failed to get system partition. Status: %x", (unsigned int)SystemPartition);
  }
  else
  {
    BiLogMessage(2LL, L"System partition: %s", Src);
    v8 = -1LL;
    v9 = -1LL;
    do
      ++v9;
    while ( v6[v9] );
    do
      ++v8;
    while ( v4[v8] );
    v10 = (unsigned int)(v9 + 1 + v8);
    v11 = v10;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v10, 0x4B444342u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      wcscpy_s(PoolWithTag, v11, v6);
      wcscat_s(v2, v11, v4);
      *a1 = v2;
    }
    else
    {
      v7 = -1073741801;
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v7 < 0 && v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return (unsigned int)v7;
}
