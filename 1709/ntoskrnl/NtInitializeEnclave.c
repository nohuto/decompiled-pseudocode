/*
 * XREFs of NtInitializeEnclave @ 0x1406E9854
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x1406E8970 (MiInitializeEnclave.c)
 */

__int64 __fastcall NtInitializeEnclave(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5)
{
  size_t v5; // r13
  unsigned __int64 v7; // rsi
  _DWORD *PoolWithTag; // rdi
  char PreviousMode; // dl
  __int64 v11; // rcx
  int v12; // ebx
  PVOID v13; // rsi
  char v15; // [rsp+40h] [rbp-B8h]
  int v17; // [rsp+50h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-98h]
  ULONG_PTR v20; // [rsp+70h] [rbp-88h]
  _DWORD *v21; // [rsp+78h] [rbp-80h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v22; // [rsp+88h] [rbp-70h] BYREF

  v5 = a4;
  v7 = a2;
  v20 = BugCheckParameter1;
  v21 = a5;
  Object = 0LL;
  v17 = 0;
  PoolWithTag = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = PreviousMode;
  if ( a5 && PreviousMode == 1 )
  {
    v11 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
  if ( !a4 )
    goto LABEL_18;
  if ( a4 <= 0x1000 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4, 0x44456D4Du);
    v19 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741670;
      goto LABEL_23;
    }
    if ( v15 == 1 && v5 - 1 > 0xFFFE && (_DWORD)v5 && ((unsigned __int64)&a3[v5] > 0x7FFFFFFF0000LL || &a3[v5] < a3) )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(PoolWithTag, a3, v5);
    PreviousMode = v15;
    v7 = a2;
LABEL_18:
    if ( BugCheckParameter1 == -1LL )
    {
      Object = KeGetCurrentThread()->ApcState.Process;
    }
    else
    {
      v12 = ObpReferenceObjectByHandleWithTag(
              BugCheckParameter1,
              8,
              (__int64)PsProcessType,
              PreviousMode,
              1834380621,
              &Object,
              0LL,
              0LL);
      if ( v12 < 0 )
        goto LABEL_23;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v22);
    }
    v12 = MiInitializeEnclave(v7, PoolWithTag, v5, &v17);
    goto LABEL_23;
  }
  v12 = -1073741820;
LABEL_23:
  v13 = Object;
  if ( Object && BugCheckParameter1 != -1LL )
  {
    KiUnstackDetachProcess(&v22, 0LL);
    ObfDereferenceObjectWithTag(v13, 0x6D566D4Du);
  }
  if ( a5 )
    *a5 = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v12;
}
