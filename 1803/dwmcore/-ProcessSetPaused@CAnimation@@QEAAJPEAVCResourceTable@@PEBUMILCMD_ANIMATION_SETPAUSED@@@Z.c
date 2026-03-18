/*
 * XREFs of ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x18004052C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::ProcessSetPaused(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETPAUSED *a3)
{
  unsigned __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
  if ( v4 >= *((_QWORD *)this + 17) )
  {
    v5 = *((_DWORD *)a3 + 2);
    if ( (*((_BYTE *)this + 112) & 0x10) != 0 )
    {
      if ( !v5 )
        *((_QWORD *)this + 26) = v4;
    }
    else if ( v5 )
    {
      *((_QWORD *)this + 25) += v4 - *((_QWORD *)this + 26);
    }
  }
  result = 0LL;
  *((_BYTE *)this + 112) = *((_BYTE *)this + 112) & 0xEF | (*((_DWORD *)a3 + 2) != 0 ? 0x10 : 0);
  return result;
}
