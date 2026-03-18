/*
 * XREFs of ?CreateCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAX_K@Z @ 0x1C0099EF8
 * Callers:
 *     VidMmCreateCrossAdapterAllocation @ 0x1C0020BB0 (VidMmCreateCrossAdapterAllocation.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AE0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateCrossAdapterAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CROSSADAPTER_ALLOC **a2,
        void *a3,
        SIZE_T a4)
{
  unsigned int v4; // esi
  HANDLE v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _VIDMM_CROSSADAPTER_ALLOC *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v4 = 0;
  v5 = 0LL;
  if ( !a3 || (v5 = MmSecureVirtualMemory(a3, a4, 4u)) != 0LL )
  {
    v12 = (struct _VIDMM_CROSSADAPTER_ALLOC *)operator new(0x18uLL, 0x64356956u, (__int64)a3, PagedPool);
    *a2 = v12;
    if ( v12 )
    {
      *((_QWORD *)v12 + 1) = v5;
    }
    else
    {
      _InterlockedIncrement(&dword_1C00406B8);
      v15 = WdLogNewEntry5_WdLowResource(v14, v13);
      *(_QWORD *)(v15 + 24) = 1885LL;
      WdLogEvent5_WdLowResource(v15);
      v4 = -1073741801;
      if ( v5 )
        MmUnsecureVirtualMemory(v5);
      operator delete(*a2);
    }
    return v4;
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = a3;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
}
