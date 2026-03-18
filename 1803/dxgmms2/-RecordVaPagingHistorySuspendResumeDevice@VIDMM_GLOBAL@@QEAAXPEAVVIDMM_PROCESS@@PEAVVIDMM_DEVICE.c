/*
 * XREFs of ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C006B970
 * Callers:
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0076290 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0076618 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00A6F3C (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00A71A8 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_DEVICE *a3,
        char a4)
{
  _QWORD *v8; // rdi
  unsigned int v9; // ecx
  void *v10; // rcx

  if ( *((_QWORD *)this + 5187) )
  {
    v8 = operator new[](0x20uLL, 0x32356956u, PagedPool);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41512, 0LL);
      *((_QWORD *)this + 5190) = KeGetCurrentThread();
      v9 = *((_DWORD *)this + 10376);
      if ( v9 == dword_1C004733C )
      {
        *((_DWORD *)this + 10376) = 0;
        v9 = 0;
      }
      v10 = *(void **)(*((_QWORD *)this + 5187) + 24LL * v9 + 16);
      if ( v10 )
        operator delete(v10);
      *v8 = *(_QWORD *)a2;
      v8[1] = *((_QWORD *)a2 + 4);
      v8[2] = a3;
      *((_BYTE *)v8 + 24) = a4;
      *(_QWORD *)(*((_QWORD *)this + 5187) + 24LL * *((unsigned int *)this + 10376)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5187) + 24LL * *((unsigned int *)this + 10376) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5187) + 24LL * (unsigned int)(*((_DWORD *)this + 10376))++ + 8) = 12;
      *((_QWORD *)this + 5190) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41512, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
