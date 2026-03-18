/*
 * XREFs of RawUserFsCtrl @ 0x140575564
 * Callers:
 *     RawFileSystemControl @ 0x14042228C (RawFileSystemControl.c)
 * Callees:
 *     RawEndOperation @ 0x140005378 (RawEndOperation.c)
 *     RawBeginOperation @ 0x140005430 (RawBeginOperation.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14001B7C0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     FsRtlNotifyVolumeEvent @ 0x1405757A0 (FsRtlNotifyVolumeEvent.c)
 *     RawQueryFileSystemInformation @ 0x14059ACD8 (RawQueryFileSystemInformation.c)
 */

__int64 __fastcall RawUserFsCtrl(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int FileSystemInformation; // ebx
  struct _FILE_OBJECT *v5; // rsi
  char v6; // r12
  int v10; // ebp
  struct _FAST_MUTEX *v12; // r14
  int v13; // eax
  ULONG v14; // edx
  ULONG v15; // edx
  BOOLEAN v16; // r14
  int v17; // eax
  int v18; // eax
  int v19; // eax

  v3 = *(_DWORD *)(a2 + 24);
  FileSystemInformation = 0;
  v5 = *(struct _FILE_OBJECT **)(a2 + 48);
  v6 = 0;
  if ( v3 == 589848 )
  {
    v15 = 3;
    goto LABEL_25;
  }
  if ( *(_DWORD *)(a2 + 24) == 589856 )
  {
    v15 = 1;
LABEL_25:
    FsRtlNotifyVolumeEvent(v5, v15);
  }
  switch ( v3 )
  {
    case 589824:
    case 589828:
    case 589836:
    case 589844:
      v16 = RawBeginOperation(a3, (__int64)v5);
      if ( v16 )
      {
        FileSystemInformation = -1073741822;
LABEL_32:
        if ( v16 )
          RawEndOperation(a3, (__int64)v5);
        goto LABEL_20;
      }
LABEL_41:
      FileSystemInformation = -1073741202;
      goto LABEL_12;
    case 589848:
      v16 = RawBeginOperation(a3, (__int64)v5);
      v17 = 0;
      if ( !v16 )
        v17 = -1073741202;
      FileSystemInformation = v17;
      ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
      v18 = *(_DWORD *)(a3 + 104);
      if ( (v18 & 1) != 0 || *(_DWORD *)(a3 + 108) != 1 )
      {
        FileSystemInformation = -1073741790;
      }
      else
      {
        *(_QWORD *)(a3 + 208) = v5;
        *(_DWORD *)(a3 + 104) = v18 | 1;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 224));
      goto LABEL_32;
    case 589852:
      v12 = (struct _FAST_MUTEX *)(a3 + 224);
      ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
      v19 = *(_DWORD *)(a3 + 104);
      if ( (v19 & 1) != 0 )
      {
        *(_QWORD *)(a3 + 208) = 0LL;
        *(_DWORD *)(a3 + 104) = v19 & 0xFFFFFFFE;
      }
      else
      {
        FileSystemInformation = -1073741782;
      }
      goto LABEL_19;
  }
  if ( v3 != 589856 )
  {
    if ( v3 != 590412 )
    {
      FileSystemInformation = -1073741811;
      goto LABEL_12;
    }
    v16 = RawBeginOperation(a3, (__int64)v5);
    if ( v16 )
    {
      FileSystemInformation = RawQueryFileSystemInformation(a1, a2, a3);
      goto LABEL_32;
    }
    goto LABEL_41;
  }
  v12 = (struct _FAST_MUTEX *)(a3 + 224);
  ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
  v13 = *(_DWORD *)(a3 + 104);
  if ( (v13 & 2) != 0 )
  {
    FileSystemInformation = -1073741202;
  }
  else
  {
    v6 = 1;
    *(_DWORD *)(a3 + 104) = v13 | 2;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 224));
  if ( v6 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 216));
    ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
    *(_QWORD *)(a3 + 200) = v5;
LABEL_19:
    KeReleaseGuardedMutex(v12);
  }
LABEL_20:
  if ( (FileSystemInformation & 0x80000000) == 0 )
  {
    if ( v3 != 589852 )
      return FileSystemInformation;
    v14 = 5;
LABEL_23:
    FsRtlNotifyVolumeEvent(v5, v14);
    return FileSystemInformation;
  }
LABEL_12:
  v10 = v3 - 589848;
  if ( !v10 )
  {
    v14 = 4;
    goto LABEL_23;
  }
  if ( v10 == 8 )
  {
    v14 = 2;
    goto LABEL_23;
  }
  return FileSystemInformation;
}
