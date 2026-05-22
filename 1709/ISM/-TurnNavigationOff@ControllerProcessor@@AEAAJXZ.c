/*
 * XREFs of ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18003F2FC
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18003EA00 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AUInputInfo@@K@Z @ 0x18003F664 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AUInputInfo@@K@Z.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800407DC (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180041CA0 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::TurnNavigationOff(ControllerProcessor *this)
{
  unsigned int v2; // ebp
  unsigned int *v3; // r14
  _DWORD *v4; // rsi
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // r9d
  _BYTE v11[2848]; // [rsp+30h] [rbp-B48h] BYREF

  ControllerProcessor::LiftPressedVirtualKeys(this, 0);
  (*(void (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 33) + 24LL))(
    *((_QWORD *)this + 33),
    (char *)this + 324,
    (char *)this + 328);
  v2 = 0;
  v3 = (unsigned int *)&unk_1800DFE94;
  v4 = (_DWORD *)((char *)this + 3860);
  do
  {
    if ( *v4 )
    {
      ControllerProcessor::BuildMouseInputInfo(this, v11, *v3);
      LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 32) + 48LL))(
                          *((_QWORD *)this + 32),
                          v11);
      if ( (int)result < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_25;
        v10 = 1170;
LABEL_24:
        McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 12, v10, result);
        goto LABEL_25;
      }
    }
    ++v2;
    ++v4;
    v3 += 3;
  }
  while ( v2 < 5 );
  if ( *((_DWORD *)this + 306) )
    ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  v7 = *((_QWORD *)this + 32);
  if ( v7 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 33);
  if ( v8 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 34);
  if ( v9 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 96LL))(*((_QWORD *)this + 36));
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 1183;
      goto LABEL_24;
    }
LABEL_25:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 503) + 96LL))(*((_QWORD *)this + 503));
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_25;
    v10 = 1184;
    goto LABEL_24;
  }
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 504) + 96LL))(*((_QWORD *)this + 504));
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_25;
    v10 = 1185;
    goto LABEL_24;
  }
  return (unsigned int)result;
}
