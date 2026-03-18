/*
 * XREFs of MiCreateHardwareEnclave @ 0x140751D24
 * Callers:
 *     MiCreateEnclave @ 0x140751C18 (MiCreateEnclave.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetVmPartition @ 0x1400D2E10 (MiGetVmPartition.c)
 *     MiGetEnclavePage @ 0x140264534 (MiGetEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x1402646F8 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x14026482C (MiReserveEnclavePages.c)
 *     KeCreateEnclave @ 0x140741E8C (KeCreateEnclave.c)
 */

__int64 __fastcall MiCreateHardwareEnclave(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _KPROCESS *Process; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  _QWORD *VmPartition; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  _QWORD *v13; // rdi
  __int64 result; // rax
  __int64 EnclavePage; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int16 v23; // cx
  bool v24; // cl
  __int16 v25; // r9
  int v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF

  v27 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v9 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF;
  VmPartition = (_QWORD *)MiGetVmPartition((__int64)&Process[1].IdealNode[12]);
  v13 = VmPartition;
  if ( !v12 || (result = MiReserveEnclavePages(a2, VmPartition, (v12 >> 12) + ((v12 & v11) != 0)), (int)result >= 0) )
  {
    EnclavePage = MiGetEnclavePage(v13, 0);
    v16 = EnclavePage;
    if ( EnclavePage == -1 )
    {
      return 3221225495LL;
    }
    else
    {
      v17 = *(_QWORD *)(a2 + 80);
      MiInitializeEnclavePfn(EnclavePage, v17, 4);
      *(_QWORD *)v17 = MiMakeValidPte(v17, v16, 2684354564LL, v18);
      if ( MiPteInShadowRange(v17) )
        MiWritePteShadow(v20, v19, v21);
      v22 = Process[1].ActiveProcessors.Bitmap[7];
      v24 = 0;
      if ( v22 )
      {
        v23 = *(_WORD *)(v22 + 8);
        if ( v23 == 332 || v23 == 452 )
          v24 = 1;
      }
      v25 = ((*(_WORD *)(a2 + 72) & 1) << 8) | 1;
      if ( v24 )
        v25 = (*(_WORD *)(a2 + 72) & 1) << 8;
      result = KeCreateEnclave((__int64)(v17 << 25) >> 16, v8, v9 - v8 + 1, a4, v26, v25, (int *)&v27, a5);
      if ( (int)result >= 0 )
      {
        if ( (v27 & 2) != 0 )
        {
          *(_DWORD *)(a2 + 64) |= 4u;
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&Process[1].IdealGlobalNode + 232LL));
        }
        return 0LL;
      }
    }
  }
  return result;
}
