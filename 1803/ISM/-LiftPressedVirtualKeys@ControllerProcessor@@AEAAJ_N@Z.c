/*
 * XREFs of ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800351DC
 * Callers:
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180033880 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180033A24 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180035304 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?RemoveKey@?$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBG@Z @ 0x1800366D8 (-RemoveKey@-$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBG@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall ControllerProcessor::LiftPressedVirtualKeys(ControllerProcessor *this, char a2)
{
  __int64 v4; // rbx
  _WORD *v5; // r8
  __int64 v6; // rdx
  int v7; // edi
  __int64 i; // rsi
  __int16 v9; // r10
  unsigned __int16 v10; // r10
  int v12; // [rsp+20h] [rbp-58h] BYREF
  _WORD v13[24]; // [rsp+28h] [rbp-50h] BYREF

  memset_0(v13, 0, sizeof(v13));
  v4 = 0LL;
  v5 = (_WORD *)((char *)this + 56);
  v6 = 24LL;
  do
  {
    if ( *v5 != *((_WORD *)this + 76) )
    {
      v13[v4] = *v5;
      v4 = (unsigned int)(v4 + 1);
    }
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v7 = 0;
  v12 = v4;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
  {
    v9 = v13[i];
    LOWORD(v12) = v9;
    if ( a2 )
    {
      if ( v9 == 196 || v9 == 27 || v9 == 208 || v9 == 7 )
        continue;
    }
    else if ( (unsigned __int16)(v9 - 37) > 3u )
    {
      continue;
    }
    v7 = FixedSizeMap<unsigned short,ControllerProcessor::ActiveKeyProperties,24>::RemoveKey((char *)this + 56, &v12);
    if ( v7 >= 0 )
    {
      v7 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v10, 0);
      if ( v7 >= 0 )
        continue;
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return (unsigned int)v7;
  }
  return (unsigned int)v7;
}
