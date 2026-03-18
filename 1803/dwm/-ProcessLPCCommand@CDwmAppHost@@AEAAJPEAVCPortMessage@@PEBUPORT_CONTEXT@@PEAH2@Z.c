/*
 * XREFs of ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001320
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400010E0 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 * Callees:
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x1400012D0 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001A20 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x140002980 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400041C8 (IsDWMGhostHandleGhostMsgPresent.c)
 *     _guard_dispatch_icall_nop @ 0x140006470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDwmAppHost::ProcessLPCCommand(
        CDwmAppHost *this,
        struct CPortMessage *a2,
        const struct PORT_CONTEXT *a3,
        int *a4,
        int *a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  CDwmAppHost *v11; // rcx
  unsigned int v12; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  CDwmAppHost *v21; // rcx
  int v22; // eax

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct CPortMessage *, struct CPortMessage *, const struct PORT_CONTEXT *))(*(_QWORD *)a2 + 16LL))(
         a2,
         a2,
         a3);
  v9 = v8;
  v10 = *(_WORD *)(v8 + 4) >> 15;
  *a4 = 1;
  *a5 = 0;
  v11 = (CDwmAppHost *)((*(_WORD *)(v8 + 4) & 0x7FFFu) - 1);
  if ( (*(_WORD *)(v8 + 4) & 0x7FFF) == 1 )
  {
    v17 = *(_DWORD *)(v8 + 40);
    if ( v17 < 0x40000035 && v17 >= 0x20000004 )
      goto LABEL_5;
    v18 = v17 - 536870913;
    if ( !v18 )
    {
      if ( *(_DWORD *)(v9 + 8) == (_DWORD)qword_14000E8E0 )
      {
        (*(void (__fastcall **)(struct CPortMessage *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, 0LL);
        *a5 = 1;
        CDwmAppHost::Shutdown(v21, -805305602);
      }
      return v7;
    }
    v19 = v18 - 2;
    if ( v19 )
    {
      v20 = v19 - 536870962;
      if ( !v20 )
      {
        if ( !(_BYTE)v10 || !(unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
          return v7;
        DWMGhostHandleGhostMsg(a2);
LABEL_28:
        *a5 = 1;
        return v7;
      }
      if ( v20 != 22 )
        goto LABEL_5;
      v22 = DwmRenderDesktopForDDA(v11, v10);
      v7 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x1BBu);
      *(_DWORD *)(v9 + 44) = v7;
    }
    else
    {
      if ( *(_DWORD *)(v9 + 8) != (_DWORD)qword_14000E8E0 )
        return v7;
      CSettingsManager::PropagateUserLogon((CSettingsManager *)&qword_14000E908, 0LL, 0LL, 1);
    }
    (*(void (__fastcall **)(struct CPortMessage *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, 0LL);
    goto LABEL_28;
  }
  if ( (*(_WORD *)(v8 + 4) & 0x7FFF) != 3 )
    return v7;
  v12 = *(_DWORD *)(v8 + 40);
  if ( v12 < 0x40000035 && v12 >= 0x20000003 )
    goto LABEL_5;
  v14 = v12 - 536870914;
  if ( v14 )
  {
    v15 = v14 - 536870963;
    if ( v15 )
    {
      if ( v15 == 2 )
      {
        if ( (_BYTE)v10 )
        {
          v16 = CDwmAppHost::HandleDisplayModeChange(v11);
          v7 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x173u);
        }
        return v7;
      }
LABEL_5:
      *a4 = 0;
      return v7;
    }
    if ( (_BYTE)v10 && (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
      DWMGhostHandleGhostMsg(a2);
  }
  else if ( *(_DWORD *)(v9 + 8) == (_DWORD)qword_14000E8E0 )
  {
    CSettingsManager::PropagateUserLogon(
      (CSettingsManager *)&qword_14000E908,
      *(HKEY *)(v9 + 52),
      *(HKEY *)(v9 + 60),
      *(_DWORD *)(v9 + 68) != 0);
  }
  return v7;
}
