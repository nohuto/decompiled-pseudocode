/*
 * XREFs of ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800407DC
 * Callers:
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x18003F0B8 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18003F2FC (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180040938 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?RemoveKey@?$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z @ 0x180041FE0 (-RemoveKey@-$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall ControllerProcessor::LiftPressedVirtualKeys(ControllerProcessor *this, char a2)
{
  __int64 v4; // rsi
  _WORD *v5; // r8
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 i; // rbp
  unsigned __int16 v9; // bx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  int v14; // [rsp+30h] [rbp-68h] BYREF
  _WORD v15[24]; // [rsp+38h] [rbp-60h] BYREF

  memset(v15, 0, sizeof(v15));
  v4 = 0LL;
  v5 = (_WORD *)((char *)this + 64);
  v6 = 24LL;
  do
  {
    if ( *v5 != *((_WORD *)this + 80) )
    {
      v15[v4] = *v5;
      v4 = (unsigned int)(v4 + 1);
    }
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v7 = 0;
  v14 = v4;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
  {
    v9 = v15[i];
    LOWORD(v14) = v9;
    if ( a2 )
    {
      if ( v9 == 196 || v9 == 27 || v9 == 208 || v9 == 7 )
        continue;
    }
    else if ( (unsigned __int16)(v9 - 37) > 3u )
    {
      continue;
    }
    v10 = FixedSizeMap<unsigned short,bool,24>::RemoveKey((char *)this + 64, &v14);
    if ( v10 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 1970;
LABEL_21:
        McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 12, v12, v10);
      }
LABEL_22:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v10 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v9, 0);
    v7 = v10;
    if ( v10 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 1974;
        goto LABEL_21;
      }
      goto LABEL_22;
    }
  }
  return v7;
}
