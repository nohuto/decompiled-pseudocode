/*
 * XREFs of KiFatalExceptionFilter @ 0x140832C9C
 * Callers:
 *     KiLockServiceTable @ 0x14013A410 (KiLockServiceTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AE2D0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlLookupExceptionHandler @ 0x14013A608 (RtlLookupExceptionHandler.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 KiFatalExceptionFilter()
{
  struct _KPRCB *CurrentPrcb; // rdi
  NTSTATUS v1; // eax
  __int64 v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // rdx
  char *v5; // rbx
  unsigned int *v6; // rcx
  int v7; // eax
  __int64 result; // rax
  int v9; // r8d
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->HalReserved[6] = (unsigned __int64)KiServiceTablesLocked;
  v1 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, 1, 3u, (int)&v10, &v11);
  v3 = v11;
  if ( v1 < 0 )
    v3 = 0LL;
  if ( !v3 )
    KeBugCheck(0x31u);
  v4 = v10 / 0xCuLL;
  if ( !(_DWORD)v4 )
    goto LABEL_21;
  v5 = (char *)KiServiceTablesLocked - 0x140000000LL;
  v6 = (unsigned int *)(v3 + 12LL * (unsigned int)(v4 - 1));
  if ( (unsigned __int64)KiServiceTablesLocked - 0x140000000LL < *v6 )
  {
    v9 = v4 - 2;
    v2 = 0LL;
    while ( v9 >= (int)v2 )
    {
      v4 = (unsigned int)((v9 + (int)v2) >> 1);
      v6 = (unsigned int *)(v3 + 12LL * (int)v4);
      if ( (unsigned __int64)v5 >= *v6 )
      {
        if ( (unsigned __int64)v5 < v6[3] )
          break;
        v2 = (unsigned int)(v4 + 1);
      }
      else
      {
        v9 = v4 - 1;
      }
    }
  }
  if ( (unsigned __int64)v5 < *v6 || (unsigned __int64)v5 >= v6[1] )
    v6 = 0LL;
  if ( !v6 )
LABEL_21:
    KeBugCheck(0x31u);
  v7 = RtlLookupExceptionHandler((__int64)v6, v4, 1u, v2, &v12, 0LL);
  if ( v7 < 0 )
    KeBugCheckEx(0x31u, v7, 0LL, 0LL, 0LL);
  CurrentPrcb->HalReserved[5] = v12;
  result = 0LL;
  KiHardwareTriggerLock = 0LL;
  return result;
}
