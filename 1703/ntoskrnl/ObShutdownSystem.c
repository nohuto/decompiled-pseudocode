/*
 * XREFs of ObShutdownSystem @ 0x1406C0774
 * Callers:
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObMakeTemporaryObject @ 0x140422C60 (ObMakeTemporaryObject.c)
 *     ExEnumHandleTable @ 0x140428630 (ExEnumHandleTable.c)
 *     ObpDeleteSymbolicLinkName @ 0x14045D4F8 (ObpDeleteSymbolicLinkName.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 */

void __fastcall ObShutdownSystem(int a1)
{
  __int64 v1; // r15
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rcx
  char *v5; // rsi
  unsigned int v6; // ebx
  char *v7; // rdx
  unsigned int v8; // r14d
  unsigned int i; // r12d
  char *v10; // r10
  char *v11; // rdi
  char *v12; // r13
  struct _OBJECT_TYPE *v13; // rax
  char v14; // cl
  struct _KTHREAD *CurrentThread; // rax
  char *v16; // rcx
  PVOID *v17; // rcx
  int v18; // [rsp+40h] [rbp-38h]
  char *v19; // [rsp+50h] [rbp-28h]
  struct _OBJECT_TYPE *v20; // [rsp+58h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  int v22; // [rsp+C0h] [rbp+48h]
  int v23; // [rsp+C8h] [rbp+50h] BYREF
  PVOID Object; // [rsp+D0h] [rbp+58h] BYREF
  char *j; // [rsp+D8h] [rbp+60h]

  v1 = 0LL;
  if ( !a1 )
  {
    v5 = (char *)ObpRootDirectoryObject;
    v6 = 1;
    v22 = 1;
    v7 = 0LL;
    v19 = 0LL;
    v8 = 1;
    if ( !ObpRootDirectoryObject )
      return;
    while ( 1 )
    {
LABEL_15:
      for ( i = 0; i < 0x25; ++i )
      {
        v10 = &v5[8 * i];
        v11 = v10;
        for ( j = v10; *(_QWORD *)v11; v1 = 0LL )
        {
          v12 = *(char **)(*(_QWORD *)v11 + 8LL);
          v13 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)];
          v14 = *(v12 - 22);
          v20 = v13;
          if ( (v14 & 2) != 0 )
          {
            v1 = (__int64)&v12[-ObpInfoMaskToOffset[v14 & 3] - 48];
            v13 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)];
          }
          if ( v7 )
          {
            if ( v12 != v7 || (v19 = 0LL, v6 <= v8) )
            {
LABEL_25:
              v11 = *(char **)v11;
              goto LABEL_36;
            }
            v6 = v8;
            v11 = v10;
            v22 = v8;
          }
          else
          {
            if ( v13 == ObpTypeObjectType )
              goto LABEL_25;
            if ( v13 == ObpDirectoryObjectType )
            {
              ++v8;
              v5 = *(char **)(*(_QWORD *)v11 + 8LL);
              v1 = 0LL;
              goto LABEL_15;
            }
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 - 32), 0LL);
            *(v12 - 21) &= ~0x10u;
            ExReleasePushLockEx((ULONG_PTR)(v12 - 32), 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            if ( *((_QWORD *)v12 - 5) )
            {
              v11 = *(char **)v11;
              v6 = v22;
            }
            else
            {
              v16 = *(char **)v11;
              *(_QWORD *)v11 = **(_QWORD **)v11;
              ExFreePoolWithTag(v16, 0);
              if ( (v20->TypeInfo.ObjectTypeFlags & 8) == 0 )
              {
                LOBYTE(v18) = 0;
                v20->TypeInfo.SecurityProcedure(
                  v12,
                  DeleteSecurityDescriptor,
                  0LL,
                  0LL,
                  0LL,
                  (void **)v12 - 1,
                  v20->TypeInfo.PoolType,
                  0LL,
                  v18);
              }
              if ( v20 == ObpSymbolicLinkObjectType )
              {
                v6 = v8;
                v22 = v8;
                ObpDeleteSymbolicLinkName((__int64)v12);
                v11 = j;
              }
              else
              {
                v6 = v22;
              }
              ExFreePoolWithTag(*(PVOID *)(v1 + 16), 0);
              *(_QWORD *)(v1 + 16) = 0LL;
              *(_DWORD *)(v1 + 8) = 0;
              *(_QWORD *)v1 = 0LL;
              ObfDereferenceObject(v12);
              ObfDereferenceObject(v5);
            }
            v10 = j;
          }
LABEL_36:
          v7 = v19;
        }
      }
      --v8;
      if ( (*(v5 - 22) & 2) != 0 )
        v17 = (PVOID *)&v5[-ObpInfoMaskToOffset[*(v5 - 22) & 3] - 48];
      else
        v17 = 0LL;
      v7 = v5;
      v5 = (char *)*v17;
      v19 = v7;
      if ( !*v17 )
        return;
    }
  }
  if ( a1 == 1 )
  {
    v23 = 0;
    ExEnumHandleTable(
      PsInitialSystemProcess[1].ActiveProcessors.Bitmap[5],
      (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))ObpShutdownCloseHandleProcedure,
      (__int64)&v23,
      0LL);
  }
  else
  {
    v2 = ObpTypeObjectType;
    v3 = *(_QWORD **)ObpTypeObjectType;
    while ( v3 != v2 )
    {
      v4 = v3 + 10;
      v3 = (_QWORD *)*v3;
      Object = v4;
      ObMakeTemporaryObject(v4);
    }
    RtlInitUnicodeString(&DestinationString, L"DosDevices");
    if ( (int)ObReferenceObjectByName(
                (__int64)&DestinationString,
                64LL,
                0LL,
                0,
                (__int64)ObpSymbolicLinkObjectType,
                0,
                0LL,
                &Object) >= 0 )
    {
      ObMakeTemporaryObject(Object);
      ObfDereferenceObject(Object);
    }
    RtlInitUnicodeString(&DestinationString, L"Global");
    if ( (int)ObReferenceObjectByName(
                (__int64)&DestinationString,
                64LL,
                0LL,
                0,
                (__int64)ObpSymbolicLinkObjectType,
                0,
                0LL,
                &Object) >= 0 )
    {
      ObMakeTemporaryObject(Object);
      ObfDereferenceObject(Object);
    }
    RtlInitUnicodeString(&DestinationString, L"GLOBALROOT");
    if ( (int)ObReferenceObjectByName(
                (__int64)&DestinationString,
                64LL,
                0LL,
                0,
                (__int64)ObpSymbolicLinkObjectType,
                0,
                0LL,
                &Object) >= 0 )
    {
      ObMakeTemporaryObject(Object);
      ObfDereferenceObject(Object);
    }
    ObfDereferenceObject(ObpRootDirectoryObject);
    ObfDereferenceObject(ObpDirectoryObjectType);
    ObfDereferenceObject(ObpSymbolicLinkObjectType);
    ObfDereferenceObject(ObpTypeDirectoryObject);
    ObfDereferenceObject(ObpTypeObjectType);
  }
}
