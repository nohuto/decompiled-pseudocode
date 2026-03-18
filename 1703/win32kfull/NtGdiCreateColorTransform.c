/*
 * XREFs of NtGdiCreateColorTransform @ 0x1C0294CD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C029435C (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateColorTransform(
        HDC a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        char *Address,
        unsigned int Size,
        char *a7,
        unsigned int a8)
{
  tagLOGCOLORSPACEW *v10; // rcx
  __int64 v11; // rax
  struct HOBJ__ *v12; // rdi
  int v14; // [rsp+40h] [rbp-308h]
  char *v15; // [rsp+60h] [rbp-2E8h]
  char *v16; // [rsp+68h] [rbp-2E0h]
  char *v17; // [rsp+70h] [rbp-2D8h]
  HANDLE SecureHandle; // [rsp+78h] [rbp-2D0h]
  HANDLE v19; // [rsp+80h] [rbp-2C8h]
  HANDLE v20; // [rsp+88h] [rbp-2C0h]
  tagLOGCOLORSPACEW v22; // [rsp+B0h] [rbp-298h] BYREF

  SecureHandle = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0;
  if ( !a2 )
    return 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = &v22;
  v11 = 4LL;
  do
  {
    *(_OWORD *)&v10->lcsSignature = *(_OWORD *)a2;
    *(_OWORD *)&v10->lcsIntent = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v10->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v10->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
    *(_OWORD *)&v10->lcsGammaBlue = *(_OWORD *)(a2 + 64);
    *(_OWORD *)&v10->lcsFilename[6] = *(_OWORD *)(a2 + 80);
    *(_OWORD *)&v10->lcsFilename[14] = *(_OWORD *)(a2 + 96);
    v10 = (tagLOGCOLORSPACEW *)((char *)v10 + 128);
    *(_OWORD *)&v10[-1].lcsFilename[252] = *(_OWORD *)(a2 + 112);
    a2 += 128LL;
    --v11;
  }
  while ( v11 );
  *(_OWORD *)&v10->lcsSignature = *(_OWORD *)a2;
  *(_OWORD *)&v10->lcsIntent = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v10->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
  *(_OWORD *)&v10->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
  *(_QWORD *)&v10->lcsGammaBlue = *(_QWORD *)(a2 + 64);
  *(_DWORD *)&v10->lcsFilename[2] = *(_DWORD *)(a2 + 72);
  if ( a3 && a4 )
  {
    if ( (unsigned __int64)&a3[a4] > W32UserProbeAddress || &a3[a4] < a3 )
      *W32UserProbeAddress = 0;
    SecureHandle = MmSecureVirtualMemory(a3, a4, 2u);
    if ( SecureHandle )
      v17 = a3;
    else
      v14 = 1;
  }
  if ( Address && Size )
  {
    if ( (unsigned __int64)&Address[Size] > W32UserProbeAddress || &Address[Size] < Address )
      *W32UserProbeAddress = 0;
    v19 = MmSecureVirtualMemory(Address, Size, 2u);
    if ( v19 )
      v16 = Address;
    else
      v14 = 1;
  }
  if ( a7 && a8 )
  {
    if ( (unsigned __int64)&a7[a8] > W32UserProbeAddress || &a7[a8] < a7 )
      *W32UserProbeAddress = 0;
    v20 = MmSecureVirtualMemory(a7, a8, 2u);
    if ( v20 )
      v15 = a7;
    else
      v14 = 1;
  }
  v12 = 0LL;
  if ( !v14 )
    v12 = GreCreateColorTransform(a1, &v22, v17, a4, v16, Size, v15, a8);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v19 )
    MmUnsecureVirtualMemory(v19);
  if ( v20 )
    MmUnsecureVirtualMemory(v20);
  return v12;
}
