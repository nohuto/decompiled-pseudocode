/*
 * XREFs of LocalpConvertStringSidToSid @ 0x1405D73CC
 * Callers:
 *     SeConvertStringSidToSid @ 0x140150EB0 (SeConvertStringSidToSid.c)
 *     LocalGetSidForString @ 0x14057C4E4 (LocalGetSidForString.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     wcschr @ 0x140160420 (wcschr.c)
 *     wcstoul @ 0x140160A10 (wcstoul.c)
 *     wcstoxq @ 0x140160E88 (wcstoxq.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 */

__int64 __fastcall LocalpConvertStringSidToSid(_WORD *a1, _QWORD *a2, wchar_t **a3)
{
  int v4; // edi
  int v5; // esi
  const wchar_t *v6; // rbx
  wchar_t *v7; // rbx
  wchar_t *v8; // rax
  int v9; // r9d
  unsigned __int64 v10; // rcx
  wchar_t *v11; // rsi
  unsigned __int8 v12; // r14
  wchar_t *v13; // rbx
  wchar_t v14; // cx
  __int64 v15; // rdx
  wchar_t v16; // dx
  __int16 v17; // cx
  unsigned __int8 v18; // cl
  wchar_t *v19; // rsi
  PVOID v20; // rax
  void *v21; // r13
  unsigned int v22; // ebx
  unsigned int *v23; // r15
  int v24; // r8d
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  char *v27; // rcx
  wchar_t *v29; // r12
  __int64 v30; // r15
  PVOID v31; // rax
  int v32; // eax
  int v33; // [rsp+30h] [rbp-D0h]
  __int16 v34; // [rsp+34h] [rbp-CCh]
  int Radix; // [rsp+38h] [rbp-C8h]
  wchar_t *EndPtr; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v38; // [rsp+4Ch] [rbp-B4h]
  void *v39; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h]
  _QWORD *v41; // [rsp+60h] [rbp-A0h]
  char v42; // [rsp+70h] [rbp-90h] BYREF

  v41 = a2;
  v39 = 0LL;
  P = 0LL;
  v4 = 0;
  v5 = 10;
  Radix = 10;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( ((*a1 - 83) & 0xFFDF) != 0 || a1[1] != 45 )
    return 3221225592LL;
  v6 = a1 + 2;
  if ( a1[2] == 48 )
  {
    if ( ((a1[3] - 88) & 0xFFDF) == 0 )
      v5 = 16;
    Radix = v5;
  }
  v38 = wcstoul(v6, &EndPtr, v5);
  if ( v38 > 0xFF )
    return 3221225592LL;
  if ( EndPtr == v6 )
    return 3221225592LL;
  if ( *EndPtr != 45 )
    return 3221225592LL;
  v7 = EndPtr + 1;
  if ( !EndPtr[1] )
    return 3221225592LL;
  v8 = wcschr(EndPtr + 1, 0x2Du);
  if ( !v8 || v8 == v7 )
    return 3221225592LL;
  if ( *v7 != 48 || (v9 = 16, ((v7[1] - 88) & 0xFFDF) != 0) )
    v9 = v5;
  v37 = 0;
  v10 = wcstoxq(0LL, v7, &EndPtr, v9, 1, &v37);
  if ( v10 > 0xFFFFFFFFFFFFLL )
    return 3221225592LL;
  v11 = EndPtr;
  if ( EndPtr == v7 || *EndPtr != 45 || !EndPtr[1] )
    return 3221225592LL;
  HIBYTE(v34) = v10;
  v12 = 0;
  LOBYTE(v34) = BYTE1(v10);
  v13 = EndPtr;
  HIBYTE(v33) = BYTE2(v10);
  BYTE2(v33) = BYTE3(v10);
  LOBYTE(v33) = BYTE5(v10);
  BYTE1(v33) = BYTE4(v10);
  while ( 1 )
  {
    if ( v12 == 0xFF )
    {
      v4 = -1073741675;
      goto LABEL_90;
    }
    v14 = *v13;
    if ( *v13 != 45 )
      break;
    if ( *(v13 - 1) != 45 )
    {
      ++v12;
      if ( v13[1] == 48 && ((v13[2] - 88) & 0xFFDF) == 0 )
        v13 += 2;
      goto LABEL_27;
    }
LABEL_24:
    v16 = v13[1];
    if ( v16 == 58 && (((v14 - 71) & 0xFFF7) == 0 || v14 == 83) )
      goto LABEL_34;
    if ( (unsigned __int16)(v14 - 48) > 9u && (unsigned __int16)(v14 - 97) > 5u && (v14 < 0x41u || v14 > 0x46u) )
    {
      v4 = -1073741704;
LABEL_90:
      *a3 = v13;
      return (unsigned int)v4;
    }
    if ( v14 == 68 && v16 == 58 )
    {
      v29 = EndPtr;
      v30 = v13 - EndPtr;
      if ( v30 >= 256 )
      {
        v31 = SddlpAlloc(2 * v30 + 2);
        P = v31;
        if ( !v31 )
          return (unsigned int)-1073741801;
        v11 = (wchar_t *)v31;
      }
      else
      {
        v11 = (wchar_t *)&v42;
      }
      memmove(v11, v29, 2 * v30);
      ++v12;
      v11[v30] = 0;
      *a3 = v13;
      goto LABEL_38;
    }
LABEL_27:
    if ( !++v13 )
      goto LABEL_38;
  }
  if ( v14 > 0x3Bu )
    goto LABEL_24;
  v15 = 0x800120100000001LL;
  if ( !_bittest64(&v15, v14) )
    goto LABEL_24;
