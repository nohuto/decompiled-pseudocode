/*
 * XREFs of sub_1800DE200 @ 0x1800DE200
 * Callers:
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     sub_1800520D4 @ 0x1800520D4 (sub_1800520D4.c)
 *     sub_180053480 @ 0x180053480 (sub_180053480.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 *     sub_1800DDC78 @ 0x1800DDC78 (sub_1800DDC78.c)
 *     sub_1800DE154 @ 0x1800DE154 (sub_1800DE154.c)
 *     sub_1800DE900 @ 0x1800DE900 (sub_1800DE900.c)
 */

__int64 __fastcall sub_1800DE200(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5,
        _QWORD *a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // r14
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // edi
  __int64 Heap; // rax
  unsigned int v15; // r15d
  unsigned int v16; // ebx
  int v17; // ecx
  unsigned __int16 v18; // cx
  unsigned int v19; // r14d
  unsigned int v20; // edi
  _DWORD *v21; // rbx
  int v22; // edx
  unsigned int v23; // ecx
  unsigned __int64 v24; // r15
  __int64 v25; // r14
  _DWORD *v26; // r15
  __int64 v27; // r14
  int v28; // [rsp+70h] [rbp-4C8h]
  unsigned __int16 v29; // [rsp+74h] [rbp-4C4h] BYREF
  _QWORD v30[2]; // [rsp+78h] [rbp-4C0h] BYREF
  int v31; // [rsp+88h] [rbp-4B0h]
  int v32; // [rsp+8Ch] [rbp-4ACh]
  int v33; // [rsp+90h] [rbp-4A8h]
  __int64 v34; // [rsp+98h] [rbp-4A0h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-498h]
  __int64 v36; // [rsp+A8h] [rbp-490h]
  void *v37; // [rsp+B0h] [rbp-488h]
  _QWORD *v38; // [rsp+B8h] [rbp-480h]
  unsigned __int64 *v39; // [rsp+C0h] [rbp-478h]
  __int64 v40; // [rsp+C8h] [rbp-470h]
  int v41; // [rsp+D0h] [rbp-468h] BYREF
  const wchar_t *v42; // [rsp+D8h] [rbp-460h]
  char v43[2]; // [rsp+E0h] [rbp-458h] BYREF
  __int16 v44; // [rsp+E2h] [rbp-456h]
  _WORD *v45; // [rsp+E8h] [rbp-450h]
  int v46; // [rsp+F0h] [rbp-448h] BYREF
  __int16 v47; // [rsp+F4h] [rbp-444h]
  unsigned __int16 v48; // [rsp+F6h] [rbp-442h]
  unsigned __int16 v49; // [rsp+104h] [rbp-434h]
  __int16 v50; // [rsp+108h] [rbp-430h]
  unsigned int v51; // [rsp+164h] [rbp-3D4h]
  unsigned int v52; // [rsp+174h] [rbp-3C4h]
  unsigned int v53; // [rsp+178h] [rbp-3C0h]
  int v54; // [rsp+17Ch] [rbp-3BCh]
  unsigned int v55; // [rsp+188h] [rbp-3B0h]
  int v56; // [rsp+18Ch] [rbp-3ACh]
  __int16 v57[30]; // [rsp+200h] [rbp-338h] BYREF
  unsigned int v58; // [rsp+23Ch] [rbp-2FCh]
  unsigned __int16 v59[264]; // [rsp+240h] [rbp-2F8h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-E8h] BYREF

  v32 = a4;
  v36 = a3;
  v8 = a2;
  v31 = a2;
  v35 = a1;
  v39 = a5;
  v38 = a6;
  v37 = a7;
  v40 = a8;
  LODWORD(v30[0]) = 4456514;
  v30[1] = L"LdrpResSearchResourceHandle Enter";
  v41 = 4325440;
  v42 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACuLL);
  v10 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    sub_1800DBCC0((unsigned __int16 *)v30);
  }
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v13 = -1073741811;
    v28 = -1073741811;
    Heap = 0LL;
    goto LABEL_52;
  }
  v33 = v8 & 0x1000;
  result = sub_1800DDC78(a1, &v34);
  if ( (int)result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = sub_1800DE154(a1, 0LL, (__int64)v57, 64);
  if ( (int)result < 0 )
    return result;
  if ( v57[0] != 23117 )
    goto LABEL_11;
  v15 = v58;
  if ( (v8 & 0x1000) != 0 )
  {
    if ( (unsigned __int64)v58 + 264 < v58 )
      goto LABEL_11;
    if ( v58 > 0x10000000 )
      goto LABEL_11;
    if ( v58 + 264 <= v58 )
      goto LABEL_11;
    v16 = v34;
    if ( (unsigned __int64)v58 + 264 >= (unsigned int)v34 )
      goto LABEL_11;
  }
  else
  {
    v16 = v34;
  }
  result = sub_1800DE154(a1, v58, (__int64)&v46, 264);
  if ( (int)result < 0 )
    return result;
  if ( v46 != 17744 )
    goto LABEL_11;
  if ( v50 == 267 )
  {
    if ( v47 != 332 )
    {
      if ( (unsigned __int16)(v47 - 448) > 4u )
        goto LABEL_11;
      v17 = 21;
      if ( !_bittest(&v17, (unsigned __int16)(v47 - 448)) )
        goto LABEL_11;
    }
    if ( v51 > 2 && v54 )
    {
      v18 = v49;
      if ( v49 >= 0x78u )
      {
        v19 = v53;
        goto LABEL_31;
      }
      goto LABEL_11;
    }
LABEL_27:
    v13 = -1073741687;
    goto LABEL_12;
  }
  if ( v50 != 523 || v47 != 512 && v47 != -31132 )
    goto LABEL_11;
  if ( v52 <= 2 || !v56 )
    goto LABEL_27;
  v18 = v49;
  if ( v49 >= 0x88u )
  {
    v19 = v55;
LABEL_31:
    if ( !v19 )
      return 3221225609LL;
    if ( !v48 )
      goto LABEL_11;
    v20 = 40 * v48;
    if ( v15 + v20 + v18 + 24 > v16 )
      goto LABEL_11;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v20);
    v30[0] = Heap;
    if ( !Heap )
    {
      v13 = -1073741801;
      v28 = -1073741801;
      goto LABEL_52;
    }
    v13 = sub_1800DE154(v35, v15 + v49 + 24, Heap, v20);
    v28 = v13;
    if ( v13 >= 0 )
    {
      v21 = (_DWORD *)v30[0];
      v22 = 0;
      if ( v48 )
      {
        do
        {
          v23 = v21[3];
          if ( v19 >= v23 && v19 < v21[4] + v23 )
            break;
          v21 += 10;
          ++v22;
        }
        while ( v22 < v48 );
      }
      if ( v22 < v48 && (v24 = v19 + (unsigned int)v21[5] - (unsigned __int64)(unsigned int)v21[3]) != 0 )
      {
        v25 = v35;
        v13 = sub_1800DE900(v35, v24);
        v28 = v13;
        if ( v13 >= 0 )
        {
          if ( v32 == 3 )
          {
            v59[0] = 0;
            if ( (v31 & 0x20) != 0 )
            {
              v59[0] = 1;
              v59[2] = 0;
            }
            else
            {
              v13 = sub_180053480(0LL, 0, *(_WORD *)(v36 + 16), v31, v59);
              v28 = v13;
              if ( v13 < 0 && v33 )
                goto LABEL_51;
            }
          }
          v29 = 0;
          v13 = sub_1800520D4(
                  0LL,
                  v25,
                  (unsigned int)v34,
                  v24,
                  (__int64)&v46,
                  (__int64)v21,
                  v36,
                  v32,
                  (__int64)v59,
                  v39,
                  v38,
                  v31,
                  &v29);
          v28 = v13;
          if ( v13 >= 0 )
          {
            v26 = (_DWORD *)v40;
            if ( v40 )
            {
              if ( !v29 )
              {
                Src[0] = 0;
                LODWORD(v27) = 0;
                goto LABEL_76;
              }
              v45 = Src;
              v44 = 172;
              v13 = RtlLcidToLocaleName(v29, (__int64)v43, 2, 0);
              v28 = v13;
              if ( v13 >= 0 )
              {
                v27 = -1LL;
                do
                  ++v27;
                while ( Src[v27] );
LABEL_76:
                if ( (unsigned int)v27 < *v26 && v37 )
                {
                  memmove(v37, Src, 2LL * (unsigned int)v27);
                  *v26 = v27 + 1;
                  *((_WORD *)v37 + (unsigned int)v27) = 0;
                  Heap = v30[0];
                }
                else
                {
                  *v26 = v27 + 1;
                  v13 = -1073741789;
                  v28 = -1073741789;
                  Heap = v30[0];
                }
                goto LABEL_52;
              }
            }
          }
        }
      }
      else
      {
        v13 = -1073741701;
        v28 = -1073741701;
      }
    }
LABEL_51:
    Heap = v30[0];
    goto LABEL_52;
  }
LABEL_11:
  v13 = -1073741701;
LABEL_12:
  v28 = v13;
  Heap = 0LL;
LABEL_52:
  if ( Heap )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    v13 = v28;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    v13 = v28;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = v28;
    sub_1800DBCC0((unsigned __int16 *)&v41);
  }
  return (unsigned int)v13;
}
