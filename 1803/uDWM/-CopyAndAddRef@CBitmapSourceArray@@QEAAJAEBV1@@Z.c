/*
 * XREFs of ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180012370
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x180017400 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003A024 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180020DC0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004B35A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSourceArray::CopyAndAddRef(CBitmapSourceArray *this, const struct CBitmapSourceArray *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // ebp
  int v9; // eax
  unsigned int v10; // esi
  bool v11; // zf
  void *Src; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 6) )
  {
    v5 = *((unsigned int *)this + 6);
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v6 + *(_QWORD *)this);
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
        *(_QWORD *)(v6 + *(_QWORD *)this) = 0LL;
      }
      v6 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 6) = 0;
  v8 = *((_DWORD *)a2 + 6);
  Src = *(void **)a2;
  v9 = DynArrayImpl<0>::Grow((_DWORD)this, 8, v8, 0, (__int64)&Src);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x24Au);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)this + (unsigned int)(8 * *((_DWORD *)this + 6))), Src, (unsigned int)(8 * v8));
    v11 = v8 + *((_DWORD *)this + 6) == 0;
    *((_DWORD *)this + 6) += v8;
    if ( !v11 )
    {
      do
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)this + 8LL * v2++) + 8LL));
      while ( v2 < *((_DWORD *)this + 6) );
    }
  }
  return v10;
}
