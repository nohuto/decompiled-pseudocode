/*
 * XREFs of SepSetTokenUserAndGroups @ 0x14072EA34
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     SepDuplicateSid @ 0x14049C980 (SepDuplicateSid.c)
 *     SepCompareSidValuesBlocks @ 0x14072E60C (SepCompareSidValuesBlocks.c)
 *     SepCreateSidValuesBlock @ 0x14072E6B0 (SepCreateSidValuesBlock.c)
 *     SepDereferenceSidValuesBlock @ 0x14072E8DC (SepDereferenceSidValuesBlock.c)
 *     SepLogTokenSidManagement @ 0x140730934 (SepLogTokenSidManagement.c)
 */

__int64 __fastcall SepSetTokenUserAndGroups(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  char v11; // r14
  __int64 result; // rax
  unsigned int v13; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rsi
  int v16; // ecx
  PVOID v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rsi
  char v20; // al
  __int64 v21; // r10
  __int64 v22; // r10
  unsigned int v23; // r8d
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 208);
  v6 = -1;
  P = 0LL;
  v26 = 0LL;
  v11 = 0;
  if ( v5 != -1 )
  {
    v6 = v5 - 1;
    result = SepDuplicateSid(*(unsigned __int8 **)(a4 + 16LL * (unsigned int)(v5 - 1)), &v26);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 1120) = v26;
  }
  result = SepCreateSidValuesBlock(&P, (unsigned __int8 **)a2, a3, a4, a5, v6);
  v13 = result;
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
      goto LABEL_14;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 216) + 104LL, 0LL);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)P + 1) <= 1 )
        __fastfail(0xEu);
      v11 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) = P;
    }
    v15 = *(_QWORD *)(a1 + 216);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 104));
    KeAbPostRelease(v15 + 104);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v11 )
    {
LABEL_14:
      v17 = P;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
      v20 = SepCompareSidValuesBlocks((__int64)P, v19);
      LODWORD(v18) = v19;
      if ( v20 )
      {
        SepLogTokenSidManagement(2, (_DWORD)v17, v19, a1, 0LL);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) + 8LL)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(a1 + 1128) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
        SepDereferenceSidValuesBlock((volatile signed __int64 *)P, a1, 0LL);
        goto LABEL_20;
      }
      v16 = 1;
    }
    else
    {
      v16 = 0;
      v17 = P;
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
    }
    SepLogTokenSidManagement(v16, (_DWORD)v17, v18, a1, 0LL);
    *(_QWORD *)(a1 + 1128) = v17;
LABEL_20:
    v21 = *(_QWORD *)(a1 + 1128);
    *(_QWORD *)(a1 + 152) = a1 + 1168;
    v22 = v21 + 24;
    v23 = 0;
    *(_DWORD *)(a1 + 124) = a3 + 1;
    if ( a3 != -1 )
    {
      do
      {
        v24 = 16LL * v23;
        if ( v23 == *(_DWORD *)(a1 + 208) )
        {
          *(_QWORD *)(v24 + *(_QWORD *)(a1 + 152)) = *(_QWORD *)(a1 + 1120);
        }
        else
        {
          *(_QWORD *)(v24 + *(_QWORD *)(a1 + 152)) = v22;
          v22 += (4 * *(unsigned __int8 *)(v22 + 1) + 11) & 0xFFFFFFFC;
        }
        v25 = *(_QWORD *)(a1 + 152);
        if ( v23 )
          *(_DWORD *)(v25 + v24 + 8) = *(_DWORD *)(a4 + 16LL * (v23 - 1) + 8);
        else
          *(_DWORD *)(v25 + 8) = *(_DWORD *)(a2 + 8);
        ++v23;
      }
      while ( v23 < *(_DWORD *)(a1 + 124) );
    }
    return v13;
  }
  return result;
}
