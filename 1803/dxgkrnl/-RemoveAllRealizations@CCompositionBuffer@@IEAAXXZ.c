/*
 * XREFs of ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x1C000A044
 * Callers:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C000A104 (--1CCompositionBuffer@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionBuffer::RemoveAllRealizations(CCompositionBuffer *this)
{
  char *v2; // rbx
  __int64 v3; // rax
  char **v4; // rcx

  if ( *((_DWORD *)this + 60) )
  {
    v2 = (char *)this + 224;
    v3 = *((_QWORD *)this + 29);
    if ( *(CCompositionBuffer **)v3 != (CCompositionBuffer *)((char *)this + 224)
      || (v4 = *(char ***)(v3 + 8), *v4 != (char *)v3) )
    {
      __fastfail(3u);
    }
    while ( 1 )
    {
      *((_QWORD *)v2 + 1) = v4;
      *v4 = v2;
      if ( (char *)v3 == v2 )
        break;
      if ( v3 != 8 )
        (**(void (__fastcall ***)(__int64, __int64))(v3 - 8))(v3 - 8, 1LL);
      v3 = *((_QWORD *)v2 + 1);
      if ( *(char **)v3 == v2 )
      {
        v4 = *(char ***)(v3 + 8);
        if ( *v4 == (char *)v3 )
          continue;
      }
      __fastfail(3u);
    }
    *((_DWORD *)this + 60) = 0;
  }
}
