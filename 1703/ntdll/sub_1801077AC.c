/*
 * XREFs of sub_1801077AC @ 0x1801077AC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800019F0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180068B70 (RtlGetExtendedContextLength.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwGetNextThread @ 0x1800A70D0 (ZwGetNextThread.c)
 *     sub_180107AEC @ 0x180107AEC (sub_180107AEC.c)
 *     sub_180107D1C @ 0x180107D1C (sub_180107D1C.c)
 */

__int64 __fastcall sub_1801077AC(__int64 a1, void *a2, unsigned int a3, ULONG a4)
{
  unsigned int v4; // ebx
  PVOID *v6; // r15
  _WORD *v7; // rsi
  ACCESS_MASK v8; // r12d
  unsigned int v9; // r14d
  NTSTATUS NextThread; // eax
  int v11; // ecx
  NTSTATUS v12; // edi
  ULONG_PTR v13; // rax
  NTSTATUS v14; // eax
  int v15; // esi
  NTSTATUS ExtendedContextLength; // eax
  unsigned __int64 v17; // rcx
  PVOID v19; // rdx
  int v20; // r12d
  PVOID *v21; // r14
  unsigned int i; // r12d
  int v23; // eax
  int Flags; // [rsp+28h] [rbp-69h]
  HANDLE ThreadHandle; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-31h] BYREF
  HANDLE NewThreadHandle; // [rsp+68h] [rbp-29h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-21h] BYREF
  PVOID v29; // [rsp+78h] [rbp-19h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-11h] BYREF
  int v31; // [rsp+88h] [rbp-9h]
  int v32[2]; // [rsp+90h] [rbp-1h] BYREF
  int v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+9Ch] [rbp+Bh]
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp+17h] BYREF

  v4 = 0;
  v31 = a3 & 0x100;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (a3 >> 7) & 8 | (v31 != 0 ? 72 : 64);
  v9 = 0;
  NextThread = ZwGetNextThread(a2, 0LL, v8, 0, 0, &NewThreadHandle);
  v11 = (int)NewThreadHandle;
  v12 = NextThread;
  ThreadHandle = NewThreadHandle;
  if ( NextThread != -2147483622 )
  {
    do
    {
      if ( v12 < 0 )
        goto LABEL_18;
      if ( !v7 || v7[5] >= v7[4] )
      {
        RegionSize = 1LL;
        BaseAddress = 0LL;
        v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
        if ( v12 < 0 )
          goto LABEL_18;
        if ( v6 )
        {
          *(_QWORD *)v7 = BaseAddress;
          v7 = BaseAddress;
        }
        else
        {
          v7 = BaseAddress;
          v6 = (PVOID *)BaseAddress;
        }
        v13 = RegionSize - 16;
        v7[5] = 0;
        v7[4] = v13 >> 2;
        v11 = (int)NewThreadHandle;
      }
      ++v9;
      *(_DWORD *)&v7[2 * (unsigned __int16)v7[5]++ + 6] = v11;
      v14 = ZwGetNextThread(a2, ThreadHandle, v8, 0, 0, &NewThreadHandle);
      v11 = (int)NewThreadHandle;
      v12 = v14;
      ThreadHandle = NewThreadHandle;
    }
    while ( v14 != -2147483622 );
    if ( !v9 )
      return 0LL;
    v15 = 0;
    LODWORD(ThreadHandle) = 0;
    if ( v31 )
    {
      if ( (a3 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(a4, (PULONG)&ThreadHandle),
            v15 = (int)ThreadHandle,
            ExtendedContextLength < 0) )
      {
        v15 = 1232;
      }
    }
    *(_DWORD *)(a1 + 1024) = v15;
    v17 = v9 * (unsigned __int64)(((v15 + 15) & 0xFFFFFFF0) + 128);
    if ( v17 > 0xFFFFFFFF )
    {
      v12 = -1073741675;
LABEL_18:
      sub_180107D1C(v6);
      return (unsigned int)v12;
    }
    MaximumSize.QuadPart = (unsigned int)v17;
    v12 = ZwCreateSection(
            &SectionHandle,
            0xF0007u,
            (POBJECT_ATTRIBUTES)&stru_180130B70,
            &MaximumSize,
            4u,
            0x8000000u,
            0LL);
    if ( v12 < 0 )
      goto LABEL_18;
    v29 = 0LL;
    RegionSize = 0LL;
    v12 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &v29,
            0LL,
            0LL,
            0LL,
            &RegionSize,
            ViewShare,
            0,
            4u);
    if ( v12 < 0 )
    {
LABEL_21:
      ZwClose(SectionHandle);
      goto LABEL_18;
    }
    v19 = v29;
    v20 = 0;
    v21 = v6;
    *(_QWORD *)v32 = v29;
    v33 = RegionSize;
    v34 = 0LL;
    if ( v6 )
    {
      do
      {
        for ( i = 0; i < *((unsigned __int16 *)v21 + 5); ++i )
        {
          NewThreadHandle = (HANDLE)*((unsigned int *)v21 + i + 3);
          v23 = sub_180107AEC((int)v32, a3, a4, v15, Flags, NewThreadHandle);
          v12 = v23;
          if ( v23 == -1073741789 )
            break;
          if ( v23 < 0 )
          {
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29);
            goto LABEL_21;
          }
        }
        if ( v12 < 0 )
          break;
        v21 = (PVOID *)*v21;
      }
      while ( v21 );
      v19 = v29;
      v20 = HIDWORD(v34);
      v4 = v34;
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v19);
    sub_180107D1C(v6);
    *(_QWORD *)(a1 + 1000) = v4;
    *(_QWORD *)(a1 + 1008) = SectionHandle;
    *(_DWORD *)(a1 + 992) = v20;
    *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
  }
  return 0LL;
}
