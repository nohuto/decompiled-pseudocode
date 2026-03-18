/*
 * XREFs of ?AddMovedVisuals@CHwndRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180145C0C
 * Callers:
 *     ?AddMovedVisuals@CDesktopRenderTarget@@UEAAJPEAVCVisual@@@Z @ 0x180146980 (-AddMovedVisuals@CDesktopRenderTarget@@UEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::AddMovedVisuals(CHwndRenderTarget *this, struct CVisual *a2)
{
  char *v2; // r10
  int v3; // ebx
  struct CVisual **v4; // r8
  unsigned int i; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v11; // [rsp+40h] [rbp+8h]
  struct CVisual *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 704;
  v3 = 0;
  v4 = (struct CVisual **)*((_QWORD *)this + 88);
  for ( i = 0; i < *((_DWORD *)this + 182); ++v4 )
  {
    if ( a2 == *v4 )
      break;
    ++i;
  }
  if ( i >= *((_DWORD *)this + 182) )
  {
    v6 = *((unsigned int *)this + 182);
    v7 = v11;
    v8 = v6 + 1;
    if ( (int)v6 + 1 >= (unsigned int)v6 )
      v7 = v8;
    v3 = v8 < (unsigned int)v6 ? 0x80070216 : 0;
    if ( v8 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( (unsigned int)v7 > *((_DWORD *)v2 + 5) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v12);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8 * v6) = v12;
      *((_DWORD *)v2 + 6) = v7;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x171u);
    else
      (*(void (__fastcall **)(struct CVisual *, __int64, struct CVisual **))(*(_QWORD *)v12 + 8LL))(v12, v7, v4);
  }
  return (unsigned int)v3;
}
