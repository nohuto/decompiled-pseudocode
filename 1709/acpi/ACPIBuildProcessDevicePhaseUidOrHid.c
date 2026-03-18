/*
 * XREFs of ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028F80
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0014D80 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseUidOrHid(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145653343);
  v4 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145656671);
  if ( v4 )
  {
    AMLIDereferenceHandleEx((__int64)v3);
    v5 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 8;
    if ( v5 )
    {
      AMLIDereferenceHandleEx(v5);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v4;
    v6 = v1 + 568;
    v7 = 1145656671;
    v8 = 671613062;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 7;
    if ( v12 )
    {
      AMLIDereferenceHandleEx(v12);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v3;
    v6 = v1 + 560;
    v7 = 1145653343;
    v8 = 671612966;
  }
  v9 = ACPIGet((__int64 *)v1, v7, v8, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v6, 0LL);
  v10 = v9;
  if ( v9 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v9, 0LL, a1);
  return v10;
}
