/*
 * XREFs of HvlpLpCpuid @ 0x140832954
 * Callers:
 *     HvlpDiscoverTopologyAmd @ 0x140832584 (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x1408327D8 (HvlpDiscoverTopologyIntel.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpLpCpuid(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  _DWORD *v13; // rbx
  _DWORD *v14; // rdi
  PHYSICAL_ADDRESS v16[3]; // [rsp+28h] [rbp-60h] BYREF
  PHYSICAL_ADDRESS v17[3]; // [rsp+48h] [rbp-40h] BYREF

  if ( a1 == -1 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a4 = _RAX;
    a4[1] = _RBX;
    a4[2] = _RCX;
    a4[3] = _RDX;
  }
  else
  {
    v13 = (_DWORD *)HvlpAcquireHypercallPage(v17, 1, 0LL, 16LL);
    v14 = (_DWORD *)HvlpAcquireHypercallPage(v16, 2, 0LL, 16LL);
    *v13 = a1;
    v13[1] = 0x10000;
    v13[2] = a2;
    v13[3] = a3;
    HvcallCodeVa();
    *a4 = *v14;
    a4[1] = v14[1];
    a4[2] = v14[2];
    a4[3] = v14[3];
    HvlpReleaseHypercallPage((__int64)v16);
    LOBYTE(_RAX) = HvlpReleaseHypercallPage((__int64)v17);
  }
  return _RAX;
}
