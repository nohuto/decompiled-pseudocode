/*
 * XREFs of SmpHandleConnectionRequest @ 0x140004130
 * Callers:
 *     SmpApiCallback @ 0x140003BD0 (SmpApiCallback.c)
 * Callees:
 *     SmpReadySubSys @ 0x140003A64 (SmpReadySubSys.c)
 *     SmpSearchKnownSubSysDatabase @ 0x1400045B8 (SmpSearchKnownSubSysDatabase.c)
 *     SmpUnlockKnownSubSysList @ 0x140004678 (SmpUnlockKnownSubSysList.c)
 *     SmpLookupControlBlock @ 0x140004694 (SmpLookupControlBlock.c)
 *     SmpGetProcessMuSessionId @ 0x14000470C (SmpGetProcessMuSessionId.c)
 *     SmpWaitForSubSysStartup @ 0x140004958 (SmpWaitForSubSysStartup.c)
 *     SmpDereferenceKnownSubSys @ 0x140004AB0 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x140004BE4 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140004C70 (SmpReleaseControlBlock.c)
 *     SmpAddKnownSubSys @ 0x140004D60 (SmpAddKnownSubSys.c)
 *     SmpCreateKnownSubSys @ 0x140004D9C (SmpCreateKnownSubSys.c)
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 *     SmpDeleteSubSys @ 0x1400132F0 (SmpDeleteSubSys.c)
 */

char __fastcall SmpHandleConnectionRequest(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rbx
  volatile signed __int32 *v5; // rdi
  _DWORD *v6; // r14
  __int64 v7; // rsi
  __int64 KnownSubSys; // r13
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  char v16; // r14
  char *Heap; // rax
  int *v18; // rbx
  char *v19; // r14
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  _OWORD *v24; // rax
  char v26; // [rsp+50h] [rbp-B0h]
  char v27; // [rsp+51h] [rbp-AFh]
  int v28; // [rsp+54h] [rbp-ACh]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  ULONG MaxMessageLength; // [rsp+80h] [rbp-80h] BYREF
  void *PortHandle; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  _OWORD *v38; // [rsp+A0h] [rbp-60h]
  _BYTE v39[16]; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  int v41; // [rsp+C8h] [rbp-38h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+E0h] [rbp-20h]
  __int128 v45; // [rsp+E8h] [rbp-18h]
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+F8h] [rbp-8h] BYREF

  v4 = (__int64 *)(a2 + 8);
  v5 = 0LL;
  v36 = a1;
  v6 = (_DWORD *)(a2 + 40);
  v7 = 0LL;
  v27 = 0;
  v30 = 0;
  KnownSubSys = 0LL;
  v28 = 0;
  v26 = 1;
  v38 = (_OWORD *)(a2 + 8);
  if ( *(_QWORD *)(a2 + 8) == SmpUniqueProcessId || a4 )
  {
    Handle = 0LL;
  }
  else
  {
    v41 = 48;
    v42 = 0LL;
    v44 = 0;
    v43 = 0LL;
    v45 = 0LL;
    if ( (int)NtAlpcOpenSenderProcess(&Handle, a1, a2) < 0 )
    {
      Handle = 0LL;
      LOBYTE(Heap) = 0;
      v26 = 0;
      goto LABEL_65;
    }
    SmpGetProcessMuSessionId(Handle, &v30);
    v11 = *v4;
    v12 = v30;
    v31 = 0;
    v32 = 0LL;
    v33 = v11;
    v5 = (volatile signed __int32 *)SmpSearchKnownSubSysDatabase(v30, &v31);
    if ( v5 )
      goto LABEL_38;
    v13 = SmpLookupControlBlock(v12);
    v7 = v13;
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 16);
      v15 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(v14 + 8) != v15 )
      {
        if ( *(_QWORD *)(v7 + 56) == v15 )
        {
          v16 = 1;
          v28 = 8;
          v27 = 1;
          goto LABEL_9;
        }
        goto LABEL_51;
      }
      KnownSubSys = SmpCreateKnownSubSys(1LL);
      v32 = v39;
      SmpWaitForSubSysStartup(v12, 1LL, 0LL, v39);
      if ( *(_DWORD *)v14 || *(_QWORD *)(v14 + 8) != *(_QWORD *)(a2 + 8) )
      {
        v6 = (_DWORD *)(a2 + 40);
      }
      else
      {
        v5 = (volatile signed __int32 *)SmpSearchKnownSubSysDatabase(v12, &v31);
        v31 = 1;
        v6 = (_DWORD *)(a2 + 40);
        LODWORD(v33) = *(_DWORD *)(a2 + 40);
        if ( v5 )
        {
          v26 = 0;
        }
        else
        {
          v5 = (volatile signed __int32 *)SmpSearchKnownSubSysDatabase(v12, &v31);
          if ( v5 )
          {
            v26 = 0;
          }
          else if ( KnownSubSys )
          {
            *(_DWORD *)(KnownSubSys + 64) = v12;
            v5 = (volatile signed __int32 *)KnownSubSys;
            *(_QWORD *)(KnownSubSys + 32) = Handle;
            v23 = KnownSubSys;
            *(_DWORD *)(KnownSubSys + 24) = *v6;
            KnownSubSys = 0LL;
            Handle = 0LL;
            SmpAddKnownSubSys(v39, v23);
            v27 = 1;
          }
          else
          {
            v26 = 0;
          }
        }
      }
      SmpUnlockKnownSubSysList(v39);
      if ( v5 )
      {
        LOBYTE(Heap) = v26;
        if ( v26 == 1 )
        {
LABEL_38:
          if ( (v5[2] & 1) == 0 )
          {
            LODWORD(v33) = *v6;
            v31 = 1;
            v32 = 0LL;
            KnownSubSys = SmpSearchKnownSubSysDatabase(v12, &v31);
            if ( KnownSubSys )
            {
              v26 = 0;
              LOBYTE(Heap) = 0;
              goto LABEL_65;
            }
          }
          _m_prefetchw((const void *)(v5 + 2));
          if ( (_InterlockedOr(v5 + 2, 2u) & 2) != 0 )
          {
            v26 = 0;
            LOBYTE(Heap) = 0;
            goto LABEL_65;
          }
LABEL_40:
          v16 = v27;
          goto LABEL_9;
        }
      }
      else
      {
        if ( v26 == 1 )
          goto LABEL_40;
        LOBYTE(Heap) = v26;
      }
