/*
 * XREFs of MiReturnVadQuota @ 0x140495B20
 * Callers:
 *     MiFinishVadDeletion @ 0x140037A20 (MiFinishVadDeletion.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140036640 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 */

__int64 __fastcall MiReturnVadQuota(__int64 a1, struct _KPROCESS *a2, int a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  v6 = *(unsigned int *)(a1 + 52);
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v7 = v6 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  result = 0x7FFFFFFFELL;
  if ( v7 < 0x7FFFFFFFELL )
  {
    result = PsReturnProcessNonPagedPoolQuota(a2, 136LL);
    if ( a3 == 1 )
    {
      result = MiVadPureReserve(a1);
      if ( !(_DWORD)result )
        return PsReturnProcessPagedPoolQuota(
                 a2,
                 8
               * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
               + 8);
    }
  }
  return result;
}
