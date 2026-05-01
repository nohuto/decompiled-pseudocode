/*
 * XREFs of ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180006C40
 * Callers:
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z @ 0x180006840 (-Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000C12C (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 * Callees:
 *     ?GetResourceManagerRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ @ 0x180004EF8 (-GetResourceManagerRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ.c)
 *     ?ReadMediumThreshold@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAN@Z @ 0x180006BD0 (-ReadMediumThreshold@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAN@Z.c)
 *     ?ReadInternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAJPEAUHKEY__@@KPEBGN@Z @ 0x180006EC0 (-ReadInternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAJPEAUHKEY__@.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::Initialize(
        ExecutionModel::ResourceSetTypeToInfoConverter *this,
        const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // rsi
  HKEY ResourceManagerRootHive; // rbx
  LSTATUS v5; // eax
  signed int InternalResourceSetTypeInfo; // edi
  LSTATUS v7; // eax
  ExecutionModel::ResourceSetTypeToInfoConverter *v8; // rcx
  double v9; // xmm6_8
  const WCHAR **v10; // r12
  ExecutionModel::ResourceSetTypeToInfoConverter *v11; // r14
  unsigned int v12; // r15d
  const WCHAR *v13; // rdx
  LSTATUS v14; // eax
  HKEY v15; // rbx
  const WCHAR **v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rsi
  const WCHAR *v19; // rdx
  _DWORD *v21; // rdi
  __int64 i; // rcx
  HKEY hKey; // [rsp+38h] [rbp-9h] BYREF
  HKEY v24; // [rsp+40h] [rbp-1h] BYREF
  HKEY v25; // [rsp+48h] [rbp+7h] BYREF
  HKEY phkResult[2]; // [rsp+50h] [rbp+Fh] BYREF
  double cbData; // [rsp+B8h] [rbp+77h] BYREF
  BYTE Data; // [rsp+C0h] [rbp+7Fh] BYREF

  v2 = a2;
  v25 = 0LL;
  hKey = 0LL;
  phkResult[0] = 0LL;
  ResourceManagerRootHive = (HKEY)ExecutionModel::GetResourceManagerRootHive(this);
  v5 = RegOpenKeyW(ResourceManagerRootHive, L"System\\ResourceManager\\Policy\\ResourceSetTypePolicyTable", phkResult);
  InternalResourceSetTypeInfo = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      InternalResourceSetTypeInfo = (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    v25 = 0LL;
    v7 = RegOpenKeyW(ResourceManagerRootHive, L"System\\ResourceManager", &v25);
    InternalResourceSetTypeInfo = v7;
    if ( v7 )
    {
      if ( v7 > 0 )
        InternalResourceSetTypeInfo = (unsigned __int16)v7 | 0x80070000;
    }
    else
    {
      ExecutionModel::ResourceSetTypeToInfoConverter::ReadMediumThreshold(v8, v25, &cbData);
      v9 = cbData;
      v10 = (const WCHAR **)&ExecutionModel::ResourceSetTypeName;
      v11 = this;
      v12 = 0;
      while ( 1 )
      {
        if ( hKey )
          RegCloseKey(hKey);
        v13 = *v10;
        hKey = 0LL;
        v14 = RegOpenKeyW(phkResult[0], v13, &hKey);
        InternalResourceSetTypeInfo = v14;
        if ( v14 )
          break;
        InternalResourceSetTypeInfo = ExecutionModel::ResourceSetTypeToInfoConverter::ReadInternalResourceSetTypeInfo(
                                        this,
                                        hKey,
                                        v12,
                                        v2,
                                        v9);
        if ( InternalResourceSetTypeInfo >= 0 )
        {
          v15 = hKey;
          LODWORD(cbData) = 4;
          InternalResourceSetTypeInfo = 0;
          v24 = 0LL;
          if ( !RegQueryValueExW(hKey, L"StandardExternalResources", 0LL, 0LL, &Data, (LPDWORD)&cbData) )
          {
            v21 = (_DWORD *)((char *)v11 + 172);
            for ( i = 44LL; i; --i )
              *v21++ = 1;
            InternalResourceSetTypeInfo = 0;
          }
          if ( v24 )
            RegCloseKey(v24);
          v24 = 0LL;
          if ( !RegOpenKeyW(v15, L"ExternalResources", &v24) )
          {
            v16 = (const WCHAR **)off_18000FC28;
            v17 = 12LL;
            v18 = 45LL;
            do
            {
              v19 = *v16;
              LODWORD(cbData) = 4;
              RegQueryValueExW(v24, v19, 0LL, 0LL, (LPBYTE)v11 + v17 + 160, (LPDWORD)&cbData);
              v17 += 4LL;
              ++v16;
              --v18;
            }
            while ( v18 );
            v2 = a2;
            InternalResourceSetTypeInfo = 0;
          }
          if ( v24 )
            RegCloseKey(v24);
          ++v12;
          ++v10;
          v11 = (ExecutionModel::ResourceSetTypeToInfoConverter *)((char *)v11 + 376);
          if ( v12 < 0x39 )
            continue;
        }
        goto LABEL_18;
      }
      if ( v14 > 0 )
        InternalResourceSetTypeInfo = (unsigned __int16)v14 | 0x80070000;
    }
  }
LABEL_18:
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult[0] )
    RegCloseKey(phkResult[0]);
  if ( v25 )
    RegCloseKey(v25);
  return (unsigned int)InternalResourceSetTypeInfo;
}
