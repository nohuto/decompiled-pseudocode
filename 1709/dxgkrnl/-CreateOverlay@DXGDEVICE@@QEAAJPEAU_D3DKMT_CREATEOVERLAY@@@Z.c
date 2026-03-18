/*
 * XREFs of ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C019CB24
 * Callers:
 *     DxgkCreateOverlay @ 0x1C01B13C0 (DxgkCreateOverlay.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00088FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C0025E50 (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C01B0CD4 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateOverlay(DXGDEVICE *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  DXGOVERLAY *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGOVERLAY *v10; // rbx
  __int64 v11; // rax
  int v12; // edi
  char *v13; // rsi
  __int64 v14; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 3716LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (DXGOVERLAY *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x38uLL);
  v10 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = this;
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 0;
    *((_DWORD *)v6 + 8) = -1;
    *((_QWORD *)v6 + 5) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v12 = DXGOVERLAY::Initialize(v10, a2);
    if ( v12 >= 0 )
    {
      v13 = (char *)this + 360;
      v14 = *(_QWORD *)v13;
      if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 )
        __fastfail(3u);
      *(_QWORD *)v10 = v14;
      *((_QWORD *)v10 + 1) = v13;
      *(_QWORD *)(v14 + 8) = v10;
      *(_QWORD *)v13 = v10;
    }
    else
    {
      DXGOVERLAY::`scalar deleting destructor'(v10);
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    v12 = -1073741801;
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v11);
  }
  return (unsigned int)v12;
}
