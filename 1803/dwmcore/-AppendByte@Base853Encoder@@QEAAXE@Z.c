/*
 * XREFs of ?AppendByte@Base853Encoder@@QEAAXE@Z @ 0x180140A64
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x1800D3084 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x1800D3354 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 */

void __fastcall Base853Encoder::AppendByte(Base853Encoder *this, __int64 a2)
{
  int v2; // ebx
  int v4; // r8d

  v2 = (unsigned __int8)a2;
  Base853Encoder::EnsureZeroesAreSerialized(this, a2);
  v4 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 2) |= v2 << (8 * (3 - v4));
  *((_DWORD *)this + 3) = v4 + 1;
  if ( v4 == 3 )
    Base853Encoder::EncodeBlock(this);
}
