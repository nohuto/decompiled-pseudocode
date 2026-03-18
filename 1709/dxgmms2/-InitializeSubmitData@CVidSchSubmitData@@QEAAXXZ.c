/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0024284
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C00259C0 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0024224 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  __int64 v2; // rbx
  char v3; // di
  PSLIST_ENTRY v4; // r9
  unsigned int VidSchSibmitDataSize; // eax
  void *v6; // r9
  __int64 v7; // rcx
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // r8
  int v11; // r9d
  int v12; // edx
  unsigned int v13; // eax

  v2 = *((_QWORD *)this + 1) + 1104LL;
  v3 = 1;
  ++*(_DWORD *)(v2 + 20);
  v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v2);
  if ( !v4 )
  {
    ++*(_DWORD *)(v2 + 24);
    v4 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v2 + 48))(
                         *(unsigned int *)(v2 + 36),
                         *(unsigned int *)(v2 + 44),
                         *(unsigned int *)(v2 + 40),
                         v2);
  }
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize(*((ADAPTER_RENDER **)this + 1));
    memset(v6, 0, VidSchSibmitDataSize);
    v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v8 = *(_DWORD *)(v7 + 1968);
    if ( v8 < 0x2000 )
      v9 = 1;
    else
      v9 = *(_DWORD *)(v7 + 248);
    if ( v8 < 0x2000 && !*(_BYTE *)(v7 + 2252) )
      v3 = 0;
    v10 = *(_DWORD **)this;
    v11 = *(_DWORD *)(v7 + 2176);
    *(_BYTE *)(*(_QWORD *)this + 348LL) = v3;
    if ( v3 )
    {
      v10[112] = v9;
      v12 = 8 * v9;
      v10[111] = v11;
      v10[113] = v11 * (48 * v9 + ((8 * v9 + 175) & 0xFFFFFFF8)) + 16;
      v13 = v11 * (48 * v9 + ((8 * v9 + 175) & 0xFFFFFFF8)) + 456;
      v10[106] = v13;
      v10[107] = v12 + v13;
    }
  }
}
