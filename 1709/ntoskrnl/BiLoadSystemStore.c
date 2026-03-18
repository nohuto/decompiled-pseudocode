/*
 * XREFs of BiLoadSystemStore @ 0x1405ADDCC
 * Callers:
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     BiLogFileOwnerProcess @ 0x1402901A4 (BiLogFileOwnerProcess.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     BiAddStoreFromFile @ 0x1405ADFA4 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x1405AE0EC (BiMarkTreatAsSystemStore.c)
 *     BcdCloseStore @ 0x1405AE528 (BcdCloseStore.c)
 *     BiGetSystemStorePath @ 0x1405AE5C8 (BiGetSystemStorePath.c)
 *     BiIsSystemStore @ 0x1405AE8A0 (BiIsSystemStore.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 */

__int64 __fastcall BiLoadSystemStore(_QWORD *a1)
{
  void *v2; // rdi
  int SystemStorePath; // eax
  void *v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  void *v12; // rbp
  int v13; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  void *Src; // [rsp+68h] [rbp+10h] BYREF

  Src = 0LL;
  v2 = 0LL;
  SystemStorePath = BiGetSystemStorePath(&Src);
  v4 = Src;
  v5 = SystemStorePath;
  if ( SystemStorePath >= 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)Src + v6) );
    v7 = v6 + 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v7 + 12, 0x4B444342u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 1;
      v9 = PoolWithTag + 3;
      PoolWithTag[1] = 2 * v7 + 12;
      PoolWithTag[2] = 3;
      memmove(PoolWithTag + 3, v4, 2LL * v7);
      v10 = BiAddStoreFromFile(v2, 0LL, &Src);
      v5 = v10;
      if ( v10 < 0 )
      {
        BiLogMessage(4LL, L"Failed to add system store from file. File: %ws Status: %x", v9, (unsigned int)v10);
        if ( v5 == -1073741757 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
          BiLogFileOwnerProcess((__int64)&DestinationString, v15, v16);
        }
      }
      else
      {
        v12 = Src;
        LOBYTE(v11) = 1;
        v13 = BiMarkTreatAsSystemStore(Src, v11);
        v5 = v13;
        if ( v13 < 0 )
        {
          BiLogMessage(4LL, L"Failed to mark system store. File: %ws Status: %x", v9, (unsigned int)v13);
          BcdCloseStore(v12);
        }
        else if ( (unsigned __int8)BiIsSystemStore(v12) )
        {
          *a1 = v12;
        }
        else
        {
          BiLogMessage(4LL, L"File is not system store. File: %ws Status: %x", v9, v5);
          BcdCloseStore(v12);
          v5 = -1073741672;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return v5;
}
