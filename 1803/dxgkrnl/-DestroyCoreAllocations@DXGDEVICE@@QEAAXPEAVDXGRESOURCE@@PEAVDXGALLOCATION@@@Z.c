/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C016A8D8
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C018A468 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C018C190 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0006AE8 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0019A3C (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C001B61C (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C00A3570 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00A4FC8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00BF75C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010AFD4 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C010B07C (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C016B99C (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C018C45C (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        __int64 a3,
        struct DXGALLOCATION *a4)
{
  struct DXGALLOCATION *v4; // r15
  DXGDEVICE *v6; // rsi
  HANDLE *v7; // r12
  struct DXGALLOCATION *v8; // rbx
  bool i; // zf
  __int64 v10; // rax
  struct DXGALLOCATION *v11; // r13
  unsigned int v12; // edx
  unsigned int v13; // r14d
  unsigned int v14; // r14d
  __int64 v15; // r8
  struct COREDEVICEACCESS *v16; // r9
  __int64 v17; // rdx
  void *v18; // rdx
  ADAPTER_RENDER *v19; // rcx
  int v20; // ebx
  void *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  struct DXGALLOCATION *v28; // [rsp+30h] [rbp-D0h] BYREF
  struct _DXGKARG_CLOSEALLOCATION v29; // [rsp+38h] [rbp-C8h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  char v32; // [rsp+70h] [rbp-90h]
  _BYTE v33[24]; // [rsp+78h] [rbp-88h] BYREF
  char v34; // [rsp+90h] [rbp-70h] BYREF

  v29.NumAllocations = 0;
  v4 = (struct DXGALLOCATION *)a3;
  v31 = 0LL;
  v32 = 0;
  v6 = this;
  if ( !a2
    || (DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v31, (struct DXGRESOURCE *)((char *)a2 + 80), 1),
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v31),
        (v7 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL) )
  {
    v7 = (HANDLE *)&v34;
  }
  v8 = v4;
  for ( i = v4 == 0LL; ; i = v11 == 0LL )
  {
    v28 = v8;
    if ( i )
      break;
    v10 = *((_QWORD *)v8 + 6);
    v11 = (struct DXGALLOCATION *)*((_QWORD *)v8 + 8);
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10 + 4);
      if ( (v12 & 0x2000) != 0 || (v12 & 1) != 0 || (v12 & 2) != 0 || (v12 & 8) != 0 )
      {
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)v6, (v12 >> 6) & 0xF, v8, a4);
        v10 = *((_QWORD *)v8 + 6);
      }
      if ( v10 )
      {
        v13 = *(_DWORD *)(v10 + 4);
        if ( (v13 & 0x2000) != 0 )
        {
          if ( *((_QWORD *)v8 + 3) )
          {
            v14 = (v13 >> 6) & 0xF;
            if ( DXGDEVICE::IsDirectFlipAllocationPinned(v6, v8) )
            {
              if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL)) >= 2200 )
                DXGDEVICE::UnpinDirectFlipAllocation(v6, v14, v15, &v28, 0LL);
              else
                DXGDEVICE::UnpinAllDirectFlipAllocations(v6, v14, v15, v16);
            }
          }
        }
      }
    }
    if ( (*((_DWORD *)v8 + 18) & 0x80000) != 0 )
      UnlockParavirtualizedAllocationOnGuest(v8, 0);
    v17 = *((_QWORD *)v8 + 3);
    if ( v17 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 544LL)
                                                                           + 8LL)
                                                               + 160LL))(
        *(_QWORD *)(*((_QWORD *)v6 + 2) + 552LL),
        v17,
        (__int64)v8 + 80,
        0LL);
      *((_DWORD *)v8 + 18) |= 1u;
      *((_QWORD *)v8 + 3) = 0LL;
    }
    this = (DXGDEVICE *)*((_QWORD *)v8 + 4);
    if ( this )
    {
      v7[v29.NumAllocations++] = this;
      *((_QWORD *)v8 + 4) = 0LL;
    }
    v8 = v11;
  }
  if ( v29.NumAllocations )
  {
    v18 = (void *)*((_QWORD *)v6 + 54);
    v19 = (ADAPTER_RENDER *)*((_QWORD *)v6 + 2);
    v29.pOpenHandleList = v7;
    ADAPTER_RENDER::DdiCloseAllocation(v19, v18, &v29);
  }
  v20 = 1;
  v21 = 0LL;
  if ( a2 )
  {
    this = (DXGDEVICE *)*((_QWORD *)a2 + 7);
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v22 = *((_QWORD *)this + 18);
      if ( v22 )
      {
        if ( *(DXGDEVICE **)(v22 + 72) == v6 )
        {
          i = (*(_DWORD *)(v22 + 64))-- == 1;
          if ( i )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v33,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 72LL) = 0LL;
            if ( v33[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
          }
        }
      }
      v23 = *((_QWORD *)a2 + 3);
      a3 = 0LL;
      while ( v23 )
      {
        v23 = *(_QWORD *)(v23 + 64);
        a3 = (unsigned int)(a3 + 1);
      }
      this = (DXGDEVICE *)*((_QWORD *)a2 + 7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 15, 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy(this, v7, a3);
      *((_QWORD *)a2 + 7) = 0LL;
      v20 = 0;
    }
    else
    {
      v21 = (void *)*((_QWORD *)a2 + 7);
    }
  }
  v30.NumAllocations = 0;
  if ( v4 )
  {
    do
    {
      v28 = (struct DXGALLOCATION *)*((_QWORD *)v4 + 8);
      v24 = *((_QWORD *)v4 + 6);
      if ( v24 )
      {
        if ( !v20 )
          goto LABEL_50;
        v25 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v24 + 8);
        if ( v25 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)v6 + 2) + 544LL),
            *((struct VIDMM_DEVICE **)v6 + 76),
            0LL,
            v25);
          *(_QWORD *)(*((_QWORD *)v4 + 6) + 8LL) = 0LL;
          v24 = *((_QWORD *)v4 + 6);
        }
        this = *(DXGDEVICE **)(v24 + 16);
        if ( this )
        {
          v7[v30.NumAllocations++] = this;
          *(_QWORD *)(*((_QWORD *)v4 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v20 )
      {
LABEL_50:
        if ( !a2 )
        {
          v26 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v26 + 24) = 704LL;
          WdLogEvent5_WdAssertion(v26);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v27 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v27 + 24) = 705LL;
          WdLogEvent5_WdAssertion(v27);
        }
      }
      v4 = v28;
    }
    while ( v28 );
  }
  if ( v20 )
  {
    v30.hResource = v21;
    v30.Flags.Value = a2 != 0LL;
    if ( v30.NumAllocations )
    {
      v30.pAllocationList = v7;
LABEL_60:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)v6 + 2), &v30, a3);
      goto LABEL_61;
    }
    v30.pAllocationList = 0LL;
    if ( v21 )
      goto LABEL_60;
  }
LABEL_61:
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v31);
}
