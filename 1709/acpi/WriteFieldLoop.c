/*
 * XREFs of WriteFieldLoop @ 0x1C0025AD0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall WriteFieldLoop(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned int v11; // r14d
  _DWORD *v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v23; // rcx
  __int64 *v24; // rbx
  __int64 v25; // r9
  __int64 *v26; // rax
  __int64 *i; // r8
  __int64 **v28; // rcx
  __int64 *v29; // rdx
  __int64 *v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // r10
  _QWORD *v40; // rax
  __int64 *v41; // rcx
  __int64 **v42; // rax

  v3 = a3;
  if ( a3 )
    v6 = 1;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v6 )
  {
    if ( v6 != 1 )
      return v3;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 56);
    if ( v7 )
    {
      v8 = 128;
      v9 = *(_QWORD *)(a2 + 48);
      v10 = *(_QWORD *)(a2 + 32);
      v11 = *(_DWORD *)(a2 + 60);
      v12 = *(_DWORD **)(a2 + 40);
      if ( v11 > v7 )
        v11 = *(_DWORD *)(a2 + 56);
      if ( v12[5] )
        v8 = v12[7] + 128;
      v13 = 0LL;
      v3 = 0;
      v14 = HeapAlloc(a1 + 480, 1297237576, v8);
      v15 = v14;
      if ( v14 )
      {
        *(_QWORD *)(v14 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v14;
        *(_DWORD *)v14 = 1330004801;
        *(_QWORD *)(v14 + 24) = WriteFieldObj;
        v16 = 1;
        *(_QWORD *)(v15 + 32) = v10;
        *(_QWORD *)(v15 + 40) = v9;
        *(_QWORD *)(v15 + 48) = v9 + v11;
        v17 = (v12[3] & 0xF) - 1;
        if ( v17 <= 3 )
          v16 = 1 << v17;
        v18 = 8 * v16;
        *(_DWORD *)(v15 + 56) = v16;
        v19 = 8 * v16 + v12[2] + v12[1] - 1;
        if ( v18 == 8 )
          v20 = v19 >> 3;
        else
          v20 = v19 / v18;
        *(_DWORD *)(v15 + 60) = v20;
        v21 = 8 * *(_DWORD *)(v15 + 56);
        if ( v21 < 0x40 )
          v13 = 1LL << v21;
        *(_QWORD *)(v15 + 64) = v13 - 1;
        *(_DWORD *)(v15 + 72) = 8 * *(_DWORD *)(v15 + 56) - v12[1];
        *(_DWORD *)(v15 + 76) = v12[1];
        memmove((void *)(v15 + 96), v12, (unsigned int)(v12[7] + 32));
      }
      else
      {
        v3 = -1072431102;
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(a1, -1072431102);
        PrintDebugMessage(153, 0LL, 0LL, 0LL, 0LL);
      }
      *(_DWORD *)(a2 + 56) -= v11;
      *(_QWORD *)(a2 + 48) += v11;
      return v3;
    }
    ++*(_DWORD *)(a2 + 16);
  }
  v23 = *(_QWORD *)(a1 + 416);
  v24 = (_QWORD *)(v23 - 16);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v23 + 8);
  *(_DWORD *)(v23 - 16) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v25 = v24[1];
  v26 = *(__int64 **)(v25 + 40);
  for ( i = (__int64 *)(v25 + 40); v26 != i; v26 = (__int64 *)*v26 )
  {
    if ( v24 + 2 < v26 )
      break;
  }
  v28 = (__int64 **)v26[1];
  v29 = v24 + 2;
  if ( *v28 != v26 )
    __fastfail(3u);
  *v29 = (__int64)v26;
  v24[3] = v28;
  *v28 = v29;
  v26[1] = (__int64)v29;
  if ( (__int64 *)*v29 != i )
  {
    v36 = *((unsigned int *)v24 + 1);
    v37 = *v29 - 16;
    if ( (_QWORD *)v37 == (_QWORD *)((char *)v24 + v36) )
    {
      *((_DWORD *)v24 + 1) = *(_DWORD *)(v37 + 4) + v36;
      v38 = v37 + 16;
      v39 = *(_QWORD *)(v37 + 16);
      if ( *(_QWORD *)(v39 + 8) != v38 || (v40 = *(_QWORD **)(v38 + 8), *v40 != v38) )
        __fastfail(3u);
      *v40 = v39;
      *(_QWORD *)(v39 + 8) = v40;
    }
  }
  v30 = (__int64 *)v24[3];
  if ( v30 != i )
  {
    v34 = *((unsigned int *)v30 - 3);
    v35 = v30 - 2;
    if ( v24 == (__int64 *)((char *)v30 + v34 - 16) )
    {
      *((_DWORD *)v35 + 1) = *((_DWORD *)v24 + 1) + v34;
      v41 = (__int64 *)*v29;
      if ( *(__int64 **)(*v29 + 8) != v29 || (v42 = (__int64 **)v24[3], *v42 != v29) )
        __fastfail(3u);
      *v42 = v41;
      v24 = v35;
      v41[1] = (__int64)v42;
    }
  }
  if ( *(_QWORD *)(v25 + 32) <= (unsigned __int64)v24 + *((unsigned int *)v24 + 1) )
  {
    *(_QWORD *)(v25 + 32) = v24;
    v31 = v24 + 2;
    v32 = *v31;
    if ( *(_QWORD **)(*v31 + 8LL) != v31 || (v33 = (_QWORD *)v31[1], (_QWORD *)*v33 != v31) )
      __fastfail(3u);
    *v33 = v32;
    *(_QWORD *)(v32 + 8) = v33;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return v3;
}
