/*
 * XREFs of ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006BB6C
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0001988 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C006CBB0 (ndisOidPostIovDeleteNicSwitch.c)
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C0001A2C (ndisIovFindSwitchBySwitchId.c)
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C006C0FC (ndisIovFindVPortByVPortIdInternal.c)
 */

void __fastcall ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(__int64 a1, unsigned int a2)
{
  __int64 *SwitchBySwitchId; // rax
  __int64 *v4; // rsi
  _DWORD *v5; // rbp
  _QWORD *VPortByVPortIdInternal; // rax
  KIRQL v7; // r10
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdx

  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(a1, a2);
  v4 = SwitchBySwitchId;
  if ( SwitchBySwitchId )
  {
    v5 = (_DWORD *)SwitchBySwitchId[5];
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2884955;
    VPortByVPortIdInternal = (_QWORD *)ndisIovFindVPortByVPortIdInternal(a1, 0LL);
    v8 = VPortByVPortIdInternal;
    v9 = *VPortByVPortIdInternal;
    if ( *(_QWORD **)(*VPortByVPortIdInternal + 8LL) != VPortByVPortIdInternal
      || (v10 = (_QWORD *)VPortByVPortIdInternal[1], (_QWORD *)*v10 != v8) )
    {
      __fastfail(3u);
    }
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    --*(_DWORD *)(a1 + 4768);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
    *(_QWORD *)(a1 + 4712) = 0LL;
    v11 = v8[4];
    if ( *(_QWORD **)(v11 + 8) != v8 + 4 || (v12 = (_QWORD *)v8[5], (_QWORD *)*v12 != v8 + 4) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    --*((_DWORD *)v4 + 12);
    v13 = v8[6];
    if ( *(_QWORD **)(v13 + 8) != v8 + 6 || (v14 = (_QWORD *)v8[7], (_QWORD *)*v14 != v8 + 6) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    --v5[7];
    ExFreePoolWithTag(v8, 0);
    ExFreePoolWithTag(v5, 0);
  }
}
