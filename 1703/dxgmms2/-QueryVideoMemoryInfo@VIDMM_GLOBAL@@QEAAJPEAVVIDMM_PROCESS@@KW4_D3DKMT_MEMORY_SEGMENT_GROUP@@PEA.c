/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C0047D34
 * Callers:
 *     VidMmQueryVideoMemoryInfo @ 0x1C0001010 (VidMmQueryVideoMemoryInfo.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C0047E00 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryVideoMemoryInfo(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  __int64 v9; // rbx
  unsigned int VideoMemoryInfo; // ebx
  __int64 v14; // rax
  _BYTE v15[32]; // [rsp+60h] [rbp-28h] BYREF

  v9 = a3;
  if ( a3 >= *((_DWORD *)this + 1604) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = v9;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  else
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v15, this + 5121);
    VideoMemoryInfo = VIDMM_PROCESS::QueryVideoMemoryInfo(
                        a2,
                        (struct VIDMM_GLOBAL *)this,
                        *((_DWORD *)this[3] + 50),
                        v9,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        0LL,
                        0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
    return VideoMemoryInfo;
  }
}
