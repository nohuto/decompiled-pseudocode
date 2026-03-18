/*
 * XREFs of ACPIBuildProcessDevicePhaseSub @ 0x1C000E750
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseSub(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 *v5; // rax
  volatile signed __int32 *v6; // rbp

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 16;
  }
  else
  {
    v5 = AMLIGetNamedChild(*(_QWORD **)(v2 + 712), 1112888159);
    *(_DWORD *)(a1 + 32) = 11;
    v6 = (volatile signed __int32 *)v5;
    if ( v5 )
    {
      if ( (*(_BYTE *)(v2 + 952) & 0x10) != 0 )
      {
        strnlen(*(const char **)(v2 + 576), 9uLL);
        AMLIDereferenceHandleEx(v6);
      }
      else
      {
        AMLIDereferenceHandleEx((volatile signed __int32 *)v5);
        _InterlockedOr64((volatile signed __int64 *)(v2 + 952), 0x10uLL);
        *(_DWORD *)(a1 + 32) = 10;
        v1 = ACPIGet(v2, 0x4255535Fu, 671612932, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v2 + 576, 0LL);
      }
      if ( v1 == 259 )
        return 0;
    }
  }
  ACPIBuildCompleteMustSucceed(0LL, v1, 0LL, a1);
  return v1;
}
