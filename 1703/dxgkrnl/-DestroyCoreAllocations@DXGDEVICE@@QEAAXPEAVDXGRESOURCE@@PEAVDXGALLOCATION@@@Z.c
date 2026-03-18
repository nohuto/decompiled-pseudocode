/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C017ED98
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0187488 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0188E3C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C00145BC (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0020AEC (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0020B7C (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00CA5B4 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C00CD764 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00CE7A8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00FEC20 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0188048 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        __int64 a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // r14
  DXGDEVICE *v6; // r15
  HANDLE *v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // esi
  PERESOURCE **v12; // rcx
  __int64 v13; // r8
  void *v14; // rdx
  ADAPTER_RENDER *v15; // rcx
  void *v16; // r13
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-D0h]
  struct _DXGKARG_CLOSEALLOCATION v27; // [rsp+38h] [rbp-C8h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  char v30; // [rsp+70h] [rbp-90h]
  _BYTE v31[24]; // [rsp+78h] [rbp-88h] BYREF
  char v32; // [rsp+90h] [rbp-70h] BYREF

  v4 = a3;
  v27.NumAllocations = 0;
  v29 = 0LL;
  v6 = this;
  v30 = 0;
  if ( !a2
    || (LOBYTE(a3) = 1,
        DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v29, (struct DXGRESOURCE *)((char *)a2 + 80), a3, (__int64)a4),
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v29),
        (v7 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL) )
  {
    v7 = (HANDLE *)&v32;
  }
  v8 = v4;
  if ( v4 )
  {
    do
    {
      v9 = *(_QWORD *)(v8 + 48);
      v10 = *(_QWORD *)(v8 + 64);
      if ( v9 )
      {
        v11 = *(_DWORD *)(v9 + 4);
        if ( (v11 & 0x2000) != 0
          && *(_QWORD *)(v8 + 24)
          && DXGDEVICE::IsDirectFlipAllocationPinned(v6, (const struct DXGALLOCATION *)v8) )
        {
          DXGDEVICE::UnpinAllDirectFlipAllocations(v12, (v11 >> 6) & 0xF, v13, a4);
        }
      }
      if ( (*(_DWORD *)(v8 + 72) & 0x80000) != 0 )
      {
        MmRotatePhysicalView(*(PVOID *)(v8 + 104), (PSIZE_T)(v8 + 120), 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
        *(_DWORD *)(v8 + 72) &= ~0x80000u;
      }
      a3 = *(_QWORD *)(v8 + 24);
      if ( a3 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v6 + 2) + 432LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v6 + 2) + 440LL),
          (struct _VIDMM_MULTI_ALLOC *)a3,
          (struct _VIDMM_LOCAL_ALLOC **)(v8 + 80),
          0);
        *(_DWORD *)(v8 + 72) |= 1u;
        *(_QWORD *)(v8 + 24) = 0LL;
      }
      this = *(DXGDEVICE **)(v8 + 32);
      if ( this )
      {
        v7[v27.NumAllocations++] = this;
        *(_QWORD *)(v8 + 32) = 0LL;
      }
      v8 = v10;
    }
    while ( v10 );
  }
  if ( v27.NumAllocations )
  {
    v14 = (void *)*((_QWORD *)v6 + 52);
    v15 = (ADAPTER_RENDER *)*((_QWORD *)v6 + 2);
    v27.pOpenHandleList = v7;
    ADAPTER_RENDER::DdiCloseAllocation(v15, v14, &v27);
  }
  v16 = 0LL;
  v17 = 1;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v18 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL);
      if ( v18 )
      {
        if ( *(DXGDEVICE **)(v18 + 72) == v6 && (*(_DWORD *)(v18 + 64))-- == 1 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v31,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 8LL),
            a3,
            (__int64)a4);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 72LL) = 0LL;
          if ( v31[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31, v20, v21, (__int64)a4);
        }
      }
      v22 = *((_QWORD *)a2 + 3);
      a3 = 0LL;
      while ( v22 )
      {
        v22 = *(_QWORD *)(v22 + 64);
        a3 = (unsigned int)(a3 + 1);
      }
      this = (DXGDEVICE *)*((_QWORD *)a2 + 7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 15, 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy(this, v7, a3);
      *((_QWORD *)a2 + 7) = 0LL;
      v17 = 0;
    }
    else
    {
      v16 = (void *)*((_QWORD *)a2 + 7);
    }
  }
  v28.NumAllocations = 0;
  if ( v4 )
  {
    do
    {
      v26 = *(_QWORD *)(v4 + 64);
      v23 = *(_QWORD *)(v4 + 48);
      if ( v23 )
      {
        if ( !v17 )
          goto LABEL_41;
        a4 = *(struct COREDEVICEACCESS **)(v23 + 8);
        if ( a4 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)v6 + 2) + 432LL),
            *((struct VIDMM_DEVICE **)v6 + 74),
            0LL,
            a4);
          *(_QWORD *)(*(_QWORD *)(v4 + 48) + 8LL) = 0LL;
        }
        this = *(DXGDEVICE **)(*(_QWORD *)(v4 + 48) + 16LL);
        if ( this )
        {
          v7[v28.NumAllocations++] = this;
          *(_QWORD *)(*(_QWORD *)(v4 + 48) + 16LL) = 0LL;
        }
      }
      else if ( !v17 )
      {
LABEL_41:
        if ( !a2 )
        {
          v24 = WdLogNewEntry5_WdAssertion(this, 1LL, a3, a4);
          *(_QWORD *)(v24 + 24) = 646LL;
          WdLogEvent5_WdAssertion(v24);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v25 = WdLogNewEntry5_WdAssertion(this, 1LL, a3, a4);
          *(_QWORD *)(v25 + 24) = 647LL;
          WdLogEvent5_WdAssertion(v25);
        }
      }
      v4 = v26;
    }
    while ( v26 );
  }
  if ( v17 )
  {
    v28.hResource = v16;
    v28.Flags.Value = a2 != 0LL;
    if ( v28.NumAllocations )
    {
      v28.pAllocationList = v7;
LABEL_51:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)v6 + 2), &v28, a3);
      goto LABEL_52;
    }
    v28.pAllocationList = 0LL;
    if ( v16 )
      goto LABEL_51;
  }
LABEL_52:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v29);
}
