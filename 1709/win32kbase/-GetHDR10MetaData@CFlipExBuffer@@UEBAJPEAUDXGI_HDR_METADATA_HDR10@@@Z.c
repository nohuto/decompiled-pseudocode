/*
 * XREFs of ?GetHDR10MetaData@CFlipExBuffer@@UEBAJPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1C0153020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::GetHDR10MetaData(CFlipExBuffer *this, struct DXGI_HDR_METADATA_HDR10 *a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 42);
  if ( v2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)v2;
    *((_QWORD *)a2 + 2) = *(_QWORD *)(v2 + 16);
    *((_DWORD *)a2 + 6) = *(_DWORD *)(v2 + 24);
  }
  return v2 == 0 ? 0xC0000001 : 0;
}
