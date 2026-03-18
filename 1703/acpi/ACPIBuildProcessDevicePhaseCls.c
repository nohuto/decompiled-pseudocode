/*
 * XREFs of ACPIBuildProcessDevicePhaseCls @ 0x1C00097D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCls(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx

  v4 = *(_QWORD *)(a1 + 40);
  v6 = AMLIGetNamedChild(*(_QWORD *)(v4 + 712), 1397506911LL, a3, a4);
  v8 = 0;
  *(_DWORD *)(a1 + 32) = 13;
  if ( v6 && (*(_BYTE *)(v4 + 952) & 4) == 0 )
  {
    AMLIDereferenceHandleEx(v6, v7);
    _InterlockedOr64((volatile signed __int64 *)(v4 + 952), 4uLL);
    v8 = ACPIGet((__int64 *)v4, 1397506911, 537165824, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v4 + 592, 0LL);
    *(_DWORD *)(a1 + 32) = 12;
  }
  if ( *(_DWORD *)(a1 + 32) == 13 )
    v8 = ACPIGet(
           (__int64 *)v4,
           1096045407,
           -1610348542,
           0LL,
           0,
           (__int64)ACPIBuildCompleteMustSucceed,
           a1,
           a1 + 128,
           0LL);
  if ( v8 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v8;
}
