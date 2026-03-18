/*
 * XREFs of ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C0110460
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::AcquireAdapterOrdinal(struct _RTL_BITMAP *this, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG ClearBitsAndSet; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v12; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)&this[28].Buffer, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  ClearBitsAndSet = RtlFindClearBitsAndSet(this + 31, 1u, 0);
  v10 = -1;
  if ( ClearBitsAndSet == -1 )
  {
    v12 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v12 + 24) = this[51].SizeOfBitMap;
    WdLogEvent5_WdWarning(v12);
  }
  else
  {
    v10 = ClearBitsAndSet;
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v6, v8, v9);
  return v10;
}
