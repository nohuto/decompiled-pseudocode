/*
 * XREFs of RtlpHpStackTraceSerialize @ 0x180100AE0
 * Callers:
 *     RtlQueryHeapInformation @ 0x1800137A0 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180012914 (RtlpEnumProcessHeaps.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180100BC8 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlStackDbContextSerialize @ 0x18010CF2C (RtlStackDbContextSerialize.c)
 */

__int64 __fastcall RtlpHpStackTraceSerialize(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v6; // ebx

  v3 = 0;
  if ( a2 != 32 || *(_DWORD *)a1 != 1 )
  {
    v6 = -1073741811;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 8) == -1LL )
  {
    v3 = 1;
    RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
    if ( (dword_180160378 & 1) == 0 || (dword_180160378 & 2) == 0 )
    {
      v6 = -1073741811;
      goto LABEL_15;
    }
    v6 = RtlStackDbContextSerialize(&qword_180160380, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
    if ( v6 < 0 )
      goto LABEL_15;
    v6 = RtlpEnumProcessHeaps((__int64 (__fastcall *)(_QWORD, _QWORD))RtlpHpStackTraceHeapSerialize, a1, 0);
    if ( v6 < 0 )
      goto LABEL_15;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 16))(0LL, 0LL, *(_QWORD *)(a1 + 24));
    if ( v6 < 0 )
      goto LABEL_15;
    v6 = 0;
    if ( a3 )
      goto LABEL_15;
LABEL_14:
    if ( !v3 )
      return (unsigned int)v6;
LABEL_15:
    RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
    return (unsigned int)v6;
  }
  return (unsigned int)RtlpHpStackTraceSerializeRemote();
}
