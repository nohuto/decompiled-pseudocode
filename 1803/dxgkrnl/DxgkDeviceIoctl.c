/*
 * XREFs of DxgkDeviceIoctl @ 0x1C00309C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?CheckTokenForVMGroupMembership@@YAJXZ @ 0x1C0030590 (-CheckTokenForVMGroupMembership@@YAJXZ.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C00471D0 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C01B7558 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C01E6BC0 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DxgkDeviceIoctl(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v4; // r15d
  void **UserBuffer; // r12
  __int64 LowPart; // rbx
  ULONG Length; // r14d
  __int64 v9; // rax
  NTSTATUS Handle; // ebx
  __int64 v11; // rdi
  DxgkCompositionObject *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // r8
  unsigned __int64 Current; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE v29[32]; // [rsp+30h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  UserBuffer = (void **)a2->UserBuffer;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( (_DWORD)LowPart != 2310147 )
  {
    v9 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v9 + 24) = LowPart;
    Handle = -1073741808;
    *(_QWORD *)(v9 + 32) = -1073741808LL;
    WdLogEvent5_WdWarning(v9);
    goto LABEL_25;
  }
  v11 = 0LL;
  v12 = 0LL;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v16 + 24) = 997LL;
    WdLogEvent5_WdWarning(v16);
    Handle = -1073741637;
    goto LABEL_25;
  }
  if ( Length == 8 )
  {
    Handle = CheckTokenForVMGroupMembership();
    if ( Handle >= 0 )
    {
      Current = (unsigned __int64)DXGPROCESS::GetCurrent();
      if ( !Current )
      {
        Handle = -1073741808;
        v25 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v25 + 24) = 1023LL;
        WdLogEvent5_WdError(v25);
        goto LABEL_25;
      }
      LOBYTE(v20) = *(_BYTE *)(Current + 323);
      if ( (v20 & 8) != 0 )
      {
        v11 = *(_QWORD *)(Current + 456);
      }
      else
      {
        LOBYTE(v20) = -(v20 & 4);
        v11 = Current & -(__int64)((_BYTE)v20 != 0);
      }
      if ( !v11 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v26 + 24) = 1033LL;
        WdLogEvent5_WdAssertion(v26);
        Handle = -1073741811;
        goto LABEL_25;
      }
      goto LABEL_8;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = 1004LL;
    WdLogEvent5_WdWarning(v17);
    Handle = -1073741306;
  }
  v19 = WdLogNewEntry5_WdAssertion(v18);
  *(_QWORD *)(v19 + 24) = Handle;
  WdLogEvent5_WdAssertion(v19);
LABEL_8:
  if ( Handle < 0 )
    goto LABEL_22;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v29,
    (struct _KTHREAD **)(*(_QWORD *)(v11 + 456) + 64LL));
  v12 = DXGVIRTUALMACHINE::ReferenceVailObject(*(DXGVIRTUALMACHINE **)(v11 + 456));
  if ( !v12 )
  {
    Handle = -1073741275;
    v22 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v22 + 24) = -1073741275LL;
    *(_QWORD *)(v22 + 32) = 1050LL;
    WdLogEvent5_WdAssertion(v22);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  if ( Handle < 0 || (Handle = DxgkCompositionObject::CreateHandle(v12, 0xC0060000, v23, 1, UserBuffer), Handle < 0) )
  {
LABEL_22:
    v27 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v27 + 24) = Handle;
    *(_QWORD *)(v27 + 32) = 1068LL;
    WdLogEvent5_WdAssertion(v27);
  }
  else
  {
    v4 = 8;
  }
  if ( v12 )
    ObfDereferenceObject(v12);
LABEL_25:
  a2->IoStatus.Information = v4;
  a2->IoStatus.Status = Handle;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Handle;
}
