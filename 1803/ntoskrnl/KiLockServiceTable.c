/*
 * XREFs of KiLockServiceTable @ 0x140169E9C
 * Callers:
 *     KeCompactServiceTable @ 0x140169E24 (KeCompactServiceTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14003FAC0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlLookupExceptionHandler @ 0x140184C94 (RtlLookupExceptionHandler.c)
 *     KiLockExtendedServiceTable @ 0x1401928C8 (KiLockExtendedServiceTable.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 *     KiFastGetCallersAddress @ 0x1408982AC (KiFastGetCallersAddress.c)
 *     KiFatalExceptionFilter @ 0x1408C5BA8 (KiFatalExceptionFilter.c)
 */

__int64 __fastcall KiLockServiceTable(ULONG_PTR a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  NTSTATUS v6; // eax
  __int64 v7; // r11
  __int64 CallersAddress; // r8
  __int64 v9; // r11
  unsigned __int128 v10; // rax
  signed int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned int *v13; // rcx
  int v14; // r10d
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // r8
  unsigned int i; // ecx
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  unsigned int *v20; // [rsp+48h] [rbp-20h]
  unsigned int *v21; // [rsp+50h] [rbp-18h]
  unsigned int *v22; // [rsp+58h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+20h] BYREF

  result = KiLockExtendedServiceTable(a1);
  if ( !a4 )
  {
    v6 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, 1, 3u, (int)&v23, &v19);
    v7 = v19;
    if ( v6 < 0 )
      v7 = 0LL;
    v19 = v7;
    if ( !v7 )
      KeBugCheck(0x31u);
    CallersAddress = KiFastGetCallersAddress();
    v10 = v23 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v11 = v23 / 0xC;
    if ( !(v23 / 0xC) )
      goto LABEL_34;
    v12 = CallersAddress - 0x140000000LL;
    v13 = (unsigned int *)(v9 + 12LL * (unsigned int)(v11 - 1));
    v20 = v13;
    if ( v12 < *v13 )
    {
      DWORD2(v10) = 0;
      v11 -= 2;
      while ( v11 >= SDWORD2(v10) )
      {
        v14 = (v11 + DWORD2(v10)) >> 1;
        v13 = (unsigned int *)(v9 + 12LL * v14);
        v20 = v13;
        if ( v12 >= *v13 )
        {
          if ( v12 < v13[3] )
            break;
          DWORD2(v10) = v14 + 1;
        }
        else
        {
          v11 = v14 - 1;
        }
      }
    }
    if ( v12 < *v13 || v12 >= v13[1] )
      v13 = 0LL;
    if ( !v13 )
LABEL_34:
      KeBugCheck(0x31u);
    v21 = v13;
    v15 = v13[2];
    if ( (v15 & 1) != 0 )
    {
      v13 = (unsigned int *)(v15 + 0x140000000LL - 1);
      v21 = v13;
      if ( 0x140000000LL <= 0x7FFFFFFEFFFFuLL )
      {
        if ( ((unsigned __int8)v13 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        DWORD2(v10) = -65536;
      }
    }
    v16 = RtlLookupExceptionHandler((_DWORD)v13, DWORD2(v10), 1, v11, 0LL, (__int64)&v22);
    if ( v16 < 0 )
      KeBugCheckEx(0x31u, v16, 0LL, 0LL, 0LL);
    v17 = 1LL;
    for ( i = 0; i < *v22; ++i )
    {
      if ( i )
      {
        if ( v22[4 * i + 3] != (_DWORD)v17 )
          KeBugCheck(0x31u);
      }
      v17 = v22[4 * i + 3];
    }
    if ( (_DWORD)v17 == 1 )
      KeBugCheck(0x31u);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned int *))(0x140000000LL + (unsigned int)v17))(
             0LL,
             0LL,
             v17,
             v22);
  }
  return result;
}
