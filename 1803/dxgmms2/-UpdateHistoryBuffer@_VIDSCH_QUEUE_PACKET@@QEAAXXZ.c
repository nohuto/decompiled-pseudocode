/*
 * XREFs of ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0006908
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0074F20 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00BC4E4 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(_VIDSCH_QUEUE_PACKET *this)
{
  __int64 i; // r10
  __int64 **v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r11

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 154); i = (unsigned int)(i + 1) )
  {
    v2 = *(__int64 ***)(*((_QWORD *)this + 76) + 8 * i);
    if ( v2 )
    {
      v3 = *((_QWORD *)this + 33);
      v4 = **v2;
      if ( (*(_WORD *)(v4 + 76) & 0x3F) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 96LL) + 6LL) )
      {
        *(_QWORD *)(v3 + 16LL * (unsigned int)i) = *(_QWORD *)(v4 + 368);
        *(_DWORD *)(*((_QWORD *)this + 33) + 16LL * (unsigned int)i + 8) = *(_DWORD *)(v4 + 16);
      }
      else
      {
        *(_QWORD *)(v3 + 16LL * (unsigned int)i) = 0LL;
        *(_DWORD *)(*((_QWORD *)this + 33) + 16LL * (unsigned int)i + 8) = 0;
      }
    }
  }
}