LABEL_34:
  v17 = *(v13 - 1);
  if ( v17 == 45 )
    --v13;
  else
    ++v12;
  *a3 = v13;
  v4 = -1073741704;
  if ( v17 == 45 )
  {
    v21 = 0LL;
    goto LABEL_50;
  }
  v4 = 0;
LABEL_38:
  v18 = v12 - 1;
  if ( !v12 )
    v18 = 0;
  v12 = v18;
  if ( v18 )
  {
    v19 = v11 + 1;
    v20 = SddlpAlloc(4LL * v18);
    v21 = v20;
    if ( v20 )
    {
      v22 = 0;
      if ( v12 )
      {
        v23 = (unsigned int *)v20;
        while ( 1 )
        {
          if ( *v19 != 48 || (v24 = 16, ((v19[1] - 88) & 0xFFDF) != 0) )
            v24 = Radix;
          *v23 = wcstoul(v19, &EndPtr, v24);
          if ( EndPtr )
          {
            v25 = *EndPtr;
            if ( (unsigned __int16)v25 > 0x3Bu || (v26 = 0x800320000000001LL, !_bittest64(&v26, v25)) )
            {
              if ( EndPtr[1] != 58 )
                break;
              LOWORD(v25) = v25 - 68;
              if ( (unsigned __int16)v25 > 0xFu )
                break;
              v32 = 34825;
              if ( !_bittest(&v32, v25) )
                break;
            }
          }
          v19 = EndPtr + 1;
          ++v22;
          ++v23;
          if ( v22 >= v12 )
            goto LABEL_50;
        }
        v4 = -1073741704;
      }
    }
    else
    {
      v4 = -1073741801;
    }
  }
  else
  {
    v21 = v39;
    v4 = -1073741704;
    v12 = 0;
  }
LABEL_50:
  if ( v4 >= 0 )
  {
    v27 = (char *)SddlpAlloc(4LL * v12 + 12);
    *v41 = v27;
    if ( v27 )
    {
      *v27 = v38;
      *(_DWORD *)(v27 + 2) = v33;
      *((_WORD *)v27 + 3) = v34;
      v27[1] = v12;
      memmove(v27 + 8, v21, 4LL * v12);
    }
    else
    {
      v4 = -1073741801;
    }
  }
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v4;
}
