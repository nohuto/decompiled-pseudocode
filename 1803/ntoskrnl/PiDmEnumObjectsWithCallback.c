/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x140509908
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x1405BE9E4 (PiDmGetObjectList.c)
 *     PiDmListInit @ 0x140630F6C (PiDmListInit.c)
 *     PpDevCfgInit @ 0x1408B341C (PpDevCfgInit.c)
 * Callees:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x14006E310 (RtlEnumerateGenericTableLikeADirectory.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14050784C (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiDmObjectIsEnumerable @ 0x140509AC4 (PiDmObjectIsEnumerable.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(
        int a1,
        __int64 (__fastcall *a2)(unsigned int *, __int64, _BYTE *),
        __int64 a3)
{
  int v3; // edi
  void *ObjectManagerForObjectType; // rax
  void *v7; // rsi
  int v8; // r9d
  const wchar_t *v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int **v11; // rax
  unsigned int *v12; // rbx
  struct _KTHREAD *v13; // rcx
  unsigned int **v14; // rax
  _BYTE v16[4]; // [rsp+40h] [rbp-79h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  char v20; // [rsp+60h] [rbp-59h] BYREF
  const wchar_t *v21; // [rsp+70h] [rbp-49h]
  int v22; // [rsp+78h] [rbp-41h]
  int v23; // [rsp+7Ch] [rbp-3Dh]

  v3 = 0;
  RestartKey[0] = 0LL;
  DeleteCount = 0;
  P = &v20;
  v16[0] = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  v22 = 0;
  v7 = ObjectManagerForObjectType;
  v23 = v8;
  v9 = L"\\\\?\\";
  if ( v8 != 3 )
    v9 = &word_140657F20;
  v21 = v9;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)v7, 1u);
  v11 = (unsigned int **)RtlEnumerateGenericTableLikeADirectory(
                           (PRTL_AVL_TABLE)v7 + 1,
                           0LL,
                           0LL,
                           0,
                           RestartKey,
                           &DeleteCount,
                           &P);
  if ( v11 )
  {
    v12 = *v11;
    _InterlockedIncrement((volatile signed __int32 *)*v11 + 2);
  }
  else
  {
    v12 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  while ( v12 )
  {
    if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)v12) )
      v3 = a2(v12, a3, v16);
    if ( v3 < 0 || v16[0] )
    {
      PiDmObjectRelease(v12);
      return (unsigned int)v3;
    }
    P = v12;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)v7, 1u);
    v14 = (unsigned int **)RtlEnumerateGenericTableLikeADirectory(
                             (PRTL_AVL_TABLE)v7 + 1,
                             0LL,
                             0LL,
                             1u,
                             RestartKey,
                             &DeleteCount,
                             &P);
    if ( v14 )
    {
      v12 = *v14;
      _InterlockedIncrement((volatile signed __int32 *)*v14 + 2);
    }
    else
    {
      v12 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)v7);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PiDmObjectRelease((unsigned int *)P);
  }
  return (unsigned int)v3;
}
