/*
 * XREFs of ViSwap @ 0x14081C06C
 * Callers:
 *     VfBuildScatterGatherList @ 0x140817F50 (VfBuildScatterGatherList.c)
 *     VfFlushAdapterBuffers @ 0x1408185D0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140818DF0 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x140819510 (VfMapTransfer.c)
 * Callees:
 *     ViFindMappedRegisterInFile @ 0x14081AB94 (ViFindMappedRegisterInFile.c)
 *     ViGetMapRegisterFile @ 0x14081B15C (ViGetMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x14081B180 (ViGetMdlBufferSa.c)
 */

__int64 __fastcall ViSwap(__int64 *a1, ULONG_PTR *a2, _QWORD *a3)
{
  __int64 MapRegisterFile; // rbx
  const void **v7; // r8
  __int64 MdlBufferSa; // rax
  __int16 v10; // r11
  int v11; // ecx
  int v12; // [rsp+48h] [rbp+20h] BYREF

  MapRegisterFile = ViGetMapRegisterFile(*a1);
  if ( !MapRegisterFile )
    return 0LL;
  MdlBufferSa = ViGetMdlBufferSa(*a2, *v7);
  if ( !MdlBufferSa || !ViFindMappedRegisterInFile(MapRegisterFile, MdlBufferSa, &v12) )
    return 0LL;
  v11 = v12;
  *a2 = *(_QWORD *)(MapRegisterFile + 56);
  *a3 = *(_QWORD *)(*(_QWORD *)(MapRegisterFile + 56) + 32LL)
      + (unsigned int)(v11 << 12)
      + *(unsigned int *)(*(_QWORD *)(MapRegisterFile + 56) + 44LL)
      + (unsigned __int64)(v10 & 0xFFF);
  *a1 = *(_QWORD *)(MapRegisterFile + 48);
  return 1LL;
}
