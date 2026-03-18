/*
 * XREFs of ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C005101C
 * Callers:
 *     VidMmInitDevice @ 0x1C0013E80 (VidMmInitDevice.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0053F58 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C007C84C (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AE0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000E614 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005274C (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00705EC (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Init(VIDMM_DEVICE *this, struct VIDMM_PROCESS *a2)
{
  __int64 v4; // rcx
  VIDMM_PROCESS *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  SIZE_T v9; // rax
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 i; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  bool v17; // cf
  SIZE_T v18; // rax
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  char *v23; // rsi
  unsigned __int64 v24; // rbp
  __int64 v25; // rax
  SIZE_T v26; // rax
  char *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  char *v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // r14
  __int64 result; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // rbp
  __int64 v38; // rax
  SIZE_T v39; // rax
  char *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  char *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v44 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v44 + 24) = this;
    *(_QWORD *)(v44 + 32) = *(_QWORD *)this;
  }
  if ( a2 )
  {
    v5 = a2;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    if ( DXGPROCESS::GetCurrent() && (v4 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v5 = *(VIDMM_PROCESS **)(v4 + 8);
    else
      v5 = 0LL;
  }
  else
  {
    v5 = *(VIDMM_PROCESS **)(*(_QWORD *)this + 40320LL);
  }
  *((_QWORD *)this + 1) = v5;
  if ( !v5 )
  {
    v45 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v45 + 24) = 368LL;
    WdLogEvent5_WdAssertion(v45);
    return 3221225473LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v8 = VIDMM_PROCESS::OpenAdapter(v5, *(struct VIDMM_GLOBAL **)this);
    if ( v8 < 0 )
    {
      _InterlockedAdd(&dword_1C0040588, 1u);
      v46 = WdLogNewEntry5_WdLowResource(v7, v6);
      *(_QWORD *)(v46 + 24) = 384LL;
      WdLogEvent5_WdLowResource(v46);
      return (unsigned int)v8;
    }
    *((_BYTE *)this + 50) |= 1u;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 200LL));
  }
  v9 = 56LL * *((unsigned int *)this + 14);
  if ( !is_mul_ok(*((unsigned int *)this + 14), 0x38uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, 0x30326956u, PagedPool);
  *((_QWORD *)this + 5) = v10;
  if ( !v10 )
  {
    _InterlockedAdd(&dword_1C004058C, 1u);
    v47 = WdLogNewEntry5_WdLowResource(0LL, v11);
    *(_QWORD *)(v47 + 24) = 401LL;
    WdLogEvent5_WdLowResource(v47);
    return 3221225495LL;
  }
  memset(v10, 0, 56LL * *((unsigned int *)this + 14));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); *v14 = v14 )
  {
    v13 = 56LL * (unsigned int)i;
    i = (unsigned int)(i + 1);
    v14 = (_QWORD *)(v13 + *((_QWORD *)this + 5) + 32LL);
    v14[1] = v14;
  }
  if ( !*((_QWORD *)this + 3) && a2 )
    goto LABEL_38;
  v15 = *((unsigned int *)this + 15);
  v16 = 160 * v15;
  if ( !is_mul_ok(v15, 0xA0uLL) )
    v16 = -1LL;
  v17 = __CFADD__(v16, 8LL);
  v18 = v16 + 8;
  if ( v17 )
    v18 = -1LL;
  v19 = (char *)operator new(v18, 0x38346956u, i, PagedPool);
  if ( v19 )
  {
    v23 = v19 + 8;
    *(_QWORD *)v19 = v15;
    `vector constructor iterator'(
      v19 + 8,
      160LL,
      (unsigned int)v15,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v23 = 0LL;
  }
  *((_QWORD *)this + 9) = v23;
  if ( !v23 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v21, v20);
    *(_QWORD *)(v48 + 24) = 427LL;
    goto LABEL_60;
  }
  v24 = *((unsigned int *)this + 15);
  v25 = 160 * v24;
  if ( !is_mul_ok(v24, 0xA0uLL) )
    v25 = -1LL;
  v17 = __CFADD__(v25, 8LL);
  v26 = v25 + 8;
  if ( v17 )
    v26 = -1LL;
  v27 = (char *)operator new(v26, 0x38346956u, v22, PagedPool);
  if ( v27 )
  {
    v31 = v27 + 8;
    *(_QWORD *)v27 = v24;
    `vector constructor iterator'(
      v27 + 8,
      160LL,
      (unsigned int)v24,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v31 = 0LL;
  }
  *((_QWORD *)this + 10) = v31;
  if ( !v31 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v29, v28);
    *(_QWORD *)(v48 + 24) = 434LL;
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 48LL) & 2) != 0 )
  {
    v37 = *((unsigned int *)this + 15);
    v38 = 160 * v37;
    if ( !is_mul_ok(v37, 0xA0uLL) )
      v38 = -1LL;
    v17 = __CFADD__(v38, 8LL);
    v39 = v38 + 8;
    if ( v17 )
      v39 = -1LL;
    v40 = (char *)operator new(v39, 0x38346956u, v30, PagedPool);
    if ( v40 )
    {
      v43 = v40 + 8;
      *(_QWORD *)v40 = v37;
      `vector constructor iterator'(
        v40 + 8,
        160LL,
        (unsigned int)v37,
        (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
    }
    else
    {
      v43 = 0LL;
    }
    *((_QWORD *)this + 11) = v43;
    if ( !v43 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v42, v41);
      *(_QWORD *)(v48 + 24) = 450LL;
LABEL_60:
      WdLogEvent5_WdAssertion(v48);
      return 3221225495LL;
    }
  }
  v32 = 0LL;
  if ( *((_DWORD *)this + 15) )
  {
    while ( 1 )
    {
      v33 = 160 * v32;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(160 * v32 + *((_QWORD *)this + 9), this, (unsigned int)v32, 1LL);
      if ( (int)result < 0 )
        break;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v33 + *((_QWORD *)this + 10), this, (unsigned int)v32, 2LL);
      if ( (int)result < 0 )
        break;
      v35 = *((_QWORD *)this + 11);
      if ( v35 )
      {
        result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v33 + v35, this, (unsigned int)v32, 3LL);
        if ( (int)result < 0 )
          break;
      }
      v32 = (unsigned int)(v32 + 1);
      if ( (unsigned int)v32 >= *((_DWORD *)this + 15) )
        goto LABEL_38;
    }
  }
  else
  {
LABEL_38:
    v36 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 27) = qword_1C00403D0 + v36 * KeQueryTimeIncrement();
    return 0LL;
  }
  return result;
}
