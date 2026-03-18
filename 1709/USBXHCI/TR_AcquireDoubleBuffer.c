/*
 * XREFs of TR_AcquireDoubleBuffer @ 0x1C0021FBC
 * Callers:
 *     Control_MapTransfer @ 0x1C0024510 (Control_MapTransfer.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C003144C (Bulk_TransferData_DetermineTransferMechanism.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C000F6FC (CommonBuffer_AcquireBuffer.c)
 */

_QWORD *__fastcall TR_AcquireDoubleBuffer(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v2 = a1 + 224;
  if ( *(_QWORD *)v2 == v2 )
  {
    v3 = (_QWORD *)CommonBuffer_AcquireBuffer(
                     *(PVOID *)(*(_QWORD *)(a1 + 40) + 120LL),
                     *(_DWORD *)(a1 + 24),
                     a1,
                     845639250);
  }
  else
  {
    v3 = *(_QWORD **)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    v3[1] = v3;
    *v3 = v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return v3;
}
