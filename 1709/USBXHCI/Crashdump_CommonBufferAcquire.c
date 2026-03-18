/*
 * XREFs of Crashdump_CommonBufferAcquire @ 0x1C0038F94
 * Callers:
 *     Crashdump_UcxEvtGetDumpData @ 0x1C003A040 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x1C003B0E0 (Crashdump_EventRing_InitializeForDump.c)
 *     Crashdump_Endpoint_Initialize @ 0x1C003BC48 (Crashdump_Endpoint_Initialize.c)
 *     Crashdump_UsbDevice_Initialize @ 0x1C003D0DC (Crashdump_UsbDevice_Initialize.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C000F6FC (CommonBuffer_AcquireBuffer.c)
 */

__int64 __fastcall Crashdump_CommonBufferAcquire(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v4 = (a2 + 63) & 0xFFFFFFC0;
  if ( v4 <= 0x1000 )
  {
    v6 = 0;
    if ( !*(_DWORD *)(a1 + 516)
      || v4 > ((4096 - (*(_DWORD *)(a1 + 520) & 0xFFF)) & (unsigned int)-((*(_DWORD *)(a1 + 520) & 0xFFF) != 0)) )
    {
      v7 = (_QWORD *)CommonBuffer_AcquireBuffer(*(PVOID *)(a1 + 488), 4096, a1, 829451588);
      if ( !v7 )
        return (unsigned int)-1073741670;
      v8 = (_QWORD *)(a1 + 496);
      v9 = *(_QWORD *)(a1 + 496);
      if ( *(_QWORD *)(v9 + 8) != a1 + 496 )
        __fastfail(3u);
      *v7 = v9;
      v7[1] = v8;
      *(_QWORD *)(v9 + 8) = v7;
      *v8 = v7;
      ++*(_DWORD *)(a1 + 512);
      *(_DWORD *)(a1 + 520) = 0;
    }
    v10 = *(_QWORD *)(a1 + 496);
    *(_DWORD *)(a3 + 16) = v4;
    v11 = *(_QWORD *)(v10 + 16);
    *(_QWORD *)(a3 + 8) = v11;
    *(_QWORD *)(a3 + 8) = v11 + *(unsigned int *)(a1 + 520);
    v12 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)a3 = v12;
    *(_QWORD *)a3 = v12 + *(unsigned int *)(a1 + 520);
    *(_DWORD *)(a1 + 516) += v4;
    *(_DWORD *)(a1 + 520) += v4;
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: CommonBuffer: %4u (0x%04X) bytes acquired, virtual: 0x%p, logical: 0x%I64X\n",
      v4,
      v4,
      *(const void **)(a3 + 8),
      *(_QWORD *)a3);
    return v6;
  }
  DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_CommonBufferAcquire: Required Size: %4u\n", v4);
  return (unsigned int)-1073741670;
}
