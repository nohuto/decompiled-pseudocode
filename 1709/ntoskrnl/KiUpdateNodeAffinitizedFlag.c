/*
 * XREFs of KiUpdateNodeAffinitizedFlag @ 0x1400A88E8
 * Callers:
 *     KeStartThread @ 0x1400A6890 (KeStartThread.c)
 *     KiSetSystemAffinityThread @ 0x1400A8760 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x1400ABE08 (KiSetAffinityThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateNodeAffinitizedFlag(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // r10
  int v6; // edx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 576);
  v3 = *(unsigned __int16 *)(a1 + 584);
  if ( v1 == qword_140401408[v3] )
  {
LABEL_9:
    v6 = 1;
  }
  else
  {
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      while ( 1 )
      {
        _BitScanReverse64(&v4, v1);
        v5 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v3
                                                                                         + (int)v4]]
                                   + 192)
                       + 136LL);
        if ( (v1 & v5) != v5 )
          break;
        v1 &= ~v5;
        if ( !v1 )
          goto LABEL_9;
      }
    }
    v6 = 0;
  }
  result = (*(unsigned __int8 *)(a1 + 2) >> 3) & 1;
  if ( v6 == (_DWORD)result )
    _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
  return result;
}
