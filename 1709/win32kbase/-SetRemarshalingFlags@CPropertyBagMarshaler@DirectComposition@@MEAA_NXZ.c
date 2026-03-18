/*
 * XREFs of ?SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01437E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0027238 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

bool __fastcall DirectComposition::CPropertyBagMarshaler::SetRemarshalingFlags(
        DirectComposition::CPropertyBagMarshaler *this)
{
  __int64 v1; // rax
  char *v3; // rbx
  char *i; // rax
  __int64 v5; // rdx
  __int64 Src; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_QWORD *)this + 13) = 0LL;
    v3 = (char *)*((_QWORD *)this + 6);
    for ( i = &v3[v1];
          v3 < i
       && (*((_QWORD *)this + 13) != *((_QWORD *)this + 11)
        || (int)DirectComposition::CDCompDynamicArrayBase::Grow(
                  (DirectComposition::CPropertyBagMarshaler *)((char *)this + 64),
                  1LL,
                  0x62704344u) >= 0);
          i = (char *)(*((_QWORD *)this + 7) + *((_QWORD *)this + 6)) )
    {
      v5 = *((_QWORD *)this + 13);
      Src = 0LL;
      v8 = 0LL;
      LODWORD(Src) = *((_DWORD *)v3 + 2);
      LODWORD(v8) = (_DWORD)v3 - *((_DWORD *)this + 12);
      *((_QWORD *)this + 13) = v5 + 1;
      memmove((void *)(*((_QWORD *)this + 8) + v5 * *((_QWORD *)this + 12)), &Src, *((_QWORD *)this + 12));
      switch ( *(_DWORD *)v3 )
      {
        case 0x11:
        case 0x12:
          v3 += 16;
          break;
        case 0x23:
          v3 += 20;
          break;
        case 0x34:
          v3 += 24;
          break;
        case 0x45:
        case 0x46:
        case 0x47:
          v3 += 28;
          break;
        case 0x68:
          v3 += 36;
          break;
        case 0x109:
          v3 += 76;
          break;
      }
    }
  }
  if ( *((_DWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x40u;
  return (*((_DWORD *)this + 4) & 0x60) != 0;
}
