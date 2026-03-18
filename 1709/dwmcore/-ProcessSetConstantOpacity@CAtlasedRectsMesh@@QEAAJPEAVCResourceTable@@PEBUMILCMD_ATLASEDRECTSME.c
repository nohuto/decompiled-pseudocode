/*
 * XREFs of ?ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY@@@Z @ 0x1800B609C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessSetConstantOpacity(
        CAtlasedRectsMesh *this,
        struct CResourceTable *a2,
        const struct MILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  __int64 v6; // rax

  v3 = 0;
  if ( *((_DWORD *)this + 15) == *((_DWORD *)this + 24) >> 2 )
  {
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
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x2Eu);
  }
  return v3;
}
