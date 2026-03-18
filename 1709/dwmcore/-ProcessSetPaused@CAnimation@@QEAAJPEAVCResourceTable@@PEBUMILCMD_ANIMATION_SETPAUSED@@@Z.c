/*
 * XREFs of ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x18002CBEC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::ProcessSetPaused(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETPAUSED *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
  if ( v4 >= *((_QWORD *)this + 17) )
  {
    if ( (*((_BYTE *)this + 112) & 0x10) != 0 )
    {
      if ( !*((_DWORD *)a3 + 2) )
        *((_QWORD *)this + 26) = v4;
    }
    else if ( *((_DWORD *)a3 + 2) )
    {
      *((_QWORD *)this + 25) += v4 - *((_QWORD *)this + 26);
    }
  }
  result = 0LL;
  *((_BYTE *)this + 112) = *((_BYTE *)this + 112) & 0xEF | (*((_DWORD *)a3 + 2) != 0 ? 0x10 : 0);
  return result;
}
