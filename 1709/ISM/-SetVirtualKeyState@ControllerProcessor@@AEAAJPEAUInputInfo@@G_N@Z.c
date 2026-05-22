/*
 * XREFs of ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x180041214
 * Callers:
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180041468 (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z @ 0x1800414EC (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG@Z @ 0x180041578 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RemoveKey@?$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z @ 0x180041FE0 (-RemoveKey@-$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::SetVirtualKeyState(__int64 this, struct InputInfo *a2, __int16 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rsi
  __int16 v9; // r10
  _WORD *v10; // rax
  unsigned int v11; // r9d
  char v12; // bl
  int v13; // r9d
  __int64 v14; // rax
  _WORD *v15; // r8
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v21; // rcx
  char *v22; // rcx
  int v23; // edx
  _WORD *i; // rax
  __int16 v25; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v26[356]; // [rsp+38h] [rbp-C8h] BYREF

  v4 = 0;
  v25 = a3;
  v8 = this;
  if ( !a4 )
  {
    v22 = (char *)(this + 64);
    if ( a3 == *((_WORD *)v22 + 48) )
      return v4;
    v23 = 0;
    for ( i = v22; *i != a3; i += 2 )
    {
      if ( (unsigned int)++v23 >= 0x18 )
        return v4;
    }
    v17 = FixedSizeMap<unsigned short,bool,24>::RemoveKey(v22, &v25);
    if ( v17 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_24;
      v19 = 2283;
      goto LABEL_23;
    }
LABEL_18:
    memset(v26, 0, sizeof(v26));
    v16 = *(_DWORD **)(v8 + 32);
    HIDWORD(v26[0]) = *v16;
    LODWORD(v26[0]) = v16[1];
    LODWORD(v26[1]) = *((_DWORD *)a2 + 2);
    v26[2] = *((_QWORD *)a2 + 2);
    v26[83] = *(_QWORD *)(v8 + 296);
    WORD2(v26[87]) = 64;
    LODWORD(v26[5]) = 2848;
    WORD1(v26[87]) = a3;
    if ( !a4 )
      WORD2(v26[87]) = 65;
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v8 + 240) + 48LL))(*(_QWORD *)(v8 + 240), v26);
    v4 = v17;
    if ( v17 >= 0 )
      return v4;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_24:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v19 = 2314;
LABEL_23:
    McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 12, v19, v17);
    goto LABEL_24;
  }
  v9 = *(_WORD *)(this + 160);
  if ( a3 == v9 )
  {
LABEL_6:
    v11 = 0;
    LOBYTE(this) = 0;
    if ( a3 == v9 )
    {
      v12 = 87;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_24;
      v13 = 152;
LABEL_30:
      McTemplateU0qqq(this, &MinInput_Warning_CheckResult, 12, v13, v12);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v21, &MinInput_Warning_CheckResult, 12, 2275, v12);
      goto LABEL_24;
    }
    v14 = 0LL;
    v15 = (_WORD *)(v8 + 64);
    do
    {
      if ( *v15 == a3 )
        goto LABEL_17;
      if ( !(_BYTE)this && *v15 == v9 )
      {
        v11 = v14;
        LOBYTE(this) = 1;
      }
      v14 = (unsigned int)(v14 + 1);
      v15 += 2;
    }
    while ( (unsigned int)v14 < 0x18 );
    if ( !(_BYTE)this )
    {
      v12 = 5;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_24;
      v13 = 182;
      goto LABEL_30;
    }
    v14 = v11;
    *(_WORD *)(v8 + 4LL * v11 + 64) = a3;
LABEL_17:
    *(_BYTE *)(v8 + 4 * v14 + 66) = 1;
    goto LABEL_18;
  }
  LODWORD(this) = 0;
  v10 = (_WORD *)(v8 + 64);
  while ( *v10 != a3 )
  {
    this = (unsigned int)(this + 1);
    v10 += 2;
    if ( (unsigned int)this >= 0x18 )
      goto LABEL_6;
  }
  return v4;
}
