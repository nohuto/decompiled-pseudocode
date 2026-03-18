/*
 * XREFs of IrqLibAllocateMessageTarget @ 0x1C00A7C20
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C000E3E4 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C000E408 (IrqLibAcquireArbiterLock.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C000EF94 (ProcessorDeleteDeviceIdtAssignment.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
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
  char *UserData; // rbx
  unsigned int v14; // eax
  ULONGLONG End; // [rsp+60h] [rbp-79h] BYREF
  _QWORD v18[4]; // [rsp+68h] [rbp-71h] BYREF
  __int128 v19; // [rsp+88h] [rbp-51h] BYREF
  unsigned int v20; // [rsp+9Ch] [rbp-3Dh]
  _BYTE v21[40]; // [rsp+A8h] [rbp-31h] BYREF

  if ( KeGetCurrentIrql() )
    return 3221225659LL;
  v20 = 0;
  if ( (unsigned int)(IrqLibRealInterruptModel - 1) > 3 )
    return 3221225659LL;
  IrqLibAcquireArbiterLock(1);
  Range = RtlFindRange(RangeList, 0xFFF00000uLL, 0xFFFFFFFEuLL, 1u, 1u, 0, 0, 0LL, 0LL, &End);
  if ( Range < 0 )
    goto LABEL_11;
  memset(v18, 0, sizeof(v18));
  BYTE1(v18[0]) = 2;
  BYTE2(v18[0]) = a5 != 0 ? 3 : 1;
  HIDWORD(v18[2]) = 2;
  WORD2(v18[0]) = 5 - (a4 != 1);
  LOWORD(v18[2]) = 4;
  WORD1(v18[2]) = *(_WORD *)(a2 + 8);
  v18[3] = *(_QWORD *)a2;
  memset(v21, 0, sizeof(v21));
  Range = ((__int64 (__fastcall *)(PVOID, _QWORD *, _QWORD, _BYTE *, int, bool, _DWORD, _DWORD, __int128 *))ProcessorReserveIdtEntries)(
            Owner,
            v18,
            (unsigned int)End,
            v21,
            a3,
            a4 == 1,
            0,
            0,
            &v19);
  if ( Range < 0 )
    goto LABEL_11;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x49706341u);
  UserData = PoolWithTag;
  if ( !PoolWithTag )
  {
    Range = -1073741670;
    goto LABEL_11;
  }
  memset(PoolWithTag, 0, 0x78uLL);
  *(_DWORD *)UserData = 1;
  *((_DWORD *)UserData + 1) = 2;
  *((_DWORD *)UserData + 2) = 3;
  UserData[26] = a3;
  *((_DWORD *)UserData + 11) = 0;
  *((_DWORD *)UserData + 12) = a4 == 1;
  *(_OWORD *)(UserData + 56) = v19;
  Range = RtlAddRange(RangeList, End, End, 0, 0x10u, UserData, Owner);
  if ( Range < 0 )
  {
    ExFreePoolWithTag(UserData, 0);
LABEL_11:
    if ( v20 )
      ProcessorDeleteDeviceIdtAssignment(Owner, End, v20, 0);
    goto LABEL_13;
  }
  *a7 = HalConvertDeviceIdtToIrql(v20);
  Range = 0;
  v14 = v20;
  *a8 = v20;
  *a6 = v14;
LABEL_13:
  IrqLibReleaseArbiterLock();
  return (unsigned int)Range;
}
