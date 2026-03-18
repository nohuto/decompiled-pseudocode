/*
 * XREFs of VfBuildMdlFromScatterGatherList @ 0x140768F90
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfBuildMdlFromScatterGatherList(__int64 a1, __int64 a2, struct _MDL *a3, PMDL *a4)
{
  __int64 v4; // rdi
  _QWORD *v8; // rbx
  __int64 AdapterInformationInternal; // rax
  _QWORD *v10; // rsi
  KSPIN_LOCK *v11; // rbp
  KIRQL v12; // al
  _QWORD *v13; // rcx
  KIRQL v14; // r12
  _QWORD *v15; // rcx
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, struct _MDL *, PMDL *); // rax
  int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // rbp
  PMDL Mdl; // rax
  PMDL v21; // rdi

  v4 = a2;
  LOBYTE(a2) = 1;
  v8 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, a2);
  if ( AdapterInformationInternal )
  {
    if ( *(_QWORD *)(v4 + 8) != -559026163LL )
      goto LABEL_14;
    v10 = (_QWORD *)(AdapterInformationInternal + 56);
    if ( (_QWORD *)*v10 != v10 )
    {
      v11 = (KSPIN_LOCK *)(AdapterInformationInternal + 72);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 72));
      v13 = (_QWORD *)*v10;
      v14 = v12;
      while ( 1 )
      {
        v15 = v13 - 9;
        if ( v10 == v15 + 9 )
          break;
        if ( v15[8] == v4 )
        {
          v8 = (_QWORD *)v15[12];
          break;
        }
        v13 = (_QWORD *)v15[9];
      }
      KxReleaseSpinLock(v11);
      __writecr8(v14);
    }
  }
  if ( *(_QWORD *)(v4 + 8) == -559026163LL && v8 )
    *(_QWORD *)(v4 + 8) = v8[6];
LABEL_14:
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, struct _MDL *, PMDL *))ViGetRealDmaOperation(a1, 120LL);
  v17 = RealDmaOperation(a1, v4, a3, a4);
  v18 = v17;
  if ( v8 )
  {
    v8[6] = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 8) = -559026163LL;
  }
  if ( v17 >= 0 && *a4 == a3 && v8 )
  {
    if ( v8[5] )
    {
      return (unsigned int)-1073741709;
    }
    else
    {
      v19 = v8[7];
      Mdl = IoAllocateMdl(0LL, *(_DWORD *)(v19 + 40), 0, 0, 0LL);
      v21 = Mdl;
      if ( Mdl )
      {
        v8[5] = Mdl;
        memmove(&Mdl[1], (const void *)(v19 + 48), 8 * ((unsigned __int64)*(unsigned int *)(v19 + 40) >> 12));
        v21->ByteOffset += a3->ByteOffset;
        v21->ByteCount -= v21->ByteOffset;
        v21->MdlFlags |= 2u;
        *a4 = v21;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v18;
}
