/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C00335A0
 * Callers:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0031288 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00364B0 (HmgShareLockCheckIgnoreStockBit.c)
 * Callees:
 *     <none>
 */

char __fastcall GdiHandleEntryDirectory::AcquireEntryLock(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  unsigned int v4; // edx
  unsigned int v6; // r8d
  __int64 v7; // rsi
  char v8; // di
  __int64 v9; // r15

  v4 = *((_DWORD *)this + 514);
  if ( a2 >= v4 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0;
  if ( a2 >= v4 )
  {
    v6 = ((a2 - v4) >> 16) + 1;
    if ( (a2 - v4) >> 16 != -2 )
      goto LABEL_4;
    return 0;
  }
  v6 = 0;
LABEL_4:
  v7 = *((_QWORD *)this + (int)v6 + 1);
  if ( v6 )
    a2 = a2 - (v6 << 16) - v4 + 0x10000;
  v8 = 0;
  if ( a2 >= *(_DWORD *)(v7 + 20) )
    return 0;
  v9 = *(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9, 0LL);
  if ( a3
    || a2 < *(_DWORD *)(v7 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2 + 8) )
  {
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)v7 + 24LL * a2 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  return v8;
}
