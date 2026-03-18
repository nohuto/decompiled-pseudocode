/*
 * XREFs of KiLockServiceTable @ 0x14013A410
 * Callers:
 *     KeCompactServiceTable @ 0x14013A398 (KeCompactServiceTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AE2D0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlLookupExceptionHandler @ 0x14013A608 (RtlLookupExceptionHandler.c)
 *     KiLockExtendedServiceTable @ 0x1401687E8 (KiLockExtendedServiceTable.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 *     KiFastGetCallersAddress @ 0x1408275AC (KiFastGetCallersAddress.c)
 *     KiFatalExceptionFilter @ 0x140832C9C (KiFatalExceptionFilter.c)
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
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-30h] BYREF
  unsigned int *v19; // [rsp+40h] [rbp-28h]
  unsigned int *v20; // [rsp+48h] [rbp-20h]
  _DWORD *v21; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+20h] BYREF

  result = KiLockExtendedServiceTable(a1);
  if ( !a4 )
  {
    v6 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, 1, 3u, (int)&v22, &v18);
    v7 = v18;
    if ( v6 < 0 )
      v7 = 0LL;
    v18 = v7;
    if ( !v7 )
      KeBugCheck(0x31u);
    CallersAddress = KiFastGetCallersAddress();
    v10 = v22 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v11 = v22 / 0xC;
    if ( !(v22 / 0xC) )
      goto LABEL_29;
    v12 = CallersAddress - 0x140000000LL;
    v13 = (unsigned int *)(v9 + 12LL * (unsigned int)(v11 - 1));
    v19 = v13;
    if ( v12 < *v13 )
    {
      DWORD2(v10) = 0;
      v11 -= 2;
      while ( v11 >= SDWORD2(v10) )
      {
        v14 = (v11 + DWORD2(v10)) >> 1;
        v13 = (unsigned int *)(v9 + 12LL * v14);
        v19 = v13;
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
LABEL_29:
      KeBugCheck(0x31u);
    v20 = v13;
    v15 = v13[2];
    if ( (v15 & 1) != 0 )
    {
      v13 = (unsigned int *)(v15 + 0x140000000LL - 1);
      v20 = v13;
      if ( 0x140000000LL <= 0x7FFFFFFEFFFFuLL )
      {
        if ( ((unsigned __int8)v13 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        DWORD2(v10) = -65536;
      }
    }
    v16 = RtlLookupExceptionHandler((_DWORD)v13, DWORD2(v10), 1, v11, 0LL, (__int64)&v21);
    if ( v16 < 0 )
      KeBugCheckEx(0x31u, v16, 0LL, 0LL, 0LL);
    if ( *v21 != 1 || (v17 = (unsigned int)v21[3], (_DWORD)v17 == 1) )
      KeBugCheck(0x31u);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))(0x140000000LL + v17))(0LL, 0LL);
  }
  return result;
}
