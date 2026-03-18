/*
 * XREFs of PiDqActionDataGetRequestedProperties @ 0x14052E168
 * Callers:
 *     PiDqActionDataCreate @ 0x14052DF68 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiDqOpenObjectRegKey @ 0x140447A84 (PiDqOpenObjectRegKey.c)
 *     PiDqPnPGetObjectProperty @ 0x140524D78 (PiDqPnPGetObjectProperty.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x140524FB4 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 */

__int64 __fastcall PiDqActionDataGetRequestedProperties(
        __int64 a1,
        int a2,
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
  __int128 v18; // xmm1
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
    goto LABEL_17;
  }
  PiPnpRtlBeginOperation((__int64 **)&P);
  v12 = 0;
  if ( !a7 )
    goto LABEL_17;
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
      v9 = PiDqOpenObjectRegKey(1, a3, a2, 1, 0, a1, &Handle);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = (HANDLE)-1LL;
      }
    }
    if ( Handle == (HANDLE)-1LL )
    {
      *(_OWORD *)v15 = *(_OWORD *)(v13 - 20);
      v18 = *(_OWORD *)(v13 - 4);
      *(_DWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 40) = 0LL;
      *(_DWORD *)(v15 + 36) = 0;
      *(_OWORD *)(v15 + 16) = v18;
      goto LABEL_9;
    }
    v14 = Handle;
LABEL_5:
    if ( v9 < 0 )
      goto LABEL_17;
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
      goto LABEL_17;
LABEL_9:
    ++*a9;
    ++v12;
    v13 += 32LL;
    if ( v12 >= a7 )
      goto LABEL_17;
    v10 = a2;
  }
  v9 = -1073741811;
LABEL_17:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v9;
}
