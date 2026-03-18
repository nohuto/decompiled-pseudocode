/*
 * XREFs of KiSetProcessorSignature @ 0x140423B28
 * Callers:
 *     KiSetFeatureBits @ 0x140427A44 (KiSetFeatureBits.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, int a2)
{
  unsigned int v13; // r13d
  ULONG_PTR v14; // r12
  ULONG_PTR v15; // r15
  int v16; // r9d
  unsigned int v17; // r10d
  _QWORD *v18; // rsi
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  int v26; // edx
  int v27; // edx
  __int64 i; // r8
  unsigned int *v29; // rsi
  unsigned int v30; // edx
  unsigned int v31; // ecx
  ULONG_PTR v32; // rdx
  unsigned __int64 v33; // r10
  __int64 j; // rbx
  unsigned int v35; // ecx
  unsigned int v36; // r9d
  int v37; // edx
  int v38; // edx
  __int64 result; // rax
  unsigned int v40; // [rsp+30h] [rbp-68h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]
  unsigned __int64 v42; // [rsp+60h] [rbp-38h]

  _RAX = 0x80000000LL;
  __asm { cpuid }
  v40 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v13 = _RAX;
  v41 = __PAIR64__(_RBX, _RAX);
  v42 = __PAIR64__(_RDX, _RCX);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v18 = &unk_1402BFAF0;
  do
  {
    v19 = *((_DWORD *)v18 - 1);
    if ( (v19 & 2) == 0 )
    {
      if ( !HIBYTE(v19) || (v20 = HIBYTE(v19), _bittest((const int *)&v20, *(unsigned __int8 *)(a1 + 141))) )
      {
        _RAX = *((unsigned int *)v18 - 4);
        if ( (_DWORD)_RAX != v16 )
        {
          v16 = *((_DWORD *)v18 - 4);
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > v40) && (unsigned int)_RAX > v13 )
          {
            v41 = 0LL;
            v42 = 0LL;
          }
          else
          {
            __asm { cpuid }
            v41 = __PAIR64__(_RBX, _RAX);
            v42 = __PAIR64__(_RDX, _RCX);
          }
        }
        v26 = 0;
        if ( (*((_DWORD *)&v41 + *((int *)v18 - 2)) & *((_DWORD *)v18 - 3)) != 0
          || (v19 & 8) != 0 && (v14 & *v18) == *v18 )
        {
          goto LABEL_27;
        }
        if ( (v19 & 0x10) != 0 && (v15 & *v18) == *v18 )
          v26 = 1;
        if ( v26 )
        {
LABEL_27:
          if ( (v19 & 8) != 0 )
          {
            v14 |= *v18;
          }
          else if ( (v19 & 0x10) != 0 )
          {
            v15 |= *v18;
          }
          if ( (v19 & 4) != 0 && *(_DWORD *)(a1 + 36) )
          {
            v27 = 0;
            if ( (v19 & 8) != 0 )
            {
              LOBYTE(v27) = (KeFeatureBits & *v18) == *v18;
            }
            else if ( (v19 & 0x10) != 0 && (KeFeatureBits2 & *v18) == *v18 )
            {
              goto LABEL_38;
            }
            if ( !v27 )
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFDuLL,
                *((unsigned int *)v18 - 4),
                *((unsigned int *)v18 - 3),
                *((int *)v18 - 2));
          }
        }
        else
        {
          if ( (v19 & 1) != 0 )
          {
            if ( !*(_DWORD *)(a1 + 36) )
              KdInitSystem(0LL, KeLoaderBlock_0);
            KeBugCheckEx(
              0x5Du,
              0xFFFFFFFFuLL,
              *((unsigned int *)v18 - 4),
              *((unsigned int *)v18 - 3),
              *((int *)v18 - 2));
          }
          if ( (v19 & 4) != 0 && *(_DWORD *)(a1 + 36) )
          {
            if ( (v19 & 8) != 0 )
            {
              LOBYTE(v26) = (KeFeatureBits & *v18) == *v18;
            }
            else if ( (v19 & 0x10) != 0 && (KeFeatureBits2 & *v18) == *v18 )
            {
LABEL_40:
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFEuLL,
                *((unsigned int *)v18 - 4),
                *((unsigned int *)v18 - 3),
                *((int *)v18 - 2));
            }
            if ( v26 )
              goto LABEL_40;
          }
        }
      }
    }
LABEL_38:
    ++v17;
    v18 += 3;
  }
  while ( v17 < 9 );
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    v29 = (unsigned int *)((char *)&KiMsrFeatureTable + 24 * i);
    v41 = (unsigned __int64)v29;
    v30 = v29[1];
    if ( (v30 & 2) == 0 )
    {
      if ( !HIBYTE(v30) || (v31 = HIBYTE(v30), _bittest((const int *)&v31, *(unsigned __int8 *)(a1 + 141))) )
      {
        if ( (v30 & 8) != 0 )
        {
          v32 = v14;
        }
        else
        {
          if ( (v30 & 0x10) == 0 )
            continue;
          v32 = v15;
        }
        if ( (v32 & *((_QWORD *)v29 + 2)) == *((_QWORD *)v29 + 2) )
        {
          v33 = __readmsr(*v29);
          for ( j = *((_QWORD *)v29 + 1); *(_QWORD *)j; j += 24LL )
          {
            v35 = *(_DWORD *)(j + 8);
            if ( (v35 & 2) == 0 )
            {
              if ( !HIBYTE(v35) || (v36 = HIBYTE(v35), _bittest((const int *)&v36, *(unsigned __int8 *)(a1 + 141))) )
              {
                if ( (*(_QWORD *)j & v33) != 0 )
                {
                  if ( (v35 & 8) != 0 )
                  {
                    v14 |= *(_QWORD *)(j + 16);
                  }
                  else if ( (v35 & 0x10) != 0 )
                  {
                    v15 |= *(_QWORD *)(j + 16);
                  }
                  if ( (v35 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v38 = 0;
                    if ( (v35 & 8) != 0 )
                    {
                      LOBYTE(v38) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v35 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
                      continue;
                    }
                    if ( !v38 )
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v29, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                  }
                }
                else
                {
                  if ( (v35 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 36) )
                      KdInitSystem(0LL, KeLoaderBlock_0);
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v29, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                  }
                  if ( (v35 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v37 = 0;
                    if ( (v35 & 8) != 0 )
                    {
                      LOBYTE(v37) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v35 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
LABEL_82:
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v29, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                    }
                    if ( v37 )
                      goto LABEL_82;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 36) )
    KeGetPrcb(0);
  *(_DWORD *)(a1 + 1728) = a2;
  *(_QWORD *)(a1 + 25248) |= v14;
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    if ( v15 != KeFeatureBits2 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, v15, KeFeatureBits2, *(unsigned int *)(a1 + 36));
  }
  else
  {
    KeFeatureBits2 |= v15;
  }
  return result;
}
