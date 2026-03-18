/*
 * XREFs of MiCreateImageOrDataSection @ 0x1404C24F0
 * Callers:
 *     MiCreateSection @ 0x1404C32E0 (MiCreateSection.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14004B580 (ObFastReplaceObject.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14005A3D8 (MiReferenceControlAreaForCacheManager.c)
 *     ObDereferenceObjectEx @ 0x14005A5F0 (ObDereferenceObjectEx.c)
 *     IoGetTopLevelIrp @ 0x14005C190 (IoGetTopLevelIrp.c)
 *     IoSetTopLevelIrp @ 0x14005C1B0 (IoSetTopLevelIrp.c)
 *     IoGetFileMemoryPartitionInformation @ 0x14005C834 (IoGetFileMemoryPartitionInformation.c)
 *     MiGetControlAreaPartition @ 0x14006278C (MiGetControlAreaPartition.c)
 *     IoAllowExecution @ 0x14006510C (IoAllowExecution.c)
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     MiForceSectionClosed @ 0x1400BCDCC (MiForceSectionClosed.c)
 *     CcWaitForUninitializeCacheMap @ 0x1400BF4BC (CcWaitForUninitializeCacheMap.c)
 *     MiZeroSectionObjectPointer @ 0x1400D24CC (MiZeroSectionObjectPointer.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiDereferenceControlAreaBySection @ 0x1400E50D0 (MiDereferenceControlAreaBySection.c)
 *     ObReferenceObjectExWithTag @ 0x1400EB030 (ObReferenceObjectExWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     MiReferenceControlArea @ 0x1401253B0 (MiReferenceControlArea.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 *     MiShareExistingControlArea @ 0x1404C11C4 (MiShareExistingControlArea.c)
 *     MiCallCreateSectionFilters @ 0x1404C18A4 (MiCallCreateSectionFilters.c)
 *     MiDereferenceFailedControlArea @ 0x140584664 (MiDereferenceFailedControlArea.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // esi
  char v4; // r12
  __int64 v5; // rbp
  NTSTATUS v6; // eax
  _QWORD **v7; // r14
  int NewSection; // edi
  __int64 *FileMemoryPartitionInformation; // rax
  bool v10; // zf
  struct _KTHREAD *CurrentThread; // rbp
  int v12; // eax
  _QWORD *v13; // r15
  int v15; // ecx
  __int64 **v16; // rdx
  __int64 v17; // rax
  int v18; // edx
  __int64 **v19; // rax
  __int64 *v20; // rcx
  _QWORD *v21; // r8
  char v22; // dl
  int v23; // ecx
  __int64 v24; // rcx
  _QWORD *v25; // r13
  __int64 v26; // r8
  ULONG_PTR **v27; // r9
  unsigned int v28; // ecx
  __int64 v29; // rcx
  signed __int64 v30; // rax
  _QWORD v31[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v32; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v33; // [rsp+F8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+100h] [rbp+18h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0;
  v4 = 1;
  if ( (v1 & 0x80000) != 0 )
    return 3221225716LL;
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v7 = *(_QWORD ***)(a1 + 48);
    goto LABEL_6;
  }
  if ( v1 >= 0 )
  {
    v6 = ObReferenceObjectByHandle(
           *(HANDLE *)(a1 + 40),
           MmMakeFileAccess[*(_DWORD *)(a1 + 32) & 7],
           (POBJECT_TYPE)IoFileObjectType,
           *(_BYTE *)(a1 + 72),
           &Object,
           0LL);
    v7 = (_QWORD **)Object;
    NewSection = v6;
    if ( v6 < 0 )
      goto LABEL_20;
    v2 = 1;
    if ( !*((_QWORD *)Object + 5) )
    {
      NewSection = -1073741792;
      goto LABEL_23;
    }
LABEL_6:
    FileMemoryPartitionInformation = (__int64 *)IoGetFileMemoryPartitionInformation((__int64)v7);
    if ( FileMemoryPartitionInformation )
    {
      if ( !PsReferencePartitionSafe(*FileMemoryPartitionInformation) )
      {
        NewSection = -1073740640;
        goto LABEL_21;
      }
      v28 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x10000) != 0 && *v27 != &MiSystemPartition )
      {
        v28 &= ~0x10000u;
        *(_DWORD *)a1 = v28;
      }
      *(_QWORD *)(a1 + 176) = v27;
      if ( (*(_DWORD *)(v26 + 8) & 1) != 0 )
        *(_DWORD *)a1 = v28 | 0x200000;
    }
    if ( !v5 )
    {
      ObfReferenceObject(v7);
      ++v2;
LABEL_9:
      *(_QWORD *)(a1 + 56) = v7;
      memset(v31, 0, sizeof(v31));
      LODWORD(v31[7]) = 2;
      if ( v7 )
        v31[8] = v7;
      else
        v31[8] = 0LL;
      v10 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
      v33 = 0LL;
      if ( !v10 )
      {
        if ( (*(_DWORD *)a1 & 0x400) != 0 && !IoAllowExecution((__int64)v7) )
        {
          NewSection = -1073741790;
          goto LABEL_21;
        }
        CcWaitForUninitializeCacheMap((__int64)v7);
        if ( (*(_DWORD *)a1 & 0x400) != 0 )
        {
          v22 = *(_BYTE *)(a1 + 24);
          if ( (v22 & 0x10) != 0 )
          {
            v23 = *(_DWORD *)a1 | 0x10;
            *(_DWORD *)a1 = v23;
            if ( (v22 & 0x30) == 0x30 )
              *(_DWORD *)a1 = v23 | 0x1000;
            *(_BYTE *)(a1 + 24) = v22 & 0xF;
          }
        }
        v4 = 2;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      while ( 1 )
      {
        if ( (*(_DWORD *)a1 & 1) == 0 )
        {
          NewSection = MiCallCreateSectionFilters((unsigned int *)a1);
          if ( NewSection < 0 )
            goto LABEL_46;
          *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
          IoSetTopLevelIrp((PIRP)1);
          *(_DWORD *)a1 |= 2u;
        }
        v12 = MiReferenceControlArea(a1, (__int64)v31, (__int64 *)&v32);
        NewSection = v12;
        if ( v12 >= 0 )
          break;
        if ( v12 == -1073740277 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_21;
        }
        if ( v12 == -1073740682 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_80;
        }
      }
      v13 = v32;
      *(_QWORD *)(a1 + 64) = v32;
      if ( (v13[7] & 2) != 0 )
      {
        NewSection = MiCreateNewSection(a1, (__int64 *)&v33);
        if ( NewSection < 0 )
        {
          if ( v33 )
          {
            v13 = (_QWORD *)*v33;
            v32 = v13;
            *(_QWORD *)(a1 + 64) = v13;
          }
          v25 = (_QWORD *)MiZeroSectionObjectPointer((__int64)v7, (__int64)v13, *(_DWORD *)(a1 + 16));
          --v2;
          if ( v13 == v31 )
          {
            ObfDereferenceObject(v7);
            v7 = (_QWORD **)ObFastReplaceObject(v13 + 8, 0LL);
          }
          else
          {
            _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition((__int64)v13) + 1288));
            MiDereferenceControlAreaBySection((__int64)v32, 1u);
          }
          MiReleaseControlAreaWaiters(v25);
        }
        else
        {
          v24 = *v33;
          *(_QWORD *)(a1 + 64) = *v33;
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v24) + 1288));
          v2 -= 2;
        }
LABEL_46:
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_20;
      }
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      NewSection = MiShareExistingControlArea(a1);
      if ( NewSection < 0 )
        MiDereferenceFailedControlArea(a1);
      else
        --v2;
      goto LABEL_20;
    }
    v15 = *(_DWORD *)(a1 + 16) & 0x1000000;
    if ( v15 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        NewSection = -1073741580;
        goto LABEL_21;
      }
      if ( **(_QWORD **)(a1 + 152) )
      {
        NewSection = -1073741582;
        goto LABEL_21;
      }
    }
    v16 = *(__int64 ***)(v5 + 40);
    if ( !v16 )
    {
      NewSection = -1073741792;
      goto LABEL_21;
    }
    v17 = *(_QWORD *)(a1 + 8);
    if ( v17 && (*(_DWORD *)(v17 + 24) & 0x200) != 0 )
    {
      *(_BYTE *)(a1 + 72) = 0;
      v16 = *(__int64 ***)(v5 + 40);
    }
    if ( v15 )
      v16 += 2;
    NewSection = -1073741823;
    v32 = *v16;
    if ( !v32 || (NewSection = MiReferenceControlAreaForCacheManager(a1), NewSection < 0) )
    {
      ObReferenceObjectExWithTag((ULONG_PTR)v7, 2);
      v2 += 2;
      if ( NewSection == -1073740682 )
      {
LABEL_80:
        if ( (unsigned int)MiForceSectionClosed(v7[5], v4) > 1 && (*(_DWORD *)a1 & 0x800000) != 0 )
        {
          ++dword_1403CBD98;
          NewSection = -1073740277;
        }
LABEL_21:
        if ( !v2 )
          return (unsigned int)NewSection;
LABEL_23:
        ObDereferenceObjectEx((ULONG_PTR)v7, v2);
        return (unsigned int)NewSection;
      }
      goto LABEL_9;
    }
    v18 = *(_DWORD *)a1 | 4;
    v10 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_DWORD *)a1 = v18;
    v19 = *(__int64 ***)(v5 + 40);
    if ( v10 )
    {
      v20 = *v19;
      v21 = *(_QWORD **)(a1 + 152);
      v32 = *v19;
      *(_QWORD *)(a1 + 128) = *v21;
      if ( (v18 & 1) != 0 || *v21 )
        goto LABEL_34;
      v29 = *v20;
    }
    else
    {
      v32 = v19[2];
      v29 = *v32;
    }
    v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 24), -1LL, -1LL);
    v20 = v32;
    *(_QWORD *)(a1 + 128) = v30;
LABEL_34:
    *(_QWORD *)(a1 + 64) = v20;
LABEL_20:
    if ( NewSection != -1073740682 )
      goto LABEL_21;
    goto LABEL_80;
  }
  return 3221225716LL;
}
