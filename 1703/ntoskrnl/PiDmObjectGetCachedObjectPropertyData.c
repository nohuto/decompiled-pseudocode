/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x140485AF0
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1404854F0 (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x140485C3C (PiDmGetCacheKeys.c)
 *     PiDmCacheDataDecode @ 0x140486324 (PiDmCacheDataDecode.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectPropertyData(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v10; // ebp
  unsigned int v11; // esi
  char v12; // r14
  __int64 v13; // r9
  _QWORD *v14; // r11
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v19; // rdi
  __int64 v20; // rcx
  bool v21; // cc
  ULONG_PTR v22; // rcx
  __int64 result; // rax
  unsigned int v24; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v25[4]; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v10 = a1;
  v11 = -1073741802;
  v12 = 0;
  PiDmGetCacheKeys(a1, v25, &v24);
  if ( !v24 )
    return 3221225494LL;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v25[0] + 24 * v15);
    if ( *(_DWORD *)(v13 + 16) == *(_DWORD *)(v16 + 16) )
    {
      v17 = *v14 - *(_QWORD *)v16;
      if ( *v14 == *(_QWORD *)v16 )
        v17 = v14[1] - *(_QWORD *)(v16 + 8);
      if ( !v17 )
        break;
    }
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= v24 )
    {
      v15 = 0xFFFFFFFFLL;
      break;
    }
  }
  if ( (unsigned int)v15 >= v24 )
    return v11;
  if ( a3 )
  {
LABEL_11:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v19 = BugCheckParameter2;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    v20 = (unsigned int)v15 + 2 * v15 + 13;
    v21 = *(_DWORD *)(v19 + 8 * v20) <= 1u;
    v22 = v19 + 8 * v20;
    if ( !v21 )
      v11 = PiDmCacheDataDecode(v22, a5, a6, a7, a8);
    ExReleasePushLockEx(v19, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v12 )
      PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    return v11;
  }
  result = PiDmGetObject(v10, a2, &BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v12 = 1;
    goto LABEL_11;
  }
  return result;
}
