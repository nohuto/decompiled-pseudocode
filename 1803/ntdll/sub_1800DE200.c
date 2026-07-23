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

int __fastcall sub_1800DE200(
        char *Handle,
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
  __int64 v12; // r12
  __int64 v13; // rcx
  int result; // eax
  int v15; // edi
  PVOID Heap; // rax
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  int v19; // ecx
  unsigned __int16 v20; // cx
  unsigned int v21; // r14d
  ULONG v22; // edi
  _DWORD *v23; // rbx
  int v24; // edx
  unsigned int v25; // ecx
  unsigned __int64 v26; // r15
  char *v27; // r14
  _DWORD *v28; // r15
  __int64 v29; // r14
  int v30; // [rsp+70h] [rbp-4C8h]
  unsigned __int16 v31; // [rsp+74h] [rbp-4C4h] BYREF
  _QWORD v32[2]; // [rsp+78h] [rbp-4C0h] BYREF
  int v33; // [rsp+88h] [rbp-4B0h]
  int v34; // [rsp+8Ch] [rbp-4ACh]
  int v35; // [rsp+90h] [rbp-4A8h]
  __int64 v36; // [rsp+98h] [rbp-4A0h] BYREF
  HANDLE Handlea; // [rsp+A0h] [rbp-498h]
  __int64 v38; // [rsp+A8h] [rbp-490h]
  void *v39; // [rsp+B0h] [rbp-488h]
  _QWORD *v40; // [rsp+B8h] [rbp-480h]
  unsigned __int64 *v41; // [rsp+C0h] [rbp-478h]
  __int64 v42; // [rsp+C8h] [rbp-470h]
  int v43; // [rsp+D0h] [rbp-468h] BYREF
  const wchar_t *v44; // [rsp+D8h] [rbp-460h]
  _UNICODE_STRING LocaleName; // [rsp+E0h] [rbp-458h] BYREF
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

  v34 = a4;
  v38 = a3;
  v8 = a2;
  v33 = a2;
  Handlea = Handle;
  v41 = a5;
  v40 = a6;
  v39 = a7;
  v42 = a8;
  LODWORD(v32[0]) = 4456514;
  v32[1] = L"LdrpResSearchResourceHandle Enter";
  v43 = 4325440;
  v44 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACuLL);
  v10 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v13 = 2147353476LL;
    sub_1800DBCC0((unsigned __int16 *)v32, *(unsigned __int8 *)v13);
  }
  else
  {
    v12 = 2147353476LL;
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v15 = -1073741811;
    v30 = -1073741811;
    Heap = 0LL;
    goto LABEL_56;
  }
  v35 = v8 & 0x1000;
  result = sub_1800DDC78(Handle, &v36);
  if ( result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = sub_1800DE154(Handle, 0LL, v57, 0x40u);
  if ( result < 0 )
    return result;
  if ( v57[0] != 23117 )
    goto LABEL_15;
  v17 = v58;
  if ( (v8 & 0x1000) != 0 )
  {
    if ( (unsigned __int64)v58 + 264 < v58 )
      goto LABEL_15;
    if ( v58 > 0x10000000 )
      goto LABEL_15;
    if ( v58 + 264 <= v58 )
      goto LABEL_15;
    v18 = v36;
    if ( (unsigned __int64)v58 + 264 >= (unsigned int)v36 )
      goto LABEL_15;
  }
  else
  {
    v18 = v36;
  }
  result = sub_1800DE154(Handle, v58, &v46, 0x108u);
  if ( result < 0 )
    return result;
  if ( v46 != 17744 )
    goto LABEL_15;
  if ( v50 == 267 )
  {
    if ( v47 != 332 )
    {
      if ( (unsigned __int16)(v47 - 448) > 4u )
        goto LABEL_15;
      v19 = 21;
      if ( !_bittest(&v19, (unsigned __int16)(v47 - 448)) )
        goto LABEL_15;
    }
    if ( v51 > 2 && v54 )
    {
      v20 = v49;
      if ( v49 >= 0x78u )
      {
        v21 = v53;
        goto LABEL_35;
      }
      goto LABEL_15;
    }
LABEL_31:
    v15 = -1073741687;
    goto LABEL_16;
  }
  if ( v50 != 523 || v47 != 512 && v47 != -31132 )
    goto LABEL_15;
  if ( v52 <= 2 || !v56 )
    goto LABEL_31;
  v20 = v49;
  if ( v49 >= 0x88u )
  {
    v21 = v55;
LABEL_35:
    if ( !v21 )
      return -1073741687;
    if ( !v48 )
      goto LABEL_15;
    v22 = 40 * v48;
    if ( v17 + v22 + v20 + 24 > v18 )
      goto LABEL_15;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v22);
    v32[0] = Heap;
    if ( !Heap )
    {
      v15 = -1073741801;
      v30 = -1073741801;
      goto LABEL_56;
    }
    v15 = sub_1800DE154((char *)Handlea, v17 + v49 + 24, Heap, v22);
    v30 = v15;
    if ( v15 >= 0 )
    {
      v23 = (_DWORD *)v32[0];
      v24 = 0;
      if ( v48 )
      {
        do
        {
          v25 = v23[3];
          if ( v21 >= v25 && v21 < v23[4] + v25 )
            break;
          v23 += 10;
          ++v24;
        }
        while ( v24 < v48 );
      }
      if ( v24 < v48 && (v26 = v21 + (unsigned int)v23[5] - (unsigned __int64)(unsigned int)v23[3]) != 0 )
      {
        v27 = (char *)Handlea;
        v15 = sub_1800DE900(Handlea, v26);
        v30 = v15;
        if ( v15 >= 0 )
        {
          if ( v34 == 3 )
          {
            v59[0] = 0;
            if ( (v33 & 0x20) != 0 )
            {
              v59[0] = 1;
              v59[2] = 0;
            }
            else
            {
              v15 = sub_180053480(0LL, 0, *(_WORD *)(v38 + 16), v33, v59);
              v30 = v15;
              if ( v15 < 0 && v35 )
                goto LABEL_55;
            }
          }
          v31 = 0;
          v15 = sub_1800520D4(
                  0LL,
                  v27,
                  (unsigned int)v36,
                  v26,
                  (__int64)&v46,
                  (__int64)v23,
                  v38,
                  v34,
                  (__int64)v59,
                  v41,
                  v40,
                  v33,
                  &v31);
          v30 = v15;
          if ( v15 >= 0 )
          {
            v28 = (_DWORD *)v42;
            if ( v42 )
            {
              if ( !v31 )
              {
                Src[0] = 0;
                LODWORD(v29) = 0;
                goto LABEL_80;
              }
              LocaleName.Buffer = Src;
              LocaleName.MaximumLength = 172;
              v15 = RtlLcidToLocaleName(v31, &LocaleName, 2u, 0);
              v30 = v15;
              if ( v15 >= 0 )
              {
                v29 = -1LL;
                do
                  ++v29;
                while ( Src[v29] );
LABEL_80:
                if ( (unsigned int)v29 < *v28 && v39 )
                {
                  memmove(v39, Src, 2LL * (unsigned int)v29);
                  *v28 = v29 + 1;
                  *((_WORD *)v39 + (unsigned int)v29) = 0;
                  Heap = (PVOID)v32[0];
                }
                else
                {
                  *v28 = v29 + 1;
                  v15 = -1073741789;
                  v30 = -1073741789;
                  Heap = (PVOID)v32[0];
                }
                goto LABEL_56;
              }
            }
          }
        }
      }
      else
      {
        v15 = -1073741701;
        v30 = -1073741701;
      }
    }
LABEL_55:
    Heap = (PVOID)v32[0];
    goto LABEL_56;
  }
LABEL_15:
  v15 = -1073741701;
LABEL_16:
  v30 = v15;
  Heap = 0LL;
LABEL_56:
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    v15 = v30;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    v15 = v30;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      v15 = v30;
    }
    sub_1800DBCC0((unsigned __int16 *)&v43, *(unsigned __int8 *)v12);
  }
  return v15;
}
