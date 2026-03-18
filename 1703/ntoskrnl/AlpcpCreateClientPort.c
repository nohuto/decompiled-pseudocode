/*
 * XREFs of AlpcpCreateClientPort @ 0x1404768A4
 * Callers:
 *     NtSecureConnectPort @ 0x140470F8C (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x140474C88 (AlpcpConnectPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     AlpcpCheckConnectionSecurity @ 0x140472F48 (AlpcpCheckConnectionSecurity.c)
 *     AlpcpCreatePort @ 0x140475F08 (AlpcpCreatePort.c)
 *     AlpcpInitializePort @ 0x140475F6C (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x1404760E8 (AlpcInitializeHandleTable.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x14047613C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x140476CEC (AlpcpSetOwnerProcessPort.c)
 *     AlpcpAllocateMessage @ 0x140479EA0 (AlpcpAllocateMessage.c)
 *     AlpcpAllocateBlob @ 0x14047C4C0 (AlpcpAllocateBlob.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        void *a8,
        void *a9,
        __int64 a10,
        char a11)
{
  char PreviousMode; // r12
  __int64 result; // rax
  char *v13; // r14
  int v14; // ecx
  signed __int64 *v15; // rdi
  struct _KPROCESS *v16; // rsi
  int v17; // edi
  char v18; // al
  _DWORD *v19; // rdi
  int v20; // esi
  _DWORD *v21; // rsi
  _QWORD *Blob; // r13
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 **v25; // rdx
  __int64 v26; // rdi
  int Message; // eax
  _QWORD *v28; // rbx
  ULONG_PTR *v29; // r14
  int inserted; // ecx
  __int64 v31; // rax
  volatile signed __int64 *v32; // rdi
  PVOID v33; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h] BYREF
  char v39; // [rsp+C0h] [rbp+60h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, (_DWORD)a2, 1, (_DWORD)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&v33);
  else
    result = ObReferenceObjectByName(a4, 0, 0, 1, (__int64)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&v33);
  if ( (int)result >= 0 )
  {
    v13 = (char *)v33;
    v14 = *((_DWORD *)v33 + 104);
    if ( (v14 & 6) == 2 )
    {
      if ( !a11 && (v14 & 0x1000) != 0 )
      {
        v32 = (volatile signed __int64 *)((char *)v33 + 352);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v33 + 352, 0LL);
        *((_DWORD *)v13 + 104) &= ~0x2000u;
        if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v13 + 44);
        KeAbPostRelease((ULONG_PTR)(v13 + 352));
        v13 = (char *)v33;
      }
      if ( !a9 && !a8 )
        goto LABEL_60;
      v15 = (signed __int64 *)(v13 + 352);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v13 + 352), 0LL);
      v16 = (struct _KPROCESS *)*((_QWORD *)v13 + 3);
      if ( ((unsigned __int8)v16 & 1) != 0 )
      {
        v16 = 0LL;
      }
      else if ( v16 )
      {
        ObfReferenceObjectWithTag(v16, 0x63706C41u);
      }
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15);
      KeAbPostRelease((ULONG_PTR)v15);
      if ( v16 )
      {
        v17 = AlpcpCheckConnectionSecurity(v16, PreviousMode, a9, a8);
        ObfDereferenceObjectWithTag(v16, 0x63706C41u);
      }
      else
      {
        v17 = -1073741152;
      }
      v13 = (char *)v33;
      if ( v17 >= 0 )
      {
LABEL_60:
        LOBYTE(v14) = PreviousMode;
        v17 = AlpcpCreatePort(v14, a6, &Object);
        if ( v17 >= 0 )
        {
          if ( !a7 || (v18 = 1, (*a7 & 0x40000) == 0) )
            v18 = 0;
          v19 = Object;
          v39 = v18;
          v20 = AlpcpInitializePort((__int64)Object, 2, v18);
          if ( v20 >= 0 )
          {
            v21 = v19 + 104;
            v19[104] |= 8u;
            Blob = (_QWORD *)AlpcpAllocateBlob(&AlpcConnectionType, 72LL);
            if ( Blob )
            {
              *((_QWORD *)v19 + 2) = Blob;
              *Blob = v13;
              Blob[2] = v19;
              Blob[1] = 0LL;
              Blob[8] = 0LL;
              ExAcquirePushLockExclusiveEx(*((_QWORD *)v13 + 2) - 16LL, 0LL);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 352), 0LL);
              v23 = Blob + 3;
              v24 = *((_QWORD *)v13 + 2) + 24LL;
              v25 = *(__int64 ***)(*((_QWORD *)v13 + 2) + 32LL);
              if ( *v25 != (__int64 *)v24 )
                __fastfail(3u);
              *v23 = v24;
              Blob[4] = v25;
              *v25 = v23;
              *(_QWORD *)(v24 + 8) = v23;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v13 + 44);
              KeAbPostRelease((ULONG_PTR)(v13 + 352));
              v26 = *((_QWORD *)v13 + 2);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v26 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v26 - 16));
              KeAbPostRelease(v26 - 16);
              Message = AlpcInitializeHandleTable((__int64)(Blob + 5));
              v19 = Object;
              if ( Message >= 0 )
              {
                v28 = v33;
                Message = AlpcpValidateAndSetPortAttributes((__int64)Object, a7, (__int64)v33, a10, 0, v39, a11);
                if ( Message >= 0 )
                {
                  v29 = Blob + 8;
                  Message = AlpcpAllocateMessage(Blob + 8, 48LL, 1LL);
                  if ( Message >= 0 )
                  {
                    ++*(_WORD *)(*v29 - 30);
                    *(_DWORD *)(*v29 + 264) |= 0x80000000;
                    AlpcpUnlockMessage(*v29);
                    if ( a11 )
                      *v21 |= 0x1000u;
                    if ( (a3 & 0x80000) != 0 )
                      *v21 |= 0x100u;
                    if ( *((_BYTE *)v19 + 268) == 1 )
                    {
                      *v21 |= 0x400u;
LABEL_37:
                      AlpcpSetOwnerProcessPort(v19, a7);
                      if ( (v28[32] & 0x1000000) != 0 )
                      {
                        v19[64] |= 0x1000000u;
                        *((_QWORD *)v19 + 34) = v28[34];
                      }
                      ObfReferenceObject(v19);
                      inserted = ObInsertObjectEx(v19, 0LL, 0, 0LL, (__int64)&v35);
                      if ( inserted >= 0 )
                      {
                        v31 = v35;
                        *((_QWORD *)v19 + 7) = v35;
                        *a1 = v31;
                        *a2 = v19;
                        return (unsigned int)inserted;
                      }
                      v20 = inserted;
LABEL_47:
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
                      v28 = v33;
                      goto LABEL_37;
                    }
                  }
                }
              }
              v20 = Message;
              goto LABEL_47;
            }
            v20 = -1073741801;
          }
          ObfDereferenceObject(v13);
          goto LABEL_47;
        }
      }
    }
    else
    {
      v17 = -1073741758;
    }
    ObfDereferenceObject(v13);
    return (unsigned int)v17;
  }
  return result;
}
