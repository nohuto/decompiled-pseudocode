/*
 * XREFs of ?GetIndexCount@CGeometry2DGroup@@UEAAIXZ @ 0x180180D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetIndexCount(CGeometry2DGroup *this)
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
    if ( (*((_BYTE *)this + 152) & 4) != 0 )
    {
      v4 = 0;
      for ( i = 0; i < *((_DWORD *)this + 24); ++i )
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * i);
        if ( v6 )
          v4 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6);
      }
      *((_DWORD *)this + 38) &= ~4u;
      *((_DWORD *)this + 28) = v4;
    }
    v2 = *((_DWORD *)this + 28);
  }
  result = v2;
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return result;
}
