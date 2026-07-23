/*
 * XREFs of sub_180034A40 @ 0x180034A40
 * Callers:
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 *     RtlQueryInformationActivationContext @ 0x180017DF0 (RtlQueryInformationActivationContext.c)
 *     sub_18003076C @ 0x18003076C (sub_18003076C.c)
 *     sub_180032340 @ 0x180032340 (sub_180032340.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     RtlLookupFunctionEntry @ 0x180034710 (RtlLookupFunctionEntry.c)
 *     RtlPcToFileHeader @ 0x1800382A0 (RtlPcToFileHeader.c)
 *     sub_1800799C0 @ 0x1800799C0 (sub_1800799C0.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180079EB0 (RtlGuardCheckLongJumpTarget.c)
 *     sub_18007A8C0 @ 0x18007A8C0 (sub_18007A8C0.c)
 *     sub_1800D75C8 @ 0x1800D75C8 (sub_1800D75C8.c)
 *     RtlLookupFunctionTable @ 0x1800E1500 (RtlLookupFunctionTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_18000BFBC @ 0x18000BFBC (sub_18000BFBC.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_1800662B0 @ 0x1800662B0 (sub_1800662B0.c)
 *     sub_1800774C8 @ 0x1800774C8 (sub_1800774C8.c)
 *     sub_180077520 @ 0x180077520 (sub_180077520.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A8B30 (ZwWaitForAlertByThreadId.c)
 */

__int64 __fastcall sub_180034A40(PVOID BaseAddress, __int64 a2)
{
  bool v3; // zf
  __int64 v5; // r14
  signed __int64 Ptr; // rbx
  int v7; // r10d
  int v8; // r9d
  int v9; // eax
  char *v10; // r8
  unsigned __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  unsigned __int64 v15; // rcx
  signed __int64 v16; // rcx
  signed __int64 v17; // rdx
  signed __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  signed __int64 v22; // rax
  bool v23; // cl
  char *v24; // rdx
  signed __int64 v25; // rax
  int j; // ecx
  _QWORD *v28; // rax
  __int64 i; // rdx
  unsigned __int64 MemoryInformation; // [rsp+38h] [rbp-29h] BYREF
  int v31; // [rsp+40h] [rbp-21h]
  int v32; // [rsp+48h] [rbp-19h]
  unsigned __int64 v33; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 *v34; // [rsp+60h] [rbp-1h]
  __int64 v35; // [rsp+68h] [rbp+7h]
  HANDLE UniqueThread; // [rsp+70h] [rbp+Fh]
  int v37; // [rsp+78h] [rbp+17h]
  signed __int32 v38; // [rsp+7Ch] [rbp+1Bh] BYREF
  int v39; // [rsp+D0h] [rbp+6Fh] BYREF
  __int64 v40; // [rsp+D8h] [rbp+77h] BYREF

  v3 = dword_18015C018 == 3;
  v5 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v3 )
  {
    v39 = 0;
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
          v10 = (char *)&xmmword_18016B4C0 + 24 * v9;
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
      v13 = v12;
      if ( v12 != 17 )
      {
        if ( (v12 & 1) == 0 )
          RtlRaiseStatus(-1073741212);
        if ( (v12 & 2) != 0 )
        {
LABEL_38:
          if ( (v13 & 8) != 0 )
          {
            v28 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v28[1] )
              v28 = (_QWORD *)*v28;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v19 = -9LL;
          }
          else
          {
            v19 = -1LL;
          }
          while ( 1 )
          {
            v20 = (v13 & 6) == 2 ? v19 + 4 : v19;
            v21 = v20 + v13;
            v22 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, v20 + v13, v13);
            if ( v13 == v22 )
              break;
            v13 = v22;
          }
          if ( (v13 & 6) == 2 )
            sub_180077520(&Address, v21, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v17 = v13 - 16;
          if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
            v17 = 0LL;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, v17, v13);
          v3 = v13 == v18;
          v13 = v18;
          if ( v3 )
            break;
          if ( (v18 & 2) != 0 )
            goto LABEL_38;
        }
      }
LABEL_14:
      if ( v5 || !byte_18016B4BC )
        return v5;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( (Ptr & 1) != 0 && ((Ptr & 2) != 0 || (Ptr & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( sub_18000BFBC() )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v23 = 0;
        v38 = 2;
        v35 = 0LL;
        if ( (Ptr & 2) != 0 )
        {
          v34 = 0LL;
          v37 = -1;
          v33 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
          v24 = (char *)((unsigned __int64)&v33 | Ptr & 8 | 7);
          v23 = (Ptr & 4) == 0;
        }
        else
        {
          v37 = -2;
          v34 = &v33;
          v24 = (char *)&v33 + 3;
        }
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)&Address, (signed __int64)v24, Ptr);
        v3 = Ptr == v25;
        Ptr = v25;
        if ( !v3 )
          goto LABEL_52;
        if ( v23 )
          sub_1800774C8(&Address);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( j = dword_180159D60; j; --j )
          {
            if ( (v38 & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(&v38, 1u) )
        {
          do
            ZwWaitForAlertByThreadId(&Address, 0LL);
          while ( (v38 & 4) == 0 );
        }
      }
      else
      {
        v16 = Ptr | 1;
        if ( (Ptr & 2) == 0 )
          v16 += 16LL;
        if ( Ptr == _InterlockedCompareExchange64((volatile signed __int64 *)&Address, v16, Ptr) )
          goto LABEL_3;
LABEL_52:
        sub_1800662B0(&v39);
        _m_prefetchw(&Address);
        Ptr = (signed __int64)Address.Ptr;
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
    || (v15 = MemoryInformation) == 0
    || (v32 & 2) != 0
    || (v32 & 1) != 0
    || (unsigned __int64)BaseAddress < MemoryInformation )
  {
    v15 = 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 16) = v31;
  }
  *(_QWORD *)(a2 + 8) = v15;
  if ( v15 )
  {
    if ( sub_180032C0C(v15, 1, 3u, (DWORD *)(a2 + 20), (char **)&v40) < 0 )
    {
      v5 = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
    else
    {
      v5 = v40;
      *(_QWORD *)a2 = v40;
    }
  }
  return v5;
}
