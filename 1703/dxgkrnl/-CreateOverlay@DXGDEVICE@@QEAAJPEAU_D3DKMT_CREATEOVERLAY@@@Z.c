/*
 * XREFs of ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0187290
 * Callers:
 *     DxgkCreateOverlay @ 0x1C019A970 (DxgkCreateOverlay.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000153C (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C0034B70 (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C019A274 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateOverlay(DXGDEVICE *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  DXGOVERLAY *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGOVERLAY *v14; // rbx
  __int64 v15; // rax
  int v16; // edi
  char *v17; // rsi
  __int64 v18; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 3673LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (DXGOVERLAY *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x38uLL);
  v14 = v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 2) = this;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 + 1) = 0LL;
    *((_DWORD *)v9 + 6) = 0;
    *((_DWORD *)v9 + 7) = 0;
    *((_DWORD *)v9 + 8) = -1;
    *((_QWORD *)v9 + 5) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v16 = DXGOVERLAY::Initialize(v14, a2);
    if ( v16 >= 0 )
    {
      v17 = (char *)this + 360;
      v18 = *(_QWORD *)v17;
      if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 )
        __fastfail(3u);
      *(_QWORD *)v14 = v18;
      *((_QWORD *)v14 + 1) = v17;
      *(_QWORD *)(v18 + 8) = v14;
      *(_QWORD *)v17 = v14;
    }
    else
    {
      DXGOVERLAY::`scalar deleting destructor'(v14);
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v16 = -1073741801;
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v15);
  }
  return (unsigned int)v16;
}
