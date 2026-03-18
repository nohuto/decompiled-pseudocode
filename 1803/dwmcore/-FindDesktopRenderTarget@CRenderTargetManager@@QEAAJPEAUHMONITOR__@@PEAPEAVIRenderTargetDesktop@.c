/*
 * XREFs of ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x180152314
 * Callers:
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18014A640 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x180034DBC (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::FindDesktopRenderTarget(
        CRenderTargetManager *this,
        HMONITOR a2,
        struct IRenderTargetDesktop **a3)
{
  CMILRefCountBase *v3; // rbx
  unsigned int v4; // edi
  int TreeNoLock; // eax
  __int64 v8; // rbp
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  CMILRefCountBase *v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  *a3 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(
                   *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                   a2,
                   &v15);
    v4 = TreeNoLock;
    if ( TreeNoLock < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TreeNoLock, 0x2D5u);
      v3 = v15;
      goto LABEL_13;
    }
    v3 = v15;
  }
  v8 = 0LL;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_12;
  while ( 1 )
  {
    v9 = *(__int64 **)(*((_QWORD *)this + 7) + 8 * v8);
    v10 = *v9;
    if ( !v3 )
      break;
    if ( (CMILRefCountBase *)(*(__int64 (__fastcall **)(__int64 *))(v10 + 288))(v9) == v3 )
      goto LABEL_8;
LABEL_11:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *((_DWORD *)this + 20) )
      goto LABEL_12;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v10 + 264))(v9) )
    goto LABEL_11;
LABEL_8:
  if ( v9 )
  {
    v11 = (unsigned __int64)(v9 - 21) & -(__int64)(v9 != 0LL);
    v12 = v11 + 168;
    v13 = -v11;
    *a3 = (struct IRenderTargetDesktop *)(v12 & -(__int64)(v13 != 0));
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v9 + 8))(v9, v12, v13);
    goto LABEL_13;
  }
LABEL_12:
  v4 = -2003292412;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x2F2u);
LABEL_13:
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v4;
}
