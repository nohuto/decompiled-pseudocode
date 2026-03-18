/*
 * XREFs of EtwpRealtimeConnect @ 0x140595B1C
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     EtwpSynchronizeWithLogger @ 0x140595F24 (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x140595FAC (EtwpOpenConsumer.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  unsigned int v2; // esi
  volatile void *v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  SIZE_T v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // ebx
  _WORD *v14; // rbx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax
  char v17; // cl
  _QWORD *v18; // r14
  int inserted; // edi
  __int16 v21; // ax
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  PVOID v23; // [rsp+50h] [rbp-C8h] BYREF
  PVOID v24; // [rsp+58h] [rbp-C0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v26; // [rsp+68h] [rbp-B0h]
  PVOID v27; // [rsp+70h] [rbp-A8h]
  PVOID v28; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v29; // [rsp+80h] [rbp-98h]
  unsigned __int64 v30; // [rsp+88h] [rbp-90h]
  __int64 v31; // [rsp+90h] [rbp-88h]
  volatile void *v32; // [rsp+98h] [rbp-80h]
  __int64 v33; // [rsp+A0h] [rbp-78h] BYREF
  int v34; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-68h]
  __int64 v36; // [rsp+B8h] [rbp-60h]
  int v37; // [rsp+C0h] [rbp-58h]
  __int128 v38; // [rsp+C8h] [rbp-50h]
  unsigned int v39; // [rsp+120h] [rbp+8h]
  unsigned int v40; // [rsp+128h] [rbp+10h]
  PVOID v41; // [rsp+130h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+20h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  v2 = *(_DWORD *)a1;
  v39 = *(_DWORD *)a1;
  Handle = 0LL;
  v32 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v40 = *(_DWORD *)(a1 + 4);
  v29 = *(_QWORD *)(a1 + 48);
  v3 = *(volatile void **)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 56);
  v30 = v4;
  v26 = *(_QWORD *)(a1 + 64);
  ProbeForWrite(v32, (((v40 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v40, 4u);
  v5 = v29;
  if ( v29 >= 0x7FFFFFFF0000LL )
    v5 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  v6 = v4;
  if ( v4 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v26;
  if ( v26 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v8 && ((v10 = *(_WORD *)(v8 + 8), v10 == 332) || v10 == 452) )
    v9 = 4LL;
  else
    v9 = 8LL;
  ProbeForWrite(v3, v9, 4u);
  v31 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v11 = EtwpAcquireLoggerContextByLoggerId(v31, v2, 1);
  v12 = v11;
  if ( !v11 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v11 + 12) & 0x100) != 0 )
  {
    v13 = EtwpCheckLoggerControlAccess(0x400u, v11);
    if ( v13 >= 0 )
    {
      v13 = EtwpOpenConsumer(&Handle);
      if ( v13 >= 0 )
      {
        v13 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 24), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v23, 0LL);
        v27 = v23;
        if ( v13 >= 0 )
        {
          v13 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 32), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v24, 0LL);
          v28 = v24;
          if ( v13 >= 0 )
          {
            v34 = 48;
            v35 = 0LL;
            v37 = 64;
            v36 = 0LL;
            v38 = 0LL;
            v13 = ObCreateObjectEx(
                    0,
                    EtwpRealTimeConnectionObjectType,
                    (__int64)&v34,
                    1,
                    (__int64)Object,
                    160,
                    0,
                    0,
                    &v41,
                    0LL);
            if ( v13 >= 0 )
            {
              v14 = v41;
              memset(v41, 0, 0xA0uLL);
              v14[44] = v39;
              *((_QWORD *)v14 + 2) = Handle;
              v15 = v41;
              *((_QWORD *)v41 + 3) = KeGetCurrentThread()->ApcState.Process;
              v15[6] = v23;
              v15[7] = v24;
              v15[8] = v29;
              v15[9] = v3;
              v15[14] = Address;
              *((_DWORD *)v15 + 30) = v40;
              v15[17] = v30;
              v15[18] = v26;
              v15[19] = v31;
              *((_DWORD *)v15 + 24) = v40 >> 12;
              v15[13] = v32;
              v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
              if ( v16 && ((v21 = *(_WORD *)(v16 + 8), v21 == 332) || v21 == 452) )
                v17 = 16;
              else
                v17 = 0;
              v18 = v41;
              *((_BYTE *)v41 + 90) = v17 | *((_BYTE *)v41 + 90) & 0xEF;
              v18[5] = a1;
              inserted = ObInsertObjectEx(v18, 0LL, 0x400u, 1, 0, (PVOID *)&v33, (unsigned __int64 *)(a1 + 72));
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx(v12 + 704, 0LL);
                *(_QWORD *)(v12 + 368) = v18;
                ExReleasePushLockEx(v12 + 704, 0LL);
                EtwpSynchronizeWithLogger(v12, 32LL);
              }
              EtwpReleaseLoggerContext((unsigned int *)v12, 1);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v13 = -1073741811;
  }
  EtwpReleaseLoggerContext((unsigned int *)v12, 1);
  if ( Handle )
    ZwClose(Handle);
  if ( v27 )
    ObfDereferenceObject(v27);
  if ( v28 )
    ObfDereferenceObject(v28);
  return (unsigned int)v13;
}
