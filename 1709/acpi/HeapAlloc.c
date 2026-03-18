/*
 * XREFs of HeapAlloc @ 0x1C000B3C0
 * Callers:
 *     NewObjData @ 0x1C0008108 (NewObjData.c)
 *     AsyncEvalObject @ 0x1C00081E0 (AsyncEvalObject.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseScope @ 0x1C000AE20 (ParseScope.c)
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 *     IfElse @ 0x1C000C3D0 (IfElse.c)
 *     PushCall @ 0x1C000CB4C (PushCall.c)
 *     InitMutex @ 0x1C0011BF0 (InitMutex.c)
 *     NewObjOwner @ 0x1C00134CC (NewObjOwner.c)
 *     PushFrame @ 0x1C0018B78 (PushFrame.c)
 *     ParseObjName @ 0x1C0018CA8 (ParseObjName.c)
 *     FindNSObj @ 0x1C00198E0 (FindNSObj.c)
 *     AcquireASLMutex @ 0x1C0019D00 (AcquireASLMutex.c)
 *     PushTerm @ 0x1C0019F78 (PushTerm.c)
 *     ParseString @ 0x1C001A300 (ParseString.c)
 *     Field @ 0x1C001A430 (Field.c)
 *     NewNameSpaceObject @ 0x1C001A558 (NewNameSpaceObject.c)
 *     CreateXField @ 0x1C001BC5C (CreateXField.c)
 *     Method @ 0x1C001BD50 (Method.c)
 *     ParseField @ 0x1C001C0C0 (ParseField.c)
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 *     Package @ 0x1C001E020 (Package.c)
 *     Buffer @ 0x1C001E900 (Buffer.c)
 *     PushScope @ 0x1C001EA98 (PushScope.c)
 *     Index @ 0x1C001F6B0 (Index.c)
 *     ReadField @ 0x1C001FD00 (ReadField.c)
 *     WriteObject @ 0x1C0020320 (WriteObject.c)
 *     WriteField @ 0x1C00209B8 (WriteField.c)
 *     WriteFieldLoop @ 0x1C0025AD0 (WriteFieldLoop.c)
 *     OpRegion @ 0x1C0027850 (OpRegion.c)
 *     Processor @ 0x1C0029810 (Processor.c)
 *     IndexField @ 0x1C002ABB0 (IndexField.c)
 *     InitEvent @ 0x1C002B800 (InitEvent.c)
 *     Simulator_Copy_Arguments @ 0x1C005BC38 (Simulator_Copy_Arguments.c)
 *     LoadFieldUnitDDB @ 0x1C005ECF8 (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C005EF20 (BankField.c)
 *     PowerRes @ 0x1C005F190 (PowerRes.c)
 *     RawFieldAccess @ 0x1C005FD04 (RawFieldAccess.c)
 *     Concat @ 0x1C0060C70 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0060F60 (ConcatenateResTemplate.c)
 *     MidString @ 0x1C0061D50 (MidString.c)
 *     ToDecStr @ 0x1C0062730 (ToDecStr.c)
 *     ToHexStr @ 0x1C0062AC0 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C0063104 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C00632D0 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C0063870 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00B12F8 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     NewLocalHeap @ 0x1C000D00C (NewLocalHeap.c)
 *     NewGlobalHeap @ 0x1C0011990 (NewGlobalHeap.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall HeapAlloc(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // edi
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // r8
  _QWORD *v16; // r10
  unsigned int v17; // eax
  _QWORD *v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // r10
  int v26; // eax
  int v27; // ecx
  _QWORD *v28; // r11
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // r8
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3 + 16;
  v37 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( a3 + 16 >= a3 )
  {
    if ( v4 < 0x20 )
      v4 = 32;
    if ( v4 + 7 >= v4 )
    {
      v9 = (v4 + 7) & 0xFFFFFFF8;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      if ( v9 <= *(_DWORD *)(a1 + 8) - (int)a1 - 56 )
      {
        v10 = a1;
        v37 = a1;
        while ( 1 )
        {
          v7 = *(_QWORD *)(v10 + 40) - 16LL;
          v11 = *(_QWORD **)(v10 + 40);
          if ( (_QWORD *)(v10 + 40) == v11 )
          {
LABEL_8:
            v7 = 0LL;
          }
          else
          {
            while ( v9 > *(_DWORD *)(v7 + 4) )
            {
              v7 = *v11 - 16LL;
              v11 = (_QWORD *)*v11;
              if ( (_QWORD *)(v10 + 40) == v11 )
                goto LABEL_8;
            }
          }
          if ( v7 )
            break;
          if ( v9 <= *(_DWORD *)(v10 + 8) - *(_DWORD *)(v10 + 32) )
          {
            v7 = *(_QWORD *)(v10 + 32);
            *(_QWORD *)(v10 + 32) = v7 + v9;
            *(_DWORD *)(v7 + 4) = v9;
            goto LABEL_12;
          }
          v8 = v10;
          v10 = *(_QWORD *)(v10 + 24);
          v37 = v10;
          if ( !v10 )
            goto LABEL_12;
        }
        v13 = *(_QWORD *)(v7 + 16);
        if ( *(_QWORD *)(v13 + 8) != v7 + 16 || (v14 = *(_QWORD **)(v7 + 24), *v14 != v7 + 16) )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        if ( *(unsigned int *)(v7 + 4) >= (unsigned __int64)v9 + 32 )
        {
          v15 = v7 + v9;
          v16 = (_QWORD *)(v10 + 40);
          *(_DWORD *)v15 = 0;
          v17 = *(_DWORD *)(v7 + 4) - v9;
          *(_QWORD *)(v15 + 8) = v10;
          *(_DWORD *)(v15 + 4) = v17;
          *(_DWORD *)(v7 + 4) = v9;
          v18 = *(_QWORD **)(v10 + 40);
          if ( v18 != (_QWORD *)(v10 + 40) )
          {
            do
            {
              if ( v15 + 16 < (unsigned __int64)v18 )
                break;
              v18 = (_QWORD *)*v18;
            }
            while ( v18 != v16 );
          }
          v19 = (__int64 *)v18[1];
          v20 = v15 + 16;
          if ( (_QWORD *)*v19 != v18 )
            __fastfail(3u);
          *(_QWORD *)v20 = v18;
          *(_QWORD *)(v15 + 24) = v19;
          *v19 = v20;
          v18[1] = v20;
          if ( *(_QWORD **)v20 != v16 )
          {
            v22 = *(unsigned int *)(v15 + 4);
            v23 = *(_QWORD *)v20 - 16LL;
            if ( v23 == v15 + v22 )
            {
              v27 = *(_DWORD *)(v23 + 4) + v22;
              v28 = *(_QWORD **)v20;
              *(_DWORD *)(v15 + 4) = v27;
              v29 = *v28;
              if ( *(_QWORD **)(*v28 + 8LL) != v28 || (v30 = (_QWORD *)v28[1], (_QWORD *)*v30 != v28) )
                __fastfail(3u);
              *v30 = v29;
              *(_QWORD *)(v29 + 8) = v30;
            }
          }
          v21 = *(_QWORD **)(v15 + 24);
          if ( v21 != v16 )
          {
            v24 = *((unsigned int *)v21 - 3);
            v25 = (__int64)(v21 - 2);
            if ( (_QWORD *)v15 == (_QWORD *)((char *)v21 + v24 - 16) )
            {
              *(_DWORD *)(v25 + 4) = *(_DWORD *)(v15 + 4) + v24;
              v31 = *(_QWORD **)v20;
              if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 || (v32 = *(_QWORD **)(v15 + 24), *v32 != v20) )
                __fastfail(3u);
              *v32 = v31;
              v15 = v25;
              v31[1] = v32;
            }
          }
          if ( *(_QWORD *)(v10 + 32) <= v15 + (unsigned __int64)*(unsigned int *)(v15 + 4) )
          {
            *(_QWORD *)(v10 + 32) = v15;
            v33 = (_QWORD *)(v15 + 16);
            v34 = *v33;
            if ( *(_QWORD **)(*v33 + 8LL) != v33 || (v35 = (_QWORD *)v33[1], (_QWORD *)*v35 != v33) )
              __fastfail(3u);
            *v35 = v34;
            *(_QWORD *)(v34 + 8) = v35;
          }
        }
LABEL_12:
        if ( v7 )
          goto LABEL_13;
      }
      if ( a1 == gpheapGlobal )
      {
        if ( v9 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
        {
          v36 = v9 % (unsigned int)gdwGlobalHeapBlkSize;
          if ( (unsigned int)gdwGlobalHeapBlkSize * (v9 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
          {
            if ( v9 > 0x800000 )
              goto LABEL_14;
            LODWORD(gdwGlobalHeapBlkSize) = v9;
            v26 = NewGlobalHeap(&v37, v36);
          }
          else
          {
            LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v9 / (unsigned int)gdwGlobalHeapBlkSize + 1);
            v26 = NewGlobalHeap(&v37, v36);
          }
        }
        else
        {
          v26 = NewGlobalHeap(&v37, v10);
        }
      }
      else
      {
        v26 = NewLocalHeap(&v37);
      }
      if ( !v26 )
      {
        v10 = v37;
        *(_QWORD *)(v37 + 16) = a1;
        *(_QWORD *)(v8 + 24) = v10;
        v7 = *(_QWORD *)(v10 + 32);
        *(_QWORD *)(v10 + 32) = v7 + v9;
        *(_DWORD *)(v7 + 4) = v9;
LABEL_13:
        *(_QWORD *)(v7 + 8) = v10;
        *(_DWORD *)v7 = a2;
        memset((void *)(v7 + 16), 0, v9 - 16LL);
      }
LABEL_14:
      KeReleaseSpinLock(&gmutHeap, NewIrql);
      if ( v7 )
        return v7 + 16;
    }
  }
  return v3;
}
