/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x1402B12F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 *v4; // rbx
  LARGE_INTEGER *v6; // rcx
  __int64 v7; // r8
  unsigned __int16 v8; // cx
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // r9
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  int v19; // edx

  v4 = *(__int64 **)&ReasonSpecificData[3].Data1;
  *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  ReasonSpecificData[1] = EtwSecondaryDumpDataGuid;
  if ( !v4 )
  {
    v4 = &EtwpDumpCallbackContext;
    EtwpDumpCallbackContext = 0LL;
    qword_1403A1D08 = 0LL;
    *(_QWORD *)&ReasonSpecificData[3].Data1 = &EtwpDumpCallbackContext;
  }
  if ( !*((_BYTE *)v4 + 2) )
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
    {
      v6 = *(LARGE_INTEGER **)&ReasonSpecificData->Data1;
      v6[2].QuadPart = EtwpBootTime;
      v6[1].LowPart = EtwCPUSpeedInMHz;
      v6[3] = EtwPerfFreq;
      v6->LowPart = KeMaximumIncrement;
      v6->HighPart = -268418322;
      *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
      *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
      *(_DWORD *)ReasonSpecificData->Data4 = 32;
    }
    *((_BYTE *)v4 + 2) = 1;
    goto LABEL_30;
  }
  v7 = v4[1];
  v8 = *(_WORD *)v4;
  if ( v7 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 432) + 8LL * v8);
    v17 = (_DWORD *)v4[1];
    if ( *(_DWORD *)(v7 + 8) <= *v17 )
      *(_DWORD *)(v4[1] + 48) = v17[2];
    else
      v17[12] = v17[1];
    *(_DWORD *)ReasonSpecificData[2].Data4 = *(_DWORD *)(v4[1] + 48);
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
      *(_QWORD *)&ReasonSpecificData[2].Data1 = v4[1];
    v18 = *(_QWORD *)(v4[1] + 56);
    v14 = v18 == v16 + 96;
    v15 = v18 - 56;
    goto LABEL_26;
  }
  v9 = EtwpHostSiloState;
  while ( (unsigned int)v8 < *(_DWORD *)(v9 + 16) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 8LL * v8);
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 432) + 8LL * v8) & 1) == 0
      && *(int *)(v10 + 12) < 0
      && (*(_DWORD *)(v10 + 316) & 1) == 0 )
    {
      if ( *(_QWORD *)(v10 + 712) )
      {
        _mm_pause();
      }
      else
      {
        v11 = 2 * *(unsigned __int16 *)(v10 + 152) + 48;
        *(_DWORD *)ReasonSpecificData[2].Data4 = v11;
        if ( !*(_DWORD *)ReasonSpecificData->Data4 )
          goto LABEL_19;
        if ( v11 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
        {
          v12 = *(_QWORD *)&ReasonSpecificData->Data1;
          *(_DWORD *)v12 = 32223201;
          *(_DWORD *)(v12 + 4) = *(_DWORD *)v10;
          *(_DWORD *)(v12 + 16) = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v12 + 12) = *(_DWORD *)(v10 + 216);
          *(_QWORD *)(v12 + 24) = *(_QWORD *)(v10 + 808);
          *(_DWORD *)(v12 + 8) = *(_DWORD *)(v10 + 12);
          *(_DWORD *)(v12 + 20) = *(unsigned __int16 *)(v10 + 152);
          *(_OWORD *)(v12 + 32) = *(_OWORD *)(v10 + 320);
          memmove((void *)(v12 + 48), *(const void **)(v10 + 160), 2LL * *(unsigned __int16 *)(v10 + 152));
          *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
          *(_DWORD *)ReasonSpecificData[2].Data4 = v11;
          *(_DWORD *)ReasonSpecificData->Data4 = v11;
LABEL_19:
          v13 = *(_QWORD *)(v10 + 96);
          v14 = v13 == v10 + 96;
          v15 = v13 - 56;
LABEL_26:
          if ( v14 )
            v15 = 0LL;
          v4[1] = v15;
          if ( !v15 )
            ++*(_WORD *)v4;
          break;
        }
      }
    }
    v9 = EtwpHostSiloState;
    v8 = *(_WORD *)v4 + 1;
    *(_WORD *)v4 = v8;
  }
LABEL_30:
  v19 = *(_DWORD *)ReasonSpecificData[3].Data4;
  if ( (unsigned int)*(unsigned __int16 *)v4 >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v19 & 0xFFFFFFFE;
    v4[1] = 0LL;
    *((_BYTE *)v4 + 2) = 0;
    *(_WORD *)v4 = 0;
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v19 | 1;
  }
}
