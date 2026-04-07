/*
 * XREFs of ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180021D3C
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001FC44 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x180020520 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x180086BB0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAtlasImageAtIndex(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        unsigned int a3)
{
  char *v3; // rdi
  __int64 v4; // rbp
  int v6; // eax
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rdx
  struct CAtlasedImage **v10; // rdx
  struct CAtlasedImage **v11; // r9
  void (__fastcall *v12)(CVisual *__hidden, unsigned int); // rax
  _QWORD *v14; // r9
  struct CAtlasedImage **v15; // [rsp+50h] [rbp+8h] BYREF
  struct CAtlasedImage *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v3 = (char *)this + 240;
  v4 = a3;
  if ( a3 > *((_DWORD *)this + 66) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C3u);
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x73u);
    return (unsigned int)v7;
  }
  v15 = &v16;
  v6 = DynArrayImpl<0>::Grow((_DWORD)v3, 8, 1, 0, (__int64)&v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1CDu);
  }
  else
  {
    ++*((_DWORD *)v3 + 6);
    v8 = *(_QWORD *)v3;
    v9 = (unsigned int)(*((_DWORD *)v3 + 6) - 1);
    if ( (unsigned int)v9 > (unsigned int)v4 )
    {
      v14 = (_QWORD *)(v8 + 8 * v9);
      do
      {
        v9 = (unsigned int)(v9 - 1);
        *v14-- = *(_QWORD *)(v8 + 8 * v9);
      }
      while ( (unsigned int)v9 > (unsigned int)v4 );
    }
    v10 = v15;
    v11 = (struct CAtlasedImage **)(v8 + 8 * v4);
    if ( v15 >= v11 && (unsigned __int64)v15 < v8 + 8 * ((unsigned __int64)*((unsigned int *)v3 + 6) - 1) )
      v10 = ++v15;
    *v11 = *v10;
  }
  if ( v7 < 0 )
    goto LABEL_13;
  _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
  *((_QWORD *)v16 + 10) = this;
  v12 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v12 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 0x2000u);
  else
    v12(this, 0x2000u);
  return (unsigned int)v7;
}
