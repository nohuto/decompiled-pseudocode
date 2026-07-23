/*
 * XREFs of BiCreateBootEntry @ 0x140736AF0
 * Callers:
 *     BiCreateEfiEntry @ 0x140736E78 (BiCreateEfiEntry.c)
 * Callees:
 *     swprintf_s @ 0x14016EB70 (swprintf_s.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiGetKeyName @ 0x14058BC84 (BiGetKeyName.c)
 *     BiGetElement @ 0x1407351D4 (BiGetElement.c)
 *     BiTranslateFilePath @ 0x140738574 (BiTranslateFilePath.c)
 */

__int64 __fastcall BiCreateBootEntry(HANDLE BcdObjectHandle, _QWORD *a2)
{
  _DWORD *v2; // rdi
  void *v3; // rsi
  unsigned int *v4; // r14
  void *v5; // r12
  _FILE_PATH *PoolWithTag; // r15
  signed int Element; // ebx
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  SIZE_T v18; // rdx
  ULONG v19; // eax
  int KeyName; // eax
  int v21; // ebx
  int v22; // r8d
  unsigned int v23; // ecx
  _DWORD *v24; // rax
  size_t v25; // r8
  ULONG v26; // ecx
  wchar_t *v27; // rbx
  _DWORD *v28; // rax
  unsigned int Size; // [rsp+30h] [rbp-38h]
  unsigned int Sizea; // [rsp+30h] [rbp-38h]
  unsigned int Size_4; // [rsp+34h] [rbp-34h]
  int Size_4a; // [rsp+34h] [rbp-34h]
  _DWORD *v34; // [rsp+38h] [rbp-30h] BYREF
  void *Src; // [rsp+40h] [rbp-28h] BYREF
  _DWORD *v36; // [rsp+48h] [rbp-20h] BYREF
  void *v37; // [rsp+50h] [rbp-18h]
  PVOID P[2]; // [rsp+58h] [rbp-10h] BYREF
  size_t v41; // [rsp+C0h] [rbp+58h] BYREF
  ULONG v42; // [rsp+C8h] [rbp+60h] BYREF

  P[0] = 0LL;
  v34 = 0LL;
  v2 = 0LL;
  Src = 0LL;
  v3 = 0LL;
  v37 = 0LL;
  v4 = 0LL;
  v36 = 0LL;
  v5 = 0LL;
  PoolWithTag = 0LL;
  Element = BiGetElement(BcdObjectHandle, 0x12000004u, P, &v41);
  if ( Element >= 0 )
  {
    Element = BiGetElement(BcdObjectHandle, 0x11000001u, &v34, &v42);
    if ( Element < 0 )
    {
      v2 = v34;
    }
    else
    {
      v9 = BiGetElement(BcdObjectHandle, 0x12000002u, &Src, &v42);
      v2 = v34;
      Element = v9;
      v3 = Src;
      if ( v9 < 0 )
        goto LABEL_27;
      if ( *v34 != 2 )
      {
        Element = -1073741637;
        goto LABEL_27;
      }
      v10 = -1LL;
      v11 = -1LL;
      do
        ++v11;
      while ( *((_WORD *)Src + v11) );
      v12 = 2 * v11 + 2;
      v13 = -1LL;
      Size_4 = v12;
      do
        ++v13;
      while ( *((_WORD *)v34 + v13 + 10) );
      v14 = 2 * v13 + 2;
      v15 = v14 + v12;
      Size = v14;
      v16 = -1;
      if ( v14 + v12 >= v14 )
        v16 = v14 + v12;
      Element = v15 < v14 ? 0xC0000095 : 0;
      if ( v15 >= v14 )
      {
        v17 = v16 + 12;
        v18 = 0xFFFFFFFFLL;
        if ( v16 + 12 >= v16 )
          v18 = v17;
        Element = v17 < v16 ? 0xC0000095 : 0;
        v42 = v18;
        if ( v17 >= v16 )
        {
          PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v18, 0x4B444342u);
          if ( !PoolWithTag )
          {
LABEL_17:
            Element = -1073741670;
            goto LABEL_27;
          }
          v19 = v42;
          PoolWithTag->Version = 1;
          PoolWithTag->Length = v19;
          PoolWithTag->Type = 3;
          memmove(PoolWithTag->FilePath, v2 + 5, Size);
          memmove(&PoolWithTag->FilePath[Size], v3, Size_4);
          Element = BiTranslateFilePath(PoolWithTag, 4u);
          if ( Element < 0 || (KeyName = BiGetKeyName(BcdObjectHandle, &v36), v5 = v36, Element = KeyName, KeyName < 0) )
          {
            v4 = (unsigned int *)v37;
          }
          else
          {
            do
              ++v10;
            while ( *((_WORD *)v36 + v10) );
            v4 = (unsigned int *)v37;
            LODWORD(Src) = (2 * v10 + 45) & 0xFFFFFFFC;
            v21 = (_DWORD)Src + 16;
            LODWORD(v34) = (_DWORD)Src + 16;
            v22 = *((_DWORD *)v37 + 1);
            v23 = ((_DWORD)Src + 47) & 0xFFFFFFFC;
            Sizea = v23;
            if ( (unsigned int)v41 + v23 + v22 + 4 >= (unsigned int)v41 )
            {
              v42 = (v23 + v41 + 3) & 0xFFFFFFFC;
              Size_4a = v22 + v42;
              v24 = ExAllocatePoolWithTag(PagedPool, v22 + v42, 0x4B444342u);
              v36 = v24;
              if ( !v24 )
                goto LABEL_17;
              v24[2] = -1;
              v25 = (unsigned int)v41;
              *v24 = 1;
              v24[3] = 1;
              v26 = v42;
              v24[1] = Size_4a;
              v24[5] = v26;
              v24[4] = Sizea;
              v24[6] = v21;
              memmove((char *)v24 + Sizea, P[0], v25);
              v27 = (wchar_t *)v36;
              memmove((char *)v36 + v42, v4, v4[1]);
              v27 += 14;
              *(_QWORD *)v27 = 0x53574F444E4957LL;
              *((_DWORD *)v27 + 3) = (_DWORD)v34;
              *((_DWORD *)v27 + 4) = (_DWORD)Src;
              *((_DWORD *)v27 + 2) = 1;
              swprintf_s(v27 + 10, (unsigned int)v10 + 11LL, L"%s%s", L"BCDOBJECT=", v5);
              v28 = (_DWORD *)((char *)v27 + *((unsigned int *)v27 + 4));
              Element = 0;
              *v28 = 1;
              v28[1] = 16;
              v28[2] = 4;
              v28[3] = 327551;
              *a2 = v36;
            }
            else
            {
              Element = -1073741675;
            }
          }
        }
      }
    }
  }
LABEL_27:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
  return (unsigned int)Element;
}
