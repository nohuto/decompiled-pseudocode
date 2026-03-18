/*
 * XREFs of MiShareExistingControlArea @ 0x1405104F8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 * Callees:
 *     PsIsCurrentThreadPrefetching @ 0x14001B870 (PsIsCurrentThreadPrefetching.c)
 *     IoSetTopLevelIrp @ 0x140096520 (IoSetTopLevelIrp.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmChangeSectionBackingFile @ 0x140118718 (MmChangeSectionBackingFile.c)
 *     MiDereferenceFailedControlArea @ 0x14045ED34 (MiDereferenceFailedControlArea.c)
 *     FsRtlGetFileSize @ 0x140493F40 (FsRtlGetFileSize.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 *     MiValidateExistingImage @ 0x14051108C (MiValidateExistingImage.c)
 */

__int64 __fastcall MiShareExistingControlArea(__int64 a1)
{
  __int64 *v1; // r14
  struct _FILE_OBJECT *v3; // rdi
  __int64 v4; // rbp
  NTSTATUS v5; // esi
  LARGE_INTEGER v6; // r8
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER FileSize; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(__int64 **)(a1 + 64);
  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  if ( (v1[7] & 0x200) != 0 && !PsIsCurrentThreadPrefetching() )
    MmChangeSectionBackingFile(0LL, v3, ((*(_DWORD *)(a1 + 16) & 0x1000000) != 0) + 1);
  ObfDereferenceObject(v3);
  *(_DWORD *)a1 |= 4u;
  v4 = *v1;
  if ( (v1[7] & 0x20) == 0 && (*(_DWORD *)a1 & 1) == 0 )
  {
    v5 = FsRtlGetFileSize(v3, &FileSize);
    IoSetTopLevelIrp(*(PIRP *)(a1 + 176));
    FsRtlReleaseFile(v3);
    *(_DWORD *)a1 &= ~2u;
    if ( v5 < 0 )
    {
      ObfDereferenceObject(v3);
      *(_QWORD *)(a1 + 64) = v1;
      goto LABEL_25;
    }
    v6 = FileSize;
    if ( !FileSize.QuadPart && !**(_QWORD **)(a1 + 152) )
    {
      ObfDereferenceObject(v3);
      v5 = -1073741538;
      goto LABEL_25;
    }
  }
  else
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 176));
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
    {
      v5 = MiValidateExistingImage(a1);
      if ( v5 < 0 )
      {
        ObfDereferenceObject(v3);
        goto LABEL_25;
      }
    }
    v6.QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), -1LL, -1LL);
  }
  v7 = **(LARGE_INTEGER **)(a1 + 152);
  if ( !v7.QuadPart )
  {
    *(_DWORD *)a1 |= 8u;
    *(LARGE_INTEGER *)(a1 + 128) = v6;
    return 0LL;
  }
  if ( v6.QuadPart >= (unsigned __int64)v7.QuadPart )
  {
    *(_DWORD *)a1 |= 8u;
LABEL_18:
    *(LARGE_INTEGER *)(a1 + 128) = v7;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 28) & 0x44) != 0 )
    goto LABEL_18;
  ObfDereferenceObject(v3);
  v5 = -1073741760;
LABEL_25:
  MiDereferenceFailedControlArea(a1);
  return (unsigned int)v5;
}
