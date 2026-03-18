/*
 * XREFs of ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C01A6180
 * Callers:
 *     DxgkReleaseKeyedMutex @ 0x1C01A7B50 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C01A7D40 (DxgkReleaseKeyedMutex2.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01AE9FC (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0014BE4 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C00394C0 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::ReleaseSync(
        DXGKEYEDMUTEX *this,
        int a2,
        __int64 a3,
        __int64 a4,
        char *Src,
        unsigned int Size)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v24; // rcx
  char v25; // di
  __int64 v26; // rdx
  _QWORD *i; // rax
  struct _KEVENT *v28; // rcx
  _BYTE v29[24]; // [rsp+20h] [rbp-18h] BYREF

  v9 = (__int64)this;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v29, this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  if ( *(_DWORD *)(v9 + 36) == 3 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v14[3] = v9;
    v9 = 128LL;
LABEL_3:
    v14[4] = v9;
LABEL_13:
    WdLogEvent5_WdWarning(v14);
    goto LABEL_14;
  }
  if ( !DXGKEYEDMUTEX::IsOwner((DXGKEYEDMUTEX *)v9, a2) )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v19 + 24) = v9;
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
LABEL_14:
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v29, v20, v21, v22);
    return (unsigned int)v9;
  }
  if ( Src )
  {
    if ( !Size )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, Src, v17, v18);
      v14[3] = v9;
      v9 = -1073741811LL;
      goto LABEL_3;
    }
    if ( Size != *(_DWORD *)(v9 + 144) )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, Src, v17, v18);
      v14[3] = v9;
      v14[4] = Size;
      v14[5] = *(unsigned int *)(v9 + 144);
      LODWORD(v9) = -1073741811;
      v14[6] = -1073741811LL;
      goto LABEL_13;
    }
    v24 = *(void **)(v9 + 136);
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v24, Src, Size);
  }
  else if ( Size )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, 0LL, v17, v18);
    LODWORD(v9) = -1073741811;
    v14[3] = -1073741811LL;
    goto LABEL_13;
  }
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0LL;
  v25 = 0;
  v26 = v9 + 80;
  for ( i = *(_QWORD **)(v9 + 80); i != (_QWORD *)v26; i = (_QWORD *)*i )
  {
    v28 = (struct _KEVENT *)(i - 8);
    if ( *(i - 8) == a3 )
    {
      v25 = 1;
      *(_DWORD *)(v9 + 36) = 2;
      *(_QWORD *)(v9 + 72) = v28;
      v28[2].Header.LockNV = 0;
      v28[2].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)a4;
      KeSetEvent(v28 + 1, 0, 0);
      break;
    }
  }
  if ( !v25 )
  {
    *(_DWORD *)(v9 + 36) = 1;
    *(_QWORD *)(v9 + 56) = a3;
    *(_QWORD *)(v9 + 64) = a4;
  }
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v29, v26, v17, v18);
  return 0LL;
}
