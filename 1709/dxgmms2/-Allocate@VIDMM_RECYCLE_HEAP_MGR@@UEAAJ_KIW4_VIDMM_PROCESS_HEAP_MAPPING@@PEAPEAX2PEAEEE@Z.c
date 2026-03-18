/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C0068AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068030 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00695D0 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8,
        char a9)
{
  DXGFASTMUTEX *v10; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ebx
  VIDMM_RECYCLE_HEAP *v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  DXGFASTMUTEX *v23; // [rsp+40h] [rbp-48h] BYREF
  char v24; // [rsp+48h] [rbp-40h]
  char v25; // [rsp+90h] [rbp+8h]

  v10 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1184);
  v24 = 0;
  v23 = v10;
  if ( !v10 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v18 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v18);
    if ( v24 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
      v22[5] = &v23;
      v22[3] = 275LL;
      v22[4] = 4LL;
      v22[6] = 0LL;
      v22[7] = 0LL;
      WdLogEvent5_WdCriticalError(v22);
    }
    v10 = v23;
  }
  DXGFASTMUTEX::Acquire(v10);
  LOBYTE(v14) = 0;
  v15 = -1073741823;
  v24 = 1;
  while ( 1 )
  {
    v25 = v14;
    if ( a9 )
    {
      v14 = a4;
      switch ( a4 )
      {
        case 1u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 592);
          break;
        case 2u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 664);
          break;
        case 3u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 736);
          break;
        case 4u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 808);
          break;
        case 5u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 880);
          break;
        case 6u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 952);
          break;
        case 7u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1024);
          break;
        case 8u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1096);
          break;
        default:
          goto LABEL_7;
      }
    }
    else
    {
      switch ( a4 )
      {
        case 1u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 16);
          break;
        case 2u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 88);
          break;
        case 3u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 160);
          break;
        case 4u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 232);
          break;
        case 5u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 304);
          break;
        case 6u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 376);
          break;
        case 7u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 448);
          break;
        case 8u:
          v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 520);
          break;
        default:
          goto LABEL_8;
      }
    }
    v15 = VIDMM_RECYCLE_HEAP::Allocate(v16, a2, a3, a5, a6, a7, a8);
LABEL_7:
    LOBYTE(v14) = v25;
LABEL_8:
    if ( v15 >= 0 || (_BYTE)v14 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(a1, 0, 0);
    LOBYTE(v14) = 1;
  }
  if ( v24 )
  {
    v24 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v23, v14, v13);
  }
  return (unsigned int)v15;
}
