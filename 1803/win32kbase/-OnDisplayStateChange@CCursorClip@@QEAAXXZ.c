/*
 * XREFs of ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0055B4C
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0053A58 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z @ 0x1C0131BB4 (-BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C0131C18 (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C00558B0 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0055C94 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall CCursorClip::OnDisplayStateChange(CCursorClip *this)
{
  CCursorClip *v1; // rdi
  struct tagRECT v2; // xmm0
  struct tagRECT v3; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  char v6; // [rsp+40h] [rbp-18h]

  v1 = gpCursorClip;
  RIMLockExclusive((__int64)gpCursorClip + 32);
  *(_QWORD *)&v3.left = 0LL;
  *(_QWORD *)&v3.right = 0LL;
  *((_OWORD *)v1 + 3) = 0u;
  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v4);
  v2 = *(struct tagRECT *)&gpInputConfig[4].Next[3].Next;
  *(struct tagRECT *)v1 = v2;
  v3 = v2;
  CCursorClip::UpdateClipRect(v1, &v3);
  if ( !v6 )
  {
    ExReleasePushLockSharedEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_QWORD *)v1 + 5) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 32, 0LL);
  KeLeaveCriticalRegion();
}
