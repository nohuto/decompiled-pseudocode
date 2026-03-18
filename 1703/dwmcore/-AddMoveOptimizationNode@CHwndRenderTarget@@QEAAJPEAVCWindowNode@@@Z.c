/*
 * XREFs of ?AddMoveOptimizationNode@CHwndRenderTarget@@QEAAJPEAVCWindowNode@@@Z @ 0x180145B28
 * Callers:
 *     ?AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z @ 0x180146900 (-AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::AddMoveOptimizationNode(CHwndRenderTarget *this, struct CWindowNode *a2)
{
  char *v2; // r10
  int v3; // ebx
  struct CWindowNode **v4; // r8
  unsigned int i; // eax
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v11; // [rsp+40h] [rbp+8h]
  CBitmapOfDeviceBitmaps *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 632;
  v3 = 0;
  v4 = (struct CWindowNode **)*((_QWORD *)this + 79);
  for ( i = 0; i < *((_DWORD *)this + 164); ++v4 )
  {
    if ( a2 == *v4 )
      break;
    ++i;
  }
  if ( i >= *((_DWORD *)this + 164) )
  {
    v6 = *((unsigned int *)this + 164);
    v7 = v11;
    v8 = v6 + 1;
    if ( (int)v6 + 1 >= (unsigned int)v6 )
      v7 = v6 + 1;
    v3 = v8 < (unsigned int)v6 ? 0x80070216 : 0;
    if ( v8 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)v2 + 5) )
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x189u);
    else
      CBitmapOfDeviceBitmaps::AddRef(v12);
  }
  return (unsigned int)v3;
}
