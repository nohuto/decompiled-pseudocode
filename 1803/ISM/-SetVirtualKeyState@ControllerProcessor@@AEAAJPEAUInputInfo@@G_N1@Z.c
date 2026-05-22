/*
 * XREFs of ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z @ 0x18003594C
 * Callers:
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180035B30 (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z @ 0x180035B80 (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG_N@Z @ 0x180035BD8 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG_N@Z.c)
 * Callees:
 *     ?SetValueForKey@?$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBGAEBUActiveKeyProperties@ControllerProcessor@@@Z @ 0x180036634 (-SetValueForKey@-$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBGAEBUAc.c)
 *     ?RemoveKey@?$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBG@Z @ 0x1800366D8 (-RemoveKey@-$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBG@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::SetVirtualKeyState(
        ControllerProcessor *this,
        struct InputInfo *a2,
        __int16 a3,
        char a4,
        bool a5)
{
  char *v6; // rcx
  unsigned int v7; // ebx
  unsigned int v11; // edx
  _WORD *v12; // rax
  bool v13; // si
  int v14; // eax
  int v15; // edx
  _WORD *i; // rax
  __int64 v17; // rax
  _WORD *v18; // rdx
  __int64 v19; // rcx
  bool v21[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v22; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v23[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h]
  int v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+218h] [rbp+118h]
  __int16 v27; // [rsp+23Ah] [rbp+13Ah]
  __int16 v28; // [rsp+23Ch] [rbp+13Ch]

  v22 = a3;
  v6 = (char *)this + 56;
  v7 = 0;
  if ( !a4 )
  {
    if ( a3 == *((_WORD *)v6 + 48) )
      return v7;
    v15 = 0;
    for ( i = v6; *i != a3; i += 2 )
    {
      if ( (unsigned int)++v15 >= 0x18 )
        return v7;
    }
    if ( a3 == *((_WORD *)v6 + 48) )
    {
      v7 = -2147024809;
LABEL_26:
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      return v7;
    }
    v17 = 0LL;
    v18 = v6;
    while ( *v18 != a3 )
    {
      v17 = (unsigned int)(v17 + 1);
      v18 += 2;
      if ( (unsigned int)v17 >= 0x18 )
      {
        v7 = -2147467259;
        goto LABEL_26;
      }
    }
    v13 = v6[4 * v17 + 2] == 0;
    v14 = FixedSizeMap<unsigned short,ControllerProcessor::ActiveKeyProperties,24>::RemoveKey(v6, &v22);
LABEL_7:
    v7 = v14;
    if ( v14 >= 0 )
    {
      if ( !v13 )
        return v7;
      memset_0(v23, 0, 0x6C8uLL);
      v23[2] = *((_DWORD *)a2 + 2);
      v24 = *((_QWORD *)a2 + 2);
      v26 = *((_QWORD *)this + 240);
      v28 = 64;
      v25 = 1736;
      v23[0] = 4;
      v27 = a3;
      if ( !a4 )
        v28 = 65;
      if ( *((_BYTE *)this + 4880) )
      {
        v19 = *((_QWORD *)this + 486);
        v23[1] = *((_DWORD *)this + 974);
        v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v19 + 24LL))(v19, v23);
        if ( (v7 & 0x80000000) == 0 )
          return v7;
      }
      else
      {
        v7 = -2147418113;
      }
    }
    goto LABEL_26;
  }
  if ( a3 == *((_WORD *)v6 + 48) )
  {
LABEL_6:
    v21[0] = a5;
    v13 = !a5;
    v14 = FixedSizeMap<unsigned short,ControllerProcessor::ActiveKeyProperties,24>::SetValueForKey(v6, &v22, v21);
    goto LABEL_7;
  }
  v11 = 0;
  v12 = v6;
  while ( *v12 != a3 )
  {
    ++v11;
    v12 += 2;
    if ( v11 >= 0x18 )
      goto LABEL_6;
  }
  return v7;
}
