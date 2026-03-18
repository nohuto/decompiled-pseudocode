/*
 * XREFs of VidSchiSetInProcessPriorityContext @ 0x1C0012A8C
 * Callers:
 *     VidSchSetInProcessPriorityContext @ 0x1C006D5A0 (VidSchSetInProcessPriorityContext.c)
 * Callees:
 *     Template_pdd @ 0x1C0023E68 (Template_pdd.c)
 */

__int64 __fastcall VidSchiSetInProcessPriorityContext(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // r8d
  int v6; // ecx
  int v7; // eax
  __int64 v9; // r9
  _QWORD *v10; // rcx
  signed __int32 v11; // eax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 1880LL), &LockHandle);
  v6 = *(_DWORD *)(a1 + 400);
  if ( v6 != a2 )
  {
    if ( bTracingEnabled )
    {
      v9 = *(_QWORD *)(a1 + 56);
      if ( !v9 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        LODWORD(v9) = a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_pdd(v6, v4, v5, v9, v6, a2);
    }
    v7 = *(_DWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 400) = a2;
    if ( (v7 & 1) != 0 )
    {
      if ( a2 == 1 )
      {
        v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 648LL);
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0);
        v12 = (_QWORD *)(a1 + 408);
        if ( v11 == 1 )
        {
          v13 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) != v10 )
            __fastfail(3u);
          *v12 = v13;
          v12[1] = v10;
          *(_QWORD *)(v13 + 8) = v12;
          *v10 = v12;
        }
        else
        {
          v14 = (_QWORD *)v10[1];
          if ( (_QWORD *)*v14 != v10 )
            __fastfail(3u);
          *v12 = v10;
          v12[1] = v14;
          *v14 = v12;
          v10[1] = v12;
        }
      }
      else
      {
        v15 = (_QWORD *)(a1 + 408);
        v16 = *(_QWORD *)(a1 + 408);
        v17 = *(_QWORD **)(a1 + 416);
        if ( *(_QWORD *)(v16 + 8) != a1 + 408 || (_QWORD *)*v17 != v15 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        *(_QWORD *)(a1 + 416) = 0LL;
        *v15 = 0LL;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
