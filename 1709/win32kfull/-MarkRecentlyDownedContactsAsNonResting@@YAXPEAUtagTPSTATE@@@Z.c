/*
 * XREFs of ?MarkRecentlyDownedContactsAsNonResting@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01AECF4
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z @ 0x1C01AF108 (-SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z.c)
 */

void __fastcall MarkRecentlyDownedContactsAsNonResting(struct tagTPSTATE *a1)
{
  struct tagTPSTATE *v1; // rsi
  struct tagTPSTATE *v3; // rbx
  int v4; // eax

  v1 = (struct tagTPSTATE *)((char *)a1 + 1632);
  v3 = a1;
  do
  {
    v4 = *((_DWORD *)v3 + 66);
    if ( (v4 & 1) != 0
      && (v4 & 0x80u) != 0
      && (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *((_QWORD *)v3 + 7)) < 300LL
                                                                                              * gliQpcFreq
                                                                                              / 1000 )
    {
      SetContactRestingState(v3, a1, 0);
    }
    v3 = (struct tagTPSTATE *)((char *)v3 + 272);
  }
  while ( v3 != v1 );
}
