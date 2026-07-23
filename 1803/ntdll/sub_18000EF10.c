/*
 * XREFs of sub_18000EF10 @ 0x18000EF10
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18000B210 (RtlGuardCheckLongJumpTarget.c)
 *     sub_18000D2E0 @ 0x18000D2E0 (sub_18000D2E0.c)
 *     RtlLookupFunctionEntry @ 0x18000EBA0 (RtlLookupFunctionEntry.c)
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     sub_1800103FC @ 0x1800103FC (sub_1800103FC.c)
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 *     RtlPcToFileHeader @ 0x180010F50 (RtlPcToFileHeader.c)
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 *     sub_180075968 @ 0x180075968 (sub_180075968.c)
 *     sub_180085CF0 @ 0x180085CF0 (sub_180085CF0.c)
 *     sub_1800DAFC0 @ 0x1800DAFC0 (sub_1800DAFC0.c)
 *     RtlLookupFunctionTable @ 0x1800DB1B0 (RtlLookupFunctionTable.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_1800286DC @ 0x1800286DC (sub_1800286DC.c)
 *     sub_1800289C0 @ 0x1800289C0 (sub_1800289C0.c)
 *     sub_180070A54 @ 0x180070A54 (sub_180070A54.c)
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 */

__int64 __fastcall sub_18000EF10(PVOID BaseAddress, __int64 a2)
{
  bool v3; // zf
  __int64 v5; // r14
  unsigned __int64 Ptr; // rbx
  int v7; // r10d
  int v8; // r9d
  int v9; // eax
  char *v10; // r8
  unsigned __int64 v11; // rdx
  signed __int64 v12; // rax
  void *v14; // rcx
  __int64 v15; // r15
  signed __int64 v16; // rcx
  bool v17; // cl
  char *v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // r8
  signed __int64 v21; // rtt
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  signed __int64 v25; // rcx
  signed __int64 v26; // rdx
  signed __int64 v27; // rtt
  int j; // ecx
  _QWORD *v30; // rcx
  __int64 i; // rdx
  unsigned __int64 MemoryInformation; // [rsp+38h] [rbp-29h] BYREF
  int v33; // [rsp+40h] [rbp-21h]
  int v34; // [rsp+48h] [rbp-19h]
  unsigned __int64 v35; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 *v36; // [rsp+60h] [rbp-1h]
  __int64 v37; // [rsp+68h] [rbp+7h]
  HANDLE UniqueThread; // [rsp+70h] [rbp+Fh]
  int v39; // [rsp+78h] [rbp+17h]
  signed __int32 v40; // [rsp+7Ch] [rbp+1Bh] BYREF
  int v41; // [rsp+D0h] [rbp+6Fh] BYREF
  __int64 v42; // [rsp+D8h] [rbp+77h] BYREF

  v3 = dword_18015CFB8 == 3;
  v5 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v3 )
  {
    v41 = 0;
    Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, 17LL, 0LL);
    if ( !Ptr )
    {
LABEL_3:
      if ( KiUserInvertedFunctionTable != 1 )
      {
        v7 = 1;
        v8 = KiUserInvertedFunctionTable - 1;
        while ( v8 >= v7 )
        {
          v9 = (v8 + v7) >> 1;
          v10 = (char *)&xmmword_18016F4E0 + 24 * v9;
          v11 = *((_QWORD *)v10 + 1);
          if ( (unsigned __int64)BaseAddress < v11 )
          {
            if ( !v9 )
              break;
            v8 = v9 - 1;
          }
          else
          {
            if ( (unsigned __int64)BaseAddress < v11 + *((unsigned int *)v10 + 4) )
            {
              *(_OWORD *)a2 = *(_OWORD *)v10;
              *(_QWORD *)(a2 + 16) = *((_QWORD *)v10 + 2);
              v5 = *(_QWORD *)a2;
              break;
            }
            v7 = v9 + 1;
          }
        }
      }
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, 0LL, 17LL);
      if ( v12 != 17 )
      {
        if ( (v12 & 1) == 0 )
          RtlRaiseStatus(-1073741212);
        if ( (v12 & 2) != 0 )
        {
LABEL_46:
          if ( (v12 & 8) != 0 )
          {
            v30 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v30[1] )
              v30 = (_QWORD *)*v30;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v22 = -9LL;
            v23 = -5LL;
          }
          else
          {
            v22 = -1LL;
            v23 = 3LL;
          }
          do
          {
            v24 = v23;
            v25 = v12 & 6;
            if ( v25 != 2 )
              v24 = v22;
            v26 = v12 + v24;
            v27 = v12;
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, v26, v12);
          }
          while ( v27 != v12 );
          if ( v25 == 2 )
            sub_180070AAC(&Address, v26, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v20 = 0LL;
          if ( (v12 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
            v20 = v12 - 16;
          v21 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, v20, v12);
          if ( v21 == v12 )
            break;
          if ( (v12 & 2) != 0 )
            goto LABEL_46;
        }
      }
LABEL_14:
      if ( v5 || !byte_18016F4DC )
        return v5;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v15 = (Ptr >> 1) & 1;
      if ( (Ptr & 1) != 0 && (v15 || (Ptr & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)sub_1800286DC() )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v17 = 0;
        v40 = 2;
        v37 = 0LL;
        if ( v15 )
        {
          v36 = 0LL;
          v39 = -1;
          v35 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
          v18 = (char *)((unsigned __int64)&v35 | Ptr & 8 | 7);
          v17 = (Ptr & 4) == 0;
        }
        else
        {
          v39 = -2;
          v36 = &v35;
          v18 = (char *)&v35 + 3;
        }
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, (signed __int64)v18, Ptr);
        v3 = Ptr == v19;
        Ptr = v19;
        if ( !v3 )
          goto LABEL_39;
        if ( v17 )
          sub_180070A54(&Address);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( j = dword_18015ADA0; j; --j )
          {
            if ( (v40 & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(&v40, 1u) )
        {
          do
            ZwWaitForAlertByThreadId(&Address, 0LL);
          while ( (v40 & 4) == 0 );
        }
      }
      else
      {
        v16 = (Ptr | 1) + 16;
        if ( v15 )
          v16 = Ptr | 1;
        if ( Ptr == _InterlockedCompareExchange64((volatile signed __int64 *)&Address, v16, Ptr) )
          goto LABEL_3;
LABEL_39:
        sub_1800289C0(&v41);
        _m_prefetchw(&Address);
        Ptr = (unsigned __int64)Address.Ptr;
      }
    }
  }
LABEL_16:
  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         &MemoryInformation,
         0x18uLL,
         0LL) < 0
    || (v14 = (void *)MemoryInformation) == 0LL
    || (v34 & 2) != 0
    || (v34 & 1) != 0
    || (unsigned __int64)BaseAddress < MemoryInformation )
  {
    v14 = 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 16) = v33;
  }
  *(_QWORD *)(a2 + 8) = v14;
  if ( v14 )
  {
    if ( (int)sub_18001014C(v14, (__int64)&v42) < 0 )
    {
      v5 = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
    else
    {
      v5 = v42;
      *(_QWORD *)a2 = v42;
    }
  }
  return v5;
}
