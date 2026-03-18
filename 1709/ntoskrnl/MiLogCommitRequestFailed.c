/*
 * XREFs of MiLogCommitRequestFailed @ 0x1406E35C4
 * Callers:
 *     MiCommitRequestFailed @ 0x1406E3560 (MiCommitRequestFailed.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     PsGetProcessSessionId @ 0x1400AE9F0 (PsGetProcessSessionId.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x140213AC0 (_TlgWriteEx.c)
 *     PsQueryJobMemoryUsageByProcess @ 0x1407172F0 (PsQueryJobMemoryUsageByProcess.c)
 */

char __fastcall MiLogCommitRequestFailed(__int64 a1, __int64 a2, int a3)
{
  __int64 ProcessPartition; // rax
  int v7; // ett
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r9
  const struct _TlgProvider_t *v13; // r10
  __int64 v14; // r11
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h] BYREF
  __int64 v24; // [rsp+88h] [rbp-80h] BYREF
  __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-48h] BYREF
  int v32; // [rsp+C8h] [rbp-40h] BYREF
  __int16 ProcessSessionId; // [rsp+CCh] [rbp-3Ch]
  __int16 v34; // [rsp+CEh] [rbp-3Ah]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  __int64 *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  __int64 *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  __int64 *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  __int64 *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  __int64 *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  __int64 *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  __int64 *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  __int64 *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  __int64 *v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]
  __int64 *v57; // [rsp+198h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+98h]
  __int64 *v59; // [rsp+1A8h] [rbp+A0h]
  __int64 v60; // [rsp+1B0h] [rbp+A8h]
  __int64 *v61; // [rsp+1B8h] [rbp+B0h]
  __int64 v62; // [rsp+1C0h] [rbp+B8h]
  _UNKNOWN *retaddr; // [rsp+200h] [rbp+F8h] BYREF

  ProcessPartition = (__int64)&retaddr;
  if ( hProvider )
  {
    _m_prefetchw((const void *)(a1 + 1740));
    LODWORD(ProcessPartition) = *(_DWORD *)(a1 + 1740);
    do
    {
      v7 = ProcessPartition;
      LODWORD(ProcessPartition) = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)(a1 + 1740),
                                    ProcessPartition | 0x400,
                                    ProcessPartition);
    }
    while ( v7 != (_DWORD)ProcessPartition );
    if ( (ProcessPartition & 0x400) == 0 )
    {
      v32 = *(_DWORD *)(a1 + 736);
      ProcessSessionId = PsGetProcessSessionId(a1);
      v34 = MEMORY[0xFFFFF780000002C4];
      v35 = *(_QWORD *)(a1 + 776);
      v8 = *(_QWORD *)(a1 + 1256);
      v9 = *(_QWORD *)(a1 + 1264);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 256LL);
      PsQueryJobMemoryUsageByProcess(a1, (unsigned int)&v17, (unsigned int)&v18, (unsigned int)&v19, (__int64)&v20);
      ProcessPartition = MiGetProcessPartition(a1);
      v11 = *(_QWORD *)(ProcessPartition + 6320);
      if ( hProvider->LevelPlus1 > 5 )
      {
        LOBYTE(ProcessPartition) = TlgKeywordOn(hProvider, 0x400000000000uLL);
        if ( (_BYTE)ProcessPartition )
        {
          v26 = v17;
          v27 = v18;
          v28 = v19;
          v29 = v20;
          v37 = &v32;
          v39 = &v21;
          v41 = &v16;
          v43 = &v22;
          v45 = &v23;
          v47 = &v24;
          v49 = &v25;
          v51 = &v26;
          v53 = &v27;
          v55 = &v28;
          v57 = &v29;
          v59 = &v30;
          v61 = &v31;
          v21 = a2;
          LODWORD(v16) = a3;
          v22 = v14;
          v23 = v10;
          v24 = v8;
          v25 = v9;
          v30 = v12;
          v31 = v11;
          v38 = 16LL;
          v40 = 8LL;
          v42 = 4LL;
          v44 = 8LL;
          v46 = 8LL;
          v48 = 8LL;
          v50 = 8LL;
          v52 = 8LL;
          v54 = 8LL;
          v56 = 8LL;
          v58 = 8LL;
          v60 = 8LL;
          v62 = 8LL;
          LOBYTE(ProcessPartition) = TlgWriteEx(v13, &unk_1402D0934, 0LL, 1u, 0LL, 0LL, 0xFu, &pData);
        }
      }
    }
  }
  return ProcessPartition;
}
