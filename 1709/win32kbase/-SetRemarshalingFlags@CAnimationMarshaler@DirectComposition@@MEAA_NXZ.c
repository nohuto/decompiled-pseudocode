/*
 * XREFs of ?SetRemarshalingFlags@CAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0148B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationMarshaler *this)
{
  unsigned __int8 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax

  *((_DWORD *)this + 4) &= 0xFFFFD13F;
  if ( *((_DWORD *)this + 52) )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( *((_QWORD *)this + 27) )
    *((_DWORD *)this + 57) = 0;
  v2 = *((_BYTE *)this + 184);
  if ( ((v2 >> 2) & ((*((_DWORD *)this + 4) & 0x4000) == 0)) != 0 )
  {
    v3 = *((_QWORD *)this + 7);
    *((_DWORD *)this + 4) |= 0x4000u;
    *(_BYTE *)(v3 + 28) = (v2 & 4) != 0;
  }
  v4 = *((_QWORD *)this + 24);
  if ( v4 || *((_QWORD *)this + 25) != *((_QWORD *)this + 11) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 4) = v5 | 0x8000;
      *(_QWORD *)(*((_QWORD *)this + 7) + 32LL) = v4;
      *(_QWORD *)(*((_QWORD *)this + 7) + 40LL) = *((_QWORD *)this + 25);
    }
  }
  return *((_QWORD *)this + 10) != 0LL;
}
