/*
 * XREFs of ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C00A6040
 * Callers:
 *     DxgDetermineBootImageMode @ 0x1C011C1F4 (DxgDetermineBootImageMode.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

char __fastcall DxgkSetBootAnimationRelayState(int a1)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v10; // zf
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 1064), v3, v4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v5 = 1;
  v7 = *((unsigned int *)DXGGLOBAL::GetGlobal() + 263);
  if ( (_DWORD)v7 )
  {
    v7 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v7 )
    {
      v7 = (unsigned int)(v7 - 1);
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 != 1 )
        {
LABEL_5:
          v5 = 0;
          goto LABEL_6;
        }
        v10 = a1 == 4;
      }
      else
      {
        v10 = a1 == 3;
      }
    }
    else
    {
      v10 = a1 == 2;
    }
    if ( !v10 )
      goto LABEL_5;
  }
  else if ( a1 != 1 )
  {
    goto LABEL_5;
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 263) = a1;
LABEL_6:
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v6, v7, v8);
  return v5;
}
