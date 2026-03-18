/*
 * XREFs of ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C0148D08
 * Callers:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C01481D0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 */

__int64 __fastcall DirectComposition::CEffectInputSet::Initialize(
        DirectComposition::CEffectInputSet *this,
        unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  unsigned __int64 i; // rcx
  void *v6; // rax
  void *v7; // rax

  v2 = 0;
  *(_DWORD *)this = a2;
  if ( !a2 )
    return v2;
  if ( !is_mul_ok(a2, 4uLL) )
    return (unsigned int)-1073741675;
  v4 = Win32AllocPoolWithQuota(4LL * a2, 0x66664344u);
  *((_QWORD *)this + 2) = v4;
  if ( !v4 )
    return (unsigned int)-1073741801;
  for ( i = 0LL; i < *(unsigned int *)this; *(_DWORD *)(*((_QWORD *)this + 2) + 4 * i++) = 2 )
    ;
  **((_DWORD **)this + 2) = 0;
  if ( !is_mul_ok(*(unsigned int *)this, 0x10uLL) )
    return (unsigned int)-1073741675;
  v6 = Win32AllocPoolWithQuotaZInit(16LL * *(unsigned int *)this, 0x6A664344u);
  *((_QWORD *)this + 3) = v6;
  if ( !v6 )
    v2 = -1073741801;
  if ( (v2 & 0x80000000) == 0 )
  {
    if ( is_mul_ok(*(unsigned int *)this, 8uLL) )
    {
      v2 = 0;
      v7 = Win32AllocPoolWithQuotaZInit(8LL * *(unsigned int *)this, 0x69664344u);
      *((_QWORD *)this + 1) = v7;
      if ( !v7 )
        return (unsigned int)-1073741801;
      return v2;
    }
    return (unsigned int)-1073741675;
  }
  return v2;
}
