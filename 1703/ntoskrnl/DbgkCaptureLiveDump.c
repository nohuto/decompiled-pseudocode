/*
 * XREFs of DbgkCaptureLiveDump @ 0x140681C24
 * Callers:
 *     NtSystemDebugControl @ 0x140722478 (NtSystemDebugControl.c)
 * Callees:
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     DbgkpLkmdSnapData @ 0x1401E1EC0 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapDataEx @ 0x1401E1EF4 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapGlobals @ 0x1401E1F2C (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapThread @ 0x1401E22A4 (DbgkpLkmdSnapThread.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1401E2304 (DbgkpLkmdSqmIncrementDword.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 *     DbgkpLkmdFireCallbacks @ 0x1406820EC (DbgkpLkmdFireCallbacks.c)
 *     DbgkpLkmdSqmIsOptedIn @ 0x140682610 (DbgkpLkmdSqmIsOptedIn.c)
 *     DbgkpLkmdSqmStatus @ 0x14068279C (DbgkpLkmdSqmStatus.c)
 *     DbgkpTriageDumpInitialize @ 0x140683820 (DbgkpTriageDumpInitialize.c)
 */

__int64 __fastcall DbgkCaptureLiveDump(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  PVOID v7; // r12
  PEPROCESS v8; // r14
  _DWORD *PoolWithTag; // rdi
  REGHANDLE v10; // rsi
  int v12; // eax
  __int64 v13; // r13
  int v14; // r15d
  unsigned int i; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  NTSTATUS v19; // eax
  int v20; // ecx
  char v21; // al
  PEPROCESS v22; // rax
  int v23; // eax
  char AccessMode; // [rsp+40h] [rbp-C0h]
  char v25; // [rsp+44h] [rbp-BCh]
  ULONGLONG RegHandle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v30; // [rsp+70h] [rbp-90h]
  _BYTE v31[5120]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v32[6]; // [rsp+1480h] [rbp+1380h] BYREF
  _QWORD v33[6]; // [rsp+14B0h] [rbp+13B0h] BYREF
  _DWORD v34[2]; // [rsp+14E0h] [rbp+13E0h] BYREF
  __int64 v35; // [rsp+14E8h] [rbp+13E8h]

  v28 = a4;
  RegHandle = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  PoolWithTag = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v10 = 0LL;
  if ( !*(_DWORD *)(a1 + 44) || a3 < 0x40000 || (*(_DWORD *)a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpLkmdSqmIsOptedIn() )
  {
    EtwRegister(&stru_14029BD40, 0LL, 0LL, &RegHandle);
    v10 = RegHandle;
    if ( RegHandle )
      DbgkpLkmdSqmIncrementDword(RegHandle, 3292);
  }
  memset(v32, 0, sizeof(v32));
  v12 = DbgkpTriageDumpInitialize(v32, a2, a3, v33);
  v13 = 0LL;
  v14 = v12;
  if ( v12 >= 0 )
  {
    v14 = ((__int64 (__fastcall *)(PVOID *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v33[0])(
            v32,
            *(unsigned int *)(a1 + 4),
            *(_QWORD *)(a1 + 8),
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 24),
            *(_QWORD *)(a1 + 32));
    if ( v14 >= 0 )
    {
      DbgkpLkmdSnapGlobals((__int64)v31);
      LODWORD(RegHandle) = 4 * *(_DWORD *)(a1 + 44) + 4;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)RegHandle, 0x704E534Bu);
      if ( PoolWithTag )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 44); PoolWithTag[v16] = -1073741823 )
          v16 = i++;
        PoolWithTag[i] = 1112752980;
      }
      v14 = -1073741790;
      v25 = 1;
      if ( *(_DWORD *)(a1 + 44) )
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(a1 + 48);
          v18 = (unsigned int)(v13 + *(_DWORD *)(a1 + 40));
          v35 = 0LL;
          v34[1] = 0;
          v34[0] = -1073741823;
          v19 = ObReferenceObjectByHandle(
                  *(HANDLE *)(v17 + 8 * v18),
                  0x1FFFFFu,
                  (POBJECT_TYPE)PsThreadType,
                  AccessMode,
                  Object,
                  0LL);
          v7 = Object[0];
          v20 = v19;
          v21 = v25;
          if ( v20 != -1073741790 )
            v21 = 0;
          v25 = v21;
          if ( v20 >= 0 )
          {
            if ( !v8 )
            {
              v22 = IoThreadToProcess((PETHREAD)Object[0]);
              v8 = v22;
              if ( v22 )
              {
                ObfReferenceObjectWithTag(v22, 0x4C676244u);
                DbgkpLkmdSnapDataEx((__int64)v31);
              }
            }
            v23 = DbgkpLkmdSnapThread((__int64)v31, a1, (__int64)v7, (__int64)v34);
            if ( !v23 )
              v23 = v34[0];
            if ( PoolWithTag )
              PoolWithTag[v13] = v23;
            DbgkpLkmdFireCallbacks(v31, 2LL, v7);
            if ( v10 )
              DbgkpLkmdSqmStatus(v10);
            ObfDereferenceObject(v7);
            v7 = 0LL;
            if ( v34[0] == -1073741670 )
            {
LABEL_33:
              if ( !v25 )
              {
                if ( v8 )
                  DbgkpLkmdFireCallbacks(v31, 1LL, v8);
                v29 = *(_DWORD *)(a1 + 44);
                v30 = PoolWithTag;
                DbgkpLkmdSnapData((__int64)v31, (__int64)&v29, 16LL);
                if ( PoolWithTag )
                  DbgkpLkmdSnapData((__int64)v31, (__int64)PoolWithTag, (unsigned int)RegHandle);
                if ( (int)DbgkpLkmdSnapDataEx((__int64)v31) >= 0 )
                  *(_QWORD *)Object[1] = &v29;
                v14 = ((__int64 (__fastcall *)(PVOID *, __int64))v33[5])(v32, v28);
              }
              break;
            }
          }
          else
          {
            if ( PoolWithTag )
              PoolWithTag[v13] = v20;
            if ( v10 )
            {
              v34[0] = v20;
              DbgkpLkmdSqmStatus(v10);
            }
          }
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 44) )
            goto LABEL_33;
        }
      }
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x4C676244u);
      if ( v7 )
        ObfDereferenceObject(v7);
    }
  }
  if ( v32[4] )
    ExFreePoolWithTag(v32[4], 0x4D574454u);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x704E534Bu);
  if ( v10 )
    EtwUnregister(v10);
  return (unsigned int)v14;
}
