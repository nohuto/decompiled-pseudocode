/*
 * XREFs of ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x1800B2ECC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x18006791C (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ??0EdgyProcessor@@QEAA@XZ @ 0x1800B2F78 (--0EdgyProcessor@@QEAA@XZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessor::Create(struct EdgyProcessor **a1)
{
  int v2; // ebx
  void *v3; // rax
  void *v4; // rbx
  EdgyProcessor *v5; // rdi

  if ( a1 )
  {
    v3 = malloc(0x70uLL);
    v4 = v3;
    if ( v3 )
      memset_0(v3, 0, 0x70uLL);
    if ( v4 )
    {
      memset_0(v4, 0, 0x70uLL);
      v5 = EdgyProcessor::EdgyProcessor((EdgyProcessor *)v4);
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      v2 = EdgyConnection::Initialize(*((EdgyConnection **)v5 + 11));
      if ( v2 < 0 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v5 + 1) + 24LL))((__int64)v5 + 8, 1LL);
      else
        *a1 = v5;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v2;
}
