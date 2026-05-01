/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x180001944
 * Callers:
 *     ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x1800011BC (-RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x180031D04 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 * Callees:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x180003200 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSet.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180010A48 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateTerminalResourceSet(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet **a2)
{
  int ResourceSetInfo; // esi
  int v5; // r8d
  int v6; // r9d
  char *v7; // rdx
  __int64 v8; // r10
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // r11
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _BYTE v20[384]; // [rsp+50h] [rbp-188h] BYREF
  void *Block; // [rsp+1F0h] [rbp+18h] BYREF

  Block = 0LL;
  ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(
                      this,
                      (struct ExecutionModel::_ResourceSetInfo **)&Block);
  if ( ResourceSetInfo >= 0 )
  {
    v5 = *((_DWORD *)this + 34);
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 33);
      v7 = (char *)this + 64;
      v8 = *((_QWORD *)this + 18);
    }
    else
    {
      v7 = 0LL;
      v6 = 0;
      v8 = -1LL;
    }
    v9 = Block;
    v10 = v20;
    v11 = 3LL;
    do
    {
      v12 = v9[1];
      *v10 = *v9;
      v13 = v9[2];
      v10[1] = v12;
      v14 = v9[3];
      v10[2] = v13;
      v15 = v9[4];
      v10[3] = v14;
      v16 = v9[5];
      v10[4] = v15;
      v17 = v9[6];
      v10[5] = v16;
      v18 = v9[7];
      v9 += 8;
      v10[6] = v17;
      v10 += 8;
      *(v10 - 1) = v18;
      --v11;
    }
    while ( v11 );
    ResourceSetInfo = ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
                        *((_QWORD *)this + 3),
                        v20,
                        *(_QWORD *)(*((_QWORD *)this + 179) + 112LL),
                        *((_QWORD *)this + 4),
                        v7,
                        v6,
                        v5,
                        v8,
                        a2);
    if ( ResourceSetInfo >= 0 )
      ResourceSetInfo = 0;
  }
  if ( Block )
    operator delete(Block);
  return (unsigned int)ResourceSetInfo;
}
