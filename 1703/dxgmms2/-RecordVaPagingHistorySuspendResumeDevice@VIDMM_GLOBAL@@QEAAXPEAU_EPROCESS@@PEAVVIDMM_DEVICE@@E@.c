/*
 * XREFs of ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0063A10
 * Callers:
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004D22C (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C004D5A4 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006E198 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006F830 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
        VIDMM_GLOBAL *this,
        struct _EPROCESS *a2,
        struct VIDMM_DEVICE *a3,
        char a4)
{
  _QWORD *v8; // rdi
  void *v9; // rcx

  if ( *((_QWORD *)this + 5115) )
  {
    v8 = operator new[](0x18uLL, 0x32356956u, PagedPool);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
      *((_QWORD *)this + 5118) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10232) == dword_1C003C304 )
        *((_DWORD *)this + 10232) = 0;
      v9 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
      if ( v9 )
        operator delete(v9);
      *v8 = a2;
      v8[1] = a3;
      *((_BYTE *)v8 + 16) = a4;
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 12;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
