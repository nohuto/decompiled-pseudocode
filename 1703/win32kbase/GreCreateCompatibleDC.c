/*
 * XREFs of GreCreateCompatibleDC @ 0x1C002BB10
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C002BB00 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C00631F8 (InitUserScreen.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00291D8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     GreSetLayout @ 0x1C00808C0 (GreSetLayout.c)
 */

__int64 __fastcall GreCreateCompatibleDC(HDC a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  HDC DisplayDC; // rax
  unsigned int v4; // r8d
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+2Ch] [rbp-Ch]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    v6 = 0LL;
    v7 = 0;
    v8 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v6, a1);
    v2 = v6;
    if ( v6 )
    {
      DisplayDC = (HDC)GreCreateDisplayDC(*(_QWORD *)(v6 + 48), 1LL, 0LL);
      v1 = (__int64)DisplayDC;
      if ( DisplayDC )
      {
        v4 = *(_DWORD *)(*(_QWORD *)(v2 + 80) + 312LL);
        if ( (v4 & 7) != 0 )
          GreSetLayout(DisplayDC, -1, v4);
      }
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v6);
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
    }
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
    v1 = GreCreateDisplayDC(*((_QWORD *)gpDispInfo + 4), 1LL, 0LL);
    if ( !v9 )
      UserSessionSwitchLeaveCrit();
  }
  return v1;
}
