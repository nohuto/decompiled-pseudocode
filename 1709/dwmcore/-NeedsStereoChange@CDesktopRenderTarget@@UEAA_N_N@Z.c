/*
 * XREFs of ?NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z @ 0x1800C4B30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x1800C4BA0 (-IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ.c)
 */

bool __fastcall CDesktopRenderTarget::NeedsStereoChange(CDesktopRenderTarget *this, char a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r9
  unsigned int v5; // r10d
  __int64 v6; // rdi
  __int64 v7; // rbx
  bool IsStereoSupported; // al
  char v9; // cl

  v2 = *((_DWORD *)this + 8);
  v3 = 0LL;
  v5 = 0;
  if ( v2 )
  {
    v6 = *((_QWORD *)this + 1);
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 8LL * v5);
      if ( !a2
        || (IsStereoSupported = CHwndRenderTarget::IsStereoSupported(*(CHwndRenderTarget **)(v6 + 8LL * v5)),
            v9 = 1,
            !IsStereoSupported) )
      {
        v9 = v3;
      }
      if ( (*(_QWORD *)(v7 + 128) != v3) != v9 )
        break;
      if ( ++v5 >= v2 )
        return v3;
    }
    LOBYTE(v3) = 1;
  }
  return v3;
}
