/*
 * XREFs of IoWriteDeferredLiveDumpData @ 0x14071F208
 * Callers:
 *     DbgkpWerDeferredWriteRoutine @ 0x140712C40 (DbgkpWerDeferredWriteRoutine.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     EtwActivityIdControl @ 0x14012A620 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     IopLiveDumpTrace @ 0x140238980 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140238B84 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140238CAC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140238D54 (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopLiveDumpReleaseResources @ 0x140720030 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140720374 (IopLiveDumpWriteDumpFile.c)
 */

__int64 __fastcall IoWriteDeferredLiveDumpData(__int64 P)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  unsigned __int64 *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v2 = MEMORY[0xFFFFF78000000008];
  IopLiveDumpTraceInterfaceStart();
  IopLiveDumpTrace();
  v3 = IopLiveDumpWriteDumpFile(P);
  IopLiveDumpTraceDumpFileWriteEnd(P, 1LL, v3);
  if ( v3 >= 0 && (*(_BYTE *)(P + 80) & 2) != 0 )
    v3 = 261;
  IopLiveDumpTraceInterfaceEnd(v4, 1LL, v3);
  if ( stru_1403983C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403983C0, 0x200000000000uLL) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(P + 384) + 4000LL);
    v11 = 0;
    v14 = 0;
    v9 = &v6;
    v7 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v10 = 8;
    v12 = &v7;
    v13 = 8;
    TlgWrite(&stru_1403983C0, &unk_1403092B4, (LPCGUID)(P + 624), (LPCGUID)(P + 608), 4u, &pData);
  }
  EtwActivityIdControl(2u, (LPGUID)(P + 608));
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag((PVOID)P, 0x706D644Cu);
  return (unsigned int)v3;
}
