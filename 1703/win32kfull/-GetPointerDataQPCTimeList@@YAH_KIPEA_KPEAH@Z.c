/*
 * XREFs of ?GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z @ 0x1C01C5E10
 * Callers:
 *     GetPointerTransformInternal @ 0x1C01BB330 (GetPointerTransformInternal.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C0199670 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 */

__int64 __fastcall GetPointerDataQPCTimeList(__int64 a1, __int64 a2, unsigned __int64 *a3, int *a4)
{
  struct _LIST_ENTRY *FrameById; // rdx
  _DWORD *v7; // r9
  __int64 v8; // r10
  unsigned int v9; // r11d
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned int v12; // esi
  struct _LIST_ENTRY *PreviousFrameByDeviceInt; // rax
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  unsigned __int64 *v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // r11d

  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  v10 = (__int64)FrameById[5].Blink + 216 * *(unsigned int *)(v8 + 32);
  if ( v7 && *v7 && (*(_DWORD *)(v10 + 68) & 0x400000) == 0 )
  {
    *v7 = 0;
    return 0LL;
  }
  if ( v9 > *(_DWORD *)(v10 + 124) )
    return 0LL;
  v11 = 1;
  *a3 = *(_QWORD *)(v10 + 136);
  if ( v9 > 1 )
  {
    v12 = *(_DWORD *)(v10 + 208);
    PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(&FrameById->Flink);
    if ( v15 > 1 )
    {
      v16 = a3 + 1;
      do
      {
        if ( !PreviousFrameByDeviceInt )
          break;
        if ( v14 <= 1 )
          break;
        ++v11;
        v17 = (__int64)PreviousFrameByDeviceInt[5].Blink + 216 * v12;
        *v16++ = *(_QWORD *)(v17 + 136);
        v12 = *(_DWORD *)(v17 + 208);
        PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(&PreviousFrameByDeviceInt->Flink);
      }
      while ( v11 < v18 );
    }
  }
  return 1LL;
}
