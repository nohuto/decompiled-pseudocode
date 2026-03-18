/*
 * XREFs of IopLiveDumpCaptureMemoryPages @ 0x140416058
 * Callers:
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 * Callees:
 *     VslIsSecureKernelRunning @ 0x14003CC70 (VslIsSecureKernelRunning.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VslFinalizeLiveDumpInSk @ 0x1401ECE54 (VslFinalizeLiveDumpInSk.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     IopLiveDumpUncorralProcessors @ 0x140417138 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpCaptureMemoryPages(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // edi
  unsigned __int64 v5; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v6[5]; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+17h] BYREF
  unsigned __int64 *v8; // [rsp+88h] [rbp+37h]
  int v9; // [rsp+90h] [rbp+3Fh]
  int v10; // [rsp+94h] [rbp+43h]

  memset(&v6[1], 0, 0x20uLL);
  v2 = MEMORY[0xFFFFF78000000008];
  v6[0] = IopLiveDumpStartMirroringCallback;
  v6[1] = IopLiveDumpEndMirroringCallback;
  v6[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  LODWORD(v6[4]) = 17;
  v3 = MmDuplicateMemory((__int64)v6);
  if ( v3 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 248) & 1) != 0 )
      IopLiveDumpUncorralProcessors(a1 + 240);
  }
  else if ( *(_QWORD *)(a1 + 504) && VslIsSecureKernelRunning() )
  {
    VslFinalizeLiveDumpInSk((_QWORD *)(a1 + 176), a1 + 128);
  }
  if ( stru_14033C990.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C990, 0x400000000000uLL) )
  {
    v9 = 8;
    v10 = 0;
    v5 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v8 = &v5;
    TlgWrite(&stru_14033C990, &unk_1402ABC14, (LPCGUID)(a1 + 624), (LPCGUID)(a1 + 608), 3u, &pData);
  }
  return (unsigned int)v3;
}
