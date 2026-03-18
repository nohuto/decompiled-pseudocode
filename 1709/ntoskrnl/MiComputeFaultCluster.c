/*
 * XREFs of MiComputeFaultCluster @ 0x140109A10
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14010A0F4 (MiAdvanceFaultList.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r12d
  int v21; // r13d
  __int64 PteShadow; // r9
  unsigned __int16 v23; // r9
  int v24; // eax
  unsigned __int64 v25; // rsi
  __int64 result; // rax
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+88h] [rbp+10h] BYREF
  int v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v4 = a2[3];
  v5 = a2[4];
  v28 = v4;
  v8 = *(_QWORD *)(a2[1] + 16 * v4) + (v5 << 12);
  v29 = v5;
  v27 = a2[2];
  MiAdvanceFaultList(a2);
  v10 = a2[3];
  v11 = 1LL;
  if ( v10 < v12 )
  {
    LODWORD(v31) = 0;
    v13 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v14 = 256LL;
    v15 = a4 == 0;
    v16 = a1;
    if ( !v15 )
    {
      v17 = *(unsigned int *)(a1 + 1148);
      if ( v17 < 0x100 )
        v14 = (unsigned int)v17;
    }
    if ( a3 )
    {
      v18 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v8 >> 12) + 1;
      if ( v14 <= v18 )
        v18 = v14;
      v14 = v18;
      v19 = *(unsigned int *)(a3 + 52);
      LODWORD(v19) = v19 & 0x7FFFFFFF;
      if ( v19 | ((unsigned __int64)*(unsigned __int8 *)(a3 + 34) << 31) )
      {
        a3 = 0LL;
        LODWORD(v31) = 1;
      }
    }
    if ( v14 > 1 )
    {
      v20 = v31;
      v21 = v32;
      while ( 1 )
      {
        if ( !a3 )
        {
          if ( (v13 & 0xFFF) == 0 )
            goto LABEL_31;
          PteShadow = *(_QWORD *)v13;
          if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v13, *(_QWORD *)v13);
          v31 = PteShadow;
          if ( (PteShadow & 1) != 0 )
          {
LABEL_31:
            v4 = v28;
            v5 = v29;
            break;
          }
          if ( v20 )
          {
            if ( (PteShadow & 0x400) == 0 )
              goto LABEL_31;
          }
          else
          {
            if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset(&v31) )
              goto LABEL_31;
            v24 = (v23 & 4) != 0 && v23 >> 12 == *(_DWORD *)(v16 + 1140);
            if ( v21 != v24 )
              goto LABEL_31;
          }
        }
        v25 = *(_QWORD *)(a2[1] + 16 * v10) + (a2[4] << 12);
        if ( (v25 & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v8 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v11;
          MiAdvanceFaultList(a2);
          v10 = a2[3];
          if ( v10 != v27 )
          {
            v8 = v25;
            v16 = a1;
            if ( v11 < v14 )
              continue;
          }
        }
        goto LABEL_31;
      }
    }
  }
  a2[3] = v4;
  result = (unsigned int)v11;
  a2[4] = v5;
  return result;
}
