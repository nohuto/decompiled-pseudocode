/*
 * XREFs of ViSpecialFreeCommonBuffer @ 0x1407AEDC4
 * Callers:
 *     VfFreeCommonBuffer @ 0x1407AB890 (VfFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1407AA030 (DECREMENT_COMMON_BUFFERS.c)
 *     ViCheckPadding @ 0x1407AD4E0 (ViCheckPadding.c)
 */

__int64 __fastcall ViSpecialFreeCommonBuffer(
        void (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD, char),
        __int64 a2,
        void *a3,
        char a4)
{
  unsigned __int16 *v4; // rdi
  KSPIN_LOCK *v6; // rsi
  KIRQL v10; // al
  __int64 v11; // rbx
  KIRQL v12; // bp
  unsigned __int16 *v13; // rbx
  KIRQL v15; // si
  __int64 v16; // r9
  unsigned __int16 **v17; // r8

  v4 = (unsigned __int16 *)(a2 + 80);
  v6 = (KSPIN_LOCK *)(a2 + 96);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v11 = *(_QWORD *)v4;
  v12 = v10;
  while ( 1 )
  {
    v13 = (unsigned __int16 *)(v11 - 48);
    if ( v4 == v13 + 24 )
    {
      KxReleaseSpinLock(v6);
      v13 = 0LL;
      goto LABEL_6;
    }
    if ( (void *)(*((_QWORD *)v13 + 2) + *v13) == a3 )
      break;
    v11 = *((_QWORD *)v13 + 6);
  }
  KxReleaseSpinLock(v6);
LABEL_6:
  __writecr8(v12);
  if ( !v13 )
    return 0LL;
  ViCheckPadding(*((_QWORD *)v13 + 2), *((_DWORD *)v13 + 1), *((_QWORD *)v13 + 3), *((_DWORD *)v13 + 2));
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v16 = *((_QWORD *)v13 + 6);
  if ( *(unsigned __int16 **)(v16 + 8) != v13 + 24
    || (v17 = (unsigned __int16 **)*((_QWORD *)v13 + 7), *v17 != v13 + 24) )
  {
    __fastfail(3u);
  }
  *v17 = (unsigned __int16 *)v16;
  *(_QWORD *)(v16 + 8) = v17;
  KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 96));
  __writecr8(v15);
  memset(a3, 0, *((unsigned int *)v13 + 2));
  a1(*(_QWORD *)(a2 + 16), *((unsigned int *)v13 + 1), *((_QWORD *)v13 + 4), *((_QWORD *)v13 + 2), a4);
  DECREMENT_COMMON_BUFFERS(a2);
  ExFreePoolWithTag(v13, 0);
  return 1LL;
}
