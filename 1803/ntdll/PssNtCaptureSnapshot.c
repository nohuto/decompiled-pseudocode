/*
 * XREFs of PssNtCaptureSnapshot @ 0x180109790
 * Callers:
 *     <none>
 * Callees:
 *     PssNtFreeSnapshot @ 0x1800848E0 (PssNtFreeSnapshot.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x18009B460 (ZwCreateProcessEx.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180109F00 @ 0x180109F00 (sub_180109F00.c)
 *     sub_18010A158 @ 0x18010A158 (sub_18010A158.c)
 *     sub_18010A2AC @ 0x18010A2AC (sub_18010A2AC.c)
 *     sub_18010A448 @ 0x18010A448 (sub_18010A448.c)
 *     sub_18010A810 @ 0x18010A810 (sub_18010A810.c)
 *     sub_18010AD6C @ 0x18010AD6C (sub_18010AD6C.c)
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
 */

NTSTATUS __cdecl PssNtCaptureSnapshot(
        PHANDLE SnapshotHandle,
        HANDLE ProcessHandle,
        ULONG CaptureFlags,
        ULONG ThreadContextFlags)
{
  HANDLE v5; // r13
  NTSTATUS result; // eax
  ULONG v8; // r15d
  __int64 v9; // rbx
  ULONG v10; // esi
  HANDLE v11; // rcx
  int v12; // r12d
  NTSTATUS v13; // r12d
  int v14; // r12d
  int v15; // r13d
  ULONG v16; // eax
  int v17; // ebx
  NTSTATUS v18; // r15d
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
  if ( (CaptureFlags & 0x3FFC000) != 0 )
    return -1073741811;
  v8 = CaptureFlags & 0x1C000000;
  if ( (CaptureFlags & 0x1C000000) == 0x4000000 )
    return -1073741776;
  v9 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v10 = CaptureFlags & 0x40000000;
  if ( (CaptureFlags & 0x40000000) != 0 )
  {
    v9 = MEMORY[0x7FFE0300];
    v24 = MEMORY[0x7FFE0300];
    sub_180109F00(&v26, &v25);
  }
  v11 = *SnapshotHandle;
  v12 = 0;
  BaseAddress = v11;
  if ( !v11 )
  {
    RegionSize = 1144LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    v11 = BaseAddress;
    v12 = 1;
    *SnapshotHandle = BaseAddress;
  }
  memset(v11, 0, 0x478uLL);
  *(_DWORD *)BaseAddress = 1146311504;
  *((_DWORD *)BaseAddress + 1) = v12;
  *((_DWORD *)BaseAddress + 2) = CaptureFlags;
  v13 = sub_18010A2AC(BaseAddress, v5, CaptureFlags);
  if ( v13 < 0 )
    goto LABEL_11;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v10 )
      sub_180109F00(&v23, &v22);
    v28 = 2147352576LL;
    v13 = sub_18010A448(BaseAddress, v5, CaptureFlags, &v28);
    if ( v13 < 0 )
      goto LABEL_11;
    if ( v10 )
    {
      sub_180109F00(&v21, &v20);
      *((_QWORD *)BaseAddress + 135) = v20 - v22;
      *((_QWORD *)BaseAddress + 136) = 1000000 * (v21 - v23) / v9;
    }
  }
  if ( (CaptureFlags & 0x800) != 0 )
  {
    if ( v10 )
      sub_180109F00(&v23, &v22);
    v13 = sub_18010A810(BaseAddress, v5, CaptureFlags);
    if ( v13 >= 0 )
    {
      if ( v10 )
      {
        sub_180109F00(&v21, &v20);
        *((_QWORD *)BaseAddress + 133) = v20 - v22;
        *((_QWORD *)BaseAddress + 134) = 1000000 * (v21 - v23) / v9;
      }
      goto LABEL_24;
    }
LABEL_11:
    PssNtFreeSnapshot((__int64)BaseAddress);
    *SnapshotHandle = 0LL;
    return v13;
  }
LABEL_24:
  if ( (CaptureFlags & 1) == 0 )
    goto LABEL_44;
  if ( v10 )
    sub_180109F00(&v23, &v22);
  v14 = ((int)CaptureFlags >> 31) & 0x1000;
  do
  {
    while ( 1 )
    {
      v15 = v8 & 0x8000000;
      v16 = ((int)CaptureFlags >> 31) & 0x1000;
      if ( (v8 & 0x10000000) != 0 )
      {
        v16 = v14 | 0x400;
      }
      else if ( v15 )
      {
        v16 = v14 | 1;
      }
      v17 = ZwCreateProcessEx(&ProcessHandlea, 0x2000000u, 0LL, ProcessHandle, v16, 0LL, 0LL, 0LL, 0);
      if ( v17 >= 0 )
        goto LABEL_38;
      if ( (v8 & 0x4000000) == 0 )
        goto LABEL_41;
      if ( (v8 & 0x10000000) == 0 )
        break;
      v8 &= ~0x10000000u;
    }
    if ( !v15 )
    {
LABEL_41:
      PssNtFreeSnapshot((__int64)BaseAddress);
      *SnapshotHandle = 0LL;
      return v17;
    }
    v8 &= ~0x8000000u;
    v17 = -1073741267;
LABEL_38:
    ;
  }
  while ( v17 == -1073741267 );
  *((_QWORD *)BaseAddress + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)BaseAddress + 109) = ProcessHandlea;
  if ( v10 )
  {
    sub_180109F00(&v21, &v20);
    v9 = v24;
    *((_QWORD *)BaseAddress + 131) = v20 - v22;
    *((_QWORD *)BaseAddress + 132) = 1000000 * (v21 - v23) / v9;
  }
  else
  {
    v9 = v24;
  }
  v5 = ProcessHandle;
LABEL_44:
  if ( (CaptureFlags & 4) != 0 )
  {
    if ( v10 )
      sub_180109F00(&v23, &v22);
    v18 = sub_18010AD6C(BaseAddress, v5, CaptureFlags);
    if ( v18 < 0 )
    {
LABEL_48:
      PssNtFreeSnapshot((__int64)BaseAddress);
      *SnapshotHandle = 0LL;
      return v18;
    }
    if ( v10 )
    {
      sub_180109F00(&v21, &v20);
      *((_QWORD *)BaseAddress + 137) = v20 - v22;
      *((_QWORD *)BaseAddress + 138) = 1000000 * (v21 - v23) / v9;
    }
  }
  if ( (CaptureFlags & 0x80u) == 0 )
  {
LABEL_57:
    if ( v10 )
    {
      sub_180109F00(&v21, &v20);
      *((_QWORD *)BaseAddress + 129) = v20 - v25;
      *((_QWORD *)BaseAddress + 130) = 1000000 * (v21 - v26) / v9;
    }
  }
  else
  {
    if ( v10 )
      sub_180109F00(&v23, &v22);
    v18 = sub_18010B78C(BaseAddress, v5, CaptureFlags, ThreadContextFlags);
    if ( v18 < 0 )
      goto LABEL_48;
    if ( v10 )
    {
      sub_180109F00(&v21, &v20);
      *((_QWORD *)BaseAddress + 139) = v20 - v22;
      *((_QWORD *)BaseAddress + 140) = 1000000 * (v21 - v23) / v9;
      goto LABEL_57;
    }
  }
  if ( (CaptureFlags & 0x2000) != 0 )
    sub_18010A158(BaseAddress, v5);
  return 0;
}
