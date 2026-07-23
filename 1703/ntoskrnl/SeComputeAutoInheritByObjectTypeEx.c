/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x140093C70
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x140034000 (SeComputeAutoInheritByObjectType.c)
 *     ObpAssignSecurity @ 0x1404F63F4 (ObpAssignSecurity.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 * Callees:
 *     RtlFindAceByType @ 0x1400DBB80 (RtlFindAceByType.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *Index)
{
  _DWORD *v5; // rdi
  char v6; // r12
  int v11; // esi
  int v12; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  int v16; // ebx
  __int64 v17; // rcx
  int v18; // eax
  __int16 v20; // cx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int16 v25; // cx
  ACL *v26; // rcx
  __int64 v27; // rax
  _BYTE *AceByType; // rax

  v5 = Index;
  v6 = 0;
  v11 = 0;
  v12 = 0;
  if ( Index )
  {
    if ( *Index != 8 )
      return 3221225485LL;
    Index[1] = -1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v14 = 0;
  if ( SepMandatoryObjectTypePolicyCount )
  {
    v15 = SepMandatoryObjectTypePolicy;
    while ( a1 != *v15 )
    {
      ++v14;
      v15 += 3;
      if ( v14 >= SepMandatoryObjectTypePolicyCount )
      {
        v16 = 0;
        goto LABEL_13;
      }
    }
    v17 = 3LL * v14;
    v18 = SepMandatoryObjectTypePolicy[2 * v17 + 2];
    if ( (v18 & 1) != 0 )
    {
      v11 = SepMandatoryObjectTypePolicy[2 * v17 + 4];
      v12 = SepMandatoryObjectTypePolicy[2 * v17 + 3];
    }
    if ( (v18 & 2) != 0 )
    {
      v16 = SepMandatoryObjectTypePolicy[2 * v17 + 5];
      v6 = 1;
    }
    else
    {
      v16 = 0;
    }
  }
  else
  {
    v16 = 0;
  }
LABEL_13:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KeLeaveCriticalRegion();
  if ( v12 )
  {
    if ( a2 )
    {
      v20 = *(_WORD *)(a2 + 2);
      if ( (~(_BYTE)v20 & 0x10) == 0 )
      {
        if ( v20 >= 0 )
        {
          v22 = *(_QWORD *)(a2 + 24);
          goto LABEL_24;
        }
        v21 = *(unsigned int *)(a2 + 12);
        if ( (_DWORD)v21 )
        {
          v22 = a2 + v21;
LABEL_24:
          if ( v22 )
          {
            v23 = v22 + 8;
            v24 = 0;
            if ( *(_WORD *)(v22 + 4) )
            {
              while ( *(_BYTE *)v23 != 17 )
              {
                ++v24;
                v23 += *(unsigned __int16 *)(v23 + 2);
                if ( v24 >= *(unsigned __int16 *)(v22 + 4) )
                  goto LABEL_17;
              }
              *(_DWORD *)(v23 + 4) |= v12;
              v11 = 0;
            }
          }
        }
      }
    }
  }
LABEL_17:
  if ( v6 )
  {
    if ( a2 )
    {
      LODWORD(Index) = 0;
      while ( 1 )
      {
        v25 = *(_WORD *)(a2 + 2);
        if ( (~(_BYTE)v25 & 0x10) != 0 )
        {
          v26 = 0LL;
        }
        else if ( v25 >= 0 )
        {
          v26 = *(ACL **)(a2 + 24);
        }
        else
        {
          v27 = *(unsigned int *)(a2 + 12);
          v26 = (_DWORD)v27 ? (ACL *)(a2 + v27) : 0LL;
        }
        AceByType = RtlFindAceByType(v26, 0x11u, (PULONG)&Index);
        if ( AceByType )
        {
          if ( (AceByType[1] & 8) == 0 )
            break;
        }
        LODWORD(Index) = (_DWORD)Index + 1;
        if ( !AceByType )
          goto LABEL_55;
      }
      *((_DWORD *)AceByType + 1) &= v16;
    }
    else
    {
LABEL_55:
      if ( v5 )
      {
        v5[1] = v16;
        v11 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 4) == 0) && (*(_WORD *)(a3 + 2) & 0x400) != 0 )
      v11 |= 1u;
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 0x10) == 0) && (*(_WORD *)(a3 + 2) & 0x800) != 0 )
      v11 |= 2u;
  }
  *a4 = v11;
  return 0LL;
}
