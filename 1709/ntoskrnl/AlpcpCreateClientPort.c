/*
 * XREFs of AlpcpCreateClientPort @ 0x140465D6C
 * Callers:
 *     AlpcpConnectPort @ 0x14046378C (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x14046827C (NtSecureConnectPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     AlpcpSetOwnerProcessPort @ 0x1404661B0 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpAllocateMessage @ 0x140466410 (AlpcpAllocateMessage.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140466530 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcInitializeHandleTable @ 0x140466744 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x140466B0C (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x140466C88 (AlpcpCreatePort.c)
 *     AlpcpCheckConnectionSecurity @ 0x140467994 (AlpcpCheckConnectionSecurity.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     SeCreateClientSecurity @ 0x14049CBB0 (SeCreateClientSecurity.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateBlob @ 0x1404A0EE0 (AlpcpAllocateBlob.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  char PreviousMode; // r12
  __int64 result; // rax
  char *v13; // r14
  __int64 v14; // rcx
  signed __int64 *v15; // rdi
  struct _KPROCESS *v16; // rsi
  int v17; // edi
  char v18; // al
  _DWORD *v19; // rdi
  int v20; // esi
  _DWORD *v21; // rsi
  _QWORD *Blob; // rax
  ULONG_PTR *v23; // r13
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 **v26; // rdx
  __int64 v27; // rdi
  NTSTATUS Message; // eax
  _QWORD *v29; // rbx
  int inserted; // ecx
  __int64 v31; // rax
  volatile signed __int64 *v32; // rdi
  PVOID v33; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-10h]
  __int64 v36; // [rsp+58h] [rbp-8h] BYREF
  char v40; // [rsp+C0h] [rbp+60h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, (_DWORD)a2, 1, (_DWORD)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&v33);
  else
    result = ObReferenceObjectByName(a4, 0, 0, 1, (__int64)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&v33);
  if ( (int)result >= 0 )
  {
    v13 = (char *)v33;
    v14 = *((unsigned int *)v33 + 104);
    if ( (*((_DWORD *)v33 + 104) & 6) == 2 )
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
        v17 = AlpcpCheckConnectionSecurity(v16);
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
          v40 = v18;
          v20 = AlpcpInitializePort(Object, 2LL);
          if ( v20 >= 0 )
          {
            v21 = v19 + 104;
            v19[104] |= 8u;
            Blob = (_QWORD *)AlpcpAllocateBlob(&AlpcConnectionType, 72LL, 1LL);
            v35 = Blob;
            if ( Blob )
            {
              *((_QWORD *)v19 + 2) = Blob;
              v23 = Blob + 8;
              Blob[8] = 0LL;
              Blob[1] = 0LL;
              *Blob = v13;
              Blob[2] = v19;
              ExAcquirePushLockExclusiveEx(*((_QWORD *)v13 + 2) - 16LL, 0LL);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 352), 0LL);
              v24 = *((_QWORD *)v13 + 2) + 24LL;
              v25 = v35 + 3;
              v26 = *(__int64 ***)(*((_QWORD *)v13 + 2) + 32LL);
              if ( *v26 != (__int64 *)v24 )
                __fastfail(3u);
              *v25 = v24;
              v25[1] = (__int64)v26;
              *v26 = v25;
              *(_QWORD *)(v24 + 8) = v25;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v13 + 44);
              KeAbPostRelease((ULONG_PTR)(v13 + 352));
              v27 = *((_QWORD *)v13 + 2);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v27 - 16));
              KeAbPostRelease(v27 - 16);
              Message = AlpcInitializeHandleTable(v35 + 5);
              v19 = Object;
              if ( Message >= 0 )
              {
                v29 = v33;
                Message = AlpcpValidateAndSetPortAttributes((_DWORD)Object, (_DWORD)a7, (_DWORD)v33, a10, 0, v40, a11);
                if ( Message >= 0 )
                {
                  Message = AlpcpAllocateMessage(v23, 48LL, 1LL);
                  if ( Message >= 0 )
                  {
                    ++*(_WORD *)(*v23 - 30);
                    *(_DWORD *)(*v23 + 264) |= 0x80000000;
                    AlpcpUnlockMessage(*v23);
                    if ( a11 )
                      *v21 |= 0x1000u;
                    if ( (a3 & 0x80000) != 0 )
                      *v21 |= 0x100u;
                    if ( *((_BYTE *)v19 + 268) == 1 )
                    {
                      *v21 |= 0x400u;
LABEL_37:
                      AlpcpSetOwnerProcessPort(v19, a7);
                      if ( (v29[32] & 0x1000000) != 0 )
                      {
                        v19[64] |= 0x1000000u;
                        *((_QWORD *)v19 + 34) = v29[34];
                      }
                      ObfReferenceObject(v19);
                      inserted = ObInsertObjectEx(v19, 0LL, 0, 0LL, (__int64)&v36);
                      if ( inserted >= 0 )
                      {
                        v31 = v36;
                        *((_QWORD *)v19 + 7) = v36;
                        *a1 = v31;
                        *a2 = v19;
                        return (unsigned int)inserted;
                      }
                      v20 = inserted;
LABEL_46:
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
                      v29 = v33;
                      goto LABEL_37;
                    }
                  }
                }
              }
              v20 = Message;
              goto LABEL_46;
            }
            v20 = -1073741801;
          }
          ObfDereferenceObject(v13);
          goto LABEL_46;
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
