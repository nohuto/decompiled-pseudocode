/*
 * XREFs of PnpNotifyDriverCallback @ 0x140586518
 * Callers:
 *     PnpNotifyTargetDeviceChange @ 0x14054C0B0 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x140585D88 (PnpNotifyDeviceClassChange.c)
 *     IoRegisterPlugPlayNotification @ 0x140585FB0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyHwProfileChange @ 0x1406BFB64 (PnpNotifyHwProfileChange.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140083FA0 (MmIsSessionAddress.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     PsGetCurrentProcessSessionId @ 0x1400B08F0 (PsGetCurrentProcessSessionId.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpNotifyDriverCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall *v3)(__int64, _QWORD); // rdi
  BOOL IsSessionAddress; // eax
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v9; // r15
  LONG SpareLong; // r12d
  unsigned int CombinedApcDisable; // ebp
  int v12; // eax
  int v13; // edi
  _KPROCESS *SessionById; // rax
  _KPROCESS *v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  _WORD *v19; // rcx
  _BYTE v21[48]; // [rsp+38h] [rbp-70h] BYREF

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32);
  IsSessionAddress = MmIsSessionAddress((unsigned __int64)v3);
  if ( !IsSessionAddress || *(_QWORD *)(a1 + 24) )
  {
    CurrentIrql = 0;
    v9 = 0;
    SpareLong = 0;
    CombinedApcDisable = 0;
    if ( !IsSessionAddress
      || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0
      && *(_DWORD *)(a1 + 20) == (unsigned int)PsGetCurrentProcessSessionId() )
    {
      CurrentIrql = KeGetCurrentIrql();
      SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
      v12 = v3(a2, *(_QWORD *)(a1 + 40));
      v9 = KeGetCurrentIrql();
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      if ( a3 )
        *a3 = v12;
      v13 = 0;
    }
    else
    {
      SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(a1 + 20));
      v16 = SessionById;
      if ( !SessionById )
        return (unsigned int)-1073741823;
      v13 = MmAttachSession(SessionById, (__int64)v21);
      if ( v13 >= 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a2, *(_QWORD *)(a1 + 40));
        v9 = KeGetCurrentIrql();
        CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
        if ( a3 )
          *a3 = v17;
        v13 = MmDetachSession((__int64)v16, (__int64)v21);
      }
      ObfDereferenceObject(v16);
    }
    if ( CurrentIrql != v9 || SpareLong != CombinedApcDisable )
    {
      v18 = *(_QWORD *)(a1 + 48);
      if ( v18 )
      {
        IoAddTriageDumpDataBlock(v18, *(__int16 *)(v18 + 2));
        v19 = (_WORD *)(*(_QWORD *)(a1 + 48) + 56LL);
        if ( *v19 )
        {
          IoAddTriageDumpDataBlock((int)v19, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 56LL));
        }
      }
      KeBugCheckEx(0xCAu, 0xAuLL, *(_QWORD *)(a1 + 48), v9, CombinedApcDisable);
    }
    return (unsigned int)v13;
  }
  return 3221225485LL;
}
