/*
 * XREFs of PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405071E4
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x140506EC0 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmObjectGetAggregatedBooleanPropertyData(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  int v9; // ebp
  _BYTE *v10; // r14
  int Object; // ebx
  int v14; // r10d
  _QWORD *v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v19; // rcx
  char *v20; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v22; // rbx
  __int64 v23; // r13
  ULONG_PTR v24; // r15
  void *v25; // r8
  __int64 v26; // r9
  int v27; // eax
  _QWORD **v28; // r12
  _QWORD *v29; // rsi
  char *v30; // rdx
  int ObjectProperty; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-48h] BYREF
  ULONG_PTR v33; // [rsp+68h] [rbp-40h]
  char v34; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v35; // [rsp+C0h] [rbp+18h] BYREF

  v35 = a3;
  BugCheckParameter2 = 0LL;
  v9 = 0;
  v10 = (_BYTE *)a7;
  Object = -1073741802;
  if ( a7 )
  {
    v14 = a8;
    v10 = (_BYTE *)(-(__int64)(a8 != 0) & a7);
  }
  else
  {
    v14 = 0;
  }
  if ( a1 < 7 && !a4 )
  {
    v15 = &unk_1402ED238;
    v16 = 0;
    while ( 1 )
    {
      v17 = v15[1];
      if ( *(_DWORD *)(v17 + 16) == *(_DWORD *)(a5 + 16) )
      {
        v19 = *(_QWORD *)v17 - *(_QWORD *)a5;
        if ( *(_QWORD *)v17 == *(_QWORD *)a5 )
          v19 = *(_QWORD *)(v17 + 8) - *(_QWORD *)(a5 + 8);
        if ( !v19 && a1 == *(_DWORD *)v15 )
          break;
      }
      ++v16;
      v15 += 7;
      if ( v16 >= 3 )
        return (unsigned int)Object;
    }
    v20 = (char *)&PiDmAggregatedBooleanDefs + 56 * v16;
    if ( v20 )
    {
      *a6 = 17;
      *a9 = 1;
      if ( v14 )
      {
        Object = PiDmGetObject((unsigned int)a1, a2, &BugCheckParameter2);
        if ( Object >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          v22 = BugCheckParameter2;
          v23 = *((_QWORD *)v20 + 6);
          v33 = BugCheckParameter2;
          --CurrentThread->KernelApcDisable;
          v24 = BugCheckParameter2;
          ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
          v27 = *(_DWORD *)(v22 + v23);
          if ( v27 == 0x80000000 )
          {
            v25 = &PiDmListDefs;
            v28 = (_QWORD **)(v24 + *((_QWORD *)&PiDmListDefs + 5 * *((int *)v20 + 10) + 1));
            v29 = *v28;
            if ( *v28 != v28 )
            {
              do
              {
                v30 = (char *)v29 - *((_QWORD *)&PiDmListDefs + 5 * *((int *)v20 + 10) + 3);
                ObjectProperty = PnpGetObjectProperty(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   *((_QWORD *)v30 + 2),
                                   *((_DWORD *)v30 + 7),
                                   0LL,
                                   0LL,
                                   *((_QWORD *)v20 + 1),
                                   (__int64)&v35,
                                   (__int64)&v34,
                                   1,
                                   (__int64)&a7,
                                   0);
                Object = ObjectProperty;
                if ( ObjectProperty < 0 )
                {
                  if ( ObjectProperty != -1073741275 )
                    goto LABEL_19;
                }
                else if ( (_DWORD)v35 == 17 && v34 == -1 )
                {
                  ++v9;
                }
                v29 = (_QWORD *)*v29;
                v25 = &PiDmListDefs;
              }
              while ( v29 != v28 );
              v22 = v33;
            }
            *(_DWORD *)(v22 + v23) = v9;
            v27 = v9;
          }
          *v10 = (v27 <= 0) - 1;
          Object = 0;
LABEL_19:
          ExReleasePushLockEx(v24, 0LL, (__int64)v25, v26);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          PiDmObjectRelease((PVOID)BugCheckParameter2);
        }
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)Object;
}
