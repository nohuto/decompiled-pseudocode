/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C006DF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C006D4EC (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007047C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        void **a5,
        void **a6,
        void **a7,
        unsigned __int8 *a8,
        unsigned __int8 a9,
        char a10)
{
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ebx
  VIDMM_RECYCLE_HEAP *v16; // rcx
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  VIDMM_RECYCLE_HEAP *v24; // rcx
  DXGFASTMUTEX *v25; // [rsp+40h] [rbp-48h] BYREF
  char v26; // [rsp+48h] [rbp-40h]
  char v27; // [rsp+90h] [rbp+8h]

  v25 = (DXGFASTMUTEX *)(a1 + 1328);
  v26 = 0;
  if ( a1 == -1328 )
  {
    v19 = WdLogNewEntry5_WdAssertion(-1328LL, a2);
    *(_QWORD *)(v19 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v19);
    if ( v26 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20, v22);
      v23[5] = &v25;
      v23[3] = 275LL;
      v23[4] = 4LL;
      v23[6] = 0LL;
      v23[7] = 0LL;
      WdLogEvent5_WdCriticalError(v23);
    }
  }
  DXGFASTMUTEX::Acquire(v25);
  LOBYTE(v14) = 0;
  v15 = -1073741823;
  v27 = 0;
  v26 = 1;
  while ( 1 )
  {
    if ( a10 )
    {
      switch ( a4 )
      {
        case 1:
          v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 736);
          break;
        case 2:
          v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 808);
          break;
        case 3:
          v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 880);
          break;
        case 4:
          v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 952);
          break;
        case 5:
          v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 1024);
          break;
        case 6:
          v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 1096);
          break;
        case 7:
          v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 1168);
          break;
        case 8:
          v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 1240);
          break;
        default:
          goto LABEL_10;
      }
    }
    else
    {
      v13 = (unsigned int)a4;
      if ( a4 > 6 )
      {
        if ( a4 == 7 )
        {
          v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 448);
        }
        else
        {
          if ( a4 != 8 )
          {
            if ( a4 == 9 )
            {
              v24 = (VIDMM_RECYCLE_HEAP *)(a1 + 592);
            }
            else
            {
              if ( a4 != 10 )
                goto LABEL_10;
              v24 = (VIDMM_RECYCLE_HEAP *)(a1 + 664);
            }
            v17 = VIDMM_RECYCLE_HEAP::Allocate(v24, a2, a3, a5, a6, a7, a8, a9);
            goto LABEL_9;
          }
          v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 520);
        }
      }
      else
      {
        switch ( a4 )
        {
          case 6:
            v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 376);
            break;
          case 1:
            v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 16);
            break;
          case 2:
            v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 88);
            break;
          case 3:
            v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 160);
            break;
          case 4:
            v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 232);
            break;
          case 5:
            v16 = (VIDMM_RECYCLE_HEAP *)(a1 + 304);
            break;
          default:
            goto LABEL_10;
        }
      }
    }
    v17 = VIDMM_RECYCLE_HEAP::Allocate(v16, a2, a3, a5, a6, 0LL, a8, a9);
LABEL_9:
    LOBYTE(v14) = v27;
    v15 = v17;
LABEL_10:
    if ( v15 >= 0 || (_BYTE)v14 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)a1, 0, 0);
    LOBYTE(v14) = 1;
    v27 = 1;
  }
  if ( v26 )
  {
    v26 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v25, v13, v14);
  }
  return (unsigned int)v15;
}