LABEL_65:
      v18 = 0LL;
      goto LABEL_15;
    }
  }
LABEL_51:
  v16 = 0;
LABEL_9:
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x28uLL);
  v18 = (int *)Heap;
  if ( Heap )
  {
    v19 = Heap + 24;
    RtlInitializeSRWLock(Heap + 24);
    v18[2] = 0;
    if ( v5 )
    {
      v21 = v28 | 0x10;
      *((_QWORD *)v18 + 4) = v5;
      LOBYTE(v28) = v28 | 0x10;
    }
    else
    {
      v20 = (__int64)Handle;
      if ( v28 )
        v20 = v7;
      *((_QWORD *)v18 + 4) = v20;
      v21 = v28;
    }
    *v18 = v21;
    *(_DWORD *)(a3 + 4) |= 0x20000000u;
    *((_QWORD *)v18 + 2) = 0LL;
    RtlAcquireSRWLockExclusive(v19);
    LOBYTE(Heap) = v26;
    goto LABEL_15;
  }
  v26 = 0;
  if ( v16 != 1 )
LABEL_15:
    v16 = 0;
  v22 = NtAlpcAcceptConnectPort(&v37, v36, 0LL, 0LL, 0LL, v18, a2, a3, (_BYTE)Heap);
  if ( v26 != 1 )
    goto LABEL_21;
  if ( v22 >= 0 )
  {
    v18[1] = *(_DWORD *)(AlpcGetMessageAttribute(a3, 0x20000000LL) + 16);
    *((_QWORD *)v18 + 2) = v37;
    LOBYTE(v22) = RtlReleaseSRWLockExclusive(v18 + 6);
    if ( v5 )
    {
      *(_WORD *)(a2 + 282) = 0;
      RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(a2 + 44));
      SecurityQos.ImpersonationLevel = SecurityIdentification;
      *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
      if ( NtConnectPort(&PortHandle, &DestinationString, &SecurityQos, 0LL, 0LL, &MaxMessageLength, 0LL, 0LL) >= 0 )
      {
        if ( MaxMessageLength == 288 )
          *((_QWORD *)v5 + 5) = PortHandle;
        else
          NtClose(PortHandle);
      }
      if ( v7 )
        NtSetEvent(*(HANDLE *)(v7 + 40), 0LL);
      if ( (v5[2] & 1) != 0 )
        v24 = v38;
      else
        v24 = (_OWORD *)(a2 + 40);
      LOBYTE(v22) = SmpReadySubSys((__int64)v5, v24);
      v5 = 0LL;
    }
    else if ( (v28 & 8) != 0 )
    {
      LOBYTE(v22) = 0;
      v7 = 0LL;
    }
    else if ( Handle )
    {
      LOBYTE(v22) = 0;
      Handle = 0LL;
    }
LABEL_21:
    if ( !v16 )
      goto LABEL_22;
    goto LABEL_71;
  }
  LOBYTE(v22) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v18);
  if ( v27 != 1 )
    goto LABEL_21;
LABEL_71:
  if ( v5 )
    SmpDeleteSubSys((PVOID)v5);
  LOBYTE(v22) = SmpDestroyControlBlock((PVOID)v7);
LABEL_22:
  if ( Handle )
    LOBYTE(v22) = NtClose(Handle);
  if ( v5 )
    LOBYTE(v22) = SmpDereferenceKnownSubSys((PVOID)v5);
  if ( KnownSubSys )
    LOBYTE(v22) = SmpDereferenceKnownSubSys((PVOID)KnownSubSys);
  if ( v7 )
    LOBYTE(v22) = SmpReleaseControlBlock((PVOID)v7);
  return v22;
}
