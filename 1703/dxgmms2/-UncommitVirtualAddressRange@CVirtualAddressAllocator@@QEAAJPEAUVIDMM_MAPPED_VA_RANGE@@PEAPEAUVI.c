/*
 * XREFs of ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00530B0
 * Callers:
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0056FF0 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0057288 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00573C0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059F28 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0095F3C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C004E7D8 (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0057730 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C005C218 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall CVirtualAddressAllocator::UncommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        struct VIDMM_ALLOC **a3,
        char a4)
{
  struct VIDMM_ALLOC **v5; // r15
  int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  VIDMM_GLOBAL *v15; // r10
  unsigned __int64 v16; // rsi
  UINT *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // zf
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // [rsp+50h] [rbp-D8h]
  struct _D3DGPU_PHYSICAL_ADDRESS v25; // [rsp+60h] [rbp-C8h] BYREF
  VIDMM_PAGE_DIRECTORY *v26; // [rsp+70h] [rbp-B8h]
  struct VIDMM_ALLOC **v27; // [rsp+78h] [rbp-B0h]
  char v28; // [rsp+80h] [rbp-A8h] BYREF
  _DWORD v29[20]; // [rsp+90h] [rbp-98h] BYREF

  v27 = a3;
  v5 = (struct VIDMM_ALLOC **)&v28;
  if ( a3 )
    v5 = a3;
  v8 = 0;
  *v5 = 0LL;
  v9 = *((_QWORD *)a2 + 12);
  v10 = (*((_QWORD *)a2 + 13) - v9) >> 12;
  v24 = (*((_DWORD *)a2 + 16) >> 4) & 0x3F;
  v11 = *((_QWORD *)this + 14);
  *(_QWORD *)&v25.SegmentId = 32LL * v24;
  v26 = *(VIDMM_PAGE_DIRECTORY **)(*(_QWORD *)&v25.SegmentId + v11);
  if ( v26 )
  {
    memset(v29, 0, 0x48uLL);
    v12 = *(_QWORD *)(*((_QWORD *)this + 10) + 40168LL);
    v29[13] = -1;
    if ( (**(_DWORD **)(472LL * v24 + v12 + 440) & 0x80u) != 0 )
      *(_WORD *)((char *)&v29[14] + 1) = 257;
    v8 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
           v26,
           this,
           (const struct COMMIT_VA_STATE *)v29,
           0LL,
           v9,
           v10,
           0LL,
           0,
           v5);
    if ( v8 < 0 && *v5 && !v27 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v22 + 24) = 3133LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( a4 )
    {
      v15 = (VIDMM_GLOBAL *)*((_QWORD *)this + 10);
      v16 = v9 + (v10 << 12);
      if ( (*((_BYTE *)v15 + 40872) & 8) == 0 && v9 <= v16 )
      {
        v17 = (UINT *)(*((_QWORD *)this + 14) + *(_QWORD *)&v25.SegmentId);
        v18 = *(_QWORD *)v17;
        v19 = *(_QWORD *)(*(_QWORD *)v17 + 8LL);
        if ( v19 )
        {
          if ( *(_QWORD *)(v19 + 136) )
          {
            v20 = *((_QWORD *)this + 13) == 0LL;
            v25.SegmentId = v17[6];
            v25.SegmentOffset = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 144LL);
            if ( v20 )
            {
              v23 = VIDMM_GLOBAL::AdapterId(v15);
              *((_QWORD *)this + 13) = VIDMM_PROCESS::GetKmdProcessHandle(*((VIDMM_PROCESS **)this + 11), v23);
            }
            VIDMM_GLOBAL::FlushGpuVaTlb(
              v15,
              v24,
              &v25,
              *((struct VIDMM_PROCESS **)this + 11),
              *((void **)this + 13),
              v9,
              v16);
          }
        }
      }
    }
  }
  *((_DWORD *)a2 + 16) &= 0xFFFFF3FF;
  return (unsigned int)v8;
}
