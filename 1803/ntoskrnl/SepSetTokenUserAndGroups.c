/*
 * XREFs of SepSetTokenUserAndGroups @ 0x140792AD8
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     SepDuplicateSid @ 0x1404D2FD0 (SepDuplicateSid.c)
 *     SepCompareSidValuesBlocks @ 0x1407926AC (SepCompareSidValuesBlocks.c)
 *     SepCreateSidValuesBlock @ 0x140792750 (SepCreateSidValuesBlock.c)
 *     SepDereferenceSidValuesBlock @ 0x140792980 (SepDereferenceSidValuesBlock.c)
 *     SepLogTokenSidManagement @ 0x140794224 (SepLogTokenSidManagement.c)
 */

__int64 __fastcall SepSetTokenUserAndGroups(__int64 a1, unsigned __int8 **a2, unsigned int a3, __int64 a4, int a5)
{
  char v5; // r14
  char v6; // r15
  int v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  unsigned int v14; // ebp
  __int64 v15; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  PVOID v21; // rbx
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // r9
  unsigned int v26; // edx
  unsigned __int8 **v27; // r11
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 **v33; // [rsp+88h] [rbp+10h]

  v33 = a2;
  P = 0LL;
  v5 = 0;
  v31[0] = 0LL;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 208);
  v8 = -1;
  if ( v7 != -1 )
  {
    v8 = v7 - 1;
    result = SepDuplicateSid(*(unsigned __int8 **)(a4 + 16LL * (unsigned int)(v7 - 1)), v31);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 1120) = v31[0];
  }
  result = SepCreateSidValuesBlock(&P, a2, a3, a4, a5, v8);
  v14 = result;
  if ( (int)result >= 0 )
  {
    v15 = *(_QWORD *)(a1 + 216);
    if ( *(_QWORD *)(v15 + 120) )
      goto LABEL_14;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 216) + 104LL, 0LL);
    v20 = *(_QWORD *)(a1 + 216);
    if ( !*(_QWORD *)(v20 + 120) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)P + 1) <= 1 )
        __fastfail(0xEu);
      v5 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) = P;
      v20 = *(_QWORD *)(a1 + 216);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 104), v17, v18, v19);
    KeAbPostRelease(v20 + 104);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v15 = *(_QWORD *)(a1 + 216);
    if ( !v5 )
    {
LABEL_14:
      v21 = P;
      v6 = SepCompareSidValuesBlocks((__int64)P, *(_QWORD *)(v15 + 120));
    }
    else
    {
      v21 = P;
    }
    v22 = *(_QWORD *)(v15 + 120);
    if ( v5 )
    {
      v23 = 0;
    }
    else
    {
      if ( v6 )
      {
        SepLogTokenSidManagement(2, (_DWORD)v21, v22, a1, 0LL);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) + 8LL)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(a1 + 1128) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
        SepDereferenceSidValuesBlock((volatile signed __int64 *)P, a1, 0LL);
        goto LABEL_23;
      }
      v23 = 1;
    }
    SepLogTokenSidManagement(v23, (_DWORD)v21, v22, a1, 0LL);
    *(_QWORD *)(a1 + 1128) = v21;
LABEL_23:
    v24 = *(_QWORD *)(a1 + 1128);
    *(_QWORD *)(a1 + 152) = a1 + 1168;
    v25 = v24 + 24;
    v26 = 0;
    *(_DWORD *)(a1 + 124) = a3 + 1;
    if ( a3 != -1 )
    {
      v27 = v33;
      do
      {
        v28 = *(_QWORD *)(a1 + 152);
        v29 = 2LL * v26;
        if ( v26 == *(_DWORD *)(a1 + 208) )
        {
          *(_QWORD *)(v28 + 16LL * v26) = *(_QWORD *)(a1 + 1120);
        }
        else
        {
          *(_QWORD *)(v28 + 16LL * v26) = v25;
          v25 += (4 * *(unsigned __int8 *)(v25 + 1) + 11) & 0xFFFFFFFC;
        }
        if ( v26 )
          v30 = *(_DWORD *)(a4 + 16LL * (v26 - 1) + 8);
        else
          v30 = *((_DWORD *)v27 + 2);
        ++v26;
        *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v29 + 8) = v30;
      }
      while ( v26 < *(_DWORD *)(a1 + 124) );
    }
    return v14;
  }
  return result;
}
