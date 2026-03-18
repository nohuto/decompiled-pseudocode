/*
 * XREFs of MiLogCommitRequestFailed @ 0x1406B6AB0
 * Callers:
 *     MiCommitRequestFailed @ 0x1406B6A28 (MiCommitRequestFailed.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140021FE0 (PsGetProcessSessionId.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 *     PsQueryJobMemoryUsageByProcess @ 0x1406E1004 (PsQueryJobMemoryUsageByProcess.c)
 */

char __fastcall MiLogCommitRequestFailed(__int64 a1, __int64 a2, int a3)
{
  __int64 ProcessPartition; // rax
  int v7; // ett
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rbx
  ULONG64 v12; // r8
  const struct _TlgProvider_t *v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  const GUID *pActivityId; // [rsp+28h] [rbp-E0h]
  const GUID *v18; // [rsp+30h] [rbp-D8h]
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  GUID v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+80h] [rbp-88h] BYREF
  __int64 v26; // [rsp+88h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-78h] BYREF
  __int64 v28; // [rsp+98h] [rbp-70h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-48h] BYREF
  int v34; // [rsp+C8h] [rbp-40h] BYREF
  __int16 ProcessSessionId; // [rsp+CCh] [rbp-3Ch]
  __int16 v36; // [rsp+CEh] [rbp-3Ah]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  int *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  unsigned __int8 *Data4; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  __int64 *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  __int64 *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  __int64 *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  __int64 *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]
  __int64 *v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  __int64 *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  __int64 *v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  __int64 *v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  __int64 *v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  __int64 *v61; // [rsp+1A8h] [rbp+A0h]
  __int64 v62; // [rsp+1B0h] [rbp+A8h]
  __int64 *v63; // [rsp+1B8h] [rbp+B0h]
  __int64 v64; // [rsp+1C0h] [rbp+B8h]
  _UNKNOWN *retaddr; // [rsp+210h] [rbp+108h] BYREF

  ProcessPartition = (__int64)&retaddr;
  if ( qword_14036CFD8 )
  {
    _m_prefetchw((const void *)(a1 + 1740));
    LODWORD(ProcessPartition) = *(_DWORD *)(a1 + 1740);
    do
    {
      v7 = ProcessPartition;
      LODWORD(ProcessPartition) = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)(a1 + 1740),
                                    ProcessPartition | 0x200000,
                                    ProcessPartition);
    }
    while ( v7 != (_DWORD)ProcessPartition );
    if ( (ProcessPartition & 0x200000) == 0 )
    {
      v34 = *(_DWORD *)(a1 + 736);
      ProcessSessionId = PsGetProcessSessionId(a1);
      v36 = MEMORY[0xFFFFF780000002C4];
      v37 = *(_QWORD *)(a1 + 776);
      v8 = *(_QWORD *)(a1 + 1256);
      v9 = *(_QWORD *)(a1 + 1264);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 256LL);
      PsQueryJobMemoryUsageByProcess(a1, (unsigned int)&v20, (unsigned int)&v21, (unsigned int)&v22, (__int64)&v23);
      ProcessPartition = MiGetProcessPartition(a1);
      v11 = *(_QWORD *)(ProcessPartition + 6128);
      if ( qword_14036CFD8->LevelPlus1 > 5 )
      {
        LOBYTE(ProcessPartition) = TlgKeywordOn(qword_14036CFD8, 0x400000000000uLL);
        if ( (_BYTE)ProcessPartition )
        {
          v28 = v20;
          v29 = v21;
          v30 = v22;
          v31 = *(_QWORD *)&v23.Data1;
          v39 = &v34;
          Data4 = v23.Data4;
          v43 = &v19;
          v45 = &v24;
          v47 = &v25;
          v49 = &v26;
          v51 = &v27;
          v53 = &v28;
          v55 = &v29;
          v57 = &v30;
          v59 = &v31;
          v61 = &v32;
          v63 = &v33;
          *(_QWORD *)v23.Data4 = a2;
          LODWORD(v19) = a3;
          v24 = v15;
          v25 = v10;
          v26 = v8;
          v27 = v9;
          v32 = v14;
          v33 = v11;
          v40 = 16LL;
          v42 = 8LL;
          v44 = 4LL;
          v46 = 8LL;
          v48 = 8LL;
          v50 = 8LL;
          v52 = 8LL;
          v54 = 8LL;
          v56 = 8LL;
          v58 = 8LL;
          v60 = 8LL;
          v62 = 8LL;
          v64 = 8LL;
          LOBYTE(ProcessPartition) = TlgWriteEx(v13, &unk_1402AC9F7, v12, (ULONG)v13, pActivityId, v18, 0xFu, &pData);
        }
      }
    }
  }
  return ProcessPartition;
}
