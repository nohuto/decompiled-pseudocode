/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x14027E140
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 *v4; // rbx
  LARGE_INTEGER *v6; // rcx
  _DWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx

  v4 = *(__int64 **)&ReasonSpecificData[3].Data1;
  *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  ReasonSpecificData[1] = EtwSecondaryDumpDataGuid;
  if ( !v4 )
  {
    v4 = &EtwpDumpCallbackContext;
    EtwpDumpCallbackContext = 0LL;
    qword_14035E718 = 0LL;
    *(_QWORD *)&ReasonSpecificData[3].Data1 = &EtwpDumpCallbackContext;
  }
  if ( *((_BYTE *)v4 + 2) )
  {
    v7 = (_DWORD *)v4[1];
    if ( v7 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 424) + 8LL * *(unsigned __int16 *)v4);
      if ( v7[2] <= *v7 )
        *(_DWORD *)(v4[1] + 48) = v7[2];
      else
        v7[12] = v7[1];
      *(_DWORD *)ReasonSpecificData[2].Data4 = *(_DWORD *)(v4[1] + 48);
      if ( *(_DWORD *)ReasonSpecificData->Data4 )
        *(_QWORD *)&ReasonSpecificData[2].Data1 = v4[1];
      v15 = *(_QWORD *)(v4[1] + 56);
      v13 = v15 == v8 + 96;
      v14 = v15 - 56;
LABEL_26:
      if ( v13 )
        v14 = 0LL;
      v4[1] = v14;
      if ( !v14 )
        ++*(_WORD *)v4;
    }
    else
    {
      while ( (unsigned int)*(unsigned __int16 *)v4 < *(_DWORD *)(EtwpHostSiloState + 8) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 424) + 8LL * *(unsigned __int16 *)v4);
        if ( (v9 & 1) == 0 && *(int *)(v9 + 12) < 0 && (*(_DWORD *)(v9 + 316) & 1) == 0 )
        {
          if ( *(_QWORD *)(v9 + 712) )
          {
            _mm_pause();
          }
          else
          {
            v10 = 2 * *(unsigned __int16 *)(v9 + 152) + 48;
            *(_DWORD *)ReasonSpecificData[2].Data4 = v10;
            if ( !*(_DWORD *)ReasonSpecificData->Data4 )
              goto LABEL_21;
            if ( v10 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
            {
              v11 = *(_QWORD *)&ReasonSpecificData->Data1;
              *(_DWORD *)v11 = 32223201;
              *(_DWORD *)(v11 + 4) = *(_DWORD *)v9;
              *(_DWORD *)(v11 + 16) = *(_DWORD *)(v9 + 4);
              *(_DWORD *)(v11 + 12) = *(_DWORD *)(v9 + 216);
              *(_QWORD *)(v11 + 24) = *(_QWORD *)(v9 + 808);
              *(_DWORD *)(v11 + 8) = *(_DWORD *)(v9 + 12);
              *(_DWORD *)(v11 + 20) = *(unsigned __int16 *)(v9 + 152);
              *(_OWORD *)(v11 + 32) = *(_OWORD *)(v9 + 320);
              memmove((void *)(v11 + 48), *(const void **)(v9 + 160), 2LL * *(unsigned __int16 *)(v9 + 152));
              *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
              *(_DWORD *)ReasonSpecificData[2].Data4 = v10;
              *(_DWORD *)ReasonSpecificData->Data4 = v10;
LABEL_21:
              v12 = *(_QWORD *)(v9 + 96);
              v13 = v12 == v9 + 96;
              v14 = v12 - 56;
              goto LABEL_26;
            }
          }
        }
        ++*(_WORD *)v4;
      }
    }
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
    {
      v6 = *(LARGE_INTEGER **)&ReasonSpecificData->Data1;
      v6[2].QuadPart = EtwpBootTime;
      v6[1].LowPart = EtwCPUSpeedInMHz;
      v6[3] = EtwPerfFreq;
      v6->LowPart = KeMaximumIncrement;
      v6->HighPart = -268419157;
      *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
      *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
      *(_DWORD *)ReasonSpecificData->Data4 = 32;
    }
    *((_BYTE *)v4 + 2) = 1;
  }
  if ( (unsigned int)*(unsigned __int16 *)v4 >= *(_DWORD *)(EtwpHostSiloState + 8) )
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 &= ~1u;
    v4[1] = 0LL;
    *((_BYTE *)v4 + 2) = 0;
    *(_WORD *)v4 = 0;
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 |= 1u;
  }
}
