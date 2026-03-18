/*
 * XREFs of ?GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01C669C
 * Callers:
 *     GetPointerRawDataInternal @ 0x1C01BB260 (GetPointerRawDataInternal.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C0199670 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?GetPointerRawData@@YAHPEBUtagPOINTERINPUTFRAME@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01C662C (-GetPointerRawData@@YAHPEBUtagPOINTERINPUTFRAME@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z.c)
 */

__int64 __fastcall GetPointerRawDataWithHistory(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const struct tagPOINTER_DEVICE_PROPERTY *a4,
        unsigned int a5,
        int *a6)
{
  __int64 v8; // r12
  struct _LIST_ENTRY *FrameById; // rsi
  const struct tagPOINTER_DEVICE_PROPERTY *v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdi
  unsigned int v14; // r15d
  unsigned int PointerRawData; // ebx
  __int64 v16; // rcx
  int *v17; // r14
  struct _LIST_ENTRY *PreviousFrameByDeviceInt; // rsi
  unsigned int v19; // r10d
  __int64 v20; // rdi
  int *v22; // [rsp+88h] [rbp+30h]

  v8 = a3;
  v22 = &a6[a5];
  if ( a5 < a3 || !a1 || (FrameById = FindFrameById(*(_DWORD *)(a1 + 28))) == 0LL )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  v13 = (__int64)FrameById[5].Blink + 216 * *(unsigned int *)(v12 + 32);
  v14 = *(_DWORD *)(v13 + 124);
  if ( a2 == 1 || a2 == v14 )
  {
    PointerRawData = GetPointerRawData(
                       (const struct tagPOINTERINPUTFRAME *)FrameById,
                       *(_DWORD *)(v13 + 44),
                       *(_WORD *)(v13 + 50),
                       v8,
                       v11,
                       a6);
    if ( PointerRawData )
    {
      v17 = &a6[v8];
      if ( a2 > 1 )
      {
        PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(&FrameById->Flink);
        do
        {
          if ( !PreviousFrameByDeviceInt || v14 <= 1 )
            break;
          v20 = (__int64)PreviousFrameByDeviceInt[5].Blink + 216 * v19;
          if ( &v17[v8] > v22 )
          {
            UserSetLastError(87LL);
            PointerRawData = 0;
          }
          else
          {
            PointerRawData = GetPointerRawData(
                               (const struct tagPOINTERINPUTFRAME *)PreviousFrameByDeviceInt,
                               *(_DWORD *)(v20 + 44),
                               *(_WORD *)(v20 + 50),
                               v8,
                               a4,
                               v17);
            if ( PointerRawData )
              v17 += v8;
          }
          v14 = *(_DWORD *)(v20 + 124);
          PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(&PreviousFrameByDeviceInt->Flink);
        }
        while ( PointerRawData );
      }
      return PointerRawData;
    }
    v16 = 232LL;
  }
  else
  {
    PointerRawData = 0;
    v16 = 87LL;
  }
  UserSetLastError(v16);
  return PointerRawData;
}
