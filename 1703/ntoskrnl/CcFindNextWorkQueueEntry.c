/*
 * XREFs of CcFindNextWorkQueueEntry @ 0x1400AE398
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x140028770 (CcCompleteAsyncReadWorker.c)
 *     CcWorkerThread @ 0x1400AB860 (CcWorkerThread.c)
 *     CcAsyncReadWorker @ 0x1401340C0 (CcAsyncReadWorker.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CcFindNextWorkQueueEntry(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  char v4; // al
  __int64 v5; // rcx
  _QWORD *v6; // rax
  unsigned int v8; // edx

  v2 = (_QWORD *)*a2;
  v3 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = *((_BYTE *)v2 + 120);
    v3 = (_QWORD *)*a2;
    if ( v4 == 4 && ((v8 = *(_DWORD *)(a1 + 276), v8 > 1) || *(_DWORD *)(a1 + 376) > 1u) )
    {
      if ( !*(_BYTE *)(a1 + 384) )
      {
        *(_DWORD *)(a1 + 396) = *(_DWORD *)(a1 + 376);
        *(_DWORD *)(a1 + 392) = v8;
      }
      *(_BYTE *)(a1 + 384) = 1;
      return 0LL;
    }
    else
    {
      if ( v4 == 2 )
      {
        *(_QWORD *)(v2[2] + 496LL) = 0LL;
      }
      else if ( v4 == 1 )
      {
        *(_QWORD *)(*(_QWORD *)(v2[2] + 48LL) + 112LL) = 0LL;
      }
      v5 = *v2;
      v6 = (_QWORD *)v2[1];
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v6 != v2 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      v2[1] = 0LL;
      *v2 = 0LL;
    }
  }
  return v3;
}
