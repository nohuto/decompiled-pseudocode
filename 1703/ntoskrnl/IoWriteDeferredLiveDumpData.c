/*
 * XREFs of IoWriteDeferredLiveDumpData @ 0x14068E59C
 * Callers:
 *     DbgkpWerDeferredWriteRoutine @ 0x1406830A0 (DbgkpWerDeferredWriteRoutine.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     IopLiveDumpTrace @ 0x1401F5E60 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1401F6064 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401F6190 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401F6238 (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopLiveDumpReleaseResources @ 0x14068F3B0 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14068F6F4 (IopLiveDumpWriteDumpFile.c)
 */

__int64 __fastcall IoWriteDeferredLiveDumpData(__int64 P)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+6Ch] [rbp-3Ch]
  unsigned __int64 *v12; // [rsp+70h] [rbp-38h]
  int v13; // [rsp+78h] [rbp-30h]
  int v14; // [rsp+7Ch] [rbp-2Ch]

  v2 = MEMORY[0xFFFFF78000000008];
  IopLiveDumpTraceInterfaceStart();
  IopLiveDumpTrace();
  v3 = IopLiveDumpWriteDumpFile(P);
  IopLiveDumpTraceDumpFileWriteEnd(P, 1LL, v3);
  if ( v3 >= 0 && (*(_BYTE *)(P + 80) & 2) != 0 )
    v3 = 261;
  IopLiveDumpTraceInterfaceEnd(v4, 1LL, v3);
  if ( stru_14033C990.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C990, 0x400000000000uLL) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(P + 384) + 4000LL);
    v11 = 0;
    v14 = 0;
    v9 = &v6;
    v7 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v10 = 8;
    v12 = &v7;
    v13 = 8;
    TlgWrite(&stru_14033C990, &unk_1402ABA92, (LPCGUID)(P + 624), (LPCGUID)(P + 608), 4u, &pData);
  }
  EtwActivityIdControl(2u, (LPGUID)(P + 608));
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag((PVOID)P, 0x706D644Cu);
  return (unsigned int)v3;
}
