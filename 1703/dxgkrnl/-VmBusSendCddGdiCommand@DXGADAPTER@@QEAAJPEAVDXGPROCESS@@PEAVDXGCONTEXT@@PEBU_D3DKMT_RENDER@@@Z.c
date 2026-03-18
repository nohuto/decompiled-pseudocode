/*
 * XREFs of ?VmBusSendCddGdiCommand@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C002EE68
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C0093F70 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendCddGdiCommand(
        DXGADAPTER *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_RENDER *a4)
{
  size_t v7; // rbx
  unsigned int v8; // r13d
  char *v10; // rax
  struct DXGKVMB_COMMAND *v11; // rdi
  struct _MDL *v13; // r9
  __int64 i; // r15
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v16; // ecx
  __int64 v17; // r8
  int v18; // edx
  struct DXGALLOCATION *v19; // rdx
  struct VMBCHANNEL__ *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // [rsp+68h] [rbp+20h] BYREF

  v7 = 8 * a4->AllocationCount;
  v8 = v7 + a4->CommandLength + 48;
  v10 = (char *)operator new[](v8, 0x4B677844u, (enum _POOL_TYPE)512);
  v11 = (struct DXGKVMB_COMMAND *)v10;
  if ( !v10 )
    return 3221225495LL;
  *((_DWORD *)v10 + 2) = 52;
  *((_DWORD *)v10 + 3) = *((_DWORD *)a2 + 96);
  *((_DWORD *)v10 + 6) = a4->AllocationCount;
  *((_DWORD *)v10 + 5) = a4->CommandLength;
  *((_QWORD *)v10 + 4) = a4->pNewCommandBuffer;
  *((_DWORD *)v10 + 10) = a4->Flags;
  *((_DWORD *)v10 + 4) = *((_DWORD *)a3 + 7);
  memmove(v10 + 48, a4->pNewAllocationList, v7);
  memmove((char *)v11 + v7 + 48, a4->pNewCommandBuffer, a4->CommandLength);
  for ( i = 0LL; (unsigned int)i < a4->AllocationCount; i = (unsigned int)(i + 1) )
  {
    hAllocation = a4->pNewAllocationList[i].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 168));
    v16 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v16 < *((_DWORD *)a2 + 52)
      && (v17 = *((_QWORD *)a2 + 24),
          v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30))
      && (v18 & 0x1000) == 0
      && (v18 & 0xF) != 0
      && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) == 5 )
    {
      v19 = *(struct DXGALLOCATION **)(v17 + 16LL * v16);
    }
    else
    {
      v19 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28, v19);
    ExReleasePushLockSharedEx((char *)a2 + 168, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)v11 + 2 * i + 12) = *(_DWORD *)(v28 + 96);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28);
  }
  if ( *((_BYTE *)this + 3880) )
    v20 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  else
    v20 = 0LL;
  v21 = VmBusSendSyncMessageStatusReturn(v20, v11, v8, v13);
  v26 = v21;
  if ( v21 < 0 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    *(_QWORD *)(v27 + 24) = v26;
    WdLogEvent5_WdAssertion(v27);
  }
  operator delete[](v11);
  return (unsigned int)v26;
}
