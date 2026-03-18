/*
 * XREFs of ACPIBuildProcessDevicePhaseCls @ 0x1C000CE60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCls(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1397506911);
  *(_DWORD *)(a1 + 32) = 13;
  if ( !v3 || (*(_BYTE *)(v1 + 952) & 4) != 0 )
  {
    v4 = ACPIGet(v1, 0x4154535Fu, -1610348542, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  else
  {
    AMLIDereferenceHandleEx((volatile signed __int32 *)v3);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 4uLL);
    v4 = ACPIGet(v1, 0x534C435Fu, 537165824, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 592, 0LL);
    *(_DWORD *)(a1 + 32) = 12;
  }
  v5 = v4;
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v5;
}
