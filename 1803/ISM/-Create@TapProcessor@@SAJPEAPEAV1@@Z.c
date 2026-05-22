/*
 * XREFs of ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1800B60A4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@TapProcessor@@IEAAJXZ @ 0x1800B618C (-Initialize@TapProcessor@@IEAAJXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TapProcessor::Create(struct TapProcessor **a1)
{
  int v2; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx

  if ( a1 )
  {
    v3 = malloc(0x50uLL);
    v4 = v3;
    if ( v3 )
      memset_0(v3, 0, 0x50uLL);
    if ( v4 )
    {
      v4[3] = &RefCountedObject::`vftable';
      *((_DWORD *)v4 + 8) = 1;
      *v4 = &TapProcessor::`vftable'{for `IContextualProcessor'};
      v4[1] = &TapProcessor::`vftable'{for `IPointerInfoAdapterClient'};
      v4[2] = &TapProcessor::`vftable'{for `IInputServiceProxyOwner'};
      v4[3] = &TapProcessor::`vftable'{for `RefCountedObject'};
      v4[5] = 0LL;
      v4[6] = 0LL;
      v4[7] = 0LL;
      *((_BYTE *)v4 + 72) = 0;
      *((_DWORD *)v4 + 19) = 63;
      v2 = TapProcessor::Initialize((TapProcessor *)v4);
      if ( v2 < 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(v4[3] + 24LL))(v4 + 3, 1LL);
      else
        *a1 = (struct TapProcessor *)v4;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v2;
}
