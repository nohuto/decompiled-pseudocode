/*
 * XREFs of VfSuspectDriversGetVerifierInformation @ 0x14082A7B0
 * Callers:
 *     VfGetVerifierInformation @ 0x140837924 (VfGetVerifierInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     VfAvlCleanupLockContext @ 0x140161524 (VfAvlCleanupLockContext.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     VfAvlInitializeLockContext @ 0x1402AB23C (VfAvlInitializeLockContext.c)
 *     VfDriverLock @ 0x14080F570 (VfDriverLock.c)
 *     VfTargetDriversGetZeroCounters @ 0x140821D08 (VfTargetDriversGetZeroCounters.c)
 *     VfAvlEnumerateNodes @ 0x14082B250 (VfAvlEnumerateNodes.c)
 */

__int64 __fastcall VfSuspectDriversGetVerifierInformation(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // r14d
  __int64 *v9; // r15
  __int64 *v10; // r13
  int v11; // ebx
  int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  void *v16; // rcx
  _BYTE v18[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+40h] [rbp-48h]

  v6 = a1;
  *a3 = 0;
  v7 = 0;
  v8 = 0;
  VfDriverLock();
  v9 = (__int64 *)VfSuspectDriversList;
  if ( (__int64 *)VfSuspectDriversList != &VfSuspectDriversList )
  {
    while ( 1 )
    {
      v10 = v9;
      v9 = (__int64 *)*v9;
      v6 += v7;
      v11 = *((unsigned __int16 *)v10 + 12);
      v7 = (v11 + (a5 != 0 ? 265 : 137)) & 0xFFFFFFF8;
      *a3 += v7;
      if ( *a3 > a2 )
        break;
      *(_DWORD *)v6 = v7;
      *(_DWORD *)(v6 + 4) = MmVerifierData;
      *(_DWORD *)(v6 + 24) = dword_1403AD164;
      *(_DWORD *)(v6 + 28) = dword_1403AD168;
      *(_DWORD *)(v6 + 76) = dword_1403AD198;
      *(_DWORD *)(v6 + 32) = dword_1403AD16C;
      *(_DWORD *)(v6 + 36) = dword_1403AD170;
      *(_DWORD *)(v6 + 40) = dword_1403AD174;
      *(_DWORD *)(v6 + 44) = dword_1403AD178;
      *(_DWORD *)(v6 + 48) = dword_1403AD17C;
      *(_DWORD *)(v6 + 52) = dword_1403AD180;
      *(_DWORD *)(v6 + 56) = dword_1403AD184;
      *(_DWORD *)(v6 + 60) = dword_1403AD188;
      *(_DWORD *)(v6 + 64) = dword_1403AD18C;
      *(_DWORD *)(v6 + 68) = *((_DWORD *)v10 + 4);
      *(_DWORD *)(v6 + 72) = *((_DWORD *)v10 + 5);
      VfTargetDriversGetZeroCounters((_QWORD *)v6, a5);
      if ( v14 > v13 )
      {
        v20 = v12;
        v19[0] = v10;
        v19[1] = v6;
        VfAvlInitializeLockContext((__int64)v18, 1);
        VfAvlEnumerateNodes(v15, v18, ViTargetAddCountersCallback, v19);
        VfAvlCleanupLockContext((__int64)v18);
      }
      *(_WORD *)(v6 + 8) = v11;
      *(_WORD *)(v6 + 10) = v11 + 2;
      v16 = (void *)(v6 + (a5 != 0 ? 256 : 128));
      *(_QWORD *)(v6 + 16) = v16;
      memmove(v16, (const void *)v10[4], (unsigned __int16)v11);
      *(_WORD *)(*(_QWORD *)(v6 + 16) + 2 * ((unsigned __int64)(unsigned __int16)v11 >> 1)) = 0;
      *(_QWORD *)(v6 + 16) += a4 - a1;
      if ( v9 == &VfSuspectDriversList )
        goto LABEL_8;
    }
    v8 = -1073741820;
  }
LABEL_8:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v8 >= 0 )
    *(_DWORD *)v6 = 0;
  return (unsigned int)v8;
}
