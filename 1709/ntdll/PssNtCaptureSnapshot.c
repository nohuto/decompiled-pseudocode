/*
 * XREFs of PssNtCaptureSnapshot @ 0x18005C280
 * Callers:
 *     <none>
 * Callees:
 *     PsspCaptureVaSpaceInformation @ 0x180059BCC (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x18005BD74 (PsspCaptureHandleInformation.c)
 *     PsspSampleCounters @ 0x18005C73C (PsspSampleCounters.c)
 *     PsspCaptureThreadInformation @ 0x18005C79C (PsspCaptureThreadInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x18005CD24 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureProcessInformation @ 0x18005CF50 (PsspCaptureProcessInformation.c)
 *     PsspCaptureIptTrace @ 0x18005D188 (PsspCaptureIptTrace.c)
 *     PssNtFreeSnapshot @ 0x18005D700 (PssNtFreeSnapshot.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x1800A0A60 (ZwCreateProcessEx.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __cdecl PssNtCaptureSnapshot(
        PHANDLE SnapshotHandle,
        HANDLE ProcessHandle,
        ULONG CaptureFlags,
        ULONG ThreadContextFlags)
{
  HANDLE v5; // r13
  ULONG v7; // r14d
  __int64 v8; // rbx
  ULONG v9; // esi
  HANDLE v10; // rcx
  int v11; // r12d
  NTSTATUS result; // eax
  int v13; // r12d
  int v14; // r12d
  ULONG v15; // eax
  int v16; // ebx
  int v17; // r14d
  PVOID BaseAddress; // [rsp+58h] [rbp-39h] BYREF
  __int64 v19; // [rsp+60h] [rbp-31h] BYREF
  __int64 v20; // [rsp+68h] [rbp-29h] BYREF
  __int64 v21; // [rsp+70h] [rbp-21h] BYREF
  __int64 v22; // [rsp+78h] [rbp-19h] BYREF
  __int64 v23; // [rsp+80h] [rbp-11h]
  __int64 v24; // [rsp+88h] [rbp-9h] BYREF
  __int64 v25; // [rsp+90h] [rbp-1h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+7h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+Fh] BYREF
  HANDLE ProcessHandlea; // [rsp+A8h] [rbp+17h] BYREF

  v5 = ProcessHandle;
  if ( (CaptureFlags & 0x3FFC000) != 0 )
    return -1073741811;
  v7 = CaptureFlags & 0x1C000000;
  if ( (CaptureFlags & 0x1C000000) == 0x4000000 )
    return -1073741776;
  v8 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v9 = CaptureFlags & 0x40000000;
  if ( (CaptureFlags & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    v23 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v25, &v24);
  }
  v10 = *SnapshotHandle;
  v11 = 0;
  BaseAddress = v10;
  if ( !v10 )
  {
    RegionSize = 1144LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    v10 = BaseAddress;
    v11 = 1;
    *SnapshotHandle = BaseAddress;
  }
  memset(v10, 0, 0x478uLL);
  *(_DWORD *)BaseAddress = 1146311504;
  *((_DWORD *)BaseAddress + 1) = v11;
  *((_DWORD *)BaseAddress + 2) = CaptureFlags;
  v13 = PsspCaptureProcessInformation(BaseAddress, v5, CaptureFlags);
  if ( v13 < 0 )
    goto LABEL_60;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v27 = 2147352576LL;
    v13 = PsspCaptureAuxiliaryPages(BaseAddress, v5, CaptureFlags, &v27);
    if ( v13 < 0 )
      goto LABEL_60;
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)BaseAddress + 135) = v19 - v21;
      *((_QWORD *)BaseAddress + 136) = 1000000 * (v20 - v22) / v8;
    }
  }
  if ( (CaptureFlags & 0x800) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v13 = PsspCaptureVaSpaceInformation((__int64)BaseAddress, v5, CaptureFlags);
    if ( v13 >= 0 )
    {
      if ( v9 )
      {
        PsspSampleCounters(&v20, &v19);
        *((_QWORD *)BaseAddress + 133) = v19 - v21;
        *((_QWORD *)BaseAddress + 134) = 1000000 * (v20 - v22) / v8;
      }
      goto LABEL_21;
    }
LABEL_60:
    PssNtFreeSnapshot(BaseAddress);
    *SnapshotHandle = 0LL;
    return v13;
  }
LABEL_21:
  if ( (CaptureFlags & 1) == 0 )
    goto LABEL_38;
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  v14 = ((int)CaptureFlags >> 31) & 0x1000;
  do
  {
    while ( 1 )
    {
      v15 = ((int)CaptureFlags >> 31) & 0x1000;
      if ( (v7 & 0x10000000) != 0 )
      {
        v15 = v14 | 0x400;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        v15 = v14 | 1;
      }
      v16 = ZwCreateProcessEx(&ProcessHandlea, 0x2000000u, 0LL, ProcessHandle, v15, 0LL, 0LL, 0LL, 0);
      if ( v16 >= 0 )
        goto LABEL_34;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_58;
      if ( (v7 & 0x10000000) == 0 )
        break;
      v7 &= ~0x10000000u;
    }
    if ( (v7 & 0x8000000) == 0 )
    {
LABEL_58:
      PssNtFreeSnapshot(BaseAddress);
      *SnapshotHandle = 0LL;
      return v16;
    }
    v7 &= ~0x8000000u;
    v16 = -1073741267;
LABEL_34:
    ;
  }
  while ( v16 == -1073741267 );
  *((_QWORD *)BaseAddress + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)BaseAddress + 109) = ProcessHandlea;
  if ( v9 )
  {
    PsspSampleCounters(&v20, &v19);
    v8 = v23;
    *((_QWORD *)BaseAddress + 131) = v19 - v21;
    *((_QWORD *)BaseAddress + 132) = 1000000 * (v20 - v22) / v8;
  }
  else
  {
    v8 = v23;
  }
  v5 = ProcessHandle;
LABEL_38:
  if ( (CaptureFlags & 4) == 0 )
  {
LABEL_44:
    if ( (CaptureFlags & 0x80u) != 0 )
    {
      if ( v9 )
        PsspSampleCounters(&v22, &v21);
      v17 = PsspCaptureThreadInformation(BaseAddress, v5, CaptureFlags, ThreadContextFlags);
      if ( v17 < 0 )
        goto LABEL_62;
      if ( !v9 )
        goto LABEL_52;
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)BaseAddress + 139) = v19 - v21;
      *((_QWORD *)BaseAddress + 140) = 1000000 * (v20 - v22) / v8;
    }
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)BaseAddress + 129) = v19 - v24;
      *((_QWORD *)BaseAddress + 130) = 1000000 * (v20 - v25) / v8;
    }
LABEL_52:
    if ( (CaptureFlags & 0x2000) != 0 )
      PsspCaptureIptTrace(BaseAddress, v5);
    return 0;
  }
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  v17 = PsspCaptureHandleInformation((__int64)BaseAddress, v5, CaptureFlags);
  if ( v17 >= 0 )
  {
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)BaseAddress + 137) = v19 - v21;
      *((_QWORD *)BaseAddress + 138) = 1000000 * (v20 - v22) / v8;
    }
    goto LABEL_44;
  }
LABEL_62:
  PssNtFreeSnapshot(BaseAddress);
  *SnapshotHandle = 0LL;
  return v17;
}
