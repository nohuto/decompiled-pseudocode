/*
 * XREFs of RawCreate @ 0x1405472D0
 * Callers:
 *     RawDispatch @ 0x140547000 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     RawInitiateDeleteVolume @ 0x1400FA43C (RawInitiateDeleteVolume.c)
 *     IoSetLinkShareAccess @ 0x140547630 (IoSetLinkShareAccess.c)
 *     IoCheckLinkShareAccess @ 0x14056E8B0 (IoCheckLinkShareAccess.c)
 */

__int64 __fastcall RawCreate(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_PagingIoResource; // r12
  __int64 v7; // r8
  int v8; // ecx
  int v9; // eax
  unsigned __int16 v10; // r14
  int v11; // r15d
  bool v12; // zf
  NTSTATUS v13; // esi

  p_PagingIoResource = (struct _FAST_MUTEX *)&AdvancedHeader[2].PagingIoResource;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
  v7 = *(_QWORD *)(a3 + 48);
  if ( v7 && (*(_WORD *)(v7 + 88) || *(_QWORD *)(v7 + 64))
    || (v8 = *(_DWORD *)(a3 + 16), (v8 & 0xFF000000) != 0x1000000)
    || (v8 & 1) != 0 )
  {
    v13 = -1073741811;
    goto LABEL_16;
  }
  v9 = *(_DWORD *)&AdvancedHeader[1].NodeTypeCode;
  if ( (v9 & 1) != 0 )
  {
    v13 = -1073741790;
    goto LABEL_16;
  }
  if ( (v9 & 2) != 0 )
  {
    v13 = -1073741202;
    goto LABEL_16;
  }
  v10 = *(_WORD *)(a3 + 26);
  v11 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
  v12 = *(_DWORD *)&AdvancedHeader[1].Flags == 0;
  if ( *(_DWORD *)&AdvancedHeader[1].Flags )
  {
    v13 = IoCheckLinkShareAccess(v11, v10, v7, (int)AdvancedHeader + 116, 0LL, 1);
    if ( v13 >= 0 )
    {
      v12 = *(_DWORD *)&AdvancedHeader[1].Flags == 0;
      goto LABEL_9;
    }
LABEL_16:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_12;
  }
LABEL_9:
  if ( v12 )
    IoSetLinkShareAccess(v11, v10, *(_QWORD *)(a3 + 48), (_DWORD)AdvancedHeader + 116, 0LL, 0);
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
