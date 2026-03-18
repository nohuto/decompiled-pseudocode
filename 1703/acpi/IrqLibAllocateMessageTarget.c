/*
 * XREFs of IrqLibAllocateMessageTarget @ 0x1C00A5170
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C0005C20 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0005C3C (IrqLibAcquireArbiterLock.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C0026D98 (ProcessorDeleteDeviceIdtAssignment.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall IrqLibAllocateMessageTarget(
        PVOID Owner,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        unsigned int *a6,
        _BYTE *a7,
        _DWORD *a8)
{
  NTSTATUS Range; // edi
  char *PoolWithTag; // rax
  char *v14; // rbx
  unsigned int v15; // eax
  BOOL v17; // [rsp+58h] [rbp-81h]
  ULONGLONG End; // [rsp+60h] [rbp-79h] BYREF
  _QWORD v19[4]; // [rsp+68h] [rbp-71h] BYREF
  __int128 v20; // [rsp+88h] [rbp-51h] BYREF
  unsigned int v21; // [rsp+9Ch] [rbp-3Dh]
  _BYTE v22[40]; // [rsp+A8h] [rbp-31h] BYREF

  if ( KeGetCurrentIrql() )
    return 3221225659LL;
  v21 = 0;
  if ( (unsigned int)(IrqLibRealInterruptModel - 1) > 3 )
    return 3221225659LL;
  IrqLibAcquireArbiterLock(1);
  Range = RtlFindRange(RangeList, 0xFFF00000uLL, 0xFFFFFFFEuLL, 1u, 1u, 0, 0, 0LL, 0LL, &End);
  if ( Range < 0 )
    goto LABEL_11;
  v17 = a4 == 1;
  memset(v19, 0, sizeof(v19));
  BYTE1(v19[0]) = 2;
  LOWORD(v19[2]) = 4;
  BYTE2(v19[0]) = a5 != 0 ? 3 : 1;
  WORD2(v19[0]) = (a4 == 1) | 4;
  HIDWORD(v19[2]) = 2;
  WORD1(v19[2]) = *(_WORD *)(a2 + 8);
  v19[3] = *(_QWORD *)a2;
  memset(v22, 0, sizeof(v22));
  Range = ((__int64 (__fastcall *)(PVOID, _QWORD *, _QWORD, _BYTE *, int, BOOL, _DWORD, _DWORD, __int128 *))ProcessorReserveIdtEntries)(
            Owner,
            v19,
            (unsigned int)End,
            v22,
            a3,
            v17,
            0,
            0,
            &v20);
  if ( Range < 0 )
    goto LABEL_11;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x49706341u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Range = -1073741670;
    goto LABEL_11;
  }
  memset(PoolWithTag, 0, 0x78uLL);
  *(_DWORD *)v14 = 1;
  *((_DWORD *)v14 + 1) = 2;
  *((_DWORD *)v14 + 2) = 3;
  v14[26] = a3;
  *((_DWORD *)v14 + 11) = 0;
  *((_DWORD *)v14 + 12) = v17;
  *(_OWORD *)(v14 + 56) = v20;
  Range = RtlAddRange(RangeList, End, End, 0, 0x10u, v14, Owner);
  if ( Range < 0 )
  {
    ExFreePoolWithTag(v14, 0);
LABEL_11:
    if ( v21 )
      ProcessorDeleteDeviceIdtAssignment(Owner, End, v21, 0);
    goto LABEL_13;
  }
  *a7 = HalConvertDeviceIdtToIrql(v21);
  Range = 0;
  v15 = v21;
  *a8 = v21;
  *a6 = v15;
LABEL_13:
  IrqLibReleaseArbiterLock();
  return (unsigned int)Range;
}
