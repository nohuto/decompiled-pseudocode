/*
 * XREFs of ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180026670
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180025F30 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

char __fastcall HampWakeContextComputeNextState(__int64 a1, char a2, _QWORD *a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v11; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE JobInformation[24]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-78h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-58h]
  __int64 v17; // [rsp+A8h] [rbp-50h]
  __int64 *v18; // [rsp+B0h] [rbp-48h]
  __int64 v19; // [rsp+B8h] [rbp-40h]

  RtlQueryUnbiasedInterruptTime(&v11);
  v6 = 0x624DD2F1A9FBE77LL * (v11 / 0xA);
  v7 = v11 / 0xA / 0x3E8;
  if ( (a2 & 0x20) != 0 )
  {
    LOBYTE(v6) = 0;
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2] = 0LL;
    a3[3] = 0LL;
    a3[4] = 0LL;
    *((_BYTE *)a3 + 32) = 1;
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(a1 + 160) & 2) == 0 && (a2 & 0x19) == 0 )
  {
    *(_OWORD *)a3 = *(_OWORD *)(a1 + 128);
    *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 144);
    a3[4] = *(_QWORD *)(a1 + 160);
    goto LABEL_34;
  }
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 128);
  *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 144);
  a3[4] = *(_QWORD *)(a1 + 160);
  LOBYTE(v6) = NtQueryInformationJobObject(*(HANDLE *)(a1 + 112), (JOBOBJECTINFOCLASS)20, JobInformation, 0x40u, 0LL);
  v8 = v14;
  v12 = v14;
  if ( (a2 & 8) != 0 )
  {
    v9 = 0LL;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(a1 + 128);
  if ( !v14 || v9 || (LOBYTE(v6) = *(_BYTE *)(a1 + 184) & 0x1C, (_BYTE)v6 != 4) )
  {
LABEL_8:
    *a3 = v14;
    if ( v8 )
    {
      if ( v9 )
      {
        if ( (a2 & 1) != 0 )
        {
          *((_BYTE *)a3 + 32) |= 2u;
          v6 = *(_QWORD *)(a1 + 56);
          a3[3] = v7 + *(unsigned int *)(v6 + 100);
        }
        else if ( v7 >= *(_QWORD *)(a1 + 152) )
        {
          if ( (*(_BYTE *)(a1 + 160) & 2) != 0 && _volatile_metadata > 4u )
          {
            LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0LL);
            if ( (_BYTE)v6 )
            {
              v17 = 8LL;
              v16 = a1 + 168;
              v18 = &v12;
              v19 = 8LL;
              LOBYTE(v6) = TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083AA8, 0LL, 0LL, 4u, &pData);
            }
          }
          *((_BYTE *)a3 + 32) &= ~2u;
        }
        else
        {
          *((_BYTE *)a3 + 32) |= 2u;
        }
      }
      else
      {
        *((_BYTE *)a3 + 32) |= 2u;
        v6 = *(_QWORD *)(a1 + 56);
        a3[3] = v7 + *(unsigned int *)(v6 + 100);
        if ( (*(_BYTE *)(a1 + 160) & 2) == 0 )
        {
          v6 = *(_QWORD *)(a1 + 56);
          a3[2] = v7 + *(unsigned int *)(v6 + 96);
        }
      }
    }
    else if ( v7 >= *(_QWORD *)(a1 + 144) )
    {
      if ( (*(_BYTE *)(a1 + 160) & 2) != 0 && _volatile_metadata > 4u )
      {
        LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0LL);
        if ( (_BYTE)v6 )
        {
          v17 = 8LL;
          v16 = a1 + 168;
          LOBYTE(v6) = TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083B11, 0LL, 0LL, 3u, &pData);
        }
      }
      *((_BYTE *)a3 + 32) &= ~2u;
      a3[3] = 0LL;
    }
    else
    {
      *((_BYTE *)a3 + 32) |= 2u;
      a3[3] = 0LL;
    }
    goto LABEL_34;
  }
  if ( _volatile_metadata > 5u )
  {
    LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0LL);
    if ( (_BYTE)v6 )
    {
      v17 = 8LL;
      v16 = a1 + 168;
      LOBYTE(v6) = TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083AE3, 0LL, 0LL, 3u, &pData);
    }
  }
LABEL_34:
  a3[1] = v7;
  return v6;
}
