/*
 * XREFs of ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x18001C760
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x180020360 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003D654 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004DE8A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSourceArray::CopyAndAddRef(CBitmapSourceArray *this, const struct CBitmapSourceArray *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rcx
  int v9; // esi
  int v10; // eax
  unsigned int v11; // ebp
  bool v12; // zf
  void *Src; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    v7 = v2;
    do
    {
      v8 = *(_QWORD *)(v6 + *(_QWORD *)this);
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
        *(_QWORD *)(v6 + *(_QWORD *)this) = 0LL;
      }
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  *((_DWORD *)this + 6) = 0;
  v9 = *((_DWORD *)a2 + 6);
  Src = *(void **)a2;
  v10 = DynArrayImpl<0>::Grow((_DWORD)this, 8, v9, 0, (__int64)&Src);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x28Bu);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)this + (unsigned int)(8 * *((_DWORD *)this + 6))), Src, (unsigned int)(8 * v9));
    v12 = v9 + *((_DWORD *)this + 6) == 0;
    *((_DWORD *)this + 6) += v9;
    if ( !v12 )
    {
      do
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)this + 8LL * v3++) + 8LL));
      while ( v3 < *((_DWORD *)this + 6) );
    }
  }
  return v11;
}
