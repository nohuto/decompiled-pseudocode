/*
 * XREFs of HeapAlloc @ 0x1C0003394
 * Callers:
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     Simulator_Copy_Arguments @ 0x1C0044628 (Simulator_Copy_Arguments.c)
 *     FindNSObj @ 0x1C0046440 (FindNSObj.c)
 *     NewObjData @ 0x1C0047164 (NewObjData.c)
 *     NewObjOwner @ 0x1C00472E8 (NewObjOwner.c)
 *     LoadFieldUnitDDB @ 0x1C004A5F4 (LoadFieldUnitDDB.c)
 *     NewNameSpaceObject @ 0x1C004A874 (NewNameSpaceObject.c)
 *     BankField @ 0x1C004A930 (BankField.c)
 *     CreateXField @ 0x1C004ADAC (CreateXField.c)
 *     Field @ 0x1C004AFF0 (Field.c)
 *     IndexField @ 0x1C004B180 (IndexField.c)
 *     InitEvent @ 0x1C004B37C (InitEvent.c)
 *     InitMutex @ 0x1C004B434 (InitMutex.c)
 *     Method @ 0x1C004B510 (Method.c)
 *     OpRegion @ 0x1C004B730 (OpRegion.c)
 *     PowerRes @ 0x1C004B8B0 (PowerRes.c)
 *     Processor @ 0x1C004BA20 (Processor.c)
 *     RawFieldAccess @ 0x1C004D144 (RawFieldAccess.c)
 *     ReadField @ 0x1C004D4C0 (ReadField.c)
 *     PushCall @ 0x1C004E600 (PushCall.c)
 *     PushTerm @ 0x1C004E810 (PushTerm.c)
 *     AcquireASLMutex @ 0x1C004E924 (AcquireASLMutex.c)
 *     Buffer @ 0x1C004FE30 (Buffer.c)
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00502A0 (ConcatenateResTemplate.c)
 *     Index @ 0x1C0050E60 (Index.c)
 *     MidString @ 0x1C0051D60 (MidString.c)
 *     Package @ 0x1C00522C0 (Package.c)
 *     ToDecStr @ 0x1C0052F60 (ToDecStr.c)
 *     ToHexStr @ 0x1C0053330 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C0053A14 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0053CB8 (ConvertToString.c)
 *     ParseField @ 0x1C0054C68 (ParseField.c)
 *     ParseFieldConnection @ 0x1C005508C (ParseFieldConnection.c)
 *     ParseObjName @ 0x1C0055CEC (ParseObjName.c)
 *     ParseString @ 0x1C005652C (ParseString.c)
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C009C064 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1C0003DC0 (HeapInsertFreeList.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     NewGlobalHeap @ 0x1C004995C (NewGlobalHeap.c)
 *     NewLocalHeap @ 0x1C0049A10 (NewLocalHeap.c)
 */

__int64 __fastcall HeapAlloc(__int64 a1, int a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r14
  unsigned int v7; // r9d
  unsigned int v8; // esi
  KIRQL v9; // al
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  char *v17; // rdx
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( a3 + 16 >= a3 )
  {
    v7 = a3 + 16;
    if ( a3 + 16 < 0x20 )
      v7 = 32;
    if ( v7 + 7 >= v7 )
    {
      v8 = (v7 + 7) & 0xFFFFFFF8;
      v9 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v20 = a1;
      v10 = a1;
      byte_1C0067920 = v9;
      if ( a1 )
      {
        v11 = a1;
        while ( 1 )
        {
          v12 = *(_QWORD **)(v10 + 40);
          v4 = v11;
          v13 = (_QWORD *)(v11 + 40);
          while ( 1 )
          {
            v3 = v12 - 2;
            if ( v13 == v12 )
              break;
            if ( v8 <= *((_DWORD *)v3 + 1) )
              goto LABEL_10;
            v12 = (_QWORD *)*v12;
          }
          v3 = 0LL;
LABEL_10:
          if ( v3 )
            break;
          if ( v8 <= *(_DWORD *)(v10 + 8) - *(_DWORD *)(v10 + 32) )
          {
            v3 = *(_QWORD **)(v10 + 32);
            *(_QWORD *)(v10 + 32) = (char *)v3 + v8;
            *((_DWORD *)v3 + 1) = v8;
            goto LABEL_13;
          }
          v11 = *(_QWORD *)(v10 + 24);
          v20 = v11;
          v10 = v11;
          if ( !v11 )
            goto LABEL_13;
        }
        v15 = v3[2];
        if ( *(_QWORD **)(v15 + 8) != v3 + 2 || (v16 = (_QWORD *)v3[3], (_QWORD *)*v16 != v3 + 2) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        if ( *((unsigned int *)v3 + 1) >= (unsigned __int64)v8 + 32 )
        {
          v17 = (char *)v3 + v8;
          *(_DWORD *)v17 = 0;
          v18 = *((_DWORD *)v3 + 1) - v8;
          *((_QWORD *)v17 + 1) = v10;
          *((_DWORD *)v17 + 1) = v18;
          *((_DWORD *)v3 + 1) = v8;
          HeapInsertFreeList(v10);
        }
LABEL_13:
        if ( v3 )
        {
LABEL_14:
          *(_DWORD *)v3 = a2;
          v3[1] = v10;
          memset(v3 + 2, 0, v8 - 16LL);
LABEL_15:
          KeReleaseSpinLock(&gmutHeap, byte_1C0067920);
          return (unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL);
        }
      }
      if ( a1 == gpheapGlobal )
      {
        if ( v8 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
        {
          if ( (unsigned int)gdwGlobalHeapBlkSize * (v8 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
          {
            if ( v8 > 0x800000 )
            {
              v10 = 0LL;
              v19 = -1073741670;
              goto LABEL_36;
            }
            LODWORD(gdwGlobalHeapBlkSize) = v8;
          }
          else
          {
            LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v8 / (unsigned int)gdwGlobalHeapBlkSize + 1);
          }
        }
        v19 = NewGlobalHeap(&v20);
      }
      else
      {
        v19 = NewLocalHeap(&v20);
      }
      v10 = v20;
LABEL_36:
      if ( v19 )
      {
        v10 = 0LL;
      }
      else
      {
        *(_QWORD *)(v10 + 16) = a1;
        *(_QWORD *)(v4 + 24) = v10;
        v3 = *(_QWORD **)(v10 + 32);
        *(_QWORD *)(v10 + 32) = (char *)v3 + v8;
        *((_DWORD *)v3 + 1) = v8;
      }
      if ( !v3 )
        goto LABEL_15;
      goto LABEL_14;
    }
  }
  return (unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL);
}
