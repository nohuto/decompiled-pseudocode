/*
 * XREFs of CmpCheckLeaf @ 0x140503C50
 * Callers:
 *     CmpCheckKey @ 0x140505100 (CmpCheckKey.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x14008CF2C (HvpGetBinContextInitialize.c)
 *     HvpMapEntryIsDiscardable @ 0x14008CFF0 (HvpMapEntryIsDiscardable.c)
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpReleaseHCell @ 0x14008D080 (HvpReleaseHCell.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     CmpHashUnicodeComponent @ 0x1404D2F10 (CmpHashUnicodeComponent.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x1404D3234 (CmpGenerateFastLeafHintForUnicodeString.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter2, int a2, _WORD *a3, unsigned int a4, __int64 a5)
{
  char v6; // si
  _WORD *v8; // r8
  unsigned int v9; // r14d
  _WORD *v10; // r13
  unsigned int v11; // r9d
  __int64 v12; // rax
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rdi
  unsigned int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rbx
  unsigned __int64 BinAddress; // rax
  __int64 v21; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  __int64 v24; // r9
  bool v25; // bl
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // edx
  _BYTE *v29; // rdi
  char v30; // al
  int v31; // ebx
  unsigned int i; // esi
  WCHAR v33; // ax
  unsigned int v35; // eax
  int FastLeafHintForUnicodeString; // eax
  _WORD v37[2]; // [rsp+30h] [rbp-68h] BYREF
  int v38; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-60h]
  _BYTE v40[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v41[8]; // [rsp+48h] [rbp-50h] BYREF
  __m128i v42; // [rsp+50h] [rbp-48h] BYREF
  char v44; // [rsp+B0h] [rbp+18h]

  v6 = 0;
  v44 = 0;
  HvpGetCellContextReinitialize((__int64)v40);
  if ( ((*v8 - 26220) & 0xFDFF) != 0 )
    return 0LL;
  v9 = 0;
  if ( !v8[1] )
    return 0LL;
  v39 = -1073741492;
  do
  {
    v10 = &a3[4 * v9];
    HvpGetCellContextReinitialize((__int64)v41);
    HvpGetBinContextInitialize(v37);
    if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) != 0 )
      goto LABEL_21;
    if ( (v11 & 0x7FFFFFFF) < *(_DWORD *)(632 * ((unsigned __int64)v11 >> 31) + BugCheckParameter2 + 1400)
      && (v11 & 7) == 0 )
    {
      v12 = v11 >> 31;
      if ( v11 + ((_DWORD)v12 << 31) < *(_DWORD *)(632 * v12 + BugCheckParameter2 + 1400) )
      {
        v13 = ((unsigned __int64)v11 >> 12) & 0x1FF;
        v14 = *(_QWORD *)(*(_QWORD *)(632 * v12 + BugCheckParameter2 + 1408) + 8LL * ((v11 >> 21) & 0x3FF));
        v15 = (struct _EX_RUNDOWN_REF *)(v14 + 40 * v13);
        if ( v15 )
        {
          if ( !HvpMapEntryIsDiscardable(v14 + 40 * v13) )
          {
            v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    v16,
                    v41);
            if ( !v17 )
              goto LABEL_21;
            v19 = (_DWORD *)(v17 - 4);
            if ( v17 == 4 )
              goto LABEL_21;
            BinAddress = HvpMapEntryGetBinAddress(v18, v15, v37);
            v21 = (unsigned int)*v19;
            v22 = (_DWORD)v19 - BinAddress;
            v23 = -*v19;
            v25 = 0;
            if ( (int)v21 < 0 )
            {
              v21 = v23 - 8;
              if ( (unsigned int)v21 <= 0xFFFF8 )
              {
                v24 = *(unsigned int *)(BinAddress + 8);
                v21 = v24 - 32;
                if ( v23 <= (unsigned __int64)(v24 - 32) && v22 - *v19 <= (unsigned int)v24 && v22 >= 0x20 )
                  v25 = 1;
              }
            }
            if ( BinAddress )
              HvpMapEntryReleaseBinAddress(v21, v15, v37);
            HvpReleaseHCell(BugCheckParameter2);
            if ( v25 )
            {
LABEL_21:
              v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      *((unsigned int *)v10 + 1),
                      v40);
              if ( !v26 )
              {
                SetFailureLocation(a5, 0, 23, -1073741670, 0);
                return 3221225626LL;
              }
              v27 = -4 - *(_DWORD *)(v26 - 4);
              if ( v27 < 0x4C )
                goto LABEL_32;
              v28 = *(unsigned __int16 *)(v26 + 72);
              if ( v28 > v27 - 76 )
                goto LABEL_32;
              v29 = (_BYTE *)(v26 + 76);
              v30 = *(_BYTE *)(v26 + 2);
              v42.m128i_i64[1] = (__int64)v29;
              v42.m128i_i16[1] = v28;
              v42.m128i_i16[0] = v28;
              if ( *a3 == 26732 )
              {
                if ( (v30 & 0x20) != 0 )
                {
                  v31 = 0;
                  for ( i = v28; i; --i )
                  {
                    LOBYTE(v33) = *v29;
                    if ( *v29 >= 0x61u )
                    {
                      if ( (unsigned __int8)v33 > 0x7Au )
                        v33 = RtlUpcaseUnicodeChar((unsigned __int8)v33);
                      else
                        v33 = (unsigned __int8)v33 - 32;
                    }
                    else
                    {
                      v33 = (unsigned __int8)v33;
                    }
                    ++v29;
                    v31 = v33 + 37 * v31;
                  }
                  v6 = v44;
LABEL_31:
                  if ( *((_DWORD *)v10 + 2) != v31 )
                  {
                    v6 = 1;
                    v44 = 1;
                    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
                    {
                      SetFailureLocation(a5, 0, 23, -1073741492, 16);
                      goto LABEL_57;
                    }
                    SetFailureLocation(a5, 1, 23, -1073741492, 32);
                    if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, a4) )
                    {
                      v39 = -1073741443;
                      SetFailureLocation(a5, 0, 23, -1073741443, 48);
LABEL_57:
                      (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(BugCheckParameter2 + 16))(BugCheckParameter2, v40);
                      return v39;
                    }
                    *((_DWORD *)v10 + 2) = v31;
                    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
                  }
LABEL_32:
                  (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(BugCheckParameter2 + 16))(BugCheckParameter2, v40);
                  goto LABEL_33;
                }
                FastLeafHintForUnicodeString = CmpHashUnicodeComponent(&v42);
              }
              else
              {
                if ( (v30 & 0x20) != 0 )
                {
                  v31 = 0;
                  v35 = v28;
                  v38 = 0;
                  if ( v28 < 4 )
                  {
                    if ( !v28 )
                      goto LABEL_31;
                  }
                  else
                  {
                    v35 = 4;
                  }
                  memmove(&v38, v29, v35);
                  v31 = v38;
                  goto LABEL_31;
                }
                FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString((unsigned __int16 *)&v42);
              }
              v31 = FastLeafHintForUnicodeString;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_33:
    ++v9;
  }
  while ( v9 < (unsigned __int16)a3[1] );
  if ( !v6 )
    return 0LL;
  return 2147483690LL;
}
