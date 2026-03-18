/*
 * XREFs of ACPIBuildProcessDevicePhaseCls @ 0x1C0014470
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0014D80 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCls(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v3; // rax
  unsigned int v4; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1397506911);
  v4 = 0;
  *(_DWORD *)(a1 + 32) = 13;
  if ( v3 && (*(_BYTE *)(v1 + 952) & 4) == 0 )
  {
    AMLIDereferenceHandleEx((__int64)v3);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 4uLL);
    v4 = ACPIGet((__int64 *)v1, 1397506911, 537165824, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 592, 0LL);
    *(_DWORD *)(a1 + 32) = 12;
  }
  if ( *(_DWORD *)(a1 + 32) == 13 )
    v4 = ACPIGet(
           (__int64 *)v1,
           1096045407,
           -1610348542,
           0LL,
           0,
           (__int64)ACPIBuildCompleteMustSucceed,
           a1,
           a1 + 128,
           0LL);
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v4;
}
