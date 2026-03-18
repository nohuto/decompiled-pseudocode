/*
 * XREFs of NVMeSetHostMemoryBuffer @ 0x1C000F970
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C0005174 (NVMeControllerPowerDown.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C00069A4 (NVMeInitHostMemoryBuffer.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C0006C10 (NVMeFreeHostMemoryBuffer.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memmove @ 0x1C0014040 (memmove.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeSetHostMemoryBuffer(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned int a4,
        void *Src,
        size_t Size)
{
  int v6; // edi
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r8

  v6 = a3;
  v8 = a2;
  *(_BYTE *)(a1 + 603) = 0;
  memset(*(void **)(a1 + 688), 0, 0x10A0uLL);
  v10 = *(_QWORD *)(a1 + 688);
  *(_QWORD *)(a1 + 656) = v10;
  *(_DWORD *)(a1 + 592) = 1;
  *(_BYTE *)(v10 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 688) + 4253LL) &= ~2u;
  SrbAssignQueueId(a1, a1 + 600);
  *(_BYTE *)(*(_QWORD *)(a1 + 688) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 688) + 4136LL) = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 688) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 688) + 4140LL) ^ v8) & 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 688) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 688) + 4140LL) ^ (2 * v6)) & 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 688) + 4144LL) = a4
                                              / (1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 120) + 20LL) >> 7) & 0xF) + 12));
  memmove(*(void **)(a1 + 1208), Src, (unsigned int)Size);
  v11 = HIDWORD(*(_QWORD *)(a1 + 1216));
  *(_DWORD *)(*(_QWORD *)(a1 + 688) + 4148LL) = *(_QWORD *)(a1 + 1216) & 0xFFFFFFF0;
  *(_DWORD *)(*(_QWORD *)(a1 + 688) + 4152LL) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 688) + 4156LL) = (unsigned int)Size >> 4;
  ProcessCommand(a1, a1 + 600);
  LOBYTE(v12) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 600, v12, 10000LL);
  return *(_BYTE *)(a1 + 603) != 1 ? 0xC1000001 : 0;
}
