/*
 * XREFs of ?GetVertexCount@CGeometry2DGroup@@UEAAIXZ @ 0x180181060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetVertexCount(CGeometry2DGroup *this)
{
  int v1; // eax
  unsigned int v2; // edi
  int v4; // ebp
  unsigned int i; // esi
  __int64 v6; // rcx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 8);
  v2 = 0;
  *((_DWORD *)this + 8) = v1 ^ ((unsigned __int8)v1 ^ (unsigned __int8)(v1 + 2)) & 6;
  if ( (((unsigned __int8)v1 ^ ((unsigned __int8)v1 ^ (unsigned __int8)(v1 + 2)) & 6) & 6) == 2 )
  {
    if ( (*((_BYTE *)this + 152) & 8) != 0 )
    {
      v4 = 0;
      for ( i = 0; i < *((_DWORD *)this + 24); ++i )
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * i);
        if ( v6 )
          v4 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6);
      }
      *((_DWORD *)this + 38) &= ~8u;
      *((_DWORD *)this + 29) = v4;
    }
    v2 = *((_DWORD *)this + 29);
  }
  result = v2;
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return result;
}
