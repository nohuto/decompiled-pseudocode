/*
 * XREFs of HeapAlloc @ 0x1C00039C0
 * Callers:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ReadField @ 0x1C0013B20 (ReadField.c)
 *     PushAccFieldObj @ 0x1C0013BE8 (PushAccFieldObj.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     WriteFieldLoop @ 0x1C0015A80 (WriteFieldLoop.c)
 *     FindNSObj @ 0x1C0015FE0 (FindNSObj.c)
 *     AcquireASLMutex @ 0x1C0016400 (AcquireASLMutex.c)
 *     PushTerm @ 0x1C00169B8 (PushTerm.c)
 *     ParseString @ 0x1C0016CB4 (ParseString.c)
 *     PushCall @ 0x1C0016E3C (PushCall.c)
 *     WriteField @ 0x1C0017038 (WriteField.c)
 *     CreateXField @ 0x1C00177E8 (CreateXField.c)
 *     AccFieldUnit @ 0x1C0017A60 (AccFieldUnit.c)
 *     ParseField @ 0x1C0018080 (ParseField.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     IfElse @ 0x1C001A100 (IfElse.c)
 *     NewObjData @ 0x1C001A9F4 (NewObjData.c)
 *     WriteObject @ 0x1C001ADC0 (WriteObject.c)
 *     Method @ 0x1C001B390 (Method.c)
 *     Package @ 0x1C001B560 (Package.c)
 *     Index @ 0x1C001B680 (Index.c)
 *     Buffer @ 0x1C001BE50 (Buffer.c)
 *     PushScope @ 0x1C001BFE8 (PushScope.c)
 *     NewNameSpaceObject @ 0x1C001C104 (NewNameSpaceObject.c)
 *     Field @ 0x1C001C180 (Field.c)
 *     ParseObjName @ 0x1C001C334 (ParseObjName.c)
 *     OpRegion @ 0x1C001C420 (OpRegion.c)
 *     PushFrame @ 0x1C001CCF0 (PushFrame.c)
 *     NewObjOwner @ 0x1C001D89C (NewObjOwner.c)
 *     Processor @ 0x1C001DA30 (Processor.c)
 *     InitMutex @ 0x1C0023600 (InitMutex.c)
 *     IndexField @ 0x1C0029CC0 (IndexField.c)
 *     InitEvent @ 0x1C002AC90 (InitEvent.c)
 *     Simulator_Copy_Arguments @ 0x1C005B0C8 (Simulator_Copy_Arguments.c)
 *     LoadFieldUnitDDB @ 0x1C005E15C (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C005E380 (BankField.c)
 *     PowerRes @ 0x1C005E5F0 (PowerRes.c)
 *     RawFieldAccess @ 0x1C005EB24 (RawFieldAccess.c)
 *     Concat @ 0x1C005FA70 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C005FD60 (ConcatenateResTemplate.c)
 *     MidString @ 0x1C0060B70 (MidString.c)
 *     ToDecStr @ 0x1C0061560 (ToDecStr.c)
 *     ToHexStr @ 0x1C00618F0 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C0061F34 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0062100 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C00626A0 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00AF294 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     NewGlobalHeap @ 0x1C0020AB0 (NewGlobalHeap.c)
 *     NewLocalHeap @ 0x1C0025B14 (NewLocalHeap.c)
 *     memset @ 0x1C002CB80 (memset.c)
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
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // r10
  unsigned int v17; // eax
  _QWORD *v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r11
  _QWORD *v22; // rax
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // rcx
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
        v14 = *(_QWORD **)(v7 + 24);
        if ( *(_QWORD *)(v13 + 8) != v7 + 16 || *v14 != v7 + 16 )
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
          v21 = *(_QWORD *)v20 - 16LL;
          if ( *(_QWORD **)v20 != v16 )
          {
            v24 = *(unsigned int *)(v15 + 4);
            if ( v21 == v15 + v24 )
            {
              v27 = *(_DWORD *)(v21 + 4) + v24;
              v28 = *(_QWORD **)v20;
              *(_DWORD *)(v15 + 4) = v27;
              v29 = *v28;
              v30 = (_QWORD *)v28[1];
              if ( *(_QWORD **)(*v28 + 8LL) != v28 || (_QWORD *)*v30 != v28 )
                __fastfail(3u);
              *v30 = v29;
              *(_QWORD *)(v29 + 8) = v30;
            }
          }
          v22 = *(_QWORD **)(v15 + 24);
          v23 = (__int64)(v22 - 2);
          if ( v22 != v16 )
          {
            v25 = *(unsigned int *)(v23 + 4);
            if ( v15 == v23 + v25 )
            {
              *(_DWORD *)(v23 + 4) = *(_DWORD *)(v15 + 4) + v25;
              v31 = *(_QWORD **)v20;
              v32 = *(_QWORD **)(v15 + 24);
              if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 || *v32 != v20 )
                __fastfail(3u);
              *v32 = v31;
              v15 = v23;
              v31[1] = v32;
            }
          }
          if ( *(_QWORD *)(v10 + 32) <= v15 + (unsigned __int64)*(unsigned int *)(v15 + 4) )
          {
            *(_QWORD *)(v10 + 32) = v15;
            v33 = (_QWORD *)(v15 + 16);
            v34 = *v33;
            v35 = (_QWORD *)v33[1];
            if ( *(_QWORD **)(*v33 + 8LL) != v33 || (_QWORD *)*v35 != v33 )
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
