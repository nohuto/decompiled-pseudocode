/*
 * XREFs of Crashdump_EventRing_PrepareForDump @ 0x1C0039A38
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1C0037D08 (Crashdump_InitializeWithControllerReset.c)
 * Callees:
 *     memset @ 0x1C0002D40 (memset.c)
 *     Crashdump_EventRing_UpdateDequeuePointer @ 0x1C0039C34 (Crashdump_EventRing_UpdateDequeuePointer.c)
 */

ULONG __fastcall Crashdump_EventRing_PrepareForDump(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  unsigned int v7; // eax
  size_t v8; // r8
  void *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v15; // [rsp+20h] [rbp-18h]

  v1 = a1 + 112;
  *(_QWORD *)(a1 + 120) = a1 + 112;
  *(_QWORD *)(a1 + 112) = a1 + 112;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 72) = v3;
  *(_QWORD *)(v4 + 16) = v3;
  *(_QWORD *)(*(_QWORD *)(a1 + 104) + 24LL) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(*(_QWORD *)(a1 + 104) + 40LL) = *(_DWORD *)(a1 + 64);
  v5 = *(_QWORD **)(a1 + 120);
  v6 = *(_QWORD **)(a1 + 104);
  if ( *v5 != v1 )
    __fastfail(3u);
  v6[1] = v5;
  *v6 = v1;
  *v5 = v6;
  *(_QWORD *)(v1 + 8) = v6;
  v7 = *(_DWORD *)(a1 + 64);
  v8 = *(unsigned int *)(a1 + 40);
  v9 = *(void **)(a1 + 32);
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 84) = v7 >> 4;
  *(_DWORD *)(a1 + 88) = 1;
  *(_DWORD *)(a1 + 80) = 1;
  memset(v9, 0, v8);
  memset(*(void **)(a1 + 56), 0, *(unsigned int *)(a1 + 64));
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 1;
  _InterlockedOr(v14, 0);
  Crashdump_EventRing_UpdateDequeuePointer(a1);
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)v10 = *(_QWORD *)(a1 + 48);
  *(_WORD *)(v10 + 8) = *(_WORD *)(a1 + 84);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 16);
  v15 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( (v15 & 1) != 0 )
  {
    *(_DWORD *)(v12 + 16) = v11;
    _InterlockedOr(v14, 0);
    *(_DWORD *)(v12 + 20) = HIDWORD(v11);
  }
  else
  {
    *(_QWORD *)(v12 + 16) = v11;
  }
  _InterlockedOr(v14, 0);
  return DbgPrintEx(0x93u, 3u, "XHCIDUMP: Installed new Event Ring\n");
}
