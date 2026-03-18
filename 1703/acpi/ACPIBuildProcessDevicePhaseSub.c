/*
 * XREFs of ACPIBuildProcessDevicePhaseSub @ 0x1C000FFF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseSub(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rbp
  __int64 v8; // rdx

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 16;
  }
  else
  {
    v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 712), 1112888159);
    *(_DWORD *)(a1 + 32) = 11;
    v6 = v4;
    if ( v4 )
    {
      if ( (*(_BYTE *)(v2 + 952) & 0x10) != 0 )
      {
        strnlen(*(const char **)(v2 + 576), 9uLL);
        AMLIDereferenceHandleEx(v6, v8);
      }
      else
      {
        AMLIDereferenceHandleEx(v4, v5);
        _InterlockedOr64((volatile signed __int64 *)(v2 + 952), 0x10uLL);
        *(_DWORD *)(a1 + 32) = 10;
        v1 = ACPIGet(
               (__int64 *)v2,
               1112888159,
               671612932,
               0LL,
               0,
               (__int64)ACPIBuildCompleteMustSucceed,
               a1,
               v2 + 576,
               0LL);
      }
      if ( v1 == 259 )
        return 0;
    }
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return v1;
}
