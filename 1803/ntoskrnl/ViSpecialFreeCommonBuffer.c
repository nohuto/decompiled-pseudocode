/*
 * XREFs of ViSpecialFreeCommonBuffer @ 0x14081BF34
 * Callers:
 *     VfFreeCommonBuffer @ 0x140818A00 (VfFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1408170B4 (DECREMENT_COMMON_BUFFERS.c)
 *     ViCheckPadding @ 0x14081A648 (ViCheckPadding.c)
 */

__int64 __fastcall ViSpecialFreeCommonBuffer(
        void (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD, char),
        __int64 a2,
        void *a3,
        char a4)
{
  KSPIN_LOCK *v4; // rbp
  _QWORD *v6; // rdi
  KIRQL v10; // r14
  unsigned __int16 *v11; // rbx
  _QWORD *v12; // rcx
  KIRQL v14; // bp
  __int64 v15; // r9
  unsigned __int16 **v16; // r8

  v4 = (KSPIN_LOCK *)(a2 + 96);
  v6 = (_QWORD *)(a2 + 80);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v11 = (unsigned __int16 *)(*v6 - 48LL);
  if ( v6 == (_QWORD *)*v6 )
  {
LABEL_4:
    v11 = 0LL;
  }
  else
  {
    while ( (void *)(*((_QWORD *)v11 + 2) + *v11) != a3 )
    {
      v12 = (_QWORD *)*((_QWORD *)v11 + 6);
      v11 = (unsigned __int16 *)(v12 - 6);
      if ( v6 == v12 )
        goto LABEL_4;
    }
  }
  KxReleaseSpinLock(v4);
  __writecr8(v10);
  if ( !v11 )
    return 0LL;
  ViCheckPadding(*((_QWORD *)v11 + 2), *((_DWORD *)v11 + 1), *((_QWORD *)v11 + 3), *((_DWORD *)v11 + 2));
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v15 = *((_QWORD *)v11 + 6);
  if ( *(unsigned __int16 **)(v15 + 8) != v11 + 24
    || (v16 = (unsigned __int16 **)*((_QWORD *)v11 + 7), *v16 != v11 + 24) )
  {
    __fastfail(3u);
  }
  *v16 = (unsigned __int16 *)v15;
  *(_QWORD *)(v15 + 8) = v16;
  KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 96));
  __writecr8(v14);
  memset(a3, 0, *((unsigned int *)v11 + 2));
  a1(*(_QWORD *)(a2 + 16), *((unsigned int *)v11 + 1), *((_QWORD *)v11 + 4), *((_QWORD *)v11 + 2), a4);
  DECREMENT_COMMON_BUFFERS(a2);
  ExFreePoolWithTag(v11, 0);
  return 1LL;
}
