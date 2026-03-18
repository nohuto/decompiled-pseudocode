/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x140107B00
 * Callers:
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPickClusterForMappedFileFault(
        ULONG_PTR *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  __int64 *v8; // r15
  unsigned int v9; // r12d
  __int64 v10; // rbx
  char v11; // r13
  unsigned __int64 v12; // rsi
  unsigned int v14; // r10d
  ULONG_PTR *v16; // r9
  struct _KTHREAD *CurrentThread; // r11
  unsigned int v18; // edi
  int v19; // ecx
  unsigned __int64 v20; // r14
  __int64 v21; // r10
  int v22; // r15d
  unsigned int v23; // r11d
  unsigned __int64 v24; // r9
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r9
  unsigned __int64 i; // rbp
  __int64 result; // rax
  __int64 v31; // r9
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+88h] [rbp+10h]
  __int64 v38; // [rsp+90h] [rbp+18h]

  v38 = a3;
  v8 = *(__int64 **)(a2 + 200);
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 168);
  v11 = 1;
  v12 = *(_QWORD *)(a2 + 224);
  v14 = *(_DWORD *)(a2 + 180);
  v16 = a1;
  CurrentThread = KeGetCurrentThread();
  v18 = 1;
  v35 = *v8;
  if ( (v10 & 0x400) == 0 )
    goto LABEL_44;
  if ( BYTE5(CurrentThread[1].Queue) )
    goto LABEL_44;
  v19 = *(_DWORD *)(*v8 + 56);
  if ( (v19 & 8) != 0 && BYTE4(CurrentThread[1].Queue) != 2 )
    goto LABEL_44;
  if ( (__int64)v16[728] < 160 )
    goto LABEL_44;
  if ( dword_14036CEA4 )
  {
    --dword_14036CEA4;
    goto LABEL_44;
  }
  if ( v16[720] <= 0x140 )
  {
LABEL_44:
    i = v12;
    v20 = v12;
    goto LABEL_32;
  }
  v20 = a4 + 8LL * *((unsigned int *)v8 + 11) - 8;
  if ( !a3 )
  {
    if ( (v19 & 0x20) != 0 )
    {
      v14 = 4;
      if ( (v8[4] & 4) != 0 )
        v14 = 8;
    }
    else if ( !v14 )
    {
      v14 = LODWORD(CurrentThread[1].WaitListEntry.Flink) + 1;
    }
  }
  v21 = 8LL * v14;
  v37 = v21;
  if ( v20 > v21 + v12 - 8 )
    v20 = v21 + v12 - 8;
  if ( !a3 && (v19 & 0x20000000) != 0 )
  {
    v32 = MiStartingOffset(v8, v12, a5);
    v22 = dword_14036CEAC;
    v23 = v32;
    a3 = v38;
    v21 = v37;
    v33 = v32 & (dword_14036CEAC - 1);
    if ( v20 > v12 + 8 * (((unsigned int)(dword_14036CEAC - v33) >> 12) - 1LL) )
      v20 = v12 + 8 * (((unsigned int)(dword_14036CEAC - v33) >> 12) - 1LL);
  }
  else
  {
    v22 = dword_14036CEAC;
    v23 = 0;
  }
  if ( v20 > (v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v20 = v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v24 = v20;
  if ( v20 > v12 )
  {
    do
    {
      if ( MI_READ_PTE_LOCK_FREE(v24) == v10 )
      {
        ++v18;
      }
      else if ( v25 == v20 )
      {
        v20 -= 8LL;
      }
      v24 = v25 - 8;
    }
    while ( v24 > v12 );
    a3 = v38;
  }
  v26 = v20 - v21 + 8;
  if ( v26 < a4 )
    v26 = a4;
  v27 = v12 & 0xFFFFFFFFFFFFF000uLL;
  if ( v26 >= (v12 & 0xFFFFFFFFFFFFF000uLL) )
    v27 = v26;
  if ( a3 || (*(_BYTE *)(a2 + 189) & 0x20) != 0 )
  {
    v28 = v12;
  }
  else
  {
    v28 = v27;
    if ( (*(_DWORD *)(v35 + 56) & 0x20000000) != 0 )
    {
      v34 = (v23 >> 12) & ((unsigned int)(v22 - 1) >> 12);
      if ( v27 < v12 - 8 * v34 )
        v28 = v12 - 8 * v34;
    }
  }
  for ( i = v28; v28 < v12; v28 = v31 + 8 )
  {
    if ( MI_READ_PTE_LOCK_FREE(v28) == v10 )
    {
      ++v18;
    }
    else if ( v31 == i )
    {
      i += 8LL;
    }
  }
  v16 = a1;
LABEL_32:
  if ( a6 != -1 )
    --v18;
  if ( v18 )
  {
    if ( a6 == -1 )
      v11 = 3;
    v9 = MiObtainFaultCharges(v16, v18, v11);
  }
  result = v9 + 1;
  if ( a6 == -1 )
    result = v9;
  *a7 = i;
  *a8 = v20;
  return result;
}
