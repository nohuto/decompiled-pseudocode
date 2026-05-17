/*
 * XREFs of RtlpCallVectoredHandlers @ 0x18006CBA8
 * Callers:
 *     RtlDispatchException @ 0x180025D00 (RtlDispatchException.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     RtlDecodePointer @ 0x18006CE80 (RtlDecodePointer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpLogExceptionHandler @ 0x1800F9E9C (RtlpLogExceptionHandler.c)
 */

char __fastcall RtlpCallVectoredHandlers(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rax
  char v5; // si
  unsigned __int64 *v6; // r8
  __int64 v7; // r12
  _QWORD *v8; // r13
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r14
  _QWORD *v15; // r15
  _DWORD *v16; // rsi
  __int64 (__fastcall *v17)(_QWORD *); // rbp
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  int v20; // ebp
  unsigned __int64 *v21; // r8
  __int64 v22; // r9
  unsigned __int64 v24; // rdx
  unsigned __int64 *v25; // r8
  __int64 v26; // r9
  int v28; // ebx
  int v29; // ecx
  int v30; // ebx
  int v31; // ecx
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  int v34; // ebx
  unsigned __int64 v35; // rbx
  void *ProcessHeap; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 *v38; // r8
  __int64 v39; // r9
  int v40; // edx
  struct _PEB *v41; // [rsp+20h] [rbp-68h]
  _QWORD v42[12]; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v45; // [rsp+A8h] [rbp+20h]

  v4 = a3;
  v5 = 0;
  v6 = (unsigned __int64 *)(a3 + 2);
  v45 = (unsigned int)v6;
  v7 = 3 * v4;
  v41 = NtCurrentPeb();
  v8 = &LdrpVectorHandlerList + 3 * v4 + 1;
  LODWORD(v4) = v41->CrossProcessFlags;
  if ( _bittest((const int *)&v4, (unsigned int)v6) )
  {
    v42[0] = a1;
    v9 = 0LL;
    v10 = (unsigned __int64)*(&LdrpVectorHandlerList + v7);
    v42[1] = a2;
    RtlAcquireSRWLockExclusive(v10, a2, v6, a4);
    v14 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 != v8 )
    {
      while ( 1 )
      {
        v15 = v14;
        if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
          v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
          if ( v28 == -1 )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v28 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        v16 = v14 + 2;
        ++*((_DWORD *)v14 + 4);
        if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
          v29 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v29 - 1;
          if ( v29 == 1 )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v7));
        v17 = (__int64 (__fastcall *)(_QWORD *))RtlDecodePointer(v14[3]);
        v18 = 0LL;
        if ( (v41->NtGlobalFlag & 0x800000) != 0 )
          v18 = RtlpLogExceptionHandler(a1, a2, 0LL, v17);
        v20 = v17(v42);
        if ( v18 )
          *(_DWORD *)(v18 + 1396) = v20 != -1;
        RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + v7), v19, v21, v22);
        v14 = (_QWORD *)*v14;
        if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
          v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
          if ( v30 == -1 )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v30 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( (*v16)-- == 1 )
        {
          LdrProtectMrdata(0);
          v32 = (_QWORD *)*v15;
          v33 = (_QWORD *)v15[1];
          if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v33 != v15 )
            __fastfail(3u);
          *v33 = v32;
          v32[1] = v33;
          if ( v33 == v32 )
            _interlockedbittestandreset((volatile signed __int32 *)&v41->80, v45);
          LdrProtectMrdata(1);
          *v15 = v9;
          v9 = v15;
        }
        if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
          v31 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v31 - 1;
          if ( v31 == 1 )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( v20 == -1 )
          break;
        if ( v14 == v8 )
        {
          v5 = 0;
          goto LABEL_15;
        }
      }
      v5 = 1;
    }
LABEL_15:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v7));
    if ( v9 )
    {
      if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v24, v25, v26);
        v34 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
        if ( v34 == -1 )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v34 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v35 = (unsigned __int64)v9;
        v9 = (_QWORD *)*v9;
        if ( LdrControlFlowGuardEnforced() )
          ProcessHeap = (void *)LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)ProcessHeap, 0, v35);
      }
      while ( v9 );
      if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v37, v38, v39);
        v40 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v40 - 1;
        if ( v40 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
    }
  }
  return v5;
}
