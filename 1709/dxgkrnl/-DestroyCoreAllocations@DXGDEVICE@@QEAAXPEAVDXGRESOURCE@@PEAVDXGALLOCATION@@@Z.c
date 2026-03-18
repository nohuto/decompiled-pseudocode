/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C018266C
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C019CD1C (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C019E1DC (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00036A4 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0003DEC (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C00156A8 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C0080524 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C0081E2C (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0091444 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009E200 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01000C0 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0100168 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C01837B8 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        __int64 a3,
        struct DXGALLOCATION *a4)
{
  struct DXGALLOCATION *v4; // r14
  DXGDEVICE *v6; // rsi
  HANDLE *v7; // r12
  struct DXGALLOCATION *v8; // rbx
  bool i; // zf
  __int64 v10; // rax
  struct DXGALLOCATION *v11; // r13
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r15d
  unsigned int v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // r8
  struct COREDEVICEACCESS *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r10
  void *v21; // rdx
  ADAPTER_RENDER *v22; // rcx
  int v23; // ebx
  void *v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  struct DXGALLOCATION *v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+38h] [rbp-C8h]
  struct _DXGKARG_CLOSEALLOCATION v33; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  char v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[16]; // [rsp+80h] [rbp-80h] BYREF
  char v38; // [rsp+90h] [rbp-70h] BYREF

  v33.NumAllocations = 0;
  v4 = (struct DXGALLOCATION *)a3;
  v35 = 0LL;
  v36 = 0;
  v6 = this;
  if ( !a2
    || (DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v35, (struct DXGRESOURCE *)((char *)a2 + 80), 1),
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35),
        (v7 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL) )
  {
    v7 = (HANDLE *)&v38;
  }
  v8 = v4;
  for ( i = v4 == 0LL; ; i = v11 == 0LL )
  {
    v31 = v8;
    if ( i )
      break;
    v10 = *((_QWORD *)v8 + 6);
    v11 = (struct DXGALLOCATION *)*((_QWORD *)v8 + 8);
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10 + 4);
      if ( (v12 & 0x2000) != 0 || (v12 & 1) != 0 || (v12 & 2) != 0 || (v12 & 8) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)v6, (v12 >> 6) & 0xF, v8, a4);
    }
    v13 = *((_QWORD *)v8 + 6);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 4);
      if ( (v14 & 0x2000) != 0 )
      {
        if ( *((_QWORD *)v8 + 3) )
        {
          v15 = (v14 >> 6) & 0xF;
          if ( DXGDEVICE::IsDirectFlipAllocationPinned(v6, v8) )
          {
            if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL)) < 2200
              || *(_BYTE *)(v16 + 2236) )
            {
              DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)v6, v15, v17, v18);
            }
            else
            {
              DXGDEVICE::UnpinDirectFlipAllocation(v6, v15, v17, &v31, 0LL);
            }
          }
        }
      }
    }
    if ( (*((_DWORD *)v8 + 18) & 0x80000) != 0 )
      UnlockParavirtualizedAllocationOnGuest(v8, 0);
    v19 = *((_QWORD *)v8 + 3);
    if ( v19 )
    {
      v20 = *((_QWORD *)v6 + 2);
      v32 = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v20 + 528) + 8LL) + 160LL))(
        *(_QWORD *)(v20 + 536),
        v19,
        (__int64)v8 + 80);
      *((_DWORD *)v8 + 18) |= 1u;
      *((_QWORD *)v8 + 3) = 0LL;
    }
    this = (DXGDEVICE *)*((_QWORD *)v8 + 4);
    if ( this )
    {
      v7[v33.NumAllocations++] = this;
      *((_QWORD *)v8 + 4) = 0LL;
    }
    v8 = v11;
  }
  if ( v33.NumAllocations )
  {
    v21 = (void *)*((_QWORD *)v6 + 52);
    v22 = (ADAPTER_RENDER *)*((_QWORD *)v6 + 2);
    v33.pOpenHandleList = v7;
    ADAPTER_RENDER::DdiCloseAllocation(v22, v21, &v33);
  }
  v23 = 1;
  v24 = 0LL;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v25 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL);
      if ( v25 )
      {
        if ( *(DXGDEVICE **)(v25 + 72) == v6 )
        {
          i = (*(_DWORD *)(v25 + 64))-- == 1;
          if ( i )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v37,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 8LL));
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 72LL) = 0LL;
            if ( v37[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
          }
        }
      }
      v26 = *((_QWORD *)a2 + 3);
      a3 = 0LL;
      while ( v26 )
      {
        v26 = *(_QWORD *)(v26 + 64);
        a3 = (unsigned int)(a3 + 1);
      }
      this = (DXGDEVICE *)*((_QWORD *)a2 + 7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 15, 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy(this, v7, a3);
      *((_QWORD *)a2 + 7) = 0LL;
      v23 = 0;
    }
    else
    {
      v24 = (void *)*((_QWORD *)a2 + 7);
    }
  }
  v34.NumAllocations = 0;
  if ( v4 )
  {
    do
    {
      v31 = (struct DXGALLOCATION *)*((_QWORD *)v4 + 8);
      v27 = *((_QWORD *)v4 + 6);
      if ( v27 )
      {
        if ( !v23 )
          goto LABEL_51;
        v28 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v27 + 8);
        if ( v28 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)v6 + 2) + 528LL),
            *((struct VIDMM_DEVICE **)v6 + 74),
            0LL,
            v28);
          *(_QWORD *)(*((_QWORD *)v4 + 6) + 8LL) = 0LL;
        }
        this = *(DXGDEVICE **)(*((_QWORD *)v4 + 6) + 16LL);
        if ( this )
        {
          v7[v34.NumAllocations++] = this;
          *(_QWORD *)(*((_QWORD *)v4 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v23 )
      {
LABEL_51:
        if ( !a2 )
        {
          v29 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v29 + 24) = 703LL;
          WdLogEvent5_WdAssertion(v29);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v30 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v30 + 24) = 704LL;
          WdLogEvent5_WdAssertion(v30);
        }
      }
      v4 = v31;
    }
    while ( v31 );
  }
  if ( v23 )
  {
    v34.hResource = v24;
    v34.Flags.Value = a2 != 0LL;
    if ( v34.NumAllocations )
    {
      v34.pAllocationList = v7;
LABEL_61:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)v6 + 2), &v34, a3);
      goto LABEL_62;
    }
    v34.pAllocationList = 0LL;
    if ( v24 )
      goto LABEL_61;
  }
LABEL_62:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v35);
}
