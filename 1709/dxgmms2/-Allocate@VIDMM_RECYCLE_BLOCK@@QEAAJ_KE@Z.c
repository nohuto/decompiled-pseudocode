/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C006CFAC
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C006953C (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     McTemplateK0pxqqt @ 0x1C0023360 (McTemplateK0pxqqt.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::Allocate(VIDMM_RECYCLE_BLOCK *this, ULONG_PTR a2, char a3)
{
  int *v3; // rax
  int v5; // ecx
  char v6; // r10
  char v7; // r9
  ULONG v8; // r15d
  int v9; // eax
  ULONG AllocationType; // ebp
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  NTSTATUS v14; // r14d
  ULONG_PTR v15; // rdx
  unsigned int *v16; // rcx
  __int64 v17; // r8
  PVOID *v19; // r14
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  NTSTATUS inserted; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  NTSTATUS v31; // ebp
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  ULONG Protect[2]; // [rsp+28h] [rbp-30h]
  __int64 v38; // [rsp+30h] [rbp-28h]
  __int64 v39; // [rsp+38h] [rbp-20h]
  ULONG_PTR v40; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+10h] BYREF

  RegionSize = a2;
  v3 = (int *)*((_QWORD *)this + 4);
  v5 = *v3;
  v6 = *((_BYTE *)v3 + 16);
  v7 = *((_BYTE *)v3 + 17);
  if ( (unsigned int)(*v3 - 3) > 3 )
  {
    if ( v5 == 2 || (v8 = 1028, v5 == 8) )
      v8 = 4;
    if ( v5 == 2 || v5 == 8 || v6 || v7 )
    {
      v9 = 0x2000;
      if ( v7 )
      {
        v9 = 2105344;
        goto LABEL_8;
      }
    }
    else
    {
      v9 = 8396800;
    }
    if ( a3 )
      v9 |= 0x800000u;
LABEL_8:
    AllocationType = v9 | 0x20400000;
    v11 = (char *)this + 40;
    if ( !v6 )
      AllocationType = v9;
    v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 5, 0LL, &RegionSize, AllocationType, v8);
    if ( v14 < 0 )
    {
      if ( (AllocationType & 0x800000) != 0 )
        v14 = ZwAllocateVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                (PVOID *)this + 5,
                0LL,
                &RegionSize,
                AllocationType & 0xFF7FFFFF,
                v8);
      if ( v14 < 0 )
      {
        _InterlockedIncrement(&dword_1C00405C4);
        v32 = WdLogNewEntry5_WdLowResource(v13, v12);
        *(_QWORD *)(v32 + 24) = v14;
        WdLogEvent5_WdLowResource(v32);
        return (unsigned int)v14;
      }
    }
    goto LABEL_11;
  }
  v40 = a2;
  v19 = (PVOID *)((char *)this + 56);
  v20 = ((v5 - 4) & 0xFFFFFFFD) != 0 ? 1208221696 : 134479872;
  v21 = v20 | 0x80000;
  if ( !v6 )
    v21 = v20;
  v22 = MmCreateSection((char *)this + 56, 0LL, 0LL, &v40, 4, v21, 0LL, 0LL);
  v25 = v22;
  if ( v22 < 0 )
  {
    _InterlockedIncrement(&dword_1C0040674);
    v33 = WdLogNewEntry5_WdLowResource(v24, v23);
    *(_QWORD *)(v33 + 24) = v25;
    WdLogEvent5_WdLowResource(v33);
    return (unsigned int)v25;
  }
  ObfReferenceObject(*v19);
  inserted = ObInsertObject(*v19, 0LL, 0, 0, 0LL, (PHANDLE)this + 8);
  v25 = inserted;
  if ( inserted < 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v28, v27);
    *(_QWORD *)(v34 + 24) = *v19;
    *(_QWORD *)(v34 + 32) = v25;
    WdLogEvent5_WdAssertion(v34);
    return (unsigned int)v25;
  }
  v11 = (char *)this + 40;
  if ( (unsigned int)(**((_DWORD **)this + 4) - 5) > 1 )
  {
    v15 = RegionSize;
    *(_QWORD *)v11 = 0LL;
    *((_QWORD *)this + 6) = v15;
    goto LABEL_12;
  }
  v31 = MmMapViewInSystemSpace(*v19, (PVOID *)this + 5, &RegionSize);
  if ( v31 < 0 )
  {
    _InterlockedIncrement(&dword_1C0040674);
    v35 = WdLogNewEntry5_WdLowResource(v30, v29);
    *(_QWORD *)(v35 + 24) = 6628LL;
    WdLogEvent5_WdLowResource(v35);
    return (unsigned int)v31;
  }
LABEL_11:
  v15 = RegionSize;
  *((_QWORD *)this + 6) = RegionSize + *(_QWORD *)v11;
LABEL_12:
  if ( bTracingEnabled )
  {
    v16 = (unsigned int *)*((_QWORD *)this + 4);
    v17 = *v16;
    if ( (unsigned int)(v17 - 3) <= 3 )
      v11 = (char *)this + 56;
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v39) = 1;
      v36 = *(_QWORD *)(*((_QWORD *)v16 + 1) + 8LL);
      LODWORD(v38) = *(_DWORD *)(v36 + 8);
      Protect[0] = v17;
      McTemplateK0pxqqt(v36, &EventCreateProcessAllocation, v17, *(_QWORD *)v11, v15, *(_QWORD *)Protect, v38, v39);
    }
  }
  return 0LL;
}
