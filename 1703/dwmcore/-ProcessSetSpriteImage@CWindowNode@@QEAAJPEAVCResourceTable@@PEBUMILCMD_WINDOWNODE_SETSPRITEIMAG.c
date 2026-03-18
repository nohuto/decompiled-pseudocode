/*
 * XREFs of ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x180053D74
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180052CE8 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteImage(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSPRITEIMAGE *a3)
{
  unsigned int v3; // r9d
  struct ISpriteImage *v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 Resource; // rax
  __int64 v11; // rcx

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  if ( !v3 )
    goto LABEL_2;
  if ( v3 < *((_DWORD *)a2 + 7) )
    LODWORD(v5) = *(_DWORD *)(v3 * *((_DWORD *)a2 + 6) + *((_QWORD *)a2 + 5));
  if ( (_DWORD)v5 == 98
    && ((Resource = CResourceTable::GetResource(a2, v3, 98LL)) == 0 ? (v11 = 0LL) : (v11 = Resource - 16),
        (v5 = (struct ISpriteImage *)((v11 + 88) & -(__int64)(v11 != 0))) != 0LL) )
  {
LABEL_2:
    v7 = CWindowNode::SetSpriteImage(this, v5);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5ECu);
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x5E8u);
  }
  return v8;
}
