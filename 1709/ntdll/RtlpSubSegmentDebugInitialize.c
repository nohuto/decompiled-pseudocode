/*
 * XREFs of RtlpSubSegmentDebugInitialize @ 0x180106484
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x18005E860 (RtlpSubSegmentInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlInitializeSListHead @ 0x180076DA0 (RtlInitializeSListHead.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x180101C74 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpInitializeLfhBitmapData @ 0x18010268C (RtlpInitializeLfhBitmapData.c)
 *     RtlpGetFirstBlockAddress @ 0x18010627C (RtlpGetFirstBlockAddress.c)
 */

__int64 __fastcall RtlpSubSegmentDebugInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  signed __int32 v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  unsigned int v16; // edx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  int v19; // ecx
  ULONG *OldProtect; // rax
  __int64 v21; // rcx
  ULONG_PTR *p_RegionSize; // r8
  PVOID *p_BaseAddress; // rdx
  signed __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rcx
  signed __int32 v28; // [rsp+30h] [rbp-40h]
  signed __int64 v29; // [rsp+30h] [rbp-40h]
  ULONG v30; // [rsp+38h] [rbp-38h] BYREF
  char v31; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-30h]
  __int64 v33; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-10h] BYREF
  int v37; // [rsp+B8h] [rbp+48h]
  unsigned int v38; // [rsp+B8h] [rbp+48h]

  if ( (a4 & 3) == 0 )
    return 0LL;
  v11 = *(_DWORD *)(a2 + 32);
  v28 = v11;
  v12 = *(unsigned __int8 *)(a7 + 2);
  if ( *(_BYTE *)(a2 + 43) )
    v13 = *(_QWORD *)(a1 + 8 * v12 + 2224) - 192LL + 192LL * *(unsigned __int8 *)(a2 + 43);
  else
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1192);
  *(_QWORD *)a3 = a2;
  v14 = (a3 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  v32 = ((a5 + 4119) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v15 = (((a3 + a6) & 0xFFFFFFFFFFFFF000uLL) - v14) / v32;
  HIWORD(v37) = ((a5 + 4119) & 0xF000) + 4096;
  *(_WORD *)(a2 + 36) = (unsigned __int64)(a5 + 16) >> 4;
  *(_WORD *)(a2 + 40) = v15;
  *(_QWORD *)a2 = v13;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a7 + 2);
  *(_WORD *)(a2 + 38) = a4;
  LOWORD(v37) = RtlpGetFirstBlockAddress(a2, v14) - a3;
  *(_DWORD *)(a3 + 24) = v37 ^ RtlpLFHKey ^ a3 ^ a1;
  *(_QWORD *)(a3 + 32) = (unsigned int)v15;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  RtlpInitializeLfhBitmapData((unsigned __int64 *)(a3 + 32));
  v16 = 0;
  v17 = a3 + (unsigned __int16)v37;
  v38 = 0;
  if ( !(_DWORD)v15 )
    goto LABEL_15;
  v18 = v32;
  do
  {
    v19 = *(_DWORD *)(a1 + 24) ^ RtlpLFHKey ^ (v17 >> 4) ^ (((_DWORD)v17 - (_DWORD)a3) << 12);
    *(_DWORD *)(v17 + 12) &= 0xFF0000FF;
    *(_DWORD *)(v17 + 12) |= (unsigned __int16)v16 << 8;
    *(_BYTE *)(v17 + 15) = 0x80;
    *(_DWORD *)(v17 + 8) = v19;
    if ( (*(_BYTE *)(a2 + 38) & 1) != 0 )
    {
      OldProtect = &v30;
      v21 = *(unsigned __int16 *)(a2 + 36) + 1LL;
      v33 = 4096LL;
      p_RegionSize = (ULONG_PTR *)&v33;
      p_BaseAddress = (PVOID *)&v34;
      v34 = v17 + 16 * v21;
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 38) & 2) == 0 )
        goto LABEL_13;
      RegionSize = 4096LL;
      BaseAddress = (PVOID)(v17 - 4096);
      p_RegionSize = &RegionSize;
      OldProtect = (ULONG *)&v31;
      p_BaseAddress = &BaseAddress;
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, p_BaseAddress, p_RegionSize, 1u, OldProtect);
    v16 = v38;
LABEL_13:
    ++v16;
    v17 += v18;
    v38 = v16;
  }
  while ( v16 < (unsigned int)v15 );
  v11 = v28;
LABEL_15:
  *(_QWORD *)(a2 + 8) = a3;
  RtlInitializeSListHead((PSLIST_HEADER)(a2 + 16));
  do
  {
    v24 = *(_QWORD *)(v13 + 160);
    if ( (int)v15 <= 0 )
      v25 = HIDWORD(v24) - 1;
    else
      v25 = HIDWORD(v24) + 1;
    HIDWORD(v29) = v25;
    LODWORD(v29) = v24 + v15;
  }
  while ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 160), v29, v24) );
  v26 = *(_QWORD *)v13;
  *(_DWORD *)(v13 + 168) = ++*(_DWORD *)(v26 + 32);
  *(_DWORD *)(a2 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), (unsigned __int16)v15, v11);
  if ( RtlGetCurrentServiceSessionId() )
    v27 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v27 = 2147353472LL;
  if ( *(_BYTE *)v27 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentInitialize(
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a2 + 36),
        *(unsigned __int16 *)(a2 + 40),
        *(unsigned __int8 *)(a2 + 43));
  }
  return 1LL;
}
