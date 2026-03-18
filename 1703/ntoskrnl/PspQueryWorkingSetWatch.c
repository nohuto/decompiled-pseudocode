/*
 * XREFs of PspQueryWorkingSetWatch @ 0x1406E05B4
 * Callers:
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExIsRestrictedCaller @ 0x140443EE4 (ExIsRestrictedCaller.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspQueryWorkingSetWatch(
        ULONG_PTR BugCheckParameter1,
        int a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int *a5,
        char a6)
{
  __int64 result; // rax
  PVOID v9; // rcx
  __int64 v10; // rsi
  int v11; // r14d
  struct _KTHREAD *CurrentThread; // r13
  __int64 v13; // r12
  signed __int32 v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // r9d
  __int64 i; // r8
  __int64 v18; // rdx
  __int64 j; // rdx
  int v20; // [rsp+44h] [rbp-64h]
  PVOID Object[8]; // [rsp+68h] [rbp-40h] BYREF

  if ( a2 == 42 )
  {
    if ( (a4 & 0x1F) != 0 )
      return 3221225476LL;
    v20 = 32;
  }
  else
  {
    v20 = 16;
  }
  if ( ExIsRestrictedCaller(a6) )
    return 3221225506LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             1024,
             (__int64)PsProcessType,
             a6,
             2035381072,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v9 = Object[0];
    v10 = *((_QWORD *)Object[0] + 122);
    if ( !v10 )
    {
      v11 = -1073741823;
LABEL_35:
      ObfDereferenceObjectWithTag(v9, 0x79517350u);
      return (unsigned int)v11;
    }
    CurrentThread = KeGetCurrentThread();
    v11 = 0;
    v13 = 0LL;
    --CurrentThread->KernelApcDisable;
    _m_prefetchw((const void *)v10);
    v14 = _InterlockedOr((volatile signed __int32 *)v10, 1u);
    if ( (v14 & 1) != 0 )
    {
      v11 = -2147483622;
LABEL_34:
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      v9 = Object[0];
      goto LABEL_35;
    }
    if ( (v14 & 0xFFFE) != 0 )
    {
      if ( (v14 & 0x7FFF0000) != 0 )
        KeWaitForGate(v10 + 16, 0);
      v15 = (unsigned __int16)v14 >> 1;
      v16 = v20 * (v15 + 1);
      if ( a4 >= v16 )
      {
        _m_prefetchw((const void *)(v10 + 8));
        v13 = *(_QWORD *)(v10 + 8);
        if ( a2 == 42 )
        {
          Object[1] = a3;
          for ( i = 0LL; (unsigned int)i < v15; i = (unsigned int)(i + 1) )
          {
            v18 = 4LL * (unsigned int)i;
            *(_OWORD *)&a3[v18] = *(_OWORD *)(v10 + 24 * i + 40);
            a3[v18 + 2] = *(_QWORD *)(v10 + 24 * i + 56);
            a3[v18 + 3] = 0LL;
          }
          a3 += 4 * (unsigned int)i;
          a3[2] = 0LL;
          a3[3] = 0LL;
        }
        else
        {
          for ( j = 0LL; (unsigned int)j < v15; j = (unsigned int)(j + 1) )
          {
            *(_OWORD *)a3 = *(_OWORD *)(v10 + 24 * j + 40);
            a3 += 2;
          }
        }
        *a3 = 0LL;
        a3[1] = v13;
        if ( a5 )
          *a5 = v16;
      }
      else
      {
        v11 = -1073741789;
        if ( a5 )
          *a5 = v16;
      }
      if ( v11 >= 0 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 8), -v13);
        *(_DWORD *)v10 = 0;
        goto LABEL_34;
      }
    }
    else
    {
      v11 = -2147483622;
    }
    _interlockedbittestandreset((volatile signed __int32 *)v10, 0);
    goto LABEL_34;
  }
  return result;
}
