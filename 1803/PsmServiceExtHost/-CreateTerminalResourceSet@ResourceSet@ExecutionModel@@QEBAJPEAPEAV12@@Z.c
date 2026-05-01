/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x18005A9D4
 * Callers:
 *     ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x1800510BC (-RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z.c)
 * Callees:
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x18001F654 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003E448 (--3@YAXPEAX@Z.c)
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x18004EB24 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateTerminalResourceSet(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet **a2)
{
  int ResourceSetInfo; // esi
  unsigned int v5; // r9d
  __int64 v6; // rdx
  unsigned __int64 v7; // r10
  _OWORD *v8; // rax
  _BYTE *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  _BYTE v25[384]; // [rsp+50h] [rbp-188h] BYREF
  void *Block; // [rsp+1F0h] [rbp+18h] BYREF

  Block = 0LL;
  ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(
                      this,
                      (struct ExecutionModel::_ResourceSetInfo **)&Block);
  if ( ResourceSetInfo >= 0 )
  {
    v5 = *((_DWORD *)this + 33);
    v6 = 2LL;
    v7 = *((_QWORD *)this + 18);
    v8 = Block;
    v9 = v25;
    do
    {
      v10 = v8[1];
      *(_OWORD *)v9 = *v8;
      v11 = v8[2];
      *((_OWORD *)v9 + 1) = v10;
      v12 = v8[3];
      *((_OWORD *)v9 + 2) = v11;
      v13 = v8[4];
      *((_OWORD *)v9 + 3) = v12;
      v14 = v8[5];
      *((_OWORD *)v9 + 4) = v13;
      v15 = v8[6];
      *((_OWORD *)v9 + 5) = v14;
      v16 = v8[7];
      v8 += 8;
      *((_OWORD *)v9 + 6) = v15;
      v9 += 128;
      *((_OWORD *)v9 - 1) = v16;
      --v6;
    }
    while ( v6 );
    v17 = v8[1];
    *(_OWORD *)v9 = *v8;
    v18 = v8[2];
    *((_OWORD *)v9 + 1) = v17;
    v19 = v8[3];
    *((_OWORD *)v9 + 2) = v18;
    v20 = v8[4];
    *((_OWORD *)v9 + 3) = v19;
    v21 = v8[5];
    *((_OWORD *)v9 + 4) = v20;
    v22 = v8[6];
    v23 = *((_QWORD *)v8 + 14);
    *((_OWORD *)v9 + 5) = v21;
    *((_OWORD *)v9 + 6) = v22;
    *((_QWORD *)v9 + 14) = v23;
    ResourceSetInfo = ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
                        *((ExecutionModel::ResourceManager **)this + 3),
                        (__int64)v25,
                        *(struct _RM_PARTITION **)(*((_QWORD *)this + 179) + 120LL),
                        *((wchar_t **)this + 4),
                        (char *)this + 64,
                        v5,
                        *((_DWORD *)this + 34),
                        v7,
                        a2);
    if ( ResourceSetInfo >= 0 )
      ResourceSetInfo = 0;
  }
  if ( Block )
    operator delete(Block);
  return (unsigned int)ResourceSetInfo;
}
