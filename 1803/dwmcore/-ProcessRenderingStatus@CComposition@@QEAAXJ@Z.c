/*
 * XREFs of ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18002D650
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18003444C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180152540 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18001E740 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18001EA60 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002D5D0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18002E598 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CComposition::ProcessRenderingStatus(struct _RTL_CRITICAL_SECTION *this, int a2, __int64 a3)
{
  unsigned int LockCount; // edi
  unsigned int v4; // esi
  unsigned int v6; // eax
  _BYTE *v7; // rax
  _BYTE *OwningThread; // rax
  int v9; // eax
  int v10; // eax
  _DWORD v11[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+3Ch] [rbp-1Ch]
  __int64 v13; // [rsp+44h] [rbp-14h]

  LockCount = this[9].LockCount;
  v4 = LockCount;
  if ( a2 < 0 )
    v6 = 1;
  else
    v6 = (a2 != 142213121) + 2;
  if ( v6 <= 1 )
  {
    LockCount = 1;
    if ( v4 != 2 )
      goto LABEL_7;
    v10 = CMmcssTask::Apply(this + 4, 0);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB50u);
LABEL_13:
    CComposition::UpdateMmcssPartners((CComposition *)this);
    goto LABEL_7;
  }
  if ( v6 == 2 )
  {
    LockCount = 2;
    if ( v4 == 2 )
      goto LABEL_7;
    CMmcssTask::Revert(this + 4);
    goto LABEL_13;
  }
  if ( v6 == 3 )
  {
    LockCount = 0;
    if ( v4 == 2 )
    {
      v9 = CMmcssTask::Apply(this + 4, 0);
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB40u);
      goto LABEL_13;
    }
  }
LABEL_7:
  this[9].LockCount = LockCount;
  if ( LockCount != v4 )
  {
    OwningThread = this[9].OwningThread;
    if ( OwningThread && LockCount == 1 )
      OwningThread[20] = 1;
    v11[0] = 5;
    v11[1] = 0;
    v11[2] = v4;
    v12 = LockCount;
    v13 = 0LL;
    CComposition::NotifyHelper((CComposition *)this, (struct MIL_MESSAGE *)v11, a3);
  }
  v7 = this[9].OwningThread;
  if ( v7 && LockCount == 2 )
  {
    if ( this[12].LockCount )
      v7[20] = 1;
  }
}
