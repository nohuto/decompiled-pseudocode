/*
 * XREFs of ?DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z @ 0x1C01AF050
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0028708 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BBDB8 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 */

void __fastcall DxgkSharedProtectedSessionObDeleteProcedure(PVOID *a1)
{
  struct DXGGLOBAL *Global; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v3, Global);
  DXGPROTECTEDSESSION::DestroyProtectedSession(*a1, 0);
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}
