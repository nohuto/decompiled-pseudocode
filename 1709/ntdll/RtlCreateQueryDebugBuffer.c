/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x1800193D0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D9060 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 */

HANDLE *__fastcall RtlCreateQueryDebugBuffer(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  __int64 v3; // r8
  HANDLE *v4; // rax
  _OWORD *v5; // rcx
  __int128 v6; // xmm0
  __int64 v8; // [rsp+30h] [rbp-50h]
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-20h] BYREF
  HANDLE *v12; // [rsp+68h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp-8h] BYREF
  HANDLE *v15; // [rsp+B0h] [rbp+30h] BYREF
  char *v16; // [rsp+B8h] [rbp+38h] BYREF

  Handle = 0LL;
  v1 = 0x400000LL;
  v16 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  if ( a1 )
    v1 = a1;
  v2 = (v1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 <= 0xFFFFFFFF && is_mul_ok(v2, 2uLL) )
  {
    v14 = 2 * v2;
    v13 = 2 * v2;
    if ( (int)NtCreateSection(&Handle, 983071LL, 0LL, &v13, 4, 0x4000000, ((v2 * (unsigned __int128)2uLL) >> 64) & v8) >= 0
      && (int)ZwMapViewOfSection(Handle, -1LL, &v12, 0LL, 0LL, 0LL, &v14, 2, 0, 4) >= 0 )
    {
      v15 = v12;
      v10 = 208LL;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v10, 4096, 4) >= 0 )
      {
        v16 = (char *)v15 + v2;
        v11 = 208LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v16, 0LL, &v11, 4096, 4) >= 0 )
        {
          *v15 = Handle;
          v15[1] = v15;
          v15[9] = (HANDLE)208;
          v15[10] = (HANDLE)v10;
          v15[11] = (HANDLE)v2;
          v4 = v15;
          v5 = v16;
          *(_OWORD *)v16 = *(_OWORD *)v15;
          v5[1] = *((_OWORD *)v4 + 1);
          v5[2] = *((_OWORD *)v4 + 2);
          v5[3] = *((_OWORD *)v4 + 3);
          v5[4] = *((_OWORD *)v4 + 4);
          v5[5] = *((_OWORD *)v4 + 5);
          v5[6] = *((_OWORD *)v4 + 6);
          v5 += 8;
          v6 = *((_OWORD *)v4 + 7);
          v4 += 16;
          *(v5 - 1) = v6;
          *v5 = *(_OWORD *)v4;
          v5[1] = *((_OWORD *)v4 + 1);
          v5[2] = *((_OWORD *)v4 + 2);
          v5[3] = *((_OWORD *)v4 + 3);
          v5[4] = *((_OWORD *)v4 + 4);
          *((_QWORD *)v16 + 1) = v16;
          *((_QWORD *)v16 + 10) = v11;
          *(_QWORD *)v16 = 0LL;
          return v15;
        }
      }
    }
    if ( v15 )
      ZwFreeVirtualMemory(-1LL, &v15, &v10, 0x8000LL);
    if ( v16 )
      ZwFreeVirtualMemory(-1LL, &v16, &v11, 0x8000LL);
    if ( v12 )
      NtUnmapViewOfSection(-1LL, v12, v3);
    if ( Handle )
      NtClose(Handle);
  }
  return 0LL;
}
