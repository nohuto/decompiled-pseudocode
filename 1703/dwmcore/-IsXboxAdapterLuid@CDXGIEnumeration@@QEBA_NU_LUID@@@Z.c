/*
 * XREFs of ?IsXboxAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x1800465C0
 * Callers:
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800428F8 (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDXGIEnumeration::IsXboxAdapterLuid(CDXGIEnumeration *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  char v3; // bl
  unsigned int v4; // r8d
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 22);
  v3 = 0;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 8);
    while ( a2 != *(_QWORD *)(*(_QWORD *)(v5 + 8LL * v4) + 336LL) )
    {
      if ( ++v4 >= v2 )
        return v3;
    }
    return wcsstr((const wchar_t *)(*(_QWORD *)(v5 + 8LL * v4) + 40LL), L"SraKmd") != 0LL;
  }
  return v3;
}
