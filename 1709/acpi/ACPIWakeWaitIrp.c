/*
 * XREFs of ACPIWakeWaitIrp @ 0x1C000F560
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C000F7D8 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDispatchForwardOrFailPowerIrp @ 0x1C002AF14 (ACPIDispatchForwardOrFailPowerIrp.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qddqss @ 0x1C005AF84 (WPP_RECORDER_SF_qddqss.c)
 */

__int64 __fastcall ACPIWakeWaitIrp(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 result; // rax
  const char *v8; // rdx
  const char *v9; // rcx
  __int64 v10; // r10
  void *v11; // rdx
  void *v12; // r8
  int v13; // r9d
  __int64 v14; // r9
  _BYTE v15[16]; // [rsp+60h] [rbp-18h] BYREF
  char v16; // [rsp+90h] [rbp+18h] BYREF
  char v17; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  v6 = DeviceExtension[1];
  if ( (v6 & 0x10000) == 0 )
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  if ( (DeviceExtension[119] & 0x100000000LL) != 0 && !DeviceExtension[79] )
  {
    v8 = (const char *)&unk_1C0067B08;
    v9 = (const char *)&unk_1C0067B08;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)DeviceExtension[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v9 = (const char *)DeviceExtension[71];
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x1Au,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      (char)a2,
      (char)DeviceExtension,
      v8,
      v9);
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  }
  if ( (v6 & 0x102000000LL) != 0 && (v6 & 0x20) == 0 )
  {
    (*((void (__fastcall **)(_QWORD, char *, _BYTE *, char *))PciPmeInterface + 4))(
      DeviceExtension[92],
      &v16,
      v15,
      &v17);
    if ( v16 )
    {
      if ( (v5[1] & 0x800000000000000LL) == 0 )
        return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
    }
  }
  if ( *((_DWORD *)v5 + 122) < (signed int)a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
  {
    v10 = v5[1];
    v11 = &unk_1C0067B08;
    v12 = &unk_1C0067B08;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = (void *)v5[70];
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = (void *)v5[71];
    }
    v13 = 27;
LABEL_18:
    WPP_RECORDER_SF_qddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v11, (_DWORD)v12, v13);
    a2->IoStatus.Status = -1073741436;
    IofCompleteRequest(a2, 0);
    return 3221225860LL;
  }
  LODWORD(v12) = *((_DWORD *)v5 + 84);
  if ( *((_DWORD *)v5 + 123) < (int)v12 )
  {
    v14 = v5[1];
    v11 = &unk_1C0067B08;
    if ( (v14 & 0x200000000000LL) != 0 )
      v11 = (void *)v5[70];
    v13 = 28;
    goto LABEL_18;
  }
  _InterlockedIncrement((volatile signed __int32 *)v5 + 170);
  result = ACPIDeviceIrpWaitWakeRequest(a1, a2);
  if ( (_DWORD)result == -1073741802 )
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    return 259LL;
  }
  return result;
}
