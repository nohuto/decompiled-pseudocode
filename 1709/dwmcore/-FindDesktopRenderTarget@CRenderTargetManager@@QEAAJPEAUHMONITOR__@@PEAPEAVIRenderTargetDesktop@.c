/*
 * XREFs of ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x1801309A4
 * Callers:
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180128660 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800BAF74 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::FindDesktopRenderTarget(
        CRenderTargetManager *this,
        HMONITOR a2,
        struct IRenderTargetDesktop **a3)
{
  CMILRefCountBase *v3; // rbx
  unsigned int v4; // esi
  signed int TreeNoLock; // eax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  CMILRefCountBase *v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  *a3 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(
                   *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                   a2,
                   &v12);
    v4 = TreeNoLock;
    if ( TreeNoLock < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TreeNoLock, 0x342u);
      v3 = v12;
      goto LABEL_13;
    }
    v3 = v12;
  }
  v8 = 0LL;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_12;
  while ( 1 )
  {
    v9 = **(_QWORD **)(*((_QWORD *)this + 7) + 8 * v8);
    if ( !v3 )
      break;
    if ( (CMILRefCountBase *)(*(__int64 (**)(void))(v9 + 296))() == v3 )
      goto LABEL_8;
LABEL_11:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *((_DWORD *)this + 20) )
      goto LABEL_12;
  }
  if ( !(*(unsigned __int8 (**)(void))(v9 + 272))() )
    goto LABEL_11;
LABEL_8:
  v10 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v8);
  if ( v10 )
  {
    *a3 = (struct IRenderTargetDesktop *)(v10 & -(__int64)(v10 != 112));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    goto LABEL_13;
  }
LABEL_12:
  v4 = -2003292412;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x35Du);
LABEL_13:
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v4;
}
