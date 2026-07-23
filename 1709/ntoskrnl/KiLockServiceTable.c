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
  __int64 v6; // rdx
  NTSTATUS v7; // eax
  __int64 v8; // r11
  __int64 CallersAddress; // r8
  __int64 v10; // r11
  unsigned __int128 v11; // rax
  signed int v12; // r9d
  unsigned __int64 v13; // r8
  unsigned int *v14; // rcx
  int v15; // r10d
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  unsigned int *v20; // [rsp+40h] [rbp-28h]
  unsigned int *v21; // [rsp+48h] [rbp-20h]
  _DWORD *v22; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+20h] BYREF

  result = KiLockExtendedServiceTable(a1);
  if ( !a4 )
  {
    LOBYTE(v6) = 1;
    v7 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, v6, 3LL, (__int64)&v23, &v19);
    v8 = v19;
    if ( v7 < 0 )
      v8 = 0LL;
    v19 = v8;
    if ( !v8 )
      KeBugCheck(0x31u);
    CallersAddress = KiFastGetCallersAddress();
    v11 = v23 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v12 = v23 / 0xC;
    if ( !(v23 / 0xC) )
      goto LABEL_29;
    v13 = CallersAddress - 0x140000000LL;
    v14 = (unsigned int *)(v10 + 12LL * (unsigned int)(v12 - 1));
    v20 = v14;
    if ( v13 < *v14 )
    {
      DWORD2(v11) = 0;
      v12 -= 2;
      while ( v12 >= SDWORD2(v11) )
      {
        v15 = (v12 + DWORD2(v11)) >> 1;
        v14 = (unsigned int *)(v10 + 12LL * v15);
        v20 = v14;
        if ( v13 >= *v14 )
        {
          if ( v13 < v14[3] )
            break;
          DWORD2(v11) = v15 + 1;
        }
        else
        {
          v12 = v15 - 1;
        }
      }
    }
    if ( v13 < *v14 || v13 >= v14[1] )
      v14 = 0LL;
    if ( !v14 )
LABEL_29:
      KeBugCheck(0x31u);
    v21 = v14;
    v16 = v14[2];
    if ( (v16 & 1) != 0 )
    {
      v14 = (unsigned int *)(v16 + 0x140000000LL - 1);
      v21 = v14;
      if ( 0x140000000LL <= 0x7FFFFFFEFFFFuLL )
      {
        if ( ((unsigned __int8)v14 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        DWORD2(v11) = -65536;
      }
    }
    v17 = RtlLookupExceptionHandler((_DWORD)v14, DWORD2(v11), 1, v12, 0LL, (__int64)&v22);
    if ( v17 < 0 )
      KeBugCheckEx(0x31u, v17, 0LL, 0LL, 0LL);
    if ( *v22 != 1 || (v18 = (unsigned int)v22[3], (_DWORD)v18 == 1) )
      KeBugCheck(0x31u);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))(0x140000000LL + v18))(0LL, 0LL);
  }
  return result;
}
