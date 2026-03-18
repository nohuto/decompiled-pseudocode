/*
 * XREFs of PiDqActionDataGetRequestedProperties @ 0x1404BD990
 * Callers:
 *     PiDqActionDataCreate @ 0x1404B99CC (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PiDqPnPGetObjectProperty @ 0x140487420 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x140488428 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PiDqOpenObjectRegKey @ 0x1404BE0FC (PiDqOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqActionDataGetRequestedProperties(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        const wchar_t *a5,
        __int64 a6,
        unsigned int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  int v9; // ebx
  unsigned int v10; // r15d
  PVOID PoolWithTag; // rax
  unsigned int v12; // ebp
  __int64 v13; // rsi
  HANDLE v14; // r8
  __int64 v15; // rdi
  __int64 v16; // r9
  int v17; // eax
  __int128 v19; // xmm1
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  Handle = 0LL;
  v10 = a2;
  P = 0LL;
  *a9 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * a7, 0x58706E50u);
  *a8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_12;
  }
  PiPnpRtlBeginOperation((__int64 **)&P);
  v12 = 0;
  if ( !a7 )
    goto LABEL_12;
  v13 = a6 + 20;
  while ( 1 )
  {
    v14 = 0LL;
    v15 = *a8 + 48LL * (unsigned int)*a9;
    if ( !*(_DWORD *)v13 )
      goto LABEL_5;
    if ( *(_DWORD *)v13 != 1 )
      break;
    v10 = 0;
    if ( !Handle )
    {
      v9 = PiDqOpenObjectRegKey(1, a3, a2, 1, 0, a1, (__int64)&Handle);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = (HANDLE)-1LL;
      }
    }
    if ( Handle == (HANDLE)-1LL )
    {
      *(_OWORD *)v15 = *(_OWORD *)(v13 - 20);
      v19 = *(_OWORD *)(v13 - 4);
      *(_DWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 40) = 0LL;
      *(_DWORD *)(v15 + 36) = 0;
      *(_OWORD *)(v15 + 16) = v19;
      goto LABEL_9;
    }
    v14 = Handle;
LABEL_5:
    if ( v9 < 0 )
      goto LABEL_12;
    v16 = a6 + 32LL * v12;
    v17 = a4
        ? PiDqPnPGetObjectPropertyInBestLocale(a3, v10, (__int64)v14, v16, *(_DWORD *)v13, a5, (_OWORD *)v15)
        : PiDqPnPGetObjectProperty(
            a3,
            v10,
            (__int64)v14,
            v16,
            *(_DWORD *)v13,
            *(NTSTRSAFE_PCWSTR *)(v13 + 4),
            (_OWORD *)v15);
    v9 = v17;
    if ( v17 < 0 )
      goto LABEL_12;
LABEL_9:
    ++*a9;
    ++v12;
    v13 += 32LL;
    if ( v12 >= a7 )
      goto LABEL_12;
    v10 = a2;
  }
  v9 = -1073741811;
LABEL_12:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)v9;
}
