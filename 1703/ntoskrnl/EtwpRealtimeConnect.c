/*
 * XREFs of EtwpRealtimeConnect @ 0x140451D24
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpSynchronizeWithLogger @ 0x14045212C (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x1404521B4 (EtwpOpenConsumer.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404F1C84 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpRealtimeConnect(int *a1)
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
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  int v15; // ebx
  int v16; // r9d
  unsigned __int64 v17; // rax
  bool v18; // cl
  __int64 v19; // rdx
  int inserted; // edi
  __int16 v22; // ax
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
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
  PVOID v41; // [rsp+130h] [rbp+18h]
  HANDLE Handle; // [rsp+138h] [rbp+20h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  v2 = *a1;
  v39 = *a1;
  Handle = 0LL;
  v32 = (volatile void *)*((_QWORD *)a1 + 2);
  Address = (volatile void *)*((_QWORD *)a1 + 1);
  v40 = a1[1];
  v29 = *((_QWORD *)a1 + 6);
  v3 = (volatile void *)*((_QWORD *)a1 + 5);
  v4 = *((_QWORD *)a1 + 7);
  v30 = v4;
  v26 = *((_QWORD *)a1 + 8);
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
  LOBYTE(v11) = 1;
  v12 = EtwpAcquireLoggerContextByLoggerId(v31, v2, v11);
  v14 = v12;
  if ( !v12 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v12 + 12) & 0x100) != 0 )
  {
    v15 = EtwpCheckLoggerControlAccess(0x400u);
    if ( v15 >= 0 )
    {
      v15 = EtwpOpenConsumer(&Handle);
      if ( v15 >= 0 )
      {
        v15 = ObReferenceObjectByHandle(*((HANDLE *)a1 + 3), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v27 = Object;
        if ( v15 >= 0 )
        {
          v15 = ObReferenceObjectByHandle(*((HANDLE *)a1 + 4), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v24, 0LL);
          v28 = v24;
          if ( v15 >= 0 )
          {
            v34 = 48;
            v35 = 0LL;
            v37 = 64;
            v36 = 0LL;
            v38 = 0LL;
            LOBYTE(v16) = 1;
            v15 = ObCreateObjectEx(0, (_DWORD)EtwpRealTimeConnectionObjectType, (unsigned int)&v34, v16);
            if ( v15 >= 0 )
            {
              memset(v41, 0, 0xA0uLL);
              *((_WORD *)v41 + 44) = v39;
              *((_QWORD *)v41 + 2) = Handle;
              *((_QWORD *)v41 + 3) = KeGetCurrentThread()->ApcState.Process;
              *((_QWORD *)v41 + 6) = Object;
              *((_QWORD *)v41 + 7) = v24;
              *((_QWORD *)v41 + 8) = v29;
              *((_QWORD *)v41 + 9) = v3;
              *((_QWORD *)v41 + 14) = Address;
              *((_DWORD *)v41 + 30) = v40;
              *((_QWORD *)v41 + 17) = v30;
              *((_QWORD *)v41 + 18) = v26;
              *((_QWORD *)v41 + 19) = v31;
              *((_DWORD *)v41 + 24) = v40 >> 12;
              *((_QWORD *)v41 + 13) = v32;
              v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
              v18 = 0;
              if ( v17 )
              {
                v22 = *(_WORD *)(v17 + 8);
                if ( v22 == 332 || v22 == 452 )
                  v18 = 1;
              }
              *((_BYTE *)v41 + 90) = *((_BYTE *)v41 + 90) & 0xEF | (16 * v18);
              *((_QWORD *)v41 + 5) = a1;
              inserted = ObInsertObjectEx(v41, 0LL, 0, (__int64)&v33, (__int64)(a1 + 18));
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx(v14 + 688, 0LL);
                *(_QWORD *)(v14 + 352) = v41;
                ExReleasePushLockEx(v14 + 688, 0LL);
                EtwpSynchronizeWithLogger(v14, 32LL);
              }
              LOBYTE(v19) = 1;
              EtwpReleaseLoggerContext(v14, v19);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v15 = -1073741811;
  }
  LOBYTE(v13) = 1;
  EtwpReleaseLoggerContext(v14, v13);
  if ( Handle )
    ZwClose(Handle);
  if ( v27 )
    ObfDereferenceObject(v27);
  if ( v28 )
    ObfDereferenceObject(v28);
  return (unsigned int)v15;
}
