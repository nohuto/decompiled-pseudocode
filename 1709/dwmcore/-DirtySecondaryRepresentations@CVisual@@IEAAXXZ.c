/*
 * XREFs of ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x180176FF0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::DirtySecondaryRepresentations(CVisual *this)
{
  CVisual *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // r14

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
          v5 = CPtrArrayBase::operator[]((__int64 *)v1 + 3, v3);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 15LL) )
            (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, 0LL, 0LL);
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
