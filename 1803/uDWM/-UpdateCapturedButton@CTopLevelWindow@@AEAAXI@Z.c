/*
 * XREFs of ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x18001D4B0
 * Callers:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x18001D5A0 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EEF0 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180005518 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow::UpdateCapturedButton(CTopLevelWindow *this, int a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  CButton *v7; // rcx
  CBaseObject *v8; // rcx
  volatile signed __int32 *v9; // rcx

  v3 = 4;
  v4 = a2 - 8;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 11;
      if ( v6 )
      {
        if ( v6 == 1 )
          v3 = 0;
      }
      else
      {
        v3 = 3;
      }
    }
    else
    {
      v3 = 2;
    }
  }
  else
  {
    v3 = 1;
  }
  v7 = (CButton *)*((_QWORD *)this + 92);
  if ( v7 )
  {
    CButton::SetMouseCapture(v7, 0);
    v8 = (CBaseObject *)*((_QWORD *)this + 92);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)this + 92) = 0LL;
    }
  }
  if ( v3 != 4 )
  {
    v9 = (volatile signed __int32 *)*((_QWORD *)this + v3 + 60);
    if ( v9 )
    {
      *((_QWORD *)this + 92) = v9;
      _InterlockedIncrement(v9 + 2);
      CButton::SetMouseCapture((CButton *)v9, 1);
    }
  }
}
