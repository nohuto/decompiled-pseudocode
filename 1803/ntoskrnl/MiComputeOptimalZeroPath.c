/*
 * XREFs of MiComputeOptimalZeroPath @ 0x14089CFE8
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 */

void MiComputeOptimalZeroPath()
{
  __int64 v0; // rsi
  int *v1; // rdi
  unsigned int v2; // r14d
  __int64 v3; // rbx
  __int64 Page; // rax
  __int64 v5; // r9
  int v6; // edx
  __int64 v7; // rcx
  int *v8; // r12
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // r15
  ULONG_PTR v12; // r12
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 *v17; // rdi
  int *v18; // r12
  ULONG_PTR v19; // r14
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rbx
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // kr08_8
  unsigned __int64 v26; // r15
  bool v27; // zf
  __int64 v28; // r14
  __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rdi
  unsigned __int64 v33; // rbx
  signed __int32 v34[8]; // [rsp+0h] [rbp-78h] BYREF
  int *v35; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  ULONG_PTR v38; // [rsp+38h] [rbp-40h]
  unsigned __int64 v39; // [rsp+40h] [rbp-38h]
  _QWORD v40[6]; // [rsp+48h] [rbp-30h]
  int v41; // [rsp+C0h] [rbp+48h] BYREF
  int v42; // [rsp+C4h] [rbp+4Ch]
  __int64 v43; // [rsp+C8h] [rbp+50h]
  __int64 v44; // [rsp+D0h] [rbp+58h]
  __int64 v45; // [rsp+D8h] [rbp+60h]

  v0 = 0LL;
  v1 = &v41;
  v41 = 0;
  v2 = 0;
  v3 = 0LL;
  v42 = 2;
  while ( 1 )
  {
    Page = MiGetPage((__int64)&MiSystemPartition, v2, 0);
    v40[v3 + 2] = Page;
    if ( Page == -1 )
      break;
    v6 = *v1;
    v7 = 48 * Page - 0x58000000000LL;
    v40[v3] = v7;
    if ( *(unsigned __int8 *)(v7 + 34) >> 6 != v6 )
      MiChangePageAttribute(v7, v6, 0);
    ++v2;
    ++v3;
    ++v1;
    if ( v2 >= 2 )
    {
      v45 = 0LL;
      v8 = &v41;
      v36 = (unsigned __int64 *)&unk_1403CB760;
      v35 = &v41;
      v9 = 0LL;
      v37 = 2LL;
      do
      {
        v10 = *v8;
        v11 = 0LL;
        v12 = *(_QWORD *)((char *)&v40[2] + v9);
        v13 = 3LL;
        v38 = v12;
        do
        {
          v14 = __rdtsc();
          _InterlockedOr(v34, 0);
          MiZeroPhysicalPage(v12, 3, v10, v5);
          _InterlockedOr(v34, 0);
          v15 = __rdtsc();
          v11 += (((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - v14;
          --v13;
        }
        while ( v13 );
        v16 = *(_QWORD *)((char *)v40 + v9);
        v17 = v36;
        v18 = v35;
        v19 = v38;
        v44 = v16;
        v43 = 3LL;
        v39 = v11 / 3;
        v20 = 0LL;
        do
        {
          v21 = __rdtsc();
          _InterlockedOr(v34, 0);
          MiChangePageAttribute(v16, 1, 0);
          MiZeroPhysicalPage(v19, 3, v10, v22);
          MiChangePageAttribute(v44, v10, 0);
          _InterlockedOr(v34, 0);
          v23 = __rdtsc();
          v16 = v44;
          v20 += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - v21;
          --v43;
        }
        while ( v43 );
        v24 = v45;
        v25 = v20;
        v26 = v39;
        if ( v25 / 3 < 9 * (v39 / 0xA) )
          dword_1403CB714[4 * v10] = 1;
        v9 = v24 + 8;
        *(v17 - 1) = v26;
        v8 = v18 + 1;
        *v17 = v25 / 3;
        v45 = v9;
        v27 = v37-- == 1;
        v35 = v8;
        v36 = v17 + 2;
      }
      while ( !v27 );
      v28 = 2LL;
      do
      {
        v29 = v40[v0];
        v30 = (unsigned __int8)MiLockPageInline(v29);
        MiInsertPageInFreeOrZeroedList(v40[v0 + 2], 2);
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v30);
        ++v0;
        --v28;
      }
      while ( v28 );
      return;
    }
  }
  if ( v2 )
  {
    v31 = v2;
    do
    {
      v32 = v40[--v31];
      v33 = (unsigned __int8)MiLockPageInline(v32);
      MiInsertPageInFreeOrZeroedList(v40[v31 + 2], 2);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v33);
      --v2;
    }
    while ( v2 );
  }
}
