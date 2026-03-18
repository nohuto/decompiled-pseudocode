/*
 * XREFs of ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x18009CE6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18009B68C (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteImage(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSPRITEIMAGE *a3)
{
  unsigned int v3; // r9d
  struct ISpriteImage *v5; // rdx
  signed int v7; // eax
  unsigned int v8; // ebx
  __int64 Resource; // rax

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  if ( !v3 )
    goto LABEL_2;
  if ( v3 < *((_DWORD *)a2 + 7) )
    LODWORD(v5) = *(_DWORD *)(v3 * *((_DWORD *)a2 + 6) + *((_QWORD *)a2 + 5));
  if ( (_DWORD)v5 == 53
    && ((Resource = CResourceTable::GetResource(a2, v3, 53LL)) == 0
      ? (v5 = 0LL)
      : (v5 = (struct ISpriteImage *)(Resource + 56)),
        v5) )
  {
LABEL_2:
    v7 = CWindowNode::SetSpriteImage(this, v5);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x5D7u);
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x5D3u);
  }
  return v8;
}
