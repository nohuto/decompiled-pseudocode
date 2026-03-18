/*
 * XREFs of ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C00F9570
 * Callers:
 *     DxgDetermineBootImageMode @ 0x1C011C5D4 (DxgDetermineBootImageMode.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

char __fastcall DxgkSetBootAnimationRelayState(__int64 a1)
{
  int v1; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  char v8; // bl
  bool v10; // zf
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 1064));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v5 = *((_DWORD *)DXGGLOBAL::GetGlobal(v3) + 263);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
LABEL_5:
          v8 = 0;
          goto LABEL_6;
        }
        v10 = v1 == 4;
      }
      else
      {
        v10 = v1 == 3;
      }
    }
    else
    {
      v10 = v1 == 2;
    }
    if ( !v10 )
      goto LABEL_5;
  }
  else if ( ((v1 - 1) & 0xFFFFFFFD) != 0 )
  {
    goto LABEL_5;
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal(v4) + 263) = v1;
  v8 = 1;
LABEL_6:
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v8;
}
