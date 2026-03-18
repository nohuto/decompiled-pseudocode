/*
 * XREFs of SeComputeQuotaInformationSize @ 0x1404F5020
 * Callers:
 *     ObSetSecurityDescriptorInfo @ 0x1404F3C20 (ObSetSecurityDescriptorInfo.c)
 *     ObpChargeQuotaForObject @ 0x1404F4E9C (ObpChargeQuotaForObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14052DF10 (ObpCaptureObjectCreateInformation.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeComputeQuotaInformationSize(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int16 v5; // dx
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rcx

  v2 = 0LL;
  *a2 = 0;
  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v5 = *(_WORD *)(a1 + 2);
  if ( v5 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v6 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v6 )
      v7 = a1 + v6;
    else
      v7 = 0LL;
  }
  if ( (~(_BYTE)v5 & 4) == 0 )
  {
    if ( v5 >= 0 )
    {
      v2 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v8 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v8 )
        v2 = a1 + v8;
    }
  }
  if ( v7 )
    *a2 = (4 * *(unsigned __int8 *)(v7 + 1) + 11) & 0xFFFFFFFC;
  if ( v2 )
    *a2 += (*(unsigned __int16 *)(v2 + 2) + 3) & 0xFFFFFFFC;
  return 0LL;
}
