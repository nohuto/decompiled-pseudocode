/*
 * XREFs of GetMouseHitTestContext @ 0x1C0017B34
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C0013170 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 * Callees:
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C0017908 (--0CLockedOutputConfig@@QEAA@XZ.c)
 */

void __fastcall GetMouseHitTestContext(struct _SINGLE_LIST_ENTRY **a1, struct CInpPushLock *a2)
{
  bool v3; // zf
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+30h] [rbp-18h]

  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v4, a2);
  v3 = v6 == 0;
  *a1 = gpInputConfig[4].Next->Next;
  if ( v3 )
  {
    ExReleasePushLockSharedEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
