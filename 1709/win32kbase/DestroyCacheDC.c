/*
 * XREFs of DestroyCacheDC @ 0x1C0057280
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003ADD0 (xxxUserProcessCallout.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     DestroyMonitorDCs @ 0x1C0062620 (DestroyMonitorDCs.c)
 *     DestroyCacheDCEntries @ 0x1C007C05C (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C008B178 (DelayedDestroyCacheDC.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     HmgMarkDeletable @ 0x1C00801F0 (HmgMarkDeletable.c)
 *     GreMarkPendingDestroyDC @ 0x1C00FDC74 (GreMarkPendingDestroyDC.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  int v4; // r14d
  __int64 *v6; // rdi
  __int64 v7; // rbx
  struct HOBJ__ *v8; // rsi
  HBRUSH v9; // rcx
  HBRUSH v10; // rcx
  HBRUSH v11; // rcx
  struct HOBJ__ *v12; // rcx
  __int64 v13; // rdx
  int v14; // r8d
  HDC v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  int v22; // r8d
  __int64 *v23; // rax
  unsigned int v24; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32), a2, a3);
    v4 = 1;
    v6 = (__int64 *)(gpDispInfo + 16);
    v23 = *(__int64 **)(gpDispInfo + 16);
    if ( !v23 )
      goto LABEL_30;
    do
    {
      if ( v23[1] == a2 )
        break;
      v6 = v23;
      v23 = (__int64 *)*v23;
    }
    while ( v23 );
    if ( !v23 || !v6 )
    {
LABEL_30:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v21, v22);
      return 0LL;
    }
  }
  v7 = *v6;
  *(_DWORD *)(v7 + 64) |= 0x400000u;
  if ( (*(_DWORD *)(v7 + 64) & 0x40000) == 0 )
  {
    v8 = *(struct HOBJ__ **)(v7 + 40);
    if ( (unsigned __int64)v8 > 2 )
    {
      PsGetCurrentProcessId();
      HmgMarkDeletable(v8);
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
  if ( (unsigned int)GreSetDCOwnerEx(*(struct HOBJ__ **)(v7 + 8), 2147483650LL, 1LL, 1LL) )
  {
    if ( (*(_DWORD *)(v7 + 64) & 0x4000) != 0 )
    {
      if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
        GreSelectRedirectionBitmap(*(_QWORD *)(v7 + 8), 0LL);
      *(_DWORD *)(v7 + 64) &= ~0x4000u;
      *(_QWORD *)(v7 + 32) = 0LL;
    }
    v12 = *(struct HOBJ__ **)(v7 + 8);
    v24 = 0x400000;
    if ( (unsigned int)bDeleteDCInternalEx(v12, &v24) )
    {
      if ( (*(_DWORD *)(v7 + 64) & 0x1002) == 2 )
        --gnDCECount;
      *v6 = *(_QWORD *)v7;
      Win32FreePool(v7);
      v3 = 1;
      goto LABEL_21;
    }
    GreSetDCOwnerEx(*(struct HOBJ__ **)(v7 + 8), 2147483666LL, 1LL, 1LL);
  }
  v16 = *(HDC *)(v7 + 8);
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 0LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  GreMarkPendingDestroyDC(v16);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v17, v19);
  *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
LABEL_21:
  if ( v4 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v13, v14);
  return v3;
}
