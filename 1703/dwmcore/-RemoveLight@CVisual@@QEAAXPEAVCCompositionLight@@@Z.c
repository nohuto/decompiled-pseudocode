/*
 * XREFs of ?RemoveLight@CVisual@@QEAAXPEAVCCompositionLight@@@Z @ 0x180160E48
 * Callers:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAXXZ @ 0x180173070 (-RemoveAllTargets@CCompositionLight@@AEAAXXZ.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BBD9C (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

void __fastcall CVisual::RemoveLight(CVisual *this, struct CCompositionLight *a2)
{
  __int64 *v2; // r11
  __int64 v4; // r9
  unsigned int v6; // r10d
  unsigned int v7; // r9d
  int v8; // r10d

  v2 = (__int64 *)((char *)this + 256);
  v4 = *((_QWORD *)this + 32);
  if ( (v4 & 2) != 0 )
    v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v4) = v4 & 1;
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    while ( (struct CCompositionLight *)CPtrArrayBase::operator[](v2, v6) != a2 )
    {
      v6 = v8 + 1;
      if ( v6 >= v7 )
        return;
    }
    CPtrArrayBase::Remove((CPtrArrayBase *)v2, (__int64)a2);
    CPtrArrayBase::Remove((struct CCompositionLight *)((char *)a2 + 24), (__int64)this);
    CResource::NotifyOnChanged(this, 5LL, 0LL);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
}
