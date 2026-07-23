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

__int64 __fastcall KiFatalExceptionFilter(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  NTSTATUS v3; // eax
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  char *v7; // rbx
  unsigned int *v8; // rcx
  int v9; // eax
  __int64 result; // rax
  int v11; // r8d
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  LOBYTE(a2) = 1;
  CurrentPrcb->HalReserved[6] = (unsigned __int64)KiServiceTablesLocked;
  v3 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, a2, 3LL, (__int64)&v12, &v13);
  v5 = v13;
  if ( v3 < 0 )
    v5 = 0LL;
  if ( !v5 )
    KeBugCheck(0x31u);
  v6 = v12 / 0xCuLL;
  if ( !(_DWORD)v6 )
    goto LABEL_21;
  v7 = (char *)KiServiceTablesLocked - 0x140000000LL;
  v8 = (unsigned int *)(v5 + 12LL * (unsigned int)(v6 - 1));
  if ( (unsigned __int64)KiServiceTablesLocked - 0x140000000LL < *v8 )
  {
    v11 = v6 - 2;
    v4 = 0LL;
    while ( v11 >= (int)v4 )
    {
      v6 = (unsigned int)((v11 + (int)v4) >> 1);
      v8 = (unsigned int *)(v5 + 12LL * (int)v6);
      if ( (unsigned __int64)v7 >= *v8 )
      {
        if ( (unsigned __int64)v7 < v8[3] )
          break;
        v4 = (unsigned int)(v6 + 1);
      }
      else
      {
        v11 = v6 - 1;
      }
    }
  }
  if ( (unsigned __int64)v7 < *v8 || (unsigned __int64)v7 >= v8[1] )
    v8 = 0LL;
  if ( !v8 )
LABEL_21:
    KeBugCheck(0x31u);
  v9 = RtlLookupExceptionHandler((__int64)v8, v6, 1u, v4, &v14, 0LL);
  if ( v9 < 0 )
    KeBugCheckEx(0x31u, v9, 0LL, 0LL, 0LL);
  CurrentPrcb->HalReserved[5] = v14;
  result = 0LL;
  KiHardwareTriggerLock = 0LL;
  return result;
}
