/*
 * XREFs of MiCreateImageOrDataSection @ 0x14049BB80
 * Callers:
 *     MiCreateSection @ 0x14049B390 (MiCreateSection.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     IoAllowExecution @ 0x14002462C (IoAllowExecution.c)
 *     MiReferenceControlArea @ 0x1400662F8 (MiReferenceControlArea.c)
 *     IoGetFileMemoryPartitionInformation @ 0x140066A14 (IoGetFileMemoryPartitionInformation.c)
 *     IoSetTopLevelIrp @ 0x140067110 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140067130 (IoGetTopLevelIrp.c)
 *     ObDereferenceObjectEx @ 0x140067B38 (ObDereferenceObjectEx.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ObReferenceObjectExWithTag @ 0x14008AAD0 (ObReferenceObjectExWithTag.c)
 *     MiDereferenceControlAreaBySection @ 0x1400A2854 (MiDereferenceControlAreaBySection.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14011C6D4 (MiReferenceControlAreaForCacheManager.c)
 *     CcWaitForUninitializeCacheMap @ 0x140121200 (CcWaitForUninitializeCacheMap.c)
 *     MiZeroSectionObjectPointer @ 0x140131294 (MiZeroSectionObjectPointer.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiForceSectionClosed @ 0x1402111D8 (MiForceSectionClosed.c)
 *     MiCallCreateSectionFilters @ 0x14049C2D8 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x14049C820 (MiShareExistingControlArea.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 *     MiDereferenceFailedControlArea @ 0x14059ECFC (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // r14d
  char v4; // r13
  __int64 v6; // rsi
  _QWORD **v7; // r15
  __int64 FileMemoryPartitionInformation; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  int v13; // ecx
  int v14; // edi
  NTSTATUS v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  int v19; // r8d
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  signed __int64 v23; // rax
  bool v24; // zf
  char v25; // dl
  int v26; // ecx
  struct _KTHREAD *CurrentThread; // rbp
  int v28; // eax
  _QWORD *v29; // rsi
  __int64 v30; // rcx
  _QWORD *v31; // r12
  _QWORD v32[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v33; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v34; // [rsp+F8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+100h] [rbp+18h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  v3 = 0;
  v4 = 1;
  if ( (v1 & 0x80000) != 0 )
    return 3221225716LL;
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
    v7 = *(_QWORD ***)(a1 + 48);
  }
  else
  {
    if ( v1 < 0 )
      return 3221225716LL;
    v15 = ObReferenceObjectByHandle(
            *(HANDLE *)(a1 + 40),
            MmMakeFileAccess[*(_DWORD *)(a1 + 32) & 7],
            (POBJECT_TYPE)IoFileObjectType,
            *(_BYTE *)(a1 + 72),
            &Object,
            0LL);
    v7 = (_QWORD **)Object;
    v14 = v15;
    if ( v15 < 0 )
      goto LABEL_80;
    v3 = 1;
    if ( !*((_QWORD *)Object + 5) )
    {
      v14 = -1073741792;
LABEL_87:
      ObDereferenceObjectEx((ULONG_PTR)v7, v3);
      return (unsigned int)v14;
    }
  }
  FileMemoryPartitionInformation = IoGetFileMemoryPartitionInformation((__int64)v7);
  v9 = FileMemoryPartitionInformation;
  if ( !FileMemoryPartitionInformation )
  {
LABEL_14:
    if ( v6 )
    {
      v13 = *(_DWORD *)(a1 + 16) & 0x1000000;
      if ( v13 )
      {
        if ( (*(_DWORD *)a1 & 1) != 0 )
        {
          v14 = -1073741580;
          goto LABEL_86;
        }
        if ( **(_QWORD **)(a1 + 152) )
        {
          v14 = -1073741582;
          goto LABEL_86;
        }
      }
      if ( !*(_QWORD *)(v6 + 40) )
      {
        v14 = -1073741792;
        goto LABEL_86;
      }
      v16 = *(_QWORD *)(a1 + 8);
      if ( v16 && (*(_DWORD *)(v16 + 24) & 0x200) != 0 )
        *(_BYTE *)(a1 + 72) = 0;
      v17 = *(_QWORD **)(v6 + 40);
      if ( v13 )
        v18 = (_QWORD *)v17[2];
      else
        v18 = (_QWORD *)*v17;
      v33 = v18;
      v14 = -1073741823;
      if ( v18 )
      {
        v14 = MiReferenceControlAreaForCacheManager(a1);
        if ( v14 >= 0 )
        {
          *(_DWORD *)a1 |= 4u;
          v19 = *(_DWORD *)a1;
          if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
          {
            v33 = *(_QWORD **)(*(_QWORD *)(v6 + 40) + 16LL);
            v20 = *v33;
          }
          else
          {
            v21 = *(_QWORD **)(a1 + 152);
            v22 = **(_QWORD ***)(v6 + 40);
            *(_QWORD *)(a1 + 128) = *v21;
            v33 = v22;
            if ( (v19 & 1) != 0 || *v21 )
              goto LABEL_44;
            v20 = *v22;
          }
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 24), -1LL, -1LL);
          v22 = v33;
          *(_QWORD *)(a1 + 128) = v23;
LABEL_44:
          *(_QWORD *)(a1 + 64) = v22;
          goto LABEL_80;
        }
      }
      ObReferenceObjectExWithTag((__int64)v7, 2);
      v3 += 2;
      if ( v14 == -1073740682 )
      {
LABEL_81:
        if ( (*(_DWORD *)a1 & 1) == 0 )
          CcWaitForUninitializeCacheMap((__int64)v7);
        if ( !MiForceSectionClosed(v7[5], v4) && (*(_DWORD *)a1 & 0x800000) != 0 )
        {
          ++dword_140388B00;
          v14 = -1073740277;
        }
        goto LABEL_86;
      }
    }
    else
    {
      ObfReferenceObject(v7);
      ++v3;
    }
    *(_QWORD *)(a1 + 56) = v7;
    memset(v32, 0, sizeof(v32));
    LODWORD(v32[7]) |= 2u;
    v24 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    v32[8] = v7;
    v34 = 0LL;
    if ( !v24 )
    {
      if ( (*(_DWORD *)a1 & 0x400) != 0 && !IoAllowExecution((__int64)v7) )
      {
        v14 = -1073741790;
        goto LABEL_86;
      }
      CcWaitForUninitializeCacheMap((__int64)v7);
      if ( (*(_DWORD *)a1 & 0x400) != 0 )
      {
        v25 = *(_BYTE *)(a1 + 24);
        if ( (v25 & 0x10) != 0 )
        {
          v26 = *(_DWORD *)a1 | 0x10;
          *(_DWORD *)a1 = v26;
          if ( (v25 & 0x30) == 0x30 )
            *(_DWORD *)a1 = v26 | 0x1000;
          *(_BYTE *)(a1 + 24) = v25 & 0xF;
        }
      }
      v4 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    while ( 1 )
    {
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v14 = MiCallCreateSectionFilters(a1);
        if ( v14 < 0 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_80;
        }
        *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
        IoSetTopLevelIrp((PIRP)1);
        *(_DWORD *)a1 |= 2u;
      }
      v28 = MiReferenceControlArea(a1, (__int64)v32, &v33);
      v14 = v28;
      if ( v28 >= 0 )
        break;
      if ( v28 == -1073740277 )
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_86;
      }
      if ( v28 == -1073740682 )
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_81;
      }
    }
    v29 = v33;
    *(_QWORD *)(a1 + 64) = v33;
    if ( (v29[7] & 2) != 0 )
    {
      v14 = MiCreateNewSection(a1, &v34);
      if ( v14 < 0 )
      {
        if ( v34 )
        {
          v29 = (_QWORD *)*v34;
          v33 = v29;
          *(_QWORD *)(a1 + 64) = v29;
        }
        v31 = (_QWORD *)MiZeroSectionObjectPointer((__int64)v7, (__int64)v29, *(_DWORD *)(a1 + 16));
        if ( v29 == v32 )
        {
          ObfDereferenceObject(v7);
          --v3;
          v7 = (_QWORD **)ObFastReplaceObject(v29 + 8, 0LL);
        }
        else
        {
          --v3;
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition((__int64)v29) + 1288));
          MiDereferenceControlAreaBySection((__int64)v33, 1u);
        }
        MiReleaseControlAreaWaiters(v31);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      else
      {
        v30 = *v34;
        *(_QWORD *)(a1 + 64) = *v34;
        _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v30) + 1288));
        v3 -= 2;
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v14 = MiShareExistingControlArea(a1);
      if ( v14 < 0 )
        MiDereferenceFailedControlArea(a1);
      else
        --v3;
    }
LABEL_80:
    if ( v14 != -1073740682 )
      goto LABEL_86;
    goto LABEL_81;
  }
  v10 = *(_QWORD *)FileMemoryPartitionInformation;
  _m_prefetchw((const void *)(*(_QWORD *)FileMemoryPartitionInformation + 24LL));
  v11 = *(_QWORD *)(v10 + 24);
  while ( (unsigned __int64)(v11 + 1) > 1 )
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), v11 + 1, v11);
    if ( v12 == v11 )
    {
      if ( (*(_DWORD *)a1 & 0x10000) != 0 && *(ULONG_PTR **)v10 != &MiSystemPartition )
        *(_DWORD *)a1 &= ~0x10000u;
      *(_QWORD *)(a1 + 176) = v10;
      if ( (*(_DWORD *)(v9 + 8) & 1) != 0 )
        *(_DWORD *)a1 |= 0x200000u;
      goto LABEL_14;
    }
  }
  if ( v11 )
    __fastfail(0xEu);
  v14 = -1073740640;
LABEL_86:
  if ( v3 )
    goto LABEL_87;
  return (unsigned int)v14;
}
