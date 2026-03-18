/*
 * XREFs of ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800064BC
 * Callers:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800061E0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800061E0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x180006704 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
        CRenderTargetBitmapCache *this,
        struct CScratchRenderTargetBitmap *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // eax
  int v7; // edi
  int v8; // eax
  __int64 v9; // rsi
  __int64 i; // rdi
  __int64 v11; // rcx
  struct CScratchRenderTargetBitmap *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  if ( *((_BYTE *)a2 + 257) )
    --*((_DWORD *)this + 10);
  v3 = (__int64)this + 552;
  if ( !this )
    v3 = 1104LL;
  *((_QWORD *)a2 + 31) = *(_QWORD *)v3;
  if ( *((_DWORD *)this + 6) >= 0x20u )
  {
    v9 = *(_QWORD *)v3;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
      if ( (unsigned __int64)(v9 - *(_QWORD *)(v11 + 248)) > 1 )
      {
        *(_BYTE *)(v11 + 256) = 0;
        CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v11);
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this, (unsigned int)i);
      }
    }
  }
  if ( *((int *)this + 80) >= 0 )
  {
    v4 = *((unsigned int *)this + 6);
    v5 = (unsigned int)v12;
    v6 = v4 + 1;
    if ( (int)v4 + 1 >= (unsigned int)v4 )
      v5 = v4 + 1;
    v7 = v6 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( v6 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
    }
    else if ( v5 > *((_DWORD *)this + 5) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v12);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 8 * v4) = v12;
      *((_DWORD *)this + 6) = v5;
    }
    if ( v7 >= 0 )
      CBitmapOfDeviceBitmaps::AddRef((struct CScratchRenderTargetBitmap *)((char *)v12 + 128));
  }
}
