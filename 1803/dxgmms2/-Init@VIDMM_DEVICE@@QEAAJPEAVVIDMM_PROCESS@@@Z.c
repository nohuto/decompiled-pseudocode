/*
 * XREFs of ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0075B78
 * Callers:
 *     VidMmInitDevice @ 0x1C0003EE0 (VidMmInitDevice.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005A59C (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C007F7A0 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0003220 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004F48 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00053A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0056384 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073DE0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Init(VIDMM_DEVICE *this, struct DXGPROCESS **a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS **v5; // rcx
  __int64 v6; // rcx
  int v7; // ebp
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 i; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  bool v15; // cf
  SIZE_T v16; // rax
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  char *v21; // rsi
  unsigned __int64 v22; // rbp
  __int64 v23; // rax
  SIZE_T v24; // rax
  char *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char *v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 result; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned __int64 v35; // rbp
  __int64 v36; // rax
  SIZE_T v37; // rax
  char *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  char *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v42 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v42 + 24) = this;
    *(_QWORD *)(v42 + 32) = *(_QWORD *)this;
  }
  if ( a2 )
  {
    v5 = a2;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    if ( DXGPROCESS::GetCurrent() && (v4 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9)) != 0 )
      v5 = *(struct DXGPROCESS ***)(v4 + 8);
    else
      v5 = 0LL;
  }
  else
  {
    v5 = *(struct DXGPROCESS ***)(*(_QWORD *)this + 40896LL);
  }
  *((_QWORD *)this + 1) = v5;
  if ( !v5 )
  {
    v43 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v43 + 24) = 368LL;
    WdLogEvent5_WdAssertion(v43);
    return 3221225473LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v7 = VIDMM_PROCESS::OpenAdapter(v5, *(struct VIDMM_GLOBAL **)this);
    if ( v7 < 0 )
    {
      _InterlockedAdd(&dword_1C0047588, 1u);
      v44 = WdLogNewEntry5_WdLowResource(v6);
      *(_QWORD *)(v44 + 24) = 384LL;
      WdLogEvent5_WdLowResource(v44);
      return (unsigned int)v7;
    }
    *((_BYTE *)this + 50) |= 1u;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 200LL));
  }
  v8 = 56LL * *((unsigned int *)this + 14);
  if ( !is_mul_ok(*((unsigned int *)this + 14), 0x38uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, 0x30326956u, PagedPool);
  *((_QWORD *)this + 5) = v9;
  if ( !v9 )
  {
    _InterlockedAdd(&dword_1C004758C, 1u);
    v45 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v45 + 24) = 401LL;
    WdLogEvent5_WdLowResource(v45);
    return 3221225495LL;
  }
  memset(v9, 0, 56LL * *((unsigned int *)this + 14));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); *v12 = v12 )
  {
    v11 = 56LL * (unsigned int)i;
    i = (unsigned int)(i + 1);
    v12 = (_QWORD *)(v11 + *((_QWORD *)this + 5) + 32LL);
    v12[1] = v12;
  }
  if ( !*((_QWORD *)this + 3) && a2 )
    goto LABEL_38;
  v13 = *((unsigned int *)this + 15);
  v14 = 160 * v13;
  if ( !is_mul_ok(v13, 0xA0uLL) )
    v14 = -1LL;
  v15 = __CFADD__(v14, 8LL);
  v16 = v14 + 8;
  if ( v15 )
    v16 = -1LL;
  v17 = (char *)operator new(v16, 0x38346956u, i, PagedPool);
  if ( v17 )
  {
    v21 = v17 + 8;
    *(_QWORD *)v17 = v13;
    `vector constructor iterator'(
      v17 + 8,
      160LL,
      (unsigned int)v13,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v21 = 0LL;
  }
  *((_QWORD *)this + 9) = v21;
  if ( !v21 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v46 + 24) = 427LL;
    goto LABEL_60;
  }
  v22 = *((unsigned int *)this + 15);
  v23 = 160 * v22;
  if ( !is_mul_ok(v22, 0xA0uLL) )
    v23 = -1LL;
  v15 = __CFADD__(v23, 8LL);
  v24 = v23 + 8;
  if ( v15 )
    v24 = -1LL;
  v25 = (char *)operator new(v24, 0x38346956u, v20, PagedPool);
  if ( v25 )
  {
    v29 = v25 + 8;
    *(_QWORD *)v25 = v22;
    `vector constructor iterator'(
      v25 + 8,
      160LL,
      (unsigned int)v22,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v29 = 0LL;
  }
  *((_QWORD *)this + 10) = v29;
  if ( !v29 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v27, v26);
    *(_QWORD *)(v46 + 24) = 434LL;
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 88LL) & 2) != 0 )
  {
    v35 = *((unsigned int *)this + 15);
    v36 = 160 * v35;
    if ( !is_mul_ok(v35, 0xA0uLL) )
      v36 = -1LL;
    v15 = __CFADD__(v36, 8LL);
    v37 = v36 + 8;
    if ( v15 )
      v37 = -1LL;
    v38 = (char *)operator new(v37, 0x38346956u, v28, PagedPool);
    if ( v38 )
    {
      v41 = v38 + 8;
      *(_QWORD *)v38 = v35;
      `vector constructor iterator'(
        v38 + 8,
        160LL,
        (unsigned int)v35,
        (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
    }
    else
    {
      v41 = 0LL;
    }
    *((_QWORD *)this + 11) = v41;
    if ( !v41 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v40, v39);
      *(_QWORD *)(v46 + 24) = 450LL;
LABEL_60:
      WdLogEvent5_WdAssertion(v46);
      return 3221225495LL;
    }
  }
  v30 = 0LL;
  if ( *((_DWORD *)this + 15) )
  {
    while ( 1 )
    {
      v31 = 160 * v30;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(
                 (_QWORD *)(160 * v30 + *((_QWORD *)this + 9)),
                 this,
                 (unsigned int)v30,
                 1);
      if ( (int)result < 0 )
        break;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(
                 (_QWORD *)(v31 + *((_QWORD *)this + 10)),
                 this,
                 (unsigned int)v30,
                 2);
      if ( (int)result < 0 )
        break;
      v33 = *((_QWORD *)this + 11);
      if ( v33 )
      {
        result = VIDMM_DEVICE_PAGING_QUEUE::Initialize((_QWORD *)(v31 + v33), this, (unsigned int)v30, 3);
        if ( (int)result < 0 )
          break;
      }
      v30 = (unsigned int)(v30 + 1);
      if ( (unsigned int)v30 >= *((_DWORD *)this + 15) )
        goto LABEL_38;
    }
  }
  else
  {
LABEL_38:
    v34 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 27) = qword_1C00473D0 + v34 * KeQueryTimeIncrement();
    return 0LL;
  }
  return result;
}
