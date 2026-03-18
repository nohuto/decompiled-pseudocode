/*
 * XREFs of SepValidateAndCopyGlobalEntry @ 0x14025F760
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x14001ABFC (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140089720 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x14025F4D4 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepValidateAndCopyGlobalEntry(__int64 a1, _QWORD *a2)
{
  int ProcUniqueLuidAndIndexFromAttributeInfo; // edi
  _DWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  __int64 SingletonEntryFromIndexNumber; // rsi
  KIRQL v9; // bp
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(a1, &v13, &v14);
  if ( ProcUniqueLuidAndIndexFromAttributeInfo >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74416553u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0;
      PoolWithTag[6] = 0;
      v6 = PoolWithTag + 2;
      v7 = v13;
      v6[1] = v6;
      *v6 = v6;
      v5[5] = v5 + 4;
      v5[4] = v5 + 4;
      SingletonEntryFromIndexNumber = SepGetSingletonEntryFromIndexNumber(v7);
      v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
      if ( *(_QWORD *)(SingletonEntryFromIndexNumber + 8) == v14 )
      {
        v10 = *(_QWORD *)(SingletonEntryFromIndexNumber + 16);
        if ( v10 )
        {
          v11 = AuthzBasepDuplicateSecurityAttributes(v10, v5, 0);
          *a2 = v5;
          ProcUniqueLuidAndIndexFromAttributeInfo = v11;
          v5 = 0LL;
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
        ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
      }
      __writecr8(v9);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x74416553u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)ProcUniqueLuidAndIndexFromAttributeInfo;
}
