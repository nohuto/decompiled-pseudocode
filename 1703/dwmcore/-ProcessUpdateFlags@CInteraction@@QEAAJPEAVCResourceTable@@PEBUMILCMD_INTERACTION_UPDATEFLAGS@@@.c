/*
 * XREFs of ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x18004B8B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessUpdateFlags(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATEFLAGS *a3)
{
  char v4; // dl
  char v5; // r9
  char v6; // dl
  unsigned __int8 v7; // cl
  __int64 result; // rax

  v4 = *((_BYTE *)this + 200) & 0xFE | (*((_DWORD *)a3 + 2) != 0);
  *((_BYTE *)this + 200) = v4;
  v5 = v4 & 0xFD | (*((_DWORD *)a3 + 3) != 0 ? 2 : 0);
  v6 = v5 ^ (v5 ^ (2 * v5)) & 4;
  *((_BYTE *)this + 200) = v6;
  *((_BYTE *)this + 200) = v6 & 0xEF | (*((_DWORD *)a3 + 4) != 0 ? 0x10 : 0);
  *((_BYTE *)this + 1232) = *((_BYTE *)this + 1232) & 0xFB | (*((_DWORD *)a3 + 5) != 0 ? 4 : 0);
  v7 = *((_BYTE *)this + 200) & 0xDF | (*((_DWORD *)a3 + 6) != 0 ? 0x20 : 0);
  result = 0LL;
  *((_BYTE *)this + 200) = v7;
  *((_BYTE *)this + 1232) &= ~8u;
  *((_BYTE *)this + 1232) |= (v7 >> 2) & 8;
  return result;
}
