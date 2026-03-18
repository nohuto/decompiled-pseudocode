/*
 * XREFs of ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801605DC
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800537B0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::DirtySecondaryRepresentations(CVisual *this)
{
  CVisual *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  _DWORD *v5; // r15

  if ( this )
  {
    v1 = this;
    do
    {
      v2 = *((_QWORD *)v1 + 3);
      if ( (v2 & 2) != 0 )
        v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v2) = v2 & 1;
      if ( (_DWORD)v2 )
      {
        v3 = 0LL;
        v4 = (unsigned int)v2;
        do
        {
          v5 = (_DWORD *)CPtrArrayBase::operator[]((__int64 *)v1 + 3, v3);
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 48LL))(v5, 61LL) )
            CResource::NotifyOnChanged(v5, 0LL, 0LL);
          ++v3;
          --v4;
        }
        while ( v4 );
      }
      v1 = (CVisual *)*((_QWORD *)v1 + 10);
    }
    while ( v1 );
  }
}
