/*
 * XREFs of DestroyCacheDC @ 0x1C0044760
 * Callers:
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     DelayedDestroyCacheDC @ 0x1C00378A0 (DelayedDestroyCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C0050600 (xxxUserProcessCallout.c)
 *     DestroyMonitorDCs @ 0x1C0074180 (DestroyMonitorDCs.c)
 *     DestroyCacheDCEntries @ 0x1C007B04C (DestroyCacheDCEntries.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     bDeleteDCInternal @ 0x1C0042230 (bDeleteDCInternal.c)
 *     HmgMarkDeletable @ 0x1C007E370 (HmgMarkDeletable.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  int v4; // r14d
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  HBRUSH v9; // rcx
  HBRUSH v10; // rcx
  HBRUSH v11; // rcx
  __int64 v12; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  int v23; // [rsp+28h] [rbp-20h]
  int v24; // [rsp+2Ch] [rbp-1Ch]

  v3 = 0;
  v4 = 0;
  v6 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*((_QWORD *)gpDispInfo + 4), a2, a3);
    v4 = 1;
    v6 = (__int64 *)((char *)gpDispInfo + 16);
    v14 = (__int64 *)*((_QWORD *)gpDispInfo + 2);
    if ( !v14 )
      goto LABEL_29;
    do
    {
      if ( v14[1] == a2 )
        break;
      v6 = v14;
      v14 = (__int64 *)*v14;
    }
    while ( v14 );
    if ( !v14 || !v6 )
    {
LABEL_29:
      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
      return 0LL;
    }
  }
  v7 = *v6;
  *(_DWORD *)(v7 + 64) |= 0x400000u;
  if ( (*(_DWORD *)(v7 + 64) & 0x40000) == 0 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( v8 > 2 )
    {
      PsGetCurrentProcessId();
      LOBYTE(v15) = 4;
      HmgMarkDeletable(v8, v15);
    }
    v9 = *(HBRUSH *)(v7 + 40);
    if ( (unsigned __int64)v9 > 2 )
      GreDeleteObject(v9);
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  v10 = *(HBRUSH *)(v7 + 48);
  if ( v10 )
  {
    GreDeleteObject(v10);
    *(_QWORD *)(v7 + 48) = 0LL;
  }
  v11 = *(HBRUSH *)(v7 + 56);
  if ( v11 )
  {
    GreDeleteObject(v11);
    *(_QWORD *)(v7 + 56) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), 0x80000002, 1, 1) )
    goto LABEL_31;
  if ( (*(_DWORD *)(v7 + 64) & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported(v12) >= 0 )
      GreSelectRedirectionBitmap(*(_QWORD *)(v7 + 8), 0LL);
    *(_DWORD *)(v7 + 64) &= ~0x4000u;
    *(_QWORD *)(v7 + 32) = 0LL;
  }
  if ( !(unsigned int)bDeleteDCInternal(*(HDC *)(v7 + 8), 1, 0, 0) )
  {
    GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), 0x80000012, 1, 1);
LABEL_31:
    v16 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    v23 = 0;
    v24 = 0;
    v17 = HmgShareLock(v16, 1);
    v22 = v17;
    if ( v17 )
    {
      *(_DWORD *)(v17 + 36) |= 0x80000u;
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v22);
      HmgDecrementShareReferenceCount(v22);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19, v18, v20);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_21;
  }
  if ( (*(_DWORD *)(v7 + 64) & 0x1002) == 2 )
    --gnDCECount;
  *v6 = *(_QWORD *)v7;
  Win32FreePool(v7);
  v3 = 1;
LABEL_21:
  if ( v4 )
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
  return v3;
}
