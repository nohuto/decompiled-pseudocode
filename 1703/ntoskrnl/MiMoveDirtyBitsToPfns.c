/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x1400D10C0
 * Callers:
 *     NtResetWriteWatch @ 0x14001DB40 (NtResetWriteWatch.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v5; // rdi
  __int64 NextPageTable; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  struct _KEVENT *v11; // rbp
  char v12; // r8
  unsigned __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-118h] BYREF
  char v16[4]; // [rsp+34h] [rbp-114h] BYREF
  __int64 v17; // [rsp+38h] [rbp-110h] BYREF
  int v18; // [rsp+40h] [rbp-108h] BYREF
  __int16 v19; // [rsp+44h] [rbp-104h]
  __int64 v20; // [rsp+48h] [rbp-100h]
  __int64 v21; // [rsp+50h] [rbp-F8h]
  __int64 v22; // [rsp+58h] [rbp-F0h]

  v20 = 20LL;
  v18 = 1;
  v19 = 0;
  v21 = 0LL;
  LODWORD(v5) = a1;
  v22 = 0LL;
  if ( a1 <= a2 )
  {
    do
    {
      NextPageTable = MiGetNextPageTable(v5, a2, 0, a3, 5, (__int64)v16);
      v7 = NextPageTable;
      if ( !NextPageTable )
        break;
      v8 = MI_READ_PTE_LOCK_FREE(NextPageTable);
      v17 = v8;
      if ( (v8 & 1) != 0 && (v8 & 0x42) != 0 )
      {
        v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        MiWriteValidPteNewProtection(v7, v9 & 0xFFFFFFFFFFFFFFBDuLL);
        MiInsertTbFlushEntry(&v18, v7 << 25 >> 16, 1LL, 0LL);
        v15 = 0;
        v11 = 0LL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v15);
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
        v12 = *(_BYTE *)(v10 + 34);
        v13 = 0LL;
        if ( (v12 & 0x10) == 0 )
        {
          if ( (*(_DWORD *)(v10 + 16) & 0x400LL) == 0 && (v12 & 8) == 0 )
            v13 = MiCapturePageFileInfoInline((_QWORD *)(v10 + 16), 1, 0);
          *(_BYTE *)(v10 + 34) |= 0x10u;
          if ( v13 )
            v11 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL));
        }
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v13 )
          MiReleasePageFileInfo(v11, v13, 1);
      }
      v5 = v7 + 8;
    }
    while ( v5 <= a2 );
  }
  return MiFlushTbList(&v18);
}
