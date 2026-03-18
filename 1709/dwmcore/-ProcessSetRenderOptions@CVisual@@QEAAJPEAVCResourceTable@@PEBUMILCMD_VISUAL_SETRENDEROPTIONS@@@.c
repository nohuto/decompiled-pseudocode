/*
 * XREFs of ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x18005199C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRenderOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETRENDEROPTIONS *a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  *((_BYTE *)this + 96) = 0;
  if ( (*((_BYTE *)a3 + 8) & 2) != 0 )
  {
    v5 = *((_DWORD *)a3 + 3);
    if ( v5 != -1 )
    {
      *((_DWORD *)this + 24) &= 0xFFFFC3FF;
      *((_DWORD *)this + 24) |= (v5 & 0xF) << 10;
      *((_BYTE *)this + 96) |= 2u;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 8) != 0 )
  {
    v3 = *((_DWORD *)a3 + 4);
    if ( v3 != -1 )
    {
      *((_BYTE *)this + 96) |= 8u;
      *((_DWORD *)this + 47) = v3;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
  {
    v11 = *((_DWORD *)a3 + 5);
    if ( v11 != 5 )
    {
      *((_DWORD *)this + 24) &= 0xFFF83FFF;
      *((_DWORD *)this + 24) |= (v11 & 0x1F) << 14;
      *((_BYTE *)this + 96) |= 4u;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 1) != 0 )
  {
    v7 = *((_DWORD *)a3 + 6);
    if ( v7 )
    {
      *((_DWORD *)this + 24) &= 0xFFFFFCFF;
      *((_DWORD *)this + 24) |= (v7 & 3) << 8;
      *((_BYTE *)this + 96) |= 1u;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 0x10) != 0 )
  {
    v8 = *((_DWORD *)a3 + 7);
    if ( v8 != 5 )
    {
      *((_BYTE *)this + 96) |= 0x10u;
      *((_DWORD *)this + 48) = v8;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 0x20) != 0 )
  {
    v9 = *((_DWORD *)a3 + 8);
    if ( v9 != -1 )
    {
      *((_BYTE *)this + 96) |= 0x20u;
      *((_DWORD *)this + 49) = v9;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 0x40) != 0 )
  {
    v6 = *((_DWORD *)a3 + 9);
    if ( v6 != -1 )
    {
      *((_BYTE *)this + 96) |= 0x40u;
      *((_DWORD *)this + 50) = v6;
    }
  }
  if ( *((char *)a3 + 8) < 0 )
  {
    v10 = *((_DWORD *)a3 + 10);
    if ( v10 != -1 )
    {
      *((_BYTE *)this + 96) |= 0x80u;
      *((_DWORD *)this + 51) = v10;
    }
  }
  CVisual::PropagateFlags((__int64)this, 5u, 0);
  return 0LL;
}
