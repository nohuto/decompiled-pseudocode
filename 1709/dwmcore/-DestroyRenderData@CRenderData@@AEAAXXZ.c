/*
 * XREFs of ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18001E47C
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x18001E558 (--1CRenderData@@MEAA@XZ.c)
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18001EF50 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18000F8DC (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CRenderData::DestroyRenderData(CRenderData *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx

  if ( *((_DWORD *)this + 32) )
  {
    v2 = 0LL;
    v3 = *((unsigned int *)this + 32);
    do
    {
      v4 = *((_QWORD *)this + 13);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v2 + v4));
      *(_QWORD *)(v2 + v4) = 0LL;
      v2 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  *((_DWORD *)this + 32) = 0;
  CDataStreamWriter::Reset((CRenderData *)((char *)this + 56));
  *((_BYTE *)this + 136) = 1;
}
