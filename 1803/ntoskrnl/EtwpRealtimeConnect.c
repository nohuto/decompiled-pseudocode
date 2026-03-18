/*
 * XREFs of EtwpRealtimeConnect @ 0x1405E4288
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     EtwpSynchronizeWithLogger @ 0x140580194 (EtwpSynchronizeWithLogger.c)
 *     EtwpCheckLoggerControlAccess @ 0x14058F1B4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     EtwpOpenConsumer @ 0x1405E4694 (EtwpOpenConsumer.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  volatile void *v2; // rsi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  SIZE_T v9; // rdx
  __int16 v10; // ax
  __int64 v11; // r12
  unsigned int *v12; // rax
  __int64 v13; // rsi
  int v14; // ebx
  _WORD *v15; // rbx
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rax
  char v18; // cl
  _QWORD *v19; // r14
  int inserted; // edi
  __int64 v21; // r8
  __int64 v22; // r9
  __int16 v24; // ax
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  PVOID v26; // [rsp+50h] [rbp-C8h] BYREF
  PVOID v27; // [rsp+58h] [rbp-C0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-B8h]
  PVOID v29; // [rsp+68h] [rbp-B0h]
  PVOID v30; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v31; // [rsp+78h] [rbp-A0h]
  volatile void *v32; // [rsp+80h] [rbp-98h]
  unsigned __int64 v33; // [rsp+88h] [rbp-90h]
  unsigned __int64 v34; // [rsp+90h] [rbp-88h]
  volatile void *v35; // [rsp+98h] [rbp-80h]
  __int64 v36; // [rsp+A0h] [rbp-78h] BYREF
  int v37; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-68h]
  __int64 v39; // [rsp+B8h] [rbp-60h]
  int v40; // [rsp+C0h] [rbp-58h]
  __int128 v41; // [rsp+C8h] [rbp-50h]
  unsigned int v42; // [rsp+120h] [rbp+8h]
  unsigned int v43; // [rsp+128h] [rbp+10h]
  PVOID v44; // [rsp+130h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+20h] BYREF

  v30 = 0LL;
  v29 = 0LL;
  v42 = *(_DWORD *)a1;
  Handle = 0LL;
  v35 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v43 = *(_DWORD *)(a1 + 4);
  v31 = *(_QWORD *)(a1 + 48);
  v2 = *(volatile void **)(a1 + 40);
  v32 = v2;
  v3 = *(_QWORD *)(a1 + 56);
  v33 = v3;
  v4 = *(_QWORD *)(a1 + 64);
  v34 = v4;
  ProbeForWrite(v35, (((v43 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v43, 4u);
  v5 = v31;
  if ( v31 >= 0x7FFFFFFF0000LL )
    v5 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  v6 = v3;
  if ( v3 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v4;
  if ( v4 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v8 && ((v10 = *(_WORD *)(v8 + 8), v10 == 332) || v10 == 452) )
    v9 = 4LL;
  else
    v9 = 8LL;
  ProbeForWrite(v2, v9, 4u);
  v11 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v12 = EtwpAcquireLoggerContextByLoggerId(v11, v42, 1);
  v13 = (__int64)v12;
  if ( !v12 )
    return 3221225485LL;
  if ( (v12[3] & 0x100) != 0 )
  {
    v14 = EtwpCheckLoggerControlAccess(0x400u, (__int64)v12);
    if ( v14 >= 0 )
    {
      v14 = EtwpOpenConsumer(&Handle);
      if ( v14 >= 0 )
      {
        v14 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 24), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v26, 0LL);
        v29 = v26;
        if ( v14 >= 0 )
        {
          v14 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 32), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v27, 0LL);
          v30 = v27;
          if ( v14 >= 0 )
          {
            v37 = 48;
            v38 = 0LL;
            v40 = 64;
            v39 = 0LL;
            v41 = 0LL;
            v14 = ObCreateObjectEx(
                    0,
                    EtwpRealTimeConnectionObjectType,
                    (int)&v37,
                    1u,
                    (__int64)Object,
                    160,
                    0,
                    0,
                    &v44,
                    0LL);
            if ( v14 >= 0 )
            {
              v15 = v44;
              memset(v44, 0, 0xA0uLL);
              v15[44] = v42;
              *((_QWORD *)v15 + 2) = Handle;
              v16 = v44;
              *((_QWORD *)v44 + 3) = KeGetCurrentThread()->ApcState.Process;
              v16[6] = v26;
              v16[7] = v27;
              v16[8] = v31;
              v16[9] = v32;
              v16[14] = Address;
              *((_DWORD *)v16 + 30) = v43;
              v16[17] = v33;
              v16[18] = v34;
              v16[19] = v11;
              *((_DWORD *)v16 + 24) = v43 >> 12;
              v16[13] = v35;
              v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
              if ( v17 && ((v24 = *(_WORD *)(v17 + 8), v24 == 332) || v24 == 452) )
                v18 = 16;
              else
                v18 = 0;
              v19 = v44;
              *((_BYTE *)v44 + 90) = v18 | *((_BYTE *)v44 + 90) & 0xEF;
              v19[5] = a1;
              inserted = ObInsertObjectEx(v19, 0LL, 1024LL, 1, 0, (__int64)&v36, (_QWORD *)(a1 + 72));
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx(v13 + 704, 0LL);
                *(_QWORD *)(v13 + 368) = v19;
                ExReleasePushLockEx(v13 + 704, 0LL, v21, v22);
                EtwpSynchronizeWithLogger(v13, 0x20u);
              }
              EtwpReleaseLoggerContext((unsigned int *)v13, 1);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v14 = -1073741811;
  }
  EtwpReleaseLoggerContext((unsigned int *)v13, 1);
  if ( Handle )
    ZwClose(Handle);
  if ( v29 )
    ObfDereferenceObject(v29);
  if ( v30 )
    ObfDereferenceObject(v30);
  return (unsigned int)v14;
}
