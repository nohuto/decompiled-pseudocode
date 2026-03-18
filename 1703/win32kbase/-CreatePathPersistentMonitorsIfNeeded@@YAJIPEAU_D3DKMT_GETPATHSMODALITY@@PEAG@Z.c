/*
 * XREFs of ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C005A70C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreatePathPersistentMonitorsIfNeeded(
        __int64 a1,
        struct _D3DKMT_GETPATHSMODALITY *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // r14
  unsigned int i; // ebp
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx

  LODWORD(v5) = 0;
  if ( a3 )
    *a3 = 0;
  for ( i = 0; i < *((unsigned __int16 *)a2 + 10); ++i )
  {
    v7 = 264LL * i;
    v8 = *(_QWORD *)((char *)a2 + v7 + 48);
    if ( (v8 & 0x1100000000000000LL) != 0x100000000000000LL )
    {
      if ( (v8 & 0x200000000000000LL) != 0 )
      {
        v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_1C018BA10)(
                *(_QWORD *)((char *)a2 + v7 + 64),
                *(unsigned int *)((char *)a2 + v7 + 76),
                0LL,
                2LL);
        v5 = v11;
        if ( v11 < 0 )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
          v18 = 264LL * i;
          v17[3] = *(int *)((char *)a2 + v18 + 68);
          v17[4] = *(unsigned int *)((char *)a2 + v18 + 64);
          v17[5] = *(unsigned int *)((char *)a2 + v18 + 76);
          v17[6] = v5;
          WdLogEvent5_WdEvent(v17);
          return (unsigned int)v5;
        }
        if ( (*(_QWORD *)((_BYTE *)a2 + v7 + 48) & 0x1000000000000000LL) != 0 )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
          v14[3] = *(int *)((char *)a2 + v7 + 68);
          v14[4] = *(unsigned int *)((char *)a2 + v7 + 64);
          v14[5] = *(unsigned int *)((char *)a2 + v7 + 76);
          WdLogEvent5_WdTrace(v14);
        }
        else if ( a3 )
        {
          ++*a3;
        }
      }
      else
      {
        if ( (v8 & 0x1000000000000000LL) == 0 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, 0x100000000000000LL);
          v16 = 264LL * i;
          v15[3] = *(unsigned int *)((char *)a2 + v16 + 76);
          v15[4] = *(int *)((char *)a2 + v16 + 68);
          v15[5] = *(unsigned int *)((char *)a2 + v16 + 64);
          WdLogEvent5_WdEvent(v15);
          LODWORD(v5) = -1073741811;
          return (unsigned int)v5;
        }
        v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, 0x100000000000000LL);
        v10[3] = *(unsigned int *)((char *)a2 + v7 + 76);
        v10[4] = *(int *)((char *)a2 + v7 + 68);
        v10[5] = *(unsigned int *)((char *)a2 + v7 + 64);
        v10[6] = 1LL;
        WdLogEvent5_WdEvent(v10);
      }
    }
  }
  return (unsigned int)v5;
}
