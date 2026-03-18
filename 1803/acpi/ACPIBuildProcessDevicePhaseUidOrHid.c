/*
 * XREFs of ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseUidOrHid(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v3; // esi
  __int64 *v4; // rdi
  __int64 *v5; // rbp
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  volatile signed __int32 *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 1145656671;
  v4 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1145653343);
  v5 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1145656671);
  if ( v5 )
  {
    AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
    v6 = *(volatile signed __int32 **)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 8;
    if ( v6 )
    {
      AMLIDereferenceHandleEx(v6);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v7 = 568LL;
    v8 = 671613062;
  }
  else
  {
    v9 = *(volatile signed __int32 **)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 7;
    if ( v9 )
    {
      AMLIDereferenceHandleEx(v9);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v3 = 1145653343;
    v7 = 560LL;
    v8 = 671612966;
    v5 = v4;
  }
  *(_QWORD *)(a1 + 56) = v5;
  v10 = ACPIGet(v1, v3, v8, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + v7, 0LL);
  v11 = v10;
  if ( v10 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v10, 0LL, a1);
  return v11;
}
