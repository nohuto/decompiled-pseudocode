/*
 * XREFs of ExpUpdateDebugInfo @ 0x140756D18
 * Callers:
 *     ExHandleLogBadReference @ 0x140283E9C (ExHandleLogBadReference.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     ExDestroyHandle @ 0x1404FBEAC (ExDestroyHandle.c)
 *     ExDupHandleTable @ 0x140506C10 (ExDupHandleTable.c)
 *     ExCreateHandleEx @ 0x140507F60 (ExCreateHandleEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     RtlWalkFrameChain @ 0x1400D5800 (RtlWalkFrameChain.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExReferenceHandleDebugInfo @ 0x1405F00C0 (ExReferenceHandleDebugInfo.c)
 *     ExDereferenceHandleDebugInfo @ 0x1407567C8 (ExDereferenceHandleDebugInfo.c)
 */

void __fastcall ExpUpdateDebugInfo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rbx
  char v10; // si
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r11d
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  volatile signed __int32 *v20; // rdx
  volatile signed __int32 *v21; // rax
  unsigned int v22; // edx
  int v23; // eax
  volatile signed __int32 *v24; // r14
  ULONG v25; // edi
  ULONG v26; // edi
  ULONG v27; // eax

  v8 = ExReferenceHandleDebugInfo(a1);
  v9 = v8;
  if ( v8 )
  {
    v10 = 0;
    if ( (v8[2] & 3) != 0 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(v8 + 4));
      v10 = 1;
    }
    v11 = *((_DWORD *)v9 + 2);
    if ( (v11 & 1) != 0 )
    {
      *((_DWORD *)v9 + 2) = v11 & 0x3FFFFFFE | 0x80000000;
      *((_DWORD *)v9 + 18) = 0;
      memset((void *)(v9 + 20), 0, 160LL * *((unsigned int *)v9 + 1) + 80);
    }
    v12 = *((_DWORD *)v9 + 2);
    if ( (v12 & 2) != 0 && a4 == 2 )
    {
      v13 = *((_DWORD *)v9 + 18);
      v14 = v13;
      if ( (v12 & 0x40000000) != 0 )
        v14 = *((_DWORD *)v9 + 1);
      v15 = 1;
      if ( v14 )
      {
        v16 = *((_DWORD *)v9 + 1);
        while ( 1 )
        {
          v17 = v15 % v16;
          if ( v9[40 * (unsigned int)v17 + 26] == 1 && *(_QWORD *)&v9[40 * v17 + 24] == a3 )
            break;
          if ( ++v15 > v14 )
            goto LABEL_25;
        }
        *((_DWORD *)v9 + 18) = v13 - 1;
        v18 = (v13 - 1) % v16;
        if ( (_DWORD)v18 )
        {
          v19 = 40 * v18;
          v20 = &v9[40 * (v15 % v16)];
          v21 = &v9[v19];
          *((_OWORD *)v20 + 5) = *((_OWORD *)v21 + 5);
          *((_OWORD *)v20 + 6) = *((_OWORD *)v21 + 6);
          *((_OWORD *)v20 + 7) = *((_OWORD *)v21 + 7);
          *((_OWORD *)v20 + 8) = *((_OWORD *)v21 + 8);
          *((_OWORD *)v20 + 9) = *((_OWORD *)v21 + 9);
          *((_OWORD *)v20 + 10) = *((_OWORD *)v21 + 10);
          *((_OWORD *)v20 + 11) = *((_OWORD *)v21 + 11);
          *((_OWORD *)v20 + 12) = *((_OWORD *)v21 + 12);
          *((_OWORD *)v20 + 13) = *((_OWORD *)v21 + 13);
          *((_OWORD *)v20 + 14) = *((_OWORD *)v21 + 14);
        }
      }
    }
    else
    {
      v22 = (unsigned int)_InterlockedIncrement(v9 + 18) % *((_DWORD *)v9 + 1);
      if ( !v22 )
      {
        v23 = *((_DWORD *)v9 + 2) | 0x40000000;
        *((_DWORD *)v9 + 2) = v23;
        if ( (v23 & 4) != 0 )
          __debugbreak();
      }
      v24 = &v9[40 * v22 + 20];
      *(_OWORD *)v24 = *(_OWORD *)(a2 + 1592);
      *((_QWORD *)v24 + 2) = a3;
      *((_DWORD *)v24 + 6) = a4;
      v25 = RtlWalkFrameChain((PVOID *)v24 + 4, 0x10u, 0x300u);
      if ( v25 <= 3 )
        v26 = 0;
      else
        v26 = v25 - 3;
      v27 = RtlWalkFrameChain((PVOID *)&v24[2 * v26 + 8], 16 - v26, 1u);
      memset((void *)&v24[2 * v27 + 8 + 2 * v26], 0, 8LL * (16 - (v27 + v26)));
    }
LABEL_25:
    if ( v10 )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 4));
    ExDereferenceHandleDebugInfo(a1, v9);
  }
}
