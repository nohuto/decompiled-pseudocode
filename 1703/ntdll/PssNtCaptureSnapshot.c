/*
 * XREFs of PssNtCaptureSnapshot @ 0x1800019F0
 * Callers:
 *     sub_1800DE4A0 @ 0x1800DE4A0 (sub_1800DE4A0.c)
 * Callees:
 *     sub_180001C74 @ 0x180001C74 (sub_180001C74.c)
 *     PssNtFreeSnapshot @ 0x180001CE0 (PssNtFreeSnapshot.c)
 *     sub_180001E74 @ 0x180001E74 (sub_180001E74.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     sub_1800026FC @ 0x1800026FC (sub_1800026FC.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x1800A5CA0 (ZwCreateProcessEx.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_180106D98 @ 0x180106D98 (sub_180106D98.c)
 *     sub_1801077AC @ 0x1801077AC (sub_1801077AC.c)
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
  ULONG v9; // edi
  HANDLE v10; // rcx
  int v11; // r12d
  NTSTATUS v12; // r12d
  int v13; // r12d
  ULONG Flags; // eax
  int v15; // ebx
  NTSTATUS result; // eax
  NTSTATUS v17; // r14d
  NTSTATUS v18; // esi
  PVOID BaseAddress; // [rsp+58h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-31h] BYREF
  __int64 v21; // [rsp+68h] [rbp-29h] BYREF
  __int64 v22; // [rsp+70h] [rbp-21h] BYREF
  __int64 v23; // [rsp+78h] [rbp-19h] BYREF
  __int64 v24; // [rsp+80h] [rbp-11h]
  __int64 v25; // [rsp+88h] [rbp-9h] BYREF
  __int64 v26; // [rsp+90h] [rbp-1h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+7h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+Fh] BYREF
  HANDLE ProcessHandlea; // [rsp+A8h] [rbp+17h] BYREF

  v5 = ProcessHandle;
  if ( (CaptureFlags & 0x3FFE000) != 0 )
    return -1073741811;
  v7 = CaptureFlags & 0x1C000000;
  if ( (CaptureFlags & 0x1C000000) == 0x4000000 )
    return -1073741776;
  v8 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v9 = CaptureFlags & 0x40000000;
  if ( (CaptureFlags & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    v24 = MEMORY[0x7FFE0300];
    sub_180001C74(&v26, &v25);
  }
  v10 = *SnapshotHandle;
  v11 = 0;
  BaseAddress = v10;
  if ( !v10 )
  {
    RegionSize = 1128LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    v10 = BaseAddress;
    v11 = 1;
    *SnapshotHandle = BaseAddress;
  }
  memset(v10, 0, 0x468uLL);
  *(_DWORD *)BaseAddress = 1146311504;
  *((_DWORD *)BaseAddress + 1) = v11;
  *((_DWORD *)BaseAddress + 2) = CaptureFlags;
  v12 = sub_1800026FC(BaseAddress, v5, CaptureFlags);
  if ( v12 < 0 )
    goto LABEL_33;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v9 )
      sub_180001C74(&v23, &v22);
    v28 = 2147352576LL;
    v12 = sub_1800024C4(BaseAddress, v5, CaptureFlags, &v28);
    if ( v12 < 0 )
      goto LABEL_33;
    if ( v9 )
    {
      sub_180001C74(&v21, &v20);
      *((_QWORD *)BaseAddress + 135) = v20 - v22;
      *((_QWORD *)BaseAddress + 136) = 1000000 * (v21 - v23) / v8;
    }
  }
  if ( (CaptureFlags & 0x800) != 0 )
  {
    if ( v9 )
      sub_180001C74(&v23, &v22);
    v12 = sub_180001E74(BaseAddress, v5, CaptureFlags);
    if ( v12 >= 0 )
    {
      if ( v9 )
      {
        sub_180001C74(&v21, &v20);
        *((_QWORD *)BaseAddress + 133) = v20 - v22;
        *((_QWORD *)BaseAddress + 134) = 1000000 * (v21 - v23) / v8;
      }
      goto LABEL_19;
    }
LABEL_33:
    PssNtFreeSnapshot(BaseAddress);
    *SnapshotHandle = 0LL;
    return v12;
  }
LABEL_19:
  if ( (CaptureFlags & 1) == 0 )
    goto LABEL_45;
  if ( v9 )
    sub_180001C74(&v23, &v22);
  v13 = ((int)CaptureFlags >> 31) & 0x1000;
  do
  {
    while ( 1 )
    {
      Flags = ((int)CaptureFlags >> 31) & 0x1000;
      if ( (v7 & 0x10000000) != 0 )
      {
        Flags = v13 | 0x400;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        Flags = v13 | 1;
      }
      v15 = ZwCreateProcessEx(&ProcessHandlea, 0x2000000u, 0LL, ProcessHandle, Flags, 0LL, 0LL, 0LL, 0);
      if ( v15 >= 0 )
        goto LABEL_40;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_27;
      if ( (v7 & 0x10000000) == 0 )
        break;
      v7 &= ~0x10000000u;
    }
    if ( (v7 & 0x8000000) == 0 )
    {
LABEL_27:
      PssNtFreeSnapshot(BaseAddress);
      *SnapshotHandle = 0LL;
      return v15;
    }
    v7 &= ~0x8000000u;
    v15 = -1073741267;
LABEL_40:
    ;
  }
  while ( v15 == -1073741267 );
  *((_QWORD *)BaseAddress + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)BaseAddress + 109) = ProcessHandlea;
  if ( v9 )
  {
    sub_180001C74(&v21, &v20);
    v8 = v24;
    *((_QWORD *)BaseAddress + 131) = v20 - v22;
    *((_QWORD *)BaseAddress + 132) = 1000000 * (v21 - v23) / v8;
  }
  else
  {
    v8 = v24;
  }
  v5 = ProcessHandle;
LABEL_45:
  if ( (CaptureFlags & 4) != 0 )
  {
    if ( v9 )
      sub_180001C74(&v23, &v22);
    v17 = sub_180106D98(BaseAddress, v5, CaptureFlags);
    if ( v17 < 0 )
    {
      PssNtFreeSnapshot(BaseAddress);
      *SnapshotHandle = 0LL;
      return v17;
    }
    if ( v9 )
    {
      sub_180001C74(&v21, &v20);
      *((_QWORD *)BaseAddress + 137) = v20 - v22;
      *((_QWORD *)BaseAddress + 138) = 1000000 * (v21 - v23) / v8;
    }
  }
  if ( (CaptureFlags & 0x80u) == 0 )
  {
LABEL_59:
    if ( v9 )
    {
      sub_180001C74(&v21, &v20);
      *((_QWORD *)BaseAddress + 129) = v20 - v25;
      *((_QWORD *)BaseAddress + 130) = 1000000 * (v21 - v26) / v8;
    }
  }
  else
  {
    if ( v9 )
      sub_180001C74(&v23, &v22);
    v18 = sub_1801077AC(BaseAddress, v5, CaptureFlags, ThreadContextFlags);
    if ( v18 < 0 )
    {
      PssNtFreeSnapshot(BaseAddress);
      *SnapshotHandle = 0LL;
      return v18;
    }
    if ( v9 )
    {
      sub_180001C74(&v21, &v20);
      *((_QWORD *)BaseAddress + 139) = v20 - v22;
      *((_QWORD *)BaseAddress + 140) = 1000000 * (v21 - v23) / v8;
      goto LABEL_59;
    }
  }
  return 0;
}
