/*
 * XREFs of NtInitializeEnclave @ 0x1406BC21C
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x1406BBAD0 (MiInitializeEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtInitializeEnclave(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        _OWORD *a3,
        int a4,
        _DWORD *a5)
{
  _OWORD *PoolWithTag; // rdi
  char PreviousMode; // r12
  __int64 v10; // rcx
  int v11; // ebx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rsi
  int v16; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  _OWORD *v18; // [rsp+58h] [rbp-A0h]
  ULONG_PTR v19; // [rsp+68h] [rbp-90h]
  _DWORD *v20; // [rsp+70h] [rbp-88h]
  $5BC46E0569261879018906DEC3127961 v21; // [rsp+80h] [rbp-78h] BYREF

  v19 = BugCheckParameter1;
  v20 = a5;
  Object = 0LL;
  v16 = 0;
  PoolWithTag = 0LL;
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 && PreviousMode == 1 )
  {
    v10 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( a4 == 4096 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x44456D4Du);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( PreviousMode == 1 && ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = PoolWithTag;
      v13 = 32LL;
      do
      {
        *v12 = *a3;
        v12[1] = a3[1];
        v12[2] = a3[2];
        v12[3] = a3[3];
        v12[4] = a3[4];
        v12[5] = a3[5];
        v12[6] = a3[6];
        v12 += 8;
        *(v12 - 1) = a3[7];
        a3 += 8;
        --v13;
      }
      while ( v13 );
      if ( BugCheckParameter1 == -1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        v11 = ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
                8,
                (__int64)PsProcessType,
                PreviousMode,
                1834380621,
                &Object,
                0LL,
                0LL);
        if ( v11 < 0 )
          goto LABEL_20;
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v21);
      }
      v11 = MiInitializeEnclave(a2, (__int64)PoolWithTag, &v16);
      goto LABEL_20;
    }
    v11 = -1073741670;
  }
  else
  {
    v11 = -1073741820;
  }
LABEL_20:
  v14 = Object;
  if ( Object && BugCheckParameter1 != -1LL )
  {
    KiUnstackDetachProcess(&v21, 0LL);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( a5 )
    *a5 = v16;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v11;
}
