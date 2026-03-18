/*
 * XREFs of PiDmObjectGetAggregatedBooleanPropertyData @ 0x140523648
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1405232C0 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
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
  _BYTE *v11; // r14
  int Object; // ebx
  int v13; // r10d
  _QWORD *v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // r9
  __int64 v18; // rcx
  char *v19; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rbp
  ULONG_PTR v22; // r15
  ULONG_PTR v23; // r12
  _QWORD **v24; // r13
  _QWORD *i; // rsi
  char *v26; // rdx
  int ObjectProperty; // eax
  _BYTE v28[8]; // [rsp+60h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2[8]; // [rsp+68h] [rbp-40h] BYREF
  char v30; // [rsp+B0h] [rbp+8h] BYREF
  int v31; // [rsp+C0h] [rbp+18h]
  int v32; // [rsp+C4h] [rbp+1Ch]

  v32 = HIDWORD(a3);
  BugCheckParameter2[0] = 0LL;
  v31 = 0;
  v11 = (_BYTE *)a7;
  Object = -1073741802;
  if ( a7 )
  {
    v13 = a8;
    v11 = (_BYTE *)(-(__int64)(a8 != 0) & a7);
  }
  else
  {
    v13 = 0;
  }
  if ( a1 < 6 && !a4 )
  {
    v14 = &unk_1402B5D18;
    v15 = 0;
    while ( 1 )
    {
      v16 = v14[1];
      if ( *(_DWORD *)(v16 + 16) == *(_DWORD *)(a5 + 16) )
      {
        v18 = *(_QWORD *)v16 - *(_QWORD *)a5;
        if ( *(_QWORD *)v16 == *(_QWORD *)a5 )
          v18 = *(_QWORD *)(v16 + 8) - *(_QWORD *)(a5 + 8);
        if ( !v18 && a1 == *(_DWORD *)v14 )
          break;
      }
      ++v15;
      v14 += 7;
      if ( v15 >= 3 )
        return (unsigned int)Object;
    }
    v19 = (char *)&PiDmAggregatedBooleanDefs + 56 * v15;
    if ( v19 )
    {
      *a6 = 17;
      *a9 = 1;
      if ( v13 )
      {
        Object = PiDmGetObject((unsigned int)a1, a2, BugCheckParameter2);
        if ( Object >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          v21 = *((_QWORD *)v19 + 6);
          v22 = BugCheckParameter2[0];
          --CurrentThread->KernelApcDisable;
          v23 = BugCheckParameter2[0];
          ExAcquirePushLockExclusiveEx(BugCheckParameter2[0], 0LL);
          if ( *(_DWORD *)(v22 + v21) == 0x80000000 )
          {
            v24 = (_QWORD **)(v23 + *((_QWORD *)&PiDmListDefs + 5 * *((int *)v19 + 10) + 1));
            for ( i = *v24; i != v24; i = (_QWORD *)*i )
            {
              v26 = (char *)i - *((_QWORD *)&PiDmListDefs + 5 * *((int *)v19 + 10) + 3);
              ObjectProperty = PnpGetObjectProperty(
                                 *(__int64 *)&PiPnpRtlCtx,
                                 *((_QWORD *)v26 + 2),
                                 *((_DWORD *)v26 + 7),
                                 0LL,
                                 0LL,
                                 *((_QWORD *)v19 + 1),
                                 (__int64)&a7,
                                 (__int64)&v30,
                                 1,
                                 (__int64)v28,
                                 0);
              Object = ObjectProperty;
              if ( ObjectProperty < 0 )
              {
                if ( ObjectProperty != -1073741275 )
                  goto LABEL_19;
              }
              else if ( (_DWORD)a7 == 17 && v30 == -1 )
              {
                ++v31;
              }
            }
            *(_DWORD *)(v22 + v21) = v31;
          }
          *v11 = (*(_DWORD *)(v22 + v21) <= 0) - 1;
          Object = 0;
LABEL_19:
          ExReleasePushLockEx(v23, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          PiDmObjectRelease((PVOID)BugCheckParameter2[0]);
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
