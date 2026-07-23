/*
 * XREFs of RtlpMuiRegFreeRegistryInfo @ 0x18006EF00
 * Callers:
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006E920 (RtlpMuiFreeLangRegistryInfo.c)
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006EE10 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006EF00 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     sub_1800FADB0 @ 0x1800FADB0 (sub_1800FADB0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006EF00 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_1800700D8 @ 0x1800700D8 (sub_1800700D8.c)
 */

__int64 __fastcall RtlpMuiRegFreeRegistryInfo(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  __int64 v5; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // r8
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // r8
  void *v17; // r8

  v2 = 0;
  if ( a1 && a2 )
  {
    v4 = 4095;
    if ( (a2 & 0x400) == 0 )
      v4 = a2;
    if ( (v4 & 1) != 0 )
    {
      v10 = *(void **)(a1 + 24);
      if ( v10 )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
        *(_QWORD *)(a1 + 24) = 0LL;
      }
      *(_DWORD *)a1 &= ~1u;
    }
    if ( (v4 & 2) != 0 )
    {
      v11 = *(void **)(a1 + 32);
      if ( v11 )
      {
        if ( (*(_BYTE *)a1 & 2) != 0 )
          sub_1800700D8(v11);
        *(_QWORD *)(a1 + 32) = 0LL;
      }
      *(_DWORD *)a1 &= ~2u;
    }
    if ( (v4 & 4) != 0 )
    {
      v12 = *(void **)(a1 + 40);
      if ( v12 )
      {
        if ( (*(_BYTE *)a1 & 4) != 0 )
          sub_1800700D8(v12);
        *(_QWORD *)(a1 + 40) = 0LL;
      }
      *(_DWORD *)a1 &= ~4u;
    }
    if ( (v4 & 8) != 0 )
    {
      v7 = *(void **)(a1 + 48);
      if ( v7 )
      {
        if ( (*(_BYTE *)a1 & 8) != 0 )
          sub_1800700D8(v7);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      *(_DWORD *)a1 &= ~8u;
    }
    if ( (v4 & 0x10) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 56);
      if ( v8 )
      {
        if ( (*(_BYTE *)a1 & 0x10) != 0 )
        {
          *(_DWORD *)(v8 + 40) &= ~0x40u;
          sub_180032CEC(*(PVOID *)(a1 + 56));
        }
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x10u;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        if ( (*(_BYTE *)a1 & 0x20) != 0 )
        {
          *(_DWORD *)(v9 + 40) &= ~0x40u;
          sub_180032CEC(*(PVOID *)(a1 + 64));
        }
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x20u;
    }
    if ( (v4 & 0x40) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 88);
      if ( v13 )
      {
        if ( (*(_BYTE *)a1 & 0x40) != 0 )
        {
          *(_DWORD *)(v13 + 40) &= ~0x40u;
          sub_180032CEC(*(PVOID *)(a1 + 88));
        }
        *(_QWORD *)(a1 + 88) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x40u;
    }
    if ( (v4 & 0x80u) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 80);
      if ( v14 )
      {
        if ( *(char *)a1 < 0 )
        {
          *(_DWORD *)(v14 + 40) &= ~0x40u;
          sub_180032CEC(*(PVOID *)(a1 + 80));
        }
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x80u;
    }
    if ( (v4 & 0x200) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 96);
      if ( v15 )
      {
        if ( (*(_DWORD *)a1 & 0x200) != 0 )
        {
          *(_DWORD *)(v15 + 40) &= ~0x40u;
          sub_180032CEC(*(PVOID *)(a1 + 96));
        }
        *(_QWORD *)(a1 + 96) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x200u;
    }
    if ( (v4 & 0x800) != 0 )
    {
      v16 = *(void **)(a1 + 136);
      if ( v16 )
      {
        if ( (*(_DWORD *)a1 & 0x800) != 0 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x800u;
    }
    if ( (v4 & 0xFFF) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 104);
      if ( v5 )
      {
        RtlpMuiRegFreeRegistryInfo(v5, v4);
        v17 = *(void **)(a1 + 104);
        if ( v17 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
