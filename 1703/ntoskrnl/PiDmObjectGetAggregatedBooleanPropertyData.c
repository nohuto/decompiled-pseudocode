/*
 * XREFs of PiDmObjectGetAggregatedBooleanPropertyData @ 0x140485340
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x140484FD0 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 */

__int64 __fastcall PiDmObjectGetAggregatedBooleanPropertyData(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        int a8,
        _DWORD *a9)
{
  _BYTE *v9; // rdi
  int v10; // ebp
  int v12; // r10d
  _QWORD *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // r15
  __int64 v18; // r14
  char *v19; // r14
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v21; // rbx
  ULONG_PTR v22; // rsi
  unsigned int v23; // r15d
  _QWORD **v24; // r13
  _QWORD *i; // r12
  char *v26; // rdx
  int ObjectProperty; // eax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-48h] BYREF
  char v29; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+18h] BYREF

  v30 = a3;
  v9 = a7;
  v10 = 0;
  BugCheckParameter2[0] = 0LL;
  if ( a7 )
  {
    v12 = a8;
    if ( !a8 )
      v9 = 0LL;
  }
  else
  {
    v12 = 0;
  }
  if ( a1 >= 6 || a4 )
    return 3221225494LL;
  v13 = &unk_140288D68;
  v14 = 0;
  while ( 1 )
  {
    v15 = v13[1];
    if ( *(_DWORD *)(v15 + 16) == *(_DWORD *)(a5 + 16) )
    {
      v17 = 56LL * v14;
      v18 = *(_QWORD *)v15 - *(_QWORD *)a5;
      if ( *(_QWORD *)v15 == *(_QWORD *)a5 )
        v18 = *(_QWORD *)(v15 + 8) - *(_QWORD *)(a5 + 8);
      if ( !v18 && a1 == *(_DWORD *)v13 )
        break;
    }
    ++v14;
    v13 += 7;
    if ( v14 >= 3 )
      return 3221225494LL;
  }
  v19 = (char *)&PiDmAggregatedBooleanDefs + v17;
  if ( !(_UNKNOWN *)((char *)&PiDmAggregatedBooleanDefs + v17) )
    return 3221225494LL;
  *a6 = 17;
  *a9 = 1;
  if ( !v12 )
    return 3221225507LL;
  result = PiDmGetObject((unsigned int)a1, a2, BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = (_DWORD *)(*((_QWORD *)v19 + 6) + BugCheckParameter2[0]);
    --CurrentThread->KernelApcDisable;
    v22 = BugCheckParameter2[0];
    ExAcquirePushLockExclusiveEx(BugCheckParameter2[0], 0LL);
    if ( *v21 == 0x80000000 )
    {
      v24 = (_QWORD **)(v22 + qword_14028D5C8[5 * *((int *)v19 + 10)]);
      for ( i = *v24; i != v24; i = (_QWORD *)*i )
      {
        v26 = (char *)i - qword_14028D5D8[5 * *((int *)v19 + 10)];
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           *((_QWORD *)v26 + 2),
                           *((_DWORD *)v26 + 7),
                           0LL,
                           0LL,
                           *((_QWORD *)v19 + 1),
                           (__int64)&v30,
                           (__int64)&v29,
                           1,
                           (__int64)&a7,
                           0);
        v23 = ObjectProperty;
        if ( ObjectProperty < 0 )
        {
          if ( ObjectProperty != -1073741275 )
            goto LABEL_22;
        }
        else if ( (_DWORD)v30 == 17 && v29 == -1 )
        {
          ++v10;
        }
      }
      *v21 = v10;
    }
    *v9 = (*v21 <= 0) - 1;
    v23 = 0;
LABEL_22:
    ExReleasePushLockEx(v22, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PiDmObjectRelease((PVOID)BugCheckParameter2[0]);
    return v23;
  }
  return result;
}
