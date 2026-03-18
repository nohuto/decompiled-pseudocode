/*
 * XREFs of RawCreate @ 0x140421D48
 * Callers:
 *     RawDispatch @ 0x1404219E0 (RawDispatch.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x140005468 (RawInitiateDeleteVolume.c)
 *     IoSetShareAccessEx @ 0x140005710 (IoSetShareAccessEx.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     IoCheckShareAccessEx @ 0x140422100 (IoCheckShareAccessEx.c)
 */

__int64 __fastcall RawCreate(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_PagingIoResource; // r12
  struct _FILE_OBJECT *v7; // r8
  int v8; // ecx
  int v9; // eax
  unsigned __int16 v10; // r14
  ACCESS_MASK v11; // r15d
  bool v12; // zf
  int v13; // esi

  p_PagingIoResource = (struct _FAST_MUTEX *)&AdvancedHeader[2].PagingIoResource;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
  v7 = *(struct _FILE_OBJECT **)(a3 + 48);
  if ( v7 && (v7->FileName.Length || v7->RelatedFileObject)
    || (v8 = *(_DWORD *)(a3 + 16), (v8 & 0xFF000000) != 0x1000000)
    || (v8 & 1) != 0 )
  {
    v13 = -1073741811;
    goto LABEL_18;
  }
  v9 = *(_DWORD *)&AdvancedHeader[1].NodeTypeCode;
  if ( (v9 & 1) != 0 )
  {
    v13 = -1073741790;
    goto LABEL_18;
  }
  if ( (v9 & 2) != 0 )
  {
    v13 = -1073741202;
    goto LABEL_18;
  }
  v10 = *(_WORD *)(a3 + 26);
  v11 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
  v12 = *(_DWORD *)&AdvancedHeader[1].Flags == 0;
  if ( *(_DWORD *)&AdvancedHeader[1].Flags )
  {
    v13 = IoCheckShareAccessEx(v11, v10, v7, (PSHARE_ACCESS)((char *)&AdvancedHeader[1].Resource + 4), 1u, 0LL);
    if ( v13 >= 0 )
    {
      v12 = *(_DWORD *)&AdvancedHeader[1].Flags == 0;
      goto LABEL_9;
    }
LABEL_18:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_12;
  }
LABEL_9:
  if ( v12 )
    IoSetShareAccessEx(
      v11,
      v10,
      *(PFILE_OBJECT *)(a3 + 48),
      (PSHARE_ACCESS)((char *)&AdvancedHeader[1].Resource + 4),
      0LL);
  ++*(_DWORD *)&AdvancedHeader[1].Flags;
  v13 = 0;
  ++LODWORD(AdvancedHeader[1].Resource);
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 16LL) = AdvancedHeader[1].FileContextSupportPointer;
  Irp->IoStatus.Information = 1LL;
  *(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) |= 8u;
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 24LL) = AdvancedHeader;
LABEL_12:
  if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 1) )
    KeReleaseGuardedMutex(p_PagingIoResource);
  Irp->IoStatus.Status = v13;
  IofCompleteRequest(Irp, 1);
  return (unsigned int)v13;
}
