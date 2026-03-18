/*
 * XREFs of ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00D4F4C
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00D4AB4 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00D4E30 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C012DDFC (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     ?_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z @ 0x1C00D4854 (-_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00D4948 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1C00D5104 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00D5574 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___ @ 0x1C00D5640 (unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___--_unique_ptr_UmfdAllocatio.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C00D5664 (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?TryProbeForRead@@YA_NPEAXII@Z @ 0x1C00D58F0 (-TryProbeForRead@@YA_NPEAXII@Z.c)
 */

char *__fastcall UmfdAllocation::ObtainKernelmodeAllocation(
        int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _BYTE *a5,
        unsigned __int8 (__fastcall *a6)(void *, __int64, _QWORD))
{
  PVOID v6; // rbx
  struct UmfdAllocation *v11; // rsi
  unsigned int v12; // r8d
  _DWORD *v13; // rdi
  _DWORD *v14; // rax
  _DWORD *v15; // rsi
  PVOID v16; // rbx
  struct UmfdAllocation *v17; // rax
  struct UmfdAllocation *v18; // r15
  _DWORD *v20; // [rsp+30h] [rbp-48h] BYREF

  v6 = UmfdAllocation::s_allocationLookupLock;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  v11 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v13 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( v11 )
  {
    if ( UmfdAllocation::_ValidateAllocationPair(a1, a2, (__int64)v11, a3, a4, a6) )
      return (char *)v11 + 28;
    UmfdAllocation::ReleaseKernelmodeAllocation((char *)v11 + 28);
  }
  else if ( TryProbeForRead(a3, a4, v12) && a4 + 28 >= a4 )
  {
    v14 = EngAllocMem(0, a4 + 28, 0x61646647u);
    v20 = v14;
    v15 = v14;
    if ( v14 )
    {
      v14[1] = a1;
      *((_QWORD *)v14 + 1) = a2;
      v14[6] = a4;
      *v14 = 1;
      *((_QWORD *)v14 + 2) = a3;
      if ( TryCopyMemoryFromProbedPointer(v14 + 7, a3, a4) )
      {
        v16 = UmfdAllocation::s_allocationLookupLock;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v16, 0LL);
        v17 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
        v18 = v17;
        if ( v17 )
        {
          if ( UmfdAllocation::_ValidateAllocationPair(a1, a2, (__int64)v17, a3, a4, a6) )
            v13 = (_DWORD *)((char *)v18 + 28);
          else
            UmfdAllocation::ReleaseKernelmodeAllocation((char *)v18 + 28);
        }
        else if ( NSInstrumentation::CPointerHashTable::Insert(UmfdAllocation::s_allocationLookup, a3, v15 + 7) )
        {
          ExReleasePushLockExclusiveEx(v16, 0LL);
          KeLeaveCriticalRegion();
          v20 = 0LL;
          if ( a5 )
            *a5 = 1;
          v13 = v15 + 7;
          goto LABEL_13;
        }
        ExReleasePushLockExclusiveEx(v16, 0LL);
        KeLeaveCriticalRegion();
      }
    }
LABEL_13:
    unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___(&v20);
    return (char *)v13;
  }
  return 0LL;
}
