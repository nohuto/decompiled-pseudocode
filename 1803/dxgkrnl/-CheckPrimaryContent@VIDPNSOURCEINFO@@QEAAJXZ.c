/*
 * XREFs of ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C01EA3E8
 * Callers:
 *     ?CheckDisplayState@DISPLAYSTATECHECKER@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01EA370 (-CheckDisplayState@DISPLAYSTATECHECKER@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C00018B8 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0019AB4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00D1F10 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01EA670 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContent(VIDPNSOURCEINFO *this)
{
  struct _EX_RUNDOWN_REF *DisplayedPrimary; // rax
  __int64 v4; // rcx
  struct _EX_RUNDOWN_REF *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rdx
  unsigned int v9; // ebx
  ULONG_PTR Count; // rsi
  int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rax
  ULONG_PTR v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 11) )
    return 0LL;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v16,
    *(struct DXGDEVICE **)this);
  DisplayedPrimary = (struct _EX_RUNDOWN_REF *)DXGDEVICE::GetDisplayedPrimary(
                                                 *(DXGDEVICE **)this,
                                                 *((_DWORD *)this + 2));
  v5 = DisplayedPrimary;
  if ( DisplayedPrimary )
  {
    DxgkReferenceDxgAllocation(DisplayedPrimary);
    Count = v5[1].Count;
    v15 = 0;
    v14 = Count;
    if ( Count != *(_QWORD *)this )
    {
      v11 = 0;
      while ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v14) )
      {
        Interval.QuadPart = -160000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        if ( (unsigned int)++v11 >= 0xA )
        {
          v9 = -2147483631;
          v13 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v13 + 24) = Count;
          WdLogEvent5_WdError(v13);
          goto LABEL_13;
        }
      }
    }
    v9 = VIDPNSOURCEINFO::CheckPrimaryContentWorker(this, (struct DXGALLOCATION *)v5);
LABEL_13:
    ExReleaseRundownProtection(v5 + 11);
    if ( v14 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v14);
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    v7 = 2LL;
    *(_QWORD *)(v6 + 24) = *((unsigned int *)this + 2);
    v8 = (_QWORD *)(v6 + 32);
    do
    {
      *v8++ = *((int *)this + 4);
      --v7;
    }
    while ( v7 );
    WdLogEvent5_WdError(v6);
    v9 = -1071775482;
  }
  if ( v16[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
  return v9;
}
