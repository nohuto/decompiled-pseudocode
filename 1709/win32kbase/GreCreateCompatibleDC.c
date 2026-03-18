/*
 * XREFs of GreCreateCompatibleDC @ 0x1C0055490
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C0055B40 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003BB04 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00555D0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 *     GreSetLayout @ 0x1C00852F0 (GreSetLayout.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00EDCC8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(struct HOBJ__ *a1)
{
  HDC v1; // rbx
  struct OBJECT *v2; // rdi
  struct HOBJ__ *DisplayDC; // rax
  unsigned int v4; // r8d
  struct HOBJ__ *v5; // rdi
  struct HOBJ__ *v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct OBJECT *v12; // [rsp+20h] [rbp-20h] BYREF
  int v13; // [rsp+28h] [rbp-18h]
  int v14; // [rsp+2Ch] [rbp-14h]
  struct OBJECT *v15; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+38h] [rbp-8h]
  int v17; // [rsp+3Ch] [rbp-4h]
  int v18; // [rsp+50h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v15, a1);
    v2 = v15;
    if ( v15 )
    {
      DisplayDC = (struct HOBJ__ *)GreCreateDisplayDC(*((_QWORD *)v15 + 6), 1LL);
      v1 = (HDC)DisplayDC;
      if ( DisplayDC )
      {
        v12 = 0LL;
        v13 = 0;
        v14 = 0;
        XDCOBJ::vLock((XDCOBJ *)&v12, DisplayDC);
        if ( v12 && (*((_DWORD *)v2 + 134) & 1) != 0 )
          DC::vSetDpiScaling(v12, *(_QWORD *)((char *)v2 + 540));
        v4 = *(_DWORD *)(*((_QWORD *)v2 + 10) + 312LL);
        if ( (v4 & 7) != 0 )
          GreSetLayout(v1, -1, v4);
        if ( v12 )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v12);
          v18 = 0;
          v5 = *(struct HOBJ__ **)v12;
          HmgDecrementExclusiveReferenceCountEx(v12, v14);
          if ( v18 )
            bDeleteDCInternalEx(v5, 0LL);
        }
      }
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v15);
      v18 = 0;
      v6 = *(struct HOBJ__ **)v15;
      HmgDecrementExclusiveReferenceCountEx(v15, v17);
      if ( v18 )
        bDeleteDCInternalEx(v6, 0LL);
    }
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v18);
    v1 = (HDC)GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 32), 1LL);
    if ( !v18 )
      UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  }
  return v1;
}
