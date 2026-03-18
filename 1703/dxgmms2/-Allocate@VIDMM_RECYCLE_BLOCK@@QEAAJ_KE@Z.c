/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C0069214
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C0065E14 (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     Template_pxqqt @ 0x1C00212D8 (Template_pxqqt.c)
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
  __int64 *v11; // rsi
  __int64 v12; // rcx
  NTSTATUS v13; // r14d
  ULONG_PTR v14; // rdx
  PVOID *v16; // r14
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rsi
  NTSTATUS inserted; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  NTSTATUS v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  ULONG Protect[2]; // [rsp+28h] [rbp-30h]
  __int64 v36; // [rsp+30h] [rbp-28h]
  __int64 v37; // [rsp+38h] [rbp-20h]
  ULONG_PTR v38; // [rsp+60h] [rbp+8h] BYREF
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
    v11 = (__int64 *)((char *)this + 40);
    if ( !v6 )
      AllocationType = v9;
    v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 5, 0LL, &RegionSize, AllocationType, v8);
    if ( v13 < 0 )
    {
      if ( (AllocationType & 0x800000) != 0 )
        v13 = ZwAllocateVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                (PVOID *)this + 5,
                0LL,
                &RegionSize,
                AllocationType & 0xFF7FFFFF,
                v8);
      if ( v13 < 0 )
      {
        _InterlockedIncrement(&dword_1C003C5B4);
        v27 = WdLogNewEntry5_WdLowResource(v12);
        *(_QWORD *)(v27 + 24) = v13;
        WdLogEvent5_WdLowResource(v27);
        return (unsigned int)v13;
      }
    }
    goto LABEL_11;
  }
  v38 = a2;
  v16 = (PVOID *)((char *)this + 56);
  v17 = ((v5 - 4) & 0xFFFFFFFD) == 0 ? 0x8000000 : 1207959552;
  v18 = v17 | 0x80000;
  if ( !v6 )
    v18 = v17;
  v19 = MmCreateSection((char *)this + 56, 0LL, 0LL, &v38, 4, v18, 0LL, 0LL);
  v21 = v19;
  if ( v19 < 0 )
  {
    _InterlockedIncrement(&dword_1C003C664);
    v28 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v28 + 24) = v21;
    WdLogEvent5_WdLowResource(v28);
    return (unsigned int)v21;
  }
  ObfReferenceObject(*v16);
  inserted = ObInsertObject(*v16, 0LL, 0, 0, 0LL, (PHANDLE)this + 8);
  v21 = inserted;
  if ( inserted < 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v24, v23);
    *(_QWORD *)(v29 + 24) = *v16;
    *(_QWORD *)(v29 + 32) = v21;
    WdLogEvent5_WdAssertion(v29);
    return (unsigned int)v21;
  }
  v11 = (__int64 *)((char *)this + 40);
  if ( (unsigned int)(**((_DWORD **)this + 4) - 5) > 1 )
  {
    v14 = RegionSize;
    *v11 = 0LL;
    *((_QWORD *)this + 6) = v14;
    goto LABEL_12;
  }
  v26 = MmMapViewInSystemSpace(*v16, (PVOID *)this + 5, &RegionSize);
  if ( v26 < 0 )
  {
    _InterlockedIncrement(&dword_1C003C664);
    v30 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v30 + 24) = 6417LL;
    WdLogEvent5_WdLowResource(v30);
    return (unsigned int)v26;
  }
LABEL_11:
  v14 = RegionSize;
  *((_QWORD *)this + 6) = RegionSize + *v11;
LABEL_12:
  if ( bTracingEnabled )
  {
    v31 = (unsigned int *)*((_QWORD *)this + 4);
    v32 = *v31;
    if ( (unsigned int)(v32 - 3) > 3 )
      v33 = *v11;
    else
      v33 = *((_QWORD *)this + 7);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v37) = 1;
      v34 = *(_QWORD *)(*((_QWORD *)v31 + 1) + 8LL);
      LODWORD(v36) = *(_DWORD *)(v34 + 8);
      Protect[0] = v32;
      Template_pxqqt(v34, &EventCreateProcessAllocation, v32, v33, v14, *(_QWORD *)Protect, v36, v37);
    }
  }
  return 0LL;
}
