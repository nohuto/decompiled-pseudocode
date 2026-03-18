/*
 * XREFs of CcInitializePartition @ 0x140161450
 * Callers:
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 * Callees:
 *     CcInitializeAsyncRead @ 0x1401618DC (CcInitializeAsyncRead.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MmGetNumberOfPhysicalPages @ 0x140437454 (MmGetNumberOfPhysicalPages.c)
 */

bool __fastcall CcInitializePartition(_DWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  _DWORD *v4; // rbx
  _DWORD *v5; // rsi
  unsigned __int64 *v6; // r14
  unsigned __int64 NumberOfPhysicalPages; // rax
  __int64 v8; // rcx
  int v9; // r9d
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r9d
  unsigned int v13; // ebp
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rax
  _QWORD *v18; // rcx
  unsigned int v19; // ebx
  _DWORD *PoolWithTag; // rax
  _QWORD *v21; // rcx
  PVOID v22; // rax
  PVOID v23; // rbx
  unsigned __int64 v25; // rax

  memset(a1, 0, 0x3C0uLL);
  *a1 = 62915319;
  v2 = a1 + 54;
  *((_WORD *)a1 + 68) = 0;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 16) = 0LL;
  *((_QWORD *)a1 + 23) = a1 + 44;
  *((_QWORD *)a1 + 22) = a1 + 44;
  *((_QWORD *)a1 + 21) = a1 + 40;
  *((_QWORD *)a1 + 20) = a1 + 40;
  *((_QWORD *)a1 + 31) = a1 + 60;
  *((_QWORD *)a1 + 30) = a1 + 60;
  *((_QWORD *)a1 + 25) = a1 + 48;
  *((_QWORD *)a1 + 24) = a1 + 48;
  a1[52] = 2048;
  v3 = (_QWORD *)*((_QWORD *)a1 + 25);
  if ( (_DWORD *)*v3 != a1 + 48 )
    __fastfail(3u);
  *v2 = a1 + 48;
  v4 = a1 + 70;
  *((_QWORD *)a1 + 28) = v3;
  v5 = a1 + 90;
  *v3 = v2;
  v6 = (unsigned __int64 *)(a1 + 174);
  *((_QWORD *)a1 + 25) = v2;
  a1[58] = 2048;
  *((_QWORD *)a1 + 36) = a1 + 70;
  *((_QWORD *)a1 + 35) = a1 + 70;
  *((_QWORD *)a1 + 38) = a1 + 74;
  *((_QWORD *)a1 + 37) = a1 + 74;
  *((_QWORD *)a1 + 40) = a1 + 78;
  *((_QWORD *)a1 + 39) = a1 + 78;
  *((_QWORD *)a1 + 42) = a1 + 82;
  *((_QWORD *)a1 + 41) = a1 + 82;
  *((_QWORD *)a1 + 44) = a1 + 86;
  *((_QWORD *)a1 + 43) = a1 + 86;
  *((_QWORD *)a1 + 46) = a1 + 90;
  *((_QWORD *)a1 + 45) = a1 + 90;
  *((_QWORD *)a1 + 84) = 0LL;
  *((_QWORD *)a1 + 85) = 0LL;
  *((_QWORD *)a1 + 86) = 0LL;
  memset(a1 + 174, 0, 0x38uLL);
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0LL);
  if ( (_BYTE)dword_1403E3134 )
  {
    *((_QWORD *)a1 + 88) = NumberOfPhysicalPages >> 1;
    *((_QWORD *)a1 + 89) = (unsigned __int64)MmGetNumberOfPhysicalPages(v8) >> 3;
    a1[95] = v9 - 1;
    *v6 = v10;
  }
  else
  {
    v25 = NumberOfPhysicalPages >> 3;
    *((_QWORD *)a1 + 89) = v25;
    *((_QWORD *)a1 + 88) = v25;
    *v6 = v25;
    a1[95] = 1;
  }
  a1[186] = 10;
  *((_QWORD *)a1 + 92) = 0LL;
  v11 = MmGetNumberOfPhysicalPages(0LL);
  a1[68] = v12 - 1;
  v13 = 0;
  v14 = 5 * v11;
  v15 = *v6;
  *((_QWORD *)a1 + 91) = 2 * v14;
  v16 = (v15 >> 1) + (v15 >> 2);
  if ( v16 > 0xFFFFFFFF )
    LODWORD(v16) = -1;
  a1[180] = v16;
  if ( v12 == 1 )
  {
LABEL_10:
    v19 = 0;
    if ( a1[95] )
    {
      while ( 1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
        if ( !PoolWithTag )
          break;
        PoolWithTag[8] = 2;
        *((_QWORD *)PoolWithTag + 7) = a1;
        PoolWithTag[10] = v19;
        PoolWithTag[9] = -1;
        *((_QWORD *)PoolWithTag + 2) = CcWorkerThread;
        *((_QWORD *)PoolWithTag + 3) = PoolWithTag;
        *(_QWORD *)PoolWithTag = 0LL;
        v21 = (_QWORD *)*((_QWORD *)a1 + 46);
        if ( (_DWORD *)*v21 != v5 )
          __fastfail(3u);
        *(_QWORD *)PoolWithTag = v5;
        ++v19;
        *((_QWORD *)PoolWithTag + 1) = v21;
        *v21 = PoolWithTag;
        *((_QWORD *)a1 + 46) = PoolWithTag;
        if ( v19 >= a1[95] )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v22 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(a1[95] + 1), 0x70546343u);
      v23 = v22;
      if ( v22 )
      {
        memset(v22, 0, 8LL * (unsigned int)(a1[95] + 1));
        *((_QWORD *)a1 + 94) = v23;
        memset(a1 + 134, 0, 0x88uLL);
        *((_WORD *)a1 + 204) = 1;
        *((_BYTE *)a1 + 410) = 6;
        a1[103] = 0;
        *((_QWORD *)a1 + 53) = a1 + 104;
        *((_QWORD *)a1 + 52) = a1 + 104;
        *((_WORD *)a1 + 216) = 1;
        *((_BYTE *)a1 + 434) = 6;
        a1[109] = 0;
        *((_QWORD *)a1 + 56) = a1 + 110;
        *((_QWORD *)a1 + 55) = a1 + 110;
        *((_WORD *)a1 + 228) = 1;
        *((_BYTE *)a1 + 458) = 6;
        a1[115] = 0;
        *((_QWORD *)a1 + 59) = a1 + 116;
        *((_QWORD *)a1 + 58) = a1 + 116;
        *((_WORD *)a1 + 240) = 1;
        *((_BYTE *)a1 + 482) = 6;
        a1[121] = 0;
        *((_QWORD *)a1 + 62) = a1 + 122;
        *((_QWORD *)a1 + 61) = a1 + 122;
        *((_WORD *)a1 + 252) = 1;
        *((_BYTE *)a1 + 506) = 6;
        a1[127] = 0;
        *((_QWORD *)a1 + 65) = a1 + 128;
        *((_QWORD *)a1 + 64) = a1 + 128;
        *((_QWORD *)a1 + 70) = CcScanDpc;
        a1[134] = 275;
        *((_QWORD *)a1 + 71) = a1;
        *((_QWORD *)a1 + 74) = 0LL;
        *((_QWORD *)a1 + 69) = 0LL;
        *((_QWORD *)a1 + 75) = 0LL;
        *((_BYTE *)a1 + 600) = 8;
        *((_QWORD *)a1 + 77) = a1 + 152;
        *((_QWORD *)a1 + 76) = a1 + 152;
        *((_QWORD *)a1 + 78) = 0LL;
        *((_QWORD *)a1 + 82) = 0LL;
        a1[66] = 0;
        *((_BYTE *)a1 + 268) = 0;
        *((_QWORD *)a1 + 104) = 0LL;
        *((_QWORD *)a1 + 103) = a1 + 204;
        *((_QWORD *)a1 + 102) = a1 + 204;
        return (unsigned __int8)CcInitializeAsyncRead(a1) != 0;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v17 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
      if ( !v17 )
        break;
      v17[8] = 1;
      *((_QWORD *)v17 + 7) = a1;
      v17[10] = v13;
      v17[9] = -1;
      *((_QWORD *)v17 + 2) = CcWorkerThread;
      *((_QWORD *)v17 + 3) = v17;
      *(_QWORD *)v17 = 0LL;
      v18 = (_QWORD *)*((_QWORD *)a1 + 36);
      if ( (_DWORD *)*v18 != v4 )
        __fastfail(3u);
      *(_QWORD *)v17 = v4;
      ++v13;
      *((_QWORD *)v17 + 1) = v18;
      *v18 = v17;
      *((_QWORD *)a1 + 36) = v17;
      if ( v13 >= a1[68] )
        goto LABEL_10;
    }
  }
  return 0;
}
