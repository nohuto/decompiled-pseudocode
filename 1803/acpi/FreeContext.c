/*
 * XREFs of FreeContext @ 0x1C0002E08
 * Callers:
 *     RunContext @ 0x1C00025DC (RunContext.c)
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     LoadDDB @ 0x1C004A4D8 (LoadDDB.c)
 *     SyncLoadDDB @ 0x1C009C4AC (SyncLoadDDB.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0002FF4 (ExFreeToNPagedLookasideList.c)
 *     AmliDisableWatchdog @ 0x1C0003034 (AmliDisableWatchdog.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00030A0 (AcpiDiagTraceAmlEvaluation.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C000803C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0008068 (_TlgWrite.c)
 */

void __fastcall FreeContext(char *Entry)
{
  char **v2; // rdx
  PVOID *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  const GUID *v14; // r8
  const GUID *v15; // r9
  _QWORD *v16; // rbx
  int v17; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp+17h]
  int v20; // [rsp+68h] [rbp+1Fh]
  int v21; // [rsp+6Ch] [rbp+23h]
  __int64 v22; // [rsp+70h] [rbp+27h]
  _DWORD v23[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v24; // [rsp+80h] [rbp+37h]
  int v25; // [rsp+88h] [rbp+3Fh]
  int v26; // [rsp+8Ch] [rbp+43h]

  byte_1C0067A48 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v2 = (char **)*((_QWORD *)Entry + 2);
  if ( v2[1] != Entry + 16 || (v3 = (PVOID *)*((_QWORD *)Entry + 3), *v3 != Entry + 16) )
    __fastfail(3u);
  *v3 = v2;
  v4 = Entry + 32;
  v2[1] = (char *)v3;
  v5 = *((_QWORD *)Entry + 4);
  if ( *(char **)(v5 + 8) != Entry + 32 || (v6 = (_QWORD *)*((_QWORD *)Entry + 5), (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *((_QWORD *)Entry + 5) = Entry + 32;
  *v4 = v4;
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0067A48);
  FreeDataBuffs(Entry + 128, 1LL);
  v7 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  --gdwcCTObjs;
  KeReleaseSpinLock(&gdwGContextSpinLock, v7);
  AcpiDiagTraceAmlEvaluation(Entry, 0LL);
  v8 = *((_QWORD *)Entry + 57);
  if ( v8
    && (unsigned int)((MEMORY[0xFFFFF78000000008] - v8) / 0x2710uLL) >= 0x3E8
    && hProvider > 5u
    && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v21 = 0;
    v23[1] = 0;
    v26 = 0;
    v19 = v23;
    v22 = *((_QWORD *)Entry + 56);
    v23[0] = *((unsigned __int16 *)Entry + 220);
    v24 = &v17;
    v17 = (int)v15;
    v20 = 2;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C005B9A0, v14, v15, 5u, &pData);
  }
  if ( *((_QWORD *)Entry + 58) )
  {
    AmliDisableWatchdog();
    ExFreePoolWithTag(*((PVOID *)Entry + 58), 0);
  }
  v9 = (void *)*((_QWORD *)Entry + 56);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = *((_QWORD *)Entry + 9);
  if ( v10 )
  {
    DereferenceObjectEx(v10);
    *((_QWORD *)Entry + 9) = 0LL;
  }
  v11 = *((_QWORD *)Entry + 53);
  if ( v11 )
  {
    DereferenceObjectEx(v11);
    *((_QWORD *)Entry + 53) = 0LL;
  }
  v12 = *((_QWORD *)Entry + 10);
  if ( v12 )
  {
    DereferenceObjectEx(v12);
    *((_QWORD *)Entry + 10) = 0LL;
  }
  v13 = (_QWORD *)*((_QWORD *)Entry + 63);
  if ( v13 )
  {
    do
    {
      v16 = (_QWORD *)v13[3];
      ExFreeToNPagedLookasideList(&AMLIContextLookAsideList, v13);
      v13 = v16;
    }
    while ( v16 );
  }
  ExFreeToNPagedLookasideList(&AMLIContextLookAsideList, Entry);
}
