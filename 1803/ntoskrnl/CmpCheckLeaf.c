/*
 * XREFs of CmpCheckLeaf @ 0x1405500E0
 * Callers:
 *     CmpCheckKey @ 0x14059FAB0 (CmpCheckKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpHashUnicodeComponent @ 0x1405132A0 (CmpHashUnicodeComponent.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x140578FE0 (CmpGenerateFastLeafHintForUnicodeString.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter2, int a2, _WORD *a3, unsigned int a4, __int64 a5)
{
  __int16 v6; // ax
  unsigned int v8; // r14d
  __int64 v9; // r9
  _WORD *v10; // r13
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  int *v15; // rax
  int v16; // r8d
  int v17; // eax
  unsigned __int64 v18; // r10
  unsigned int v19; // r8d
  unsigned int v20; // edx
  __int64 v21; // r9
  bool v22; // bl
  _WORD *v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // esi
  unsigned __int8 *v26; // rdi
  __int16 v27; // cx
  int i; // ebx
  WCHAR v29; // ax
  int v31; // eax
  unsigned int v32; // ebx
  int v33; // eax
  int v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h] BYREF
  __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  __m128i v37; // [rsp+48h] [rbp-50h] BYREF
  char v39; // [rsp+B0h] [rbp+18h]

  v39 = 0;
  v35 = 0LL;
  v6 = *a3 - 26220;
  LODWORD(v35) = -1;
  if ( (v6 & 0xFDFF) != 0 )
    return 0LL;
  v8 = 0;
  if ( !a3[1] )
    return 0LL;
  do
  {
    v9 = *(unsigned int *)&a3[4 * v8 + 2];
    v10 = &a3[4 * v8];
    v11 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
    v36 = 0xFFFFFFFFLL;
    if ( !v11 )
      goto LABEL_20;
    if ( ((unsigned int)v9 & 0x7FFFFFFF) < *(_DWORD *)(632 * ((unsigned __int64)(unsigned int)v9 >> 31)
                                                     + BugCheckParameter2
                                                     + 272)
      && (v9 & 7) == 0 )
    {
      v12 = (unsigned int)v9 >> 31;
      if ( (unsigned int)(v9 + ((_DWORD)v12 << 31)) < *(_DWORD *)(632 * v12 + BugCheckParameter2 + 272) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(632 * v12 + BugCheckParameter2 + 280) + 8LL * (((unsigned int)v9 >> 21) & 0x3FF))
            + 24 * (((unsigned __int64)(unsigned int)v9 >> 12) & 0x1FF);
        if ( v13 )
        {
          if ( (*(_BYTE *)(v13 + 8) & 2) == 0 )
          {
            v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    (unsigned int)v9,
                    &v36);
            if ( !v14 )
              goto LABEL_20;
            v15 = (int *)(v14 - 4);
            if ( !v15 )
              goto LABEL_20;
            v16 = (int)v15;
            v17 = *v15;
            v18 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
            v19 = v16 - v18;
            v20 = -v17;
            v22 = 0;
            if ( v17 < 0 && v20 - 8 <= 0xFFFF8 )
            {
              v21 = *(unsigned int *)((*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
              if ( v20 <= (unsigned __int64)(v21 - 32) && v19 - v17 <= (unsigned int)v21 && v19 >= 0x20 )
                v22 = 1;
            }
            if ( v18 )
              LOWORD(v34) = 0;
            (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
            if ( v22 )
            {
LABEL_20:
              v23 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *, __int64))(BugCheckParameter2 + 8))(
                               BugCheckParameter2,
                               *((unsigned int *)v10 + 1),
                               &v35,
                               v9);
              if ( !v23 )
              {
                SetFailureLocation(a5, 0, 23, -1073741670, 0);
                return 3221225626LL;
              }
              v24 = -4 - *((_DWORD *)v23 - 1);
              if ( v24 < 0x4C )
                goto LABEL_29;
              v25 = (unsigned __int16)v23[36];
              if ( v25 > v24 - 76 )
                goto LABEL_29;
              v26 = (unsigned __int8 *)(v23 + 38);
              v27 = v23[1] & 0x20;
              v37.m128i_i16[1] = v23[36];
              v37.m128i_i16[0] = v25;
              v37.m128i_i64[1] = (__int64)(v23 + 38);
              if ( *a3 == 26732 )
              {
                if ( v27 )
                {
                  for ( i = 0; v25; --v25 )
                  {
                    v29 = *v26;
                    if ( (unsigned __int8)v29 >= 0x61u )
                    {
                      if ( (unsigned __int8)v29 > 0x7Au )
                        v29 = RtlUpcaseUnicodeChar(*v26);
                      else
                        v29 -= 32;
                    }
                    ++v26;
                    i = v29 + 37 * i;
                  }
LABEL_28:
                  if ( *((_DWORD *)v10 + 2) != i )
                  {
                    v39 = 1;
                    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
                    {
                      v33 = 16;
                      v32 = -1073741492;
                      goto LABEL_54;
                    }
                    SetFailureLocation(a5, 1, 23, -1073741492, 32);
                    if ( !HvpMarkCellDirty(BugCheckParameter2, a4, 0) )
                    {
                      v32 = -1073741443;
                      v33 = 48;
LABEL_54:
                      SetFailureLocation(a5, 0, 23, v32, v33);
                      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v35);
                      return v32;
                    }
                    *((_DWORD *)v10 + 2) = i;
                    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
                  }
LABEL_29:
                  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v35);
                  goto LABEL_30;
                }
                v31 = CmpHashUnicodeComponent(&v37);
              }
              else
              {
                if ( v27 )
                {
                  i = 0;
                  v34 = 0;
                  if ( v25 < 4 )
                  {
                    if ( !v25 )
                      goto LABEL_28;
                  }
                  else
                  {
                    v25 = 4;
                  }
                  memmove(&v34, v23 + 38, v25);
                  i = v34;
                  goto LABEL_28;
                }
                v31 = CmpGenerateFastLeafHintForUnicodeString(&v37);
              }
              i = v31;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_30:
    ++v8;
  }
  while ( v8 < (unsigned __int16)a3[1] );
  if ( !v39 )
    return 0LL;
  return 2147483690LL;
}
