/*
 * XREFs of ?AddZoomContacts@ManipulationInjector@@AEAAXK@Z @ 0x1800C23D4
 * Callers:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C0BC0 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C1440 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800C2210 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 */

void __fastcall ManipulationInjector::AddZoomContacts(
        struct tagPOINT *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  LONG v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct tagPOINT v8; // [rsp+30h] [rbp+10h]
  struct tagPOINT v9; // [rsp+30h] [rbp+10h]
  struct tagPOINT v10; // [rsp+30h] [rbp+10h]

  if ( this[11].x == 16 )
  {
    v8.x = this[10].x - this[3].x;
    v8.y = this[10].y;
    ManipulationInjector::AddContact(this, v8, 0, (const char *)a2);
    v6 = this[10].x + this[3].x;
  }
  else
  {
    if ( this[11].x != 32 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4DF,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      JUMPOUT(0x1800C2480LL);
    }
    v9.x = this[10].x - this[4].x;
    v9.y = this[10].y;
    ManipulationInjector::AddContact(this, v9, 0, (const char *)a2);
    v6 = this[4].x + this[10].x;
  }
  v10.x = v6;
  v10.y = this[10].y;
  ManipulationInjector::AddContact(this, v10, 0, (const char *)a2);
}
