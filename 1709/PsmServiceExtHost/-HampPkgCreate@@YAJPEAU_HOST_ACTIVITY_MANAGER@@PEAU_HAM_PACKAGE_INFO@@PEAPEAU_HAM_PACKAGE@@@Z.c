/*
 * XREFs of ?HampPkgCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800466A0
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180046840 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampPkgInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_SESSION@@PEAU_HAM_PACKAGE@@@Z @ 0x180046B30 (-HampPkgInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_SESSION@@PEAU.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180049030 (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

__int64 __fastcall HampPkgCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        struct _HAM_PACKAGE **a3)
{
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  struct _HAM_PACKAGE *Heap; // rax
  struct _HAM_SESSION *v11; // rbx
  struct _HAM_PACKAGE *v12; // rsi
  struct _HAM_SESSION *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  v7 = HampSessionFindOrCreate(a1, *((_DWORD *)a2 + 50), &v14);
  if ( v7 < 0 )
  {
    v11 = v14;
  }
  else
  {
    Heap = (struct _HAM_PACKAGE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x170uLL);
    v11 = v14;
    v12 = Heap;
    if ( Heap )
    {
      HampPkgInitialize(a1, a2, v14, Heap);
      v7 = 0;
      *a3 = v12;
    }
    else
    {
      v7 = -1073741801;
    }
  }
  if ( v11 )
    CemRcObjectDereference(v11, v6, v8, v9);
  return (unsigned int)v7;
}
