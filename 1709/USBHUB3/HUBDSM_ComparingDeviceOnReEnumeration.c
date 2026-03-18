/*
 * XREFs of HUBDSM_ComparingDeviceOnReEnumeration @ 0x1C001CCC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBDSM_ComparingDeviceOnReEnumeration(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  const void *v3; // rcx
  unsigned __int16 v4; // r9

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4089;
  v3 = (const void *)(v1 + 1732);
  if ( (*(_DWORD *)(v1 + 2464) & 4) != 0 )
  {
    if ( RtlCompareMemory(v3, (const void *)(v1 + 2528), 0x12uLL) != 18 )
    {
      v4 = 41;
LABEL_6:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        4u,
        5u,
        v4,
        (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
      return 4061;
    }
  }
  else if ( RtlCompareMemory(v3, (const void *)(v1 + 1988), 0x12uLL) != 18 )
  {
    v4 = 42;
    goto LABEL_6;
  }
  return v2;
}
