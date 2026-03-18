/*
 * XREFs of KiSetProcessorSignature @ 0x14046F4C8
 * Callers:
 *     KiSetFeatureBits @ 0x140479754 (KiSetFeatureBits.c)
 * Callees:
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 */

ULONG_PTR __fastcall KiSetProcessorSignature(__int64 a1, int a2)
{
  unsigned int v8; // r10d
  unsigned int v14; // r9d
  ULONG_PTR v15; // r13
  ULONG_PTR v16; // r15
  int v17; // r11d
  _QWORD *v18; // rsi
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  int v26; // r10d
  __int64 v27; // rbx
  ULONG_PTR v28; // r9
  int v29; // edx
  __int64 i; // r8
  unsigned int *v31; // rsi
  unsigned int v32; // edx
  unsigned int v33; // ecx
  ULONG_PTR v34; // rdx
  int v35; // ebx
  unsigned __int64 v36; // r10
  __int64 j; // rbx
  ULONG_PTR v38; // r9
  unsigned int v39; // ecx
  unsigned int v40; // edx
  int v41; // edx
  int v42; // edx
  ULONG_PTR result; // rax
  int v44; // [rsp+30h] [rbp-78h]
  unsigned int v45; // [rsp+34h] [rbp-74h]
  unsigned int v46; // [rsp+38h] [rbp-70h]
  unsigned int v47; // [rsp+40h] [rbp-68h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]
  unsigned __int64 v49; // [rsp+70h] [rbp-38h]

  _RAX = 0x80000000LL;
  __asm { cpuid }
  v8 = _RAX;
  v47 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v14 = _RAX;
  v45 = _RAX;
  v48 = __PAIR64__(_RBX, _RAX);
  v49 = __PAIR64__(_RDX, _RCX);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v44 = 0;
  v46 = 0;
  v18 = &unk_1402F8730;
  do
  {
    v19 = *((_DWORD *)v18 - 1);
    if ( (v19 & 2) == 0 )
    {
      if ( !HIBYTE(v19) || (v20 = HIBYTE(v19), _bittest((const int *)&v20, *(unsigned __int8 *)(a1 + 141))) )
      {
        _RAX = *((unsigned int *)v18 - 4);
        if ( (_DWORD)_RAX != v17 )
        {
          v44 = *((_DWORD *)v18 - 4);
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > v8) && (unsigned int)_RAX > v14 )
          {
            v48 = 0LL;
            v49 = 0LL;
          }
          else
          {
            __asm { cpuid }
            v48 = __PAIR64__(_RBX, _RAX);
            v49 = __PAIR64__(_RDX, _RCX);
          }
        }
        v26 = 0;
        v27 = *((int *)v18 - 2);
        v28 = *((unsigned int *)v18 - 3);
        if ( ((unsigned int)v28 & *((_DWORD *)&v48 + v27)) == 0 && ((v19 & 8) == 0 || (v15 & *v18) != *v18) )
        {
          if ( (v19 & 0x10) != 0 && (v16 & *v18) == *v18 )
            v26 = 1;
          if ( !v26 )
          {
            if ( (v19 & 1) != 0 )
            {
              if ( !*(_DWORD *)(a1 + 36) )
              {
                KdInitSystem(0LL, KeLoaderBlock_0);
                LODWORD(v27) = *((_DWORD *)v18 - 2);
                v28 = *((unsigned int *)v18 - 3);
              }
              KeBugCheckEx(0x5Du, 0xFFFFFFFFuLL, *((unsigned int *)v18 - 4), v28, (int)v27);
            }
            if ( (v19 & 4) != 0 && *(_DWORD *)(a1 + 36) )
            {
              v29 = 0;
              if ( (v19 & 8) != 0 )
              {
                LOBYTE(v29) = (KeFeatureBits & *v18) == *v18;
              }
              else if ( (v19 & 0x10) != 0 && (KeFeatureBits2 & *v18) == *v18 )
              {
LABEL_89:
                KeBugCheckEx(0x5Du, 0xFFFFFFFEuLL, *((unsigned int *)v18 - 4), v28, *((int *)v18 - 2));
              }
              if ( v29 )
                goto LABEL_89;
            }
            goto LABEL_26;
          }
        }
        if ( (v19 & 8) != 0 )
        {
          v15 |= *v18;
        }
        else if ( (v19 & 0x10) != 0 )
        {
          v16 |= *v18;
        }
        if ( (v19 & 4) != 0 && *(_DWORD *)(a1 + 36) )
        {
          v35 = 0;
          if ( (v19 & 8) != 0 )
          {
            LOBYTE(v35) = (KeFeatureBits & *v18) == *v18;
            goto LABEL_45;
          }
          if ( (v19 & 0x10) == 0 || (KeFeatureBits2 & *v18) != *v18 )
          {
LABEL_45:
            if ( !v35 )
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFDuLL,
                *((unsigned int *)v18 - 4),
                *((unsigned int *)v18 - 3),
                *((int *)v18 - 2));
          }
        }
LABEL_26:
        v17 = v44;
        v14 = v45;
        v8 = v47;
      }
    }
    ++v46;
    v18 += 3;
  }
  while ( v46 < 9 );
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    v31 = (unsigned int *)((char *)&KiMsrFeatureTable + 24 * i);
    v32 = v31[1];
    if ( (v32 & 2) == 0 )
    {
      if ( !HIBYTE(v32) || (v33 = HIBYTE(v32), _bittest((const int *)&v33, *(unsigned __int8 *)(a1 + 141))) )
      {
        if ( (v32 & 8) != 0 )
        {
          v34 = v15;
        }
        else
        {
          if ( (v32 & 0x10) == 0 )
            continue;
          v34 = v16;
        }
        if ( (v34 & *((_QWORD *)v31 + 2)) == *((_QWORD *)v31 + 2) )
        {
          v36 = __readmsr(*v31);
          for ( j = *((_QWORD *)v31 + 1); ; j += 24LL )
          {
            v38 = *(_QWORD *)j;
            if ( !*(_QWORD *)j )
              break;
            v39 = *(_DWORD *)(j + 8);
            if ( (v39 & 2) == 0 )
            {
              if ( !HIBYTE(v39) || (v40 = HIBYTE(v39), _bittest((const int *)&v40, *(unsigned __int8 *)(a1 + 141))) )
              {
                if ( (v38 & v36) != 0 )
                {
                  if ( (v39 & 8) != 0 )
                  {
                    v15 |= *(_QWORD *)(j + 16);
                  }
                  else if ( (v39 & 0x10) != 0 )
                  {
                    v16 |= *(_QWORD *)(j + 16);
                  }
                  if ( (v39 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v42 = 0;
                    if ( (v39 & 8) != 0 )
                    {
                      LOBYTE(v42) = (*(_QWORD *)(j + 16) & KeFeatureBits) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v39 & 0x10) != 0 && (*(_QWORD *)(j + 16) & KeFeatureBits2) == *(_QWORD *)(j + 16) )
                    {
                      continue;
                    }
                    if ( !v42 )
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v31, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                  }
                }
                else
                {
                  if ( (v39 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 36) )
                    {
                      KdInitSystem(0LL, KeLoaderBlock_0);
                      v38 = *(_QWORD *)j;
                    }
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v31, v38, HIDWORD(v38));
                  }
                  if ( (v39 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v41 = 0;
                    if ( (v39 & 8) != 0 )
                    {
                      LOBYTE(v41) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v39 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
LABEL_92:
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v31, v38, HIDWORD(v38));
                    }
                    if ( v41 )
                      goto LABEL_92;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    KeGetPrcb(0);
    result = *(unsigned int *)(a1 + 36);
  }
  *(_DWORD *)(a1 + 1736) = a2;
  *(_QWORD *)(a1 + 25248) |= v15;
  if ( (_DWORD)result )
  {
    if ( v16 != KeFeatureBits2 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, v16, KeFeatureBits2, result);
  }
  else
  {
    KeFeatureBits2 |= v16;
  }
  return result;
}
