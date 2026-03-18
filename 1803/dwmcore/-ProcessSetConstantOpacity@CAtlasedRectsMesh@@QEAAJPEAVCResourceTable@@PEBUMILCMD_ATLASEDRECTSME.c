/*
 * XREFs of ?ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY@@@Z @ 0x18001C140
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessSetConstantOpacity(
        CAtlasedRectsMesh *this,
        struct CResourceTable *a2,
        const struct MILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rax

  if ( *((_DWORD *)this + 15) == *((_DWORD *)this + 24) >> 2 )
  {
    v4 = 0;
    if ( *((_DWORD *)this + 15) )
    {
      v5 = *((unsigned int *)this + 15);
      v6 = 0LL;
      do
      {
        *(_DWORD *)(v6 + *((_QWORD *)this + 13)) = *((_DWORD *)a3 + 2);
        v6 += 4LL;
        --v5;
      }
      while ( v5 );
    }
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x2Eu);
  }
  return v4;
}
