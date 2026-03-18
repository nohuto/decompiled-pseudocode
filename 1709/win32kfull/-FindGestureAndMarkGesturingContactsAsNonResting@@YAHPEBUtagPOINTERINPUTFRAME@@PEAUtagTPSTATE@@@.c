/*
 * XREFs of ?FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z @ 0x1C01AE350
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?AreTheseTwoContactsAGesture@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEBUtagTPCONTACTSTATE@@2@Z @ 0x1C01AD57C (-AreTheseTwoContactsAGesture@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEBUtagTPCONTACTSTATE.c)
 *     ?SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z @ 0x1C01AF108 (-SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z.c)
 */

__int64 __fastcall FindGestureAndMarkGesturingContactsAsNonResting(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // rbp
  int v7; // eax
  unsigned int i; // edi
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // r8d
  const struct tagPOINTERINPUTFRAME *v12; // rcx
  struct tagTPCONTACTSTATE *v13; // r12
  struct tagTPCONTACTSTATE *v14; // r13
  struct tagTPSTATE *v16; // rdx

  if ( (gTPThresholds[28] & 4) != 0 )
  {
    v3 = *((_DWORD *)a1 + 10);
    v4 = 0;
    if ( v3 )
    {
      v5 = *((_QWORD *)a1 + 11);
      do
      {
        v6 = 216LL * v4;
        v7 = *(_DWORD *)(v6 + v5 + 68);
        if ( v7 && (v7 & 0x40000) == 0 )
        {
          for ( i = v4 + 1; i < v3; ++i )
          {
            v9 = 216LL * i;
            v10 = *(_DWORD *)(v9 + v5 + 68);
            if ( v10 )
            {
              if ( (v10 & 0x40000) == 0 )
              {
                v11 = *((_DWORD *)a2 + 411);
                v12 = (const struct tagPOINTERINPUTFRAME *)(*(unsigned __int16 *)(v9 + v5 + 48) % v11);
                v13 = (struct tagTPSTATE *)((char *)a2 + 272 * (*(unsigned __int16 *)(v6 + v5 + 48) % v11));
                v14 = (struct tagTPSTATE *)((char *)a2 + 272 * (_QWORD)v12);
                if ( (unsigned int)AreTheseTwoContactsAGesture(v12, v12, v13, v14) )
                {
                  SetContactRestingState(v13, a2, 0);
                  SetContactRestingState(v14, v16, 0);
                  return 1LL;
                }
              }
            }
          }
        }
        ++v4;
      }
      while ( v4 < v3 );
    }
  }
  return 0LL;
}
