/*
 * XREFs of AlpcpCreateClientPort @ 0x1404DC5A8
 * Callers:
 *     AlpcpConnectPort @ 0x1404DA5F0 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x1404DF490 (NtSecureConnectPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     SeCreateClientSecurity @ 0x1404D41D0 (SeCreateClientSecurity.c)
 *     AlpcpAllocateBlob @ 0x1404D44F8 (AlpcpAllocateBlob.c)
 *     AlpcpSetOwnerProcessPort @ 0x1404DC9F4 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpAllocateMessage @ 0x1404DCA4C (AlpcpAllocateMessage.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1404DCB6C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcInitializeHandleTable @ 0x1404DD2E0 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x1404DD334 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x1404DD4C0 (AlpcpCreatePort.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404DDFAC (AlpcpCheckConnectionSecurity.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  struct _KPROCESS *v11; // rsi
  char PreviousMode; // r12
  __int64 result; // rax
  char *v14; // r14
  __int64 v15; // rcx
  signed __int64 *v16; // rdi
  int v17; // edi
  char v18; // al
  _DWORD *v19; // rdi
  int v20; // esi
  _DWORD *v21; // rsi
  char *Blob; // rax
  ULONG_PTR *v23; // r13
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 **v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  NTSTATUS Message; // eax
  _QWORD *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int inserted; // ecx
  __int64 v39; // rax
  volatile signed __int64 *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  PVOID v44; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  char *v46; // [rsp+50h] [rbp-10h]
  __int64 v47; // [rsp+58h] [rbp-8h] BYREF
  char v51; // [rsp+C0h] [rbp+60h]

  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, (_DWORD)a2, 1, (_DWORD)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&v44);
  else
    result = ObReferenceObjectByName(a4, 0LL, 0LL, 1u, (__int64)AlpcPortObjectType, PreviousMode, 0LL, &v44);
  if ( (int)result >= 0 )
  {
    v14 = (char *)v44;
    v15 = *((unsigned int *)v44 + 104);
    if ( (*((_DWORD *)v44 + 104) & 6) == 2 )
    {
      if ( !a11 && (v15 & 0x1000) != 0 )
      {
        v40 = (volatile signed __int64 *)((char *)v44 + 352);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v44 + 352, 0LL);
        *((_DWORD *)v14 + 104) &= ~0x2000u;
        if ( (_InterlockedExchangeAdd64(v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v14 + 44, v41, v42, v43);
        KeAbPostRelease((ULONG_PTR)(v14 + 352));
        v14 = (char *)v44;
      }
      if ( !a9 && !a8 )
        goto LABEL_60;
      v16 = (signed __int64 *)(v14 + 352);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v14 + 352), 0LL);
      if ( (*((_QWORD *)v14 + 3) & 1) == 0 )
        v11 = (struct _KPROCESS *)*((_QWORD *)v14 + 3);
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      if ( v11 )
      {
        v17 = AlpcpCheckConnectionSecurity(v11);
        ObfDereferenceObjectWithTag(v11, 0x63706C41u);
      }
      else
      {
        v17 = -1073741152;
      }
      v14 = (char *)v44;
      if ( v17 >= 0 )
      {
LABEL_60:
        LOBYTE(v15) = PreviousMode;
        v17 = AlpcpCreatePort(v15, a6, &Object);
        if ( v17 >= 0 )
        {
          if ( !a7 || (v18 = 1, (*a7 & 0x40000) == 0) )
            v18 = 0;
          v19 = Object;
          v51 = v18;
          v20 = AlpcpInitializePort(Object, 2LL);
          if ( v20 >= 0 )
          {
            v21 = v19 + 104;
            v19[104] |= 8u;
            Blob = AlpcpAllocateBlob((__int64)&AlpcConnectionType, 72LL, 1);
            v46 = Blob;
            if ( Blob )
            {
              *((_QWORD *)v19 + 2) = Blob;
              v23 = (ULONG_PTR *)(Blob + 64);
              *((_QWORD *)Blob + 8) = 0LL;
              *((_QWORD *)Blob + 1) = 0LL;
              *(_QWORD *)Blob = v14;
              *((_QWORD *)Blob + 2) = v19;
              ExAcquirePushLockExclusiveEx(*((_QWORD *)v14 + 2) - 16LL, 0LL);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 352), 0LL);
              v26 = *((_QWORD *)v14 + 2) + 24LL;
              v27 = (__int64 *)(v46 + 24);
              v28 = *(__int64 ***)(*((_QWORD *)v14 + 2) + 32LL);
              if ( *v28 != (__int64 *)v26 )
                __fastfail(3u);
              *v27 = v26;
              v27[1] = (__int64)v28;
              *v28 = v27;
              *(_QWORD *)(v26 + 8) = v27;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v14 + 44, (__int64)v28, v24, v25);
              KeAbPostRelease((ULONG_PTR)(v14 + 352));
              v32 = *((_QWORD *)v14 + 2);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v32 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v32 - 16), v29, v30, v31);
              KeAbPostRelease(v32 - 16);
              Message = AlpcInitializeHandleTable(v46 + 40);
              v19 = Object;
              if ( Message >= 0 )
              {
                v34 = v44;
                Message = AlpcpValidateAndSetPortAttributes((_DWORD)Object, (_DWORD)a7, (_DWORD)v44, a10, 0, v51, a11);
                if ( Message >= 0 )
                {
                  Message = AlpcpAllocateMessage(v23, 48LL, 1LL);
                  if ( Message >= 0 )
                  {
                    ++*(_WORD *)(*v23 - 30);
                    *(_DWORD *)(*v23 + 264) |= 0x80000000;
                    AlpcpUnlockMessage(*v23, v35, v36, v37);
                    if ( a11 )
                      *v21 |= 0x1000u;
                    if ( (a3 & 0x80000) != 0 )
                      *v21 |= 0x100u;
                    if ( *((_BYTE *)v19 + 268) == 1 )
                    {
                      *v21 |= 0x400u;
LABEL_38:
                      AlpcpSetOwnerProcessPort(v19, a7);
                      if ( (v34[32] & 0x1000000) != 0 )
                      {
                        v19[64] |= 0x1000000u;
                        *((_QWORD *)v19 + 34) = v34[34];
                      }
                      ObfReferenceObject(v19);
                      inserted = ObInsertObjectEx(v19, 0LL, 2031617LL, 0, 0, 0LL, &v47);
                      if ( inserted >= 0 )
                      {
                        v39 = v47;
                        *((_QWORD *)v19 + 7) = v47;
                        *a1 = v39;
                        *a2 = v19;
                        return (unsigned int)inserted;
                      }
                      v20 = inserted;
LABEL_48:
                      ObfDereferenceObject(v19);
                      return (unsigned int)v20;
                    }
                    v19 = Object;
                    Message = SeCreateClientSecurity(
                                KeGetCurrentThread(),
                                (PSECURITY_QUALITY_OF_SERVICE)((char *)Object + 260),
                                0,
                                (PSECURITY_CLIENT_CONTEXT)((char *)Object + 64));
                    if ( Message >= 0 )
                    {
                      v34 = v44;
                      goto LABEL_38;
                    }
                  }
                }
              }
              v20 = Message;
              goto LABEL_48;
            }
            v20 = -1073741801;
          }
          ObfDereferenceObject(v14);
          goto LABEL_48;
        }
      }
    }
    else
    {
      v17 = -1073741758;
    }
    ObfDereferenceObject(v14);
    return (unsigned int)v17;
  }
  return result;
}
