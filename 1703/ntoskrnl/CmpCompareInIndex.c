/*
 * XREFs of CmpCompareInIndex @ 0x140501AE0
 * Callers:
 *     CmpAddToLeaf @ 0x1404D2940 (CmpAddToLeaf.c)
 *     CmpFindSubKeyInRoot @ 0x1405016A0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140501DA0 (CmpFindSubKeyInLeafWithStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     CmpDoCompareKeyName @ 0x1404D2F90 (CmpDoCompareKeyName.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareInIndex(__int64 a1, const UNICODE_STRING *a2, int a3, __int16 *a4, _DWORD *a5)
{
  __int16 v5; // r10
  bool v8; // zf
  unsigned int v9; // esi
  __int16 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int8 *v13; // rdi
  unsigned __int16 v14; // r12
  WCHAR *Buffer; // rbx
  unsigned __int16 v16; // r15
  WCHAR v17; // r14
  unsigned int v18; // ebp
  LONG v19; // ebp
  unsigned int v21; // r14d
  _BYTE *v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // ebp
  wchar_t *v25; // r12
  WCHAR v26; // cx
  unsigned int v27; // edi
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  unsigned int v31; // esi
  __int16 *v32; // rbx
  unsigned int v33; // eax
  _DWORD v34[2]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-40h] BYREF
  __int16 *v36; // [rsp+88h] [rbp+20h]

  v5 = *a4;
  v8 = ((*a4 - 26220) & 0xFDFF) == 0;
  *a5 = -1;
  if ( !v8 )
  {
    v32 = &a4[2 * a3];
    v33 = CmpDoCompareKeyName(a1, a2, *((unsigned int *)v32 + 1));
    v9 = v33;
    if ( v33 != 2 )
    {
      if ( !v33 )
        *a5 = *((_DWORD *)v32 + 1);
      return v9;
    }
    return 2LL;
  }
  v9 = 0;
  v10 = &a4[4 * a3];
  v36 = v10;
  if ( v5 != 26220 )
    goto LABEL_3;
  v21 = 4;
  v22 = v10 + 4;
  v23 = 0;
  while ( *v22 )
  {
    ++v23;
    ++v22;
    if ( v23 >= 4 )
      goto LABEL_21;
  }
  v21 = v23;
LABEL_21:
  v24 = 0;
  if ( a2->Length >> 1 < v21 )
    v21 = a2->Length >> 1;
  if ( !v21 )
  {
LABEL_3:
    v11 = *((unsigned int *)v10 + 1);
    v34[0] = -1;
    v34[1] = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, v11, v34);
    if ( v12 )
    {
      if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
      {
        v13 = (unsigned __int8 *)(v12 + 76);
        v14 = a2->Length >> 1;
        Buffer = a2->Buffer;
        v16 = *(_WORD *)(v12 + 72);
        if ( v14 )
        {
          while ( v16 )
          {
            v17 = *Buffer++;
            v18 = *v13++;
            if ( v17 != (_WORD)v18 )
            {
              if ( v17 >= 0x61u )
              {
                if ( v17 > 0x7Au )
                  v17 = RtlUpcaseUnicodeChar(v17);
                else
                  v17 -= 32;
              }
              if ( v18 >= 0x61 )
              {
                if ( v18 > 0x7A )
                  LOWORD(v18) = RtlUpcaseUnicodeChar(v18);
                else
                  LOWORD(v18) = v18 - 32;
              }
              v19 = v17 - (unsigned __int16)v18;
              if ( v19 )
                goto LABEL_13;
            }
            --v16;
            if ( !--v14 )
              break;
          }
        }
        v19 = v14 - v16;
LABEL_13:
        v10 = v36;
      }
      else
      {
        String2.Buffer = (wchar_t *)(v12 + 76);
        String2.Length = *(_WORD *)(v12 + 72);
        String2.MaximumLength = String2.Length;
        v19 = RtlCompareUnicodeString(a2, &String2, 1u);
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v34);
      if ( v19 )
      {
        v9 = 1;
        if ( v19 < 0 )
          return (unsigned int)-1;
      }
      else
      {
        *a5 = *((_DWORD *)v10 + 1);
      }
      return v9;
    }
    return 2LL;
  }
  v25 = a2->Buffer;
  while ( 1 )
  {
    v26 = v25[v24];
    v27 = *((unsigned __int8 *)v10 + v24 + 8);
    if ( v26 >= 0x61u )
      v28 = v26 <= 0x7Au ? v26 - 32 : RtlUpcaseUnicodeChar(v26);
    else
      v28 = v26;
    if ( v27 >= 0x61 )
      v29 = v27 > 0x7A ? RtlUpcaseUnicodeChar(v27) : v27 - 32;
    else
      v29 = v27;
    v30 = v28 - v29;
    if ( v30 )
      break;
    v10 = v36;
    if ( ++v24 >= v21 )
      goto LABEL_3;
  }
  v31 = 1;
  if ( v30 <= 0 )
    return (unsigned int)-1;
  return v31;
}
