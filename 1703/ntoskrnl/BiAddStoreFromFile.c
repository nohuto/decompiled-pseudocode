/*
 * XREFs of BiAddStoreFromFile @ 0x140589778
 * Callers:
 *     BiLoadSystemStore @ 0x1405893FC (BiLoadSystemStore.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     swprintf_s @ 0x14016EB70 (swprintf_s.c)
 *     BiUnloadHiveByName @ 0x14057BA0C (BiUnloadHiveByName.c)
 *     BiCreateKey @ 0x14058AF50 (BiCreateKey.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 *     BiSetRegistryValue @ 0x14058BEBC (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 *     BiLoadHive @ 0x14058CF74 (BiLoadHive.c)
 *     BiDoesHiveKeyExist @ 0x140735548 (BiDoesHiveKeyExist.c)
 */

__int64 __fastcall BiAddStoreFromFile(__int64 a1, char a2, _QWORD *a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // edi
  int Hive; // eax
  unsigned int v9; // ebx
  int v10; // eax
  HANDLE v11; // r14
  int v12; // eax
  unsigned int v14; // edi
  int v15; // eax
  const wchar_t *v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-50h]
  wchar_t *v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+28h] [rbp-48h]
  HANDLE v20; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  wchar_t Dst[12]; // [rsp+48h] [rbp-28h] BYREF

  Handle = 0LL;
  v4 = 0;
  v5 = 0;
  v20 = 0LL;
  while ( 1 )
  {
    swprintf_s(Dst, 0xCuLL, L"BCD%08d", v5);
    Hive = BiLoadHive(Dst);
    v9 = Hive;
    if ( Hive >= 0 )
    {
      BiLogMessage(2LL, L"Loaded hive at BCD%08d", v5);
      if ( (a2 & 1) == 0 )
      {
LABEL_4:
        v10 = BiOpenKey(0LL, L"Description", 131103LL, &Handle);
        v11 = Handle;
        v9 = v10;
        if ( v10 < 0 )
        {
          if ( v10 == -1073741772 )
          {
            BiLogMessage(4LL, L"A valid store must have a description key.");
            v9 = -1073741476;
          }
          LODWORD(v17) = v9;
          BiLogMessage(
            4LL,
            L"Failed to open description key for store. Store: %s StoreKey: %ws Status: %x",
            a1 + 12,
            Dst,
            v17,
            v19);
        }
        else
        {
          LODWORD(v19) = 24;
          v18 = Dst;
          v12 = BiSetRegistryValue(Handle, L"KeyName", 0LL);
          v9 = v12;
          if ( v12 < 0 )
          {
            LODWORD(v18) = v12;
            BiLogMessage(
              4LL,
              L"Failed to set description key value. Store: %s StoreKey: %ws Status: %x",
              a1 + 12,
              Dst,
              v18,
              v19);
          }
          else
          {
            *a3 = 0LL;
          }
        }
        if ( v11 )
          BiCloseKey(v11);
        goto LABEL_9;
      }
      v15 = BiCreateKey(0LL, L"Objects", 131097LL, 0LL, &v20, 0LL);
      v9 = v15;
      if ( v15 >= 0 )
      {
        BiCloseKey(v20);
        v20 = 0LL;
        v15 = BiCreateKey(0LL, L"Description", 131097LL, 0LL, &v20, 0LL);
        v9 = v15;
        if ( v15 >= 0 )
          goto LABEL_4;
        v16 = L"Failed to initialize description key for store. Store: %s StoreKey: %ws Status: %x";
      }
      else
      {
        v16 = L"Failed to initialize objects key for store. Store: %s StoreKey: %ws Status: %x";
      }
      LODWORD(v17) = v15;
      BiLogMessage(4LL, v16, a1 + 12, Dst, v17);
LABEL_9:
      if ( v20 )
        BiCloseKey(v20);
      return v9;
    }
    if ( Hive != -1073741790 )
      break;
    if ( (unsigned __int8)BiDoesHiveKeyExist(Dst) )
      v4 = 0;
    else
      ++v4;
    if ( v4 >= 0xA )
    {
      BiLogMessage(4LL, L"Too many unexplained failures. File: %s Last status: %x", a1 + 12, 3221225506LL);
      return v9;
    }
    if ( ++v5 > 0x5F5E0FF )
    {
      BiLogMessage(4LL, L"Failed to find a key to load store %s. Last attempted key: %ws", a1 + 12, Dst);
      return (unsigned int)-1073741823;
    }
  }
  v14 = 4;
  if ( Hive == -1073741809 )
    v14 = 2;
  BiLogMessage(v14, L"Failed to load hive into key %ws from %s. Status: %x", Dst, a1 + 12, Hive);
  return v9;
}
